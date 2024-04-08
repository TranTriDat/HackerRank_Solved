#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

typedef struct {
    int x, y, z;
}Pos;

int main() {
    Pos a[100] ;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    
    for (int i = 0; i < q; i++)
    {    
        string rs = "0";
        if (abs(a[i].x - a[i].z) == abs(a[i].y - a[i].z)) rs = "Mouse C";
        else if (abs(a[i].x - a[i].z) > abs(a[i].y - a[i].z)) rs = "Cat B";
        else rs = "Cat A";
        cout << rs << endl;
    }
    
    system("pause");
    return 0;
}