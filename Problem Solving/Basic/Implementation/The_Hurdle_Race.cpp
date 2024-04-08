#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int rs = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[0] > k) {
            rs = n - k;
            break;
        }
        if (a[i] > k) {
            rs = a[i] - k;
            break;
        }
        else rs = 0;
    }
    cout << abs(rs) << endl;
    system("pause");
    return 0;
}