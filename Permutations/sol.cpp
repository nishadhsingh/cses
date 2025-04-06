
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }

    if(n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    unsigned int arr[n];
    unsigned int idx = 0;

    // Even numbers first
    for(unsigned int i = 2; i <= n; i += 2) {
        arr[idx++] = i;
    }
    // Odd numbers next
    for(unsigned int i = 1; i <= n; i += 2) {
        arr[idx++] = i;
    }

    for(unsigned int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

