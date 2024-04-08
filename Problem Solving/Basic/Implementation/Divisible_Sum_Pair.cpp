#include<iostream>
#include<vector>

using namespace std;

void Divisible(vector<int>a, int n,int k) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((a[i] + a[j]) % k == 0) count++;
        }
    }
    cout << count << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Divisible(a, n, k);

    system("pause");
    return 0;
}