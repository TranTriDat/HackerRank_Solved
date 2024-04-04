#include <iostream>
#include<cmath>
using namespace std;
void nhap(int a[][100],int &n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
void ss(int a[][100],int n){
    int s1=0,s2=0,s=0,i,j,m=n;
    for(i=0;i<n;i++){
        m=m-1;
        for(j=0;j<n;j++){
            if(i==j) s1+=a[i][j];
            if(j==m) s2+=a[i][j];
        }
    }
    s=abs(s1-s2);
    cout<<s;
}
int main(){
    int a[100][100];
    int n;
    cin>>n;
    nhap(a,n);
    ss(a,n);
    return 0;
}