#include<iostream>

using namespace std;

int main() {
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    int fine = 0;
    
    if (y1 > y2) fine = 10000;
    else if(y1<y2) fine=0;
    else {
        if (m1 > m2) {
            if (y1 == y2) {
                fine = (m1 - m2) * 500;
            }
            else fine = 0;
        }
        else {
            if (d1 > d2) {
                if (m1 == m2) {
                    fine = (d1 - d2) * 15;
                }
                else fine = 0;
            }
            else fine = 0;
        }
    }

    cout << fine << endl;

    system("pause");
    return 0;
}