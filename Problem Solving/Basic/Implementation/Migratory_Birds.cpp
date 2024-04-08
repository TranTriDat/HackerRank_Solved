#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main() {
    int n;
    vector<int>a(6, 0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    int m = *max_element(a.begin(), a.end());
    vector<int>rs;

    for (int i = 1; i <= 5; i++)
    {
        if (a[i] == m) rs.push_back(i);

    }

    sort(rs.begin(), rs.end());
    cout << rs[0] << endl;

    system("pause");
    return 0;
}