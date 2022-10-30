#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,l;
cin>>n>>m>>l;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[n][m];

    }
}
int cnt=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]==l){
            cnt++;
            break;
        }
    }
}
   cout<<cnt;     
        
}
