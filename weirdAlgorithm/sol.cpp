#include "bits/stdc++.h"

using namespace std;

int main(){
    unsigned long a;
    cin >> a;
    while(a!=1){
        if(a%2==0){
            cout << a <<" ";
            a /=2 ;
        }
        else{
            cout << a <<" ";
            a *=3;
            a +=1;
        }
    }
    cout << a;
}


