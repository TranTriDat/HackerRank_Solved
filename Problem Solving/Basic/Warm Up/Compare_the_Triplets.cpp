#include <iostream>
using namespace std;
void nhap(int a[]){
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
}
void ss(int a[],int b[]){
    int sa=0,sb=0;
    for(int i=0;i<3;i++){
        if(a[i] > b[i]) sa++;
        else if(a[i] < b[i]) sb++;
    }
    cout<<sa<<" "<<sb;
}
int main(){
    int a[3],b[3];
    nhap(a);
    nhap(b);
    ss(a,b);
    return 0;
}