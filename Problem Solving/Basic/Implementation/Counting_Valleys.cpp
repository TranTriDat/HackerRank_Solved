#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int rs = 0;
    int deep = 0;
    
    for (int i = 0; i < n; i++) {
        char str;
        cin >> str;
        str == 'U' ? deep++ : deep--;
        deep == 0 && str == 'U' ? rs++ : rs;
    }

    cout << rs << endl;
    system("pause");
    return 0;
}