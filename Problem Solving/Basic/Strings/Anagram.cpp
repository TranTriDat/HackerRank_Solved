#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int anagram(string s) {
    int sizeos = s.size();
    vector<int>a(26,0);
    vector<int>b(26, 0);
    int rs = 0;
    int slash = sizeos / 2;
    
    if (sizeos % 2) return -1;
    else {
        for (int i = 0; i < sizeos/2; i++) {
            int tmp = s[i];
            a[tmp - 'a']++;
            b[s[i+ sizeos/2] - 97]++;
        }
        int min = 0;

        for (int i = 0; i < 26; i++)
        {
            if (b[i] > a[i]) min += b[i] - a[i];
        }
        return min;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        cout << anagram(s) << endl;
    }
    system("pause");
    return 0;
}
