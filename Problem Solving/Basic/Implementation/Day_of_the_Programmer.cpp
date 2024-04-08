#include<iostream>
#include<string>
#include<vector>
#include<numeric>

using namespace std;

vector<int>a(8, (31, 28, 31, 30, 31, 30, 31, 31));
vector<int>b(8, (31, 29, 31, 30, 31, 30, 31, 31));

int isLeapYear(int n) {
    if ( ((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) return 1;
    return 0;
}

void DayofPro(int n) {
    int rs = 0;
    int sum1 = 0;
    if (n == 1700) cout << "12.09.1700"<<endl;
    if (n == 1800) cout << "12.09.1800" << endl;
    if (n == 1900) cout << "12.09.1900" << endl;
    if (n == 1918) cout << "26.09.1918" << endl;
    
    else if (isLeapYear(n) == 1 && n != 1700 && n != 1800 && n != 1900 && n != 1918) {
        int sum = accumulate(b.begin(),b.end(), -4 );
        rs = 256 - sum;
        cout << rs << "." << "09" << "." << n << endl;
    }
    
    else if (isLeapYear(n) == 0 && n != 1700 && n != 1800 && n != 1900 && n != 1918) {
        sum1 = accumulate(a.begin(),a.end() , -5);
        rs = 256 - sum1;
        cout << rs << "." << "09" << "." << n << endl;
    }
}

int main() {
    int n;
    cin >> n;
    DayofPro(n);
    system("pause");
    return 0;
}