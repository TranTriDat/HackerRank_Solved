#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {   
    int n, m;
    cin>>n>>m;
    vector<int> a, b;
    for (int i=0; i<n; ++i){
        int value;
        cin>>value;
        a.push_back(value);
    }
    for (int i=0; i<m; ++i){
        int value;
        cin>>value;
        b.push_back(value);
    }  
    int maxA = *max_element(a.begin(), a.end());
    int minB = *min_element(b.begin(), b.end());       
    int numBetweens = 0;
    for (int x=maxA; x<=minB; ++x){
        bool cont = true;
        for (int i=0; i<n; ++i){
            if (x % a[i] != 0){
                cont = false;
            }
        }
        if (cont){
            for (int j=0; j<m; ++j){
                if (b[j] % x != 0){
                    cont = false;
                }
            }  
        }       
        if (cont){
            numBetweens += 1;
        }
    }
    cout<<numBetweens;
    return 0;
}