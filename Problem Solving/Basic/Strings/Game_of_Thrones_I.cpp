#include<iostream>
#include<string>

using namespace std;

string gameOfThrones(string s) {
    int a[26] = { 0 };
    int rso = 0, rse = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char tmp = s[i];
        int temp = (int)s[i];
        a[temp - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 0) rse++;
        else rso++;
    }

    if (rse > 0 && rso == 0) return "YES";
    if (rse > 0 && rso > 1) return "NO";
    if (rse > 0 && rso == 1) return "YES";
    
    return "NO";
}

int main() {
    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    cout << result << endl;

    return 0;
}