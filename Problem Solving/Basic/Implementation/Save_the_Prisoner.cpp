#include<iostream>
#include<cmath>

using namespace std;

int savePrisoner(long long n,long long m,long long s) {
    int rs = 0;
    rs = ((m + s - 1) % n == 0) ? n : (m + s - 1) % n;
    return rs;
}

int main() {
    int t;
    long long n, m, s;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> s;
        int rs = savePrisoner(n, m, s);
        cout << rs << endl;
    }
        
    system("pause");
    return 0;
}