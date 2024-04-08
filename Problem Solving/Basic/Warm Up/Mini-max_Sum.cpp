#include <iostream>
#include<algorithm>>
using namespace std;
int main(){
    int n=5;
    long *a=new long[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
    sort(a,n+a);
	cout<<a[0]+a[1]+a[2]+a[3]<<" "<<a[1]+a[2]+a[3]+a[4];;
    return 0;
}