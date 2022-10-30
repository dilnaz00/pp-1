#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,c,d;
    cin>>n;
   int a[n][n];
   int max=-1000000;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
        if(max<a[i][j]){
            max=a[i][j];
        }
        c=i+1;
        d=j+1;
        cout<<c<<" "<<d;
    }
   }

}
