#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int sum=0,n,a,b,first=0;
        cin>>n;
        cin>>a;
        cin>>b;
        first=(n-1)*min(a,b);
        cout<<first<<" ";
        while(sum+first<(n-1)*max(a,b)){
            sum+=abs(b-a);
            cout<<first+sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}