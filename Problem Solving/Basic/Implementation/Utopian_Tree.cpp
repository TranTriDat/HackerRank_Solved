#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int Utopian(int n) {
    if( n == 0) return 1;
    if (n == 1) return 2;
    else if (n > 1 && (n % 2 == 0)) return (Utopian(n - 1) + 1);
    return (Utopian(n - 1) * 2);
}

int main() {
    int n;
    cin >> n;
    vector<int>a(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << Utopian(a[i]) << endl;
    }

    system("pause");
    return 0;
}