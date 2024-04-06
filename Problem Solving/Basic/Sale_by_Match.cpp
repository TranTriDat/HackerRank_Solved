#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>r(101, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        r[a[i]]++;
    }
    int rs = 0;

    for (int i = 1; i <= 100; i++)
    {
        int tmp = r[i] / 2;
        rs += tmp;
    }
    
    cout << rs << endl;
    system("pause");
    return 0;
}