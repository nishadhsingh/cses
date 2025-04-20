#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<int, int, int>> moves(n);
    for (int i = 0; i < n; ++i) {
        cin >> get<0>(moves[i]) >> get<1>(moves[i]) >> get<2>(moves[i]);
    }

    array<int, 3> score = {0, 0, 0};

    for (int start = 0; start < 3; ++start) {
        int pos = start;
        for (const auto& [a, b, guess] : moves) {
            if (pos == a)
                pos = b;
            else if (pos == b)
                pos = a;

            if (pos == guess)
                score[start]++;
        }
    }

    cout << *max_element(score.begin(), score.end()) << "\n";
    return 0;
}

