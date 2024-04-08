#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    vector<int>al(26, 0);
    string s;
    
    for (int i = 0; i < 26; i++)
    {
        cin >> al[i];
    }

    cin >> s;

    int n = s.size();
    vector<int>rs(n, 0);

    for (int i = 0; i < n; i++)
    {
        rs[i] = (al[s[i] - 97]);
    }

    int m = *max_element(rs.begin(),rs.end());
    int rec = 1;
    rec = m * n;
    cout << rec << endl;
    system("pause");
    return 0;
}