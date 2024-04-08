#include <iostream>
using namespace std;
void nhap(int a[],int &n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void sum(int a[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    cout<<s;
}
int main(){
    int a[10000];
    int n;
    cin>>n;
    nhap(a,n);
    sum(a,n);
    return 0;
}