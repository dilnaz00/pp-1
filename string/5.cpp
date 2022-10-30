#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum[n];
    long long int mx=INT_MIN;
    int d;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];

        }
    }

    for(int i=0;i<n;i++){
           sum[i]=0;   
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i]=sum[i]+a[i][j];
            }
            if(mx<sum[i]){
                mx=sum[i];
                d=i;
            }

}
cout<<d;
        }
    
    


