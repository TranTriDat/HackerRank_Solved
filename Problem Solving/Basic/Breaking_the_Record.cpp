#include<iostream>

using namespace std;

void input(int a[],int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

void best_and_worst(int a[],int n){
    int max = a[0],min = a[0],countb = 0,countw = 0 ;
    for(int i = 0;i<n;i++){
        if(a[i] < min){
            min = a[i];
            countw++;
        } 
        if(a[i] > max){
            max = a[i];
            countb++;
        } 
    }
    cout<<countb<<" "<<countw<<endl;
}

int main(){
    int a[1000],n;
    cin>>n;
    input(a,n);
    best_and_worst(a,n);
    return 0;
}