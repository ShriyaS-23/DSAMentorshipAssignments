#include <iostream>
using namespace std;

int main(){
    int mks;
    cin >> mks;

    if (mks > 90){
        cout << "Excellent";
    }else if(mks > 80){
        cout << " Good";
    }else if(mks > 70){
        cout << "Fair";
    }
    else if (mks > 60){
        cout << "Meets Expectations";
    }
    else{
        cout << "Below Par";
    }
}
