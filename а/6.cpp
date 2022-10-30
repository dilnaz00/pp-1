#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j+=2){
            a[i][j]*=2;
            cout<<a[i][j]<<' ';       }
    
    cout<<'\n';}
}