#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
#include<numeric>
#include<algorithm>

using namespace std;

int reverseNum(int n) {
    int rs = 0,tmp;
    while (n != 0) {
        tmp = n % 10;
        rs = rs * 10 + tmp;
        n /= 10;
    }
    return rs;
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;
    int count = j - i;
    vector<int>a(count + 1);
    vector<float>rs(count + 1, 0);

    for (int v = 0; v <= count; v++)
    {
        int tmp = j- v;
        a[v] = tmp;
    }

    for (int v = 0; v <= count; v++)
    {
        int tmp = reverseNum(a[v]);
        float div = (float)(abs(a[v] - tmp)) / k;
        rs[v] = div;
    }

    int countrs = 0;

    for (int v = 0; v <= count; v++)
    {
        if (rs[v] == int(rs[v])) countrs++;
    }

    cout << countrs << endl;

    system("pause");
    return 0;
}