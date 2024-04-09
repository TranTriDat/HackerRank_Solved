#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

string apAnddel(string a, string b, int n) {
    //if (a == b) return "Yes";

    int count = 0;
    int lena = a.size(), lenb = b.size();
    int sizeos = min(lena,lenb);
    
    for (int i = 0; i < sizeos; i++)
    {
        if (a[i] == b[i]) count++;
        else break;
    }

    int s = lena + lenb;
    int d = s - (2 * count);
    
    if ((n >= d) && ((n - d) % 2 == 0)) return "Yes";
    else if (n >= s) return "Yes";
    return "No";
}

int main() {
    string a, b;
    int n;
    cin >> a >> b >> n;
    cout << apAnddel(a, b, n);
    system("pause");
    return 0;
}