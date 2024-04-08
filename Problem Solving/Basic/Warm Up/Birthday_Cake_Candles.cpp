#include <iostream>
#include<algorithm>
using namespace std;
void nhap(int a[],int &n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int birthdayCakeCandles(int a[],int n) {
    sort(a,a+n);
	int max=0,dem=1;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			dem++;
				if(dem>max){
					max=dem;
				}	
		}
		else{
           dem=1;
		}
	}
	return max;
}
int main(){
    int a[100000],n;
    cin>>n;
    nhap(a,n);
    cout<<birthdayCakeCandles(a,n);
    return 0;
}