#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long sos = s.length();
    long long n;
    cin >> n;

    long long a[27] = { 0 };
    for (long long i = 0; i < sos; i++)
    {
        char tmp = s[i];
        long long temp = (long long)tmp;
        a[temp - 97]++;
    }
    
    
    long long div = floor(n / sos);
    long long mod = n  % sos;

    long long count = 0;
    for (long long i = 0; i < mod; i++)
    {
        char tmp = s[i];
        long long temp = (long long)tmp;
        if (temp - 97 == 0) {
            count++;
        }
    }

    long long rs = a[0] * div + count;

    cout << rs << endl;
    
    system("pause");
    return 0;
}