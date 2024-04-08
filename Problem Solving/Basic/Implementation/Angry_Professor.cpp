#include<iostream>
#include<vector>
#include<cstring>
#include<numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n) {
        int lim=0,count=0;
        cin >> count >> lim;
        vector<int>a(count);
        for (int i = 0; i < count; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < count; i++)
        {
            if (a[i] <= 0) sum++;
        }
        string rs ;

        if (sum < lim) rs = "YES";
        else rs = "NO";
    
        cout << rs << endl;

        n--;
    }

    system("pause");
    return 0;
}