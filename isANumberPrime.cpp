#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        if (n == 0 || n == 1){
            cout << "not prime" << endl;
        }
        else if(n == 2){
            cout << "prime" << endl;
        }
        else{
            int flag = 0;
            for(int i = 2; i <= n/2; i++){
                if(n%i == 0){
                    flag = 1;
                    cout << "not prime" << endl;
                    break;
                }
            }
            if (flag == 0){
                cout << "prime" << endl;
            }
        }
    }
}
