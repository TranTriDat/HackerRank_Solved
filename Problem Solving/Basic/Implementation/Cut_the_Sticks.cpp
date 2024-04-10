#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = n;
    vector<int>rs(n,0);

    for (int i = 0; i < n; i++)
    {
        cin >> rs[i];
    }

    sort(rs.begin(), rs.end());
    int sor = n;
    int tmp = 1;
    cout << n << endl;
    for (int i = 0; i < n-1; i++)
    {
        if (rs[i] == rs[i + 1]) {
            tmp++;
        }

        if (rs[i] != rs[i + 1]) {
            if (tmp == 1) {
                sor -= 1;
                cout << sor << endl;
            }

            else if (tmp > 1) {
                sor -= tmp;
                cout << sor << endl;
                tmp = 1;
            }
        }

        if (tmp == n) {
            break;
        }
    }

    system("pause");
    return 0;
}