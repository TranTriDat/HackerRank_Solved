#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n+1);

    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        int y = a[a[i]];
        cout << y << endl;
    }

    system("pause");
    return 0;
}