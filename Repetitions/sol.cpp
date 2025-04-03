#include "bits/stdc++.h"

using namespace std;

int main(){

    string n;
    cin >> n;

    unsigned long long length = n.length();

    char charArray[length+1];

    strcpy(charArray,n.c_str());

    // logic here
   unsigned long sum = 0;
    for(unsigned long i = 0 , k = 0;i<length;i++){

        char head = charArray[i] ;
        if(i == 0){
            continue;
        }
        

        if(head==charArray[i-1]){
            if(i-k>sum){
                sum = i-k;
            }
        }
        else{
            k = i;
        }
    }


    cout << sum+1;
    }

    



