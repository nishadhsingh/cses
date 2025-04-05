#include "bits/stdc++.h"

using namespace std;

int main(){
    unsigned long long  n ;
    cin >> n;
    unsigned long delta  = 0;
    unsigned long  value = 0;
    for(unsigned long i = 0; i<n ; i++){
        unsigned long t ;
        cin >> t;
        if(i==0){
            value = t;
            continue;
        }
        if(t<value){
            delta = delta + value -t;
        }
        else{
         value = t;
        }
    }
    cout << delta;

}
