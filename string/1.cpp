#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n][n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = n-1; j>=0; j--) {
            
            if(i==j){
                cout<<1<<" ";
            }
            else if(i<j) {
                cout<<0<<" ";
            }
            else {
                cout<<2<<" ";
            }
        }
        cout<<endl;
    }
    
}