#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n+1,0);
    vector<int> arr(101);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        arr[a[i]]+=1;
    }

    int max = *max_element(arr.begin(),arr.end());
    
    cout << n-max << endl;

    system("pause");
    return 0;
}