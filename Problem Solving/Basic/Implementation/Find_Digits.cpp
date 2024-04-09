#include<iostream>
#include<vector>

using namespace std;

int findD(int n) {
    int temp = n;
    vector<int>a;
    while (n != 0) {
        int tmp = n % 10;
        a.push_back(tmp);
        n /= 10;
    }

    int soa = a.size();
    int count = 0;
    for (int i = 0; i < soa; i++)
    {
        if (a[i] == 0) {
            continue;
        }
        if (temp % a[i] == 0 && a[i] != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int>rs(n,0);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        int rtmp = findD(tmp);
        rs[i] = rtmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << rs[i] << endl;
    }

    system("pause");
    return 0;
}