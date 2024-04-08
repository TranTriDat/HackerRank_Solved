#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<functional>

using namespace std;

int OneAndZero(vector<int> a) {
    int n = a.size();
    vector<int>tmp(100, 0);
    for (int i = 0; i < n; i++)
    {
        tmp[a[i]]++;
    }

    int z = 0;
    for (int i = 2; i < 100; i++)
    {
        z = max(z, tmp[i] + tmp[i - 1]);
    }
    return z;
}

int main() {
    int n;
    cin >> n;
    vector<int>p(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    cout << OneAndZero(p) << endl;

    system("pause");
    return 0;
}