#include <stdio.h>

void nhap(int a[],int &n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void xuli(int a[],int n){
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) s1++;
        else if(a[i]<0) s2++;
        else if(a[i]==0) s3++;
    }
    float a1=(float)s1/n,a2=(float)s2/n,a3=(float)s3/n;
    printf("%f \n%f \n%f",a1,a2,a3);
}
int main(){
    int a[1000],n;
    scanf("%d",&n);
    nhap(a,n);
    xuli(a,n);
    return 0;
}