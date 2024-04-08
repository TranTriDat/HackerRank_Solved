#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    vector<int>a;
    int d, m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> d >> m;
    int lena = a.size();
    int count = 0;
    for (int i = 0; i < a.size() - m + 1; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            s += a[i + j];
        }
        if (s == d) count++;
    }

    cout << count << endl;
    system("pause");
    return 0;
}