#include<stdio.h>

int main() {
    int a[25];
    int n, k; // k la buoc nhay;
    scanf("%d%d", &n, &k);
    int kq = 100;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
  int i = 0;
    while (n != 0 ) {
         if ((i + k) % n == 0) {
            if (a[0] == 1) {
                kq -= 3;
            }
            else kq--;
            break;
        } 
        if (a[(i+k)%n] == 1) kq = kq - 1 - 2;
        else {
            kq = kq - 1;
        }
        i = i + k;
       
    }
    printf("%d", kq);

    // system("pause");
    return 0;
}