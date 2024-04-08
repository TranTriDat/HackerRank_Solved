#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<cmath>

using namespace std;

int main() {
    int b, n, m;
    cin >> b >> n >> m;
    vector<int>a1;
    vector<int>a2;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a1.push_back(tmp);
    }

    for (int j = 0; j < m; j++) {
        int temp;
        cin >> temp;
        a2.push_back(temp);
    }
    
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int maximum = 0;
    int i = 0,j = a2.size() - 1;
    while (i < n && j >= 0) {
        int sum = a1[i] + a2[j];
        if (sum > b) {
            j--;
        }
        else {
            maximum = max(sum,maximum);
            i++;
        }
    }

    maximum != 0 ? cout << maximum << endl : cout << -1 << endl;

    system("pause");
    return 0;
}