#include<iostream>
using namespace std;
long s,t,a,b,m,n,apples[1000000],oranges[1000000];
void check(){
	int countapp = 0, countor = 0;
	for(int i=0;i < m ; i++){
		int tmp = apples[i] + a;
		if(tmp >= s &&  tmp <= t) {
			countapp++;
		} 
	}
	for(int i = 0;i < n ; i++){
		int temp = oranges[i] + b;
		if(temp >= s &&  temp <= t) {
			countor++;
		} 
	}
	cout<<countapp<<endl<<countor<<endl;
}
int main(){
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	for(int i = 0;i < m; i++){
		cin>>apples[i];
	}
	for(int i = 0;i < n; i++){
		cin>>oranges[i];
	}
	check();
	return 0;
}