#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int num[100];
        for (int i = 0; i < 2 * n; ++i) {
            cin >> num[i];
        }

        sort(num, num + 2 * n);

        int score = 0;
        for (int i = 0; i < n; ++i) {
            score += num[i * 2];
        }

        cout << score << endl;
    }

    return 0;
}
