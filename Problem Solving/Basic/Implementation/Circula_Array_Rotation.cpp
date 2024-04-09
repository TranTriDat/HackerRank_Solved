#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int>a(n,0);
    vector<int>mq(q);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < q; i++)
    {
        cin >> mq[i];
    }

    for (int i = 0; i < q; i++)
    {
        cout << a[(n-(k%n)+mq[i])%n] << endl;
    }

    system("pause");
    return 0;
}