#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int c,d;
     long long int max=INT_MIN;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<a[i][j]){
                max=a[i][j];
                c=i;
                d=j;
            }
           
        }
    }
 cout<<max<<" "<<c<<" "<<d;
}