#include<iostream>
using namespace std;
void input(int a[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void change(int a[],int n){
	for(int i = 0;i < n;i++){
		if(a[i] < 38){
			a[i] = a[i];
		}
		else if(a[i] == 38 || a[i] == 39){
			a[i] = 40;
		}
		else if(a[i] == 43 || a[i] == 44){
			a[i] = 45;
		}
		else if(a[i] == 48 || a[i] == 49){
			a[i] = 50;
		}
		else if(a[i] == 53 || a[i] == 54){
			a[i] = 55;
		}
		else if(a[i] == 58 || a[i] == 59){
			a[i] = 60;
		}
		else if(a[i] == 63 || a[i] == 64){
			a[i] = 65;
		}
		else if(a[i] == 68 || a[i] == 69){
			a[i] = 70;
		}
		else if(a[i] == 73 || a[i] == 74){
			a[i] = 75;
		}
		else if(a[i] == 78 || a[i] == 79){
			a[i] = 80;
		}
		else if(a[i] == 83 || a[i] == 84){
			a[i] = 85;
		}
		else if(a[i] == 88 || a[i] == 89){
			a[i] = 90;
		}
		else if(a[i] == 93 || a[i] == 94){
			a[i] = 95;
		}
		else if(a[i] == 98 || a[i] == 99){
			a[i] = 100;
		}
		else a[i] = a[i];
	}
}
void output(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
int main(){
	int a[100];
	int n;
	input(a,n);
	change(a,n);
	output(a,n);
	return 0;
}