#include <iostream>
#include <stdlib.h>
using namespace std;
string Kangaroo(int x1,int v1,int x2,int v2){
    if ((x1<x2 && v1<=v2)|| (x1>x2 && v1>=v2)) return ("NO");
    else{
        int i=0;
        while (x1-x2+i*(v1-v2)<=0){
            i++;
        }
        if (x1-x2+(i-1)*(v1-v2)==0) return ("YES");
        return ("NO");
    }
    return 0;
}
int main(){
    int x1;
    int x2;
    int v1;
    int v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<Kangaroo(x1,v1,x2,v2)<<endl;
    system("pause");
    return 0;
}