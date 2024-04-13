#include<iostream>
#include<string>

using namespace std;

void input(char a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void output(char a[][100], int n) {
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if ((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j])
                && (a[i][j] > a[i + 1][j])) {
                a[i][j] = 'X';
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
    char a[100][100];
    cin >> n;
    input(a, n);
    output(a, n);
    return 0;
}