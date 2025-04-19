#include "bits/stdc++.h"

using namespace std;

int main(){
   unsigned int n;
    cin >> n ;
    unsigned long long expected =(n*(n+1))/2;
    for(unsigned long long i =0;i<n-1;i++){
        unsigned long input = 0;
        cin >> input;
        expected -= input;
    }
    cout << expected;
}
