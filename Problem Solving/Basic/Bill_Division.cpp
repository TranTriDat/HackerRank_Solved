#include<iostream>
#include<vector>
#include<numeric>
#include<cmath>

using namespace std;

int main() {
    int n,k,b;
    cin >> n >> k;

    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> b;

    int sum = accumulate(a.begin(), a.end(), 0) - a[k];
    int rs = sum / 2;
    
    if (rs == b) cout << "Bon Appetit" << endl;
    else cout << abs(b - rs)<<endl;

    system("pause");
    return 0;
}