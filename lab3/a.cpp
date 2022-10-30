#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   int max=INT_MIN;
   int min=INT_MAX;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(max<a[i]){
        max=a[i];
    }
    else if(min>a[i]){
        min=a[i];
    }
   }
   for(int i=0;i<n;i++){
    if(a[i]=max){
        a[i]=min;
    }
    cout<<a[i]<<" ";
   }

}
