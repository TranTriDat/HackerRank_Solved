#include<iostream>

using namespace std;

int Viral(int n) {
    int sum = 2,link = 2;
    if (n == 1) return 2;
    else {
        for (int i = 2; i <= n; i++)
        {
            int tmp = link * 3;
            link = tmp / 2;
            sum += link;
        }
        return sum;
    }
}

int main() {
    int n;
    cin >> n;
        
    int rs = Viral(n);

    cout << rs << endl;

    system("pause");
    return 0;
}