#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>rs(n, 0);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int tmp = (int)(floor(sqrt(b))) - (int)(ceil(sqrt(a)))+1;
        rs[i] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << rs[i] << endl;
    }
    system("pause");
    return 0;
}