#include<iostream>
#include<string>
#include<vector>

using namespace std;

string pangrams(string s) {
    vector<int>a(26,0);
    int sum = 0,tmp=0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') tmp = s[i] - 'A';
        if (s[i] >= 'a' && s[i] <= 'z') tmp = s[i]- 'a';    
        a[tmp] = 1;
    }

    for (int i = 0; i < 26; i++)
    {    
        sum += a[i];
    }
    return sum == 26 ? "pangram":"not pangram";
}

int main()
{
    string s;
    getline(cin, s);
    
    string result = pangrams(s);
    cout << result << endl;
    system("pause");
    return 0;
}