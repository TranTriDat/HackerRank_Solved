#include<iostream>
#include<vector>

using namespace std;

int main() {
    long n,rs = 0;
    long begint = 1;
    long endt = 3;

    cin >> n;
    if (n == 1) rs = 3;
    else if (n == 2) rs =2;
    else if (n == 3) rs =1;
    else {
        
        while (n > endt && n > begint) {
            begint = endt + 1;
            endt = (begint * 2) + 1;
            if (n <= endt && n >= begint) {
                break;
            }
        }

        if (n == endt) rs = 1;
        else rs = 1 + (endt - n);
        
    }
    cout << rs << endl;
    
    system("pause");
    return 0;
}