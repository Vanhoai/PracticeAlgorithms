#include <iostream>
using namespace std;

/**
input
3

output:
010
101

*/

int n, ok, X[10];

void init() {
    for (int i = 1; i <= n; i++)
        X[i] = 0;
}

void gen() {
    int i = n;
    while (i >= 1 && X[i] == 1) {
        X[i] = 0;
        i--;
    }

    if (i == 0)
        ok = 0;
    else
        X[i] = 1;
}

bool check() {
    for (int i = 1; i < n; i++) {
        if (X[i] == X[i + 1])
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int TC;
    cin >> TC;
    while (TC--) {
        cin >> n;
        init();

        ok = 1;
        while (ok) {
            if (check()) {
                for (int i = 1; i <= n; i++)
                    cout << X[i];

                cout << " ";
            }

            gen();
        }

        cout << endl;
    }

    return 0;
}
