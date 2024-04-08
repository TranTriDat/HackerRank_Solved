#include <iostream>
using namespace std;
void nhap(long a[],long &n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void sum(long a[],long n){
    long s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    cout<<s;
}
int main(){
    long a[1000];
    long n;
    cin>>n;
    nhap(a,n);
    sum(a,n);
    return 0;
}