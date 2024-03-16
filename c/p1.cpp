#include <iostream>
#include <vector>
using namespace std;

void checkSum(int a[], int n, int t) {
    bool table[n + 1][t + 1];
    for (int j = 1; j <= t; j++) {
        table[0][j] = false;
    }
    for (int i = 0; i <= n; i++) {
        table[i][0] = true;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= t; j++) {
            if (j < a[i - 1]) {
                table[i][j] = table[i - 1][j];
            } else {
                table[i][j] = table[i - 1][j] || table[i - 1][j - a[i - 1]];
            }
        }
    }
    if (!table[n][t]) {
        cout << "Not possible" << endl;
    } else {
        vector<int> ans;
        int i = n, j = t;
        while (i > 0 && j > 0) {
            if (table[i][j] && !table[i - 1][j]) {
                ans.push_back(a[i - 1]);
                j -= a[i - 1];
            }
            i--;
        }

        for (int k = ans.size() - 1; k >= 0; k--) {
            cout << ans[k] << " ";
        }
    }
}

int main() {
    int n, t;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the target sum: ";
    cin >> t;

    checkSum(a, n, t);
    return 0;
}
