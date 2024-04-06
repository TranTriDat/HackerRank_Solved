#include<iostream>
#include<algorithm>

using namespace std;


int main() {
    int n, p;
    cin >> n >> p;

    int rs = min(p / 2, n / 2 - p / 2);
    cout << rs;
    system("pause");
    return 0;
}