#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a,a+n);
     for(int i=0;i<n;i++){
        if(a[i] !=a[i+1]){
            cnt++;
        }
    }
    int unikai[cnt] [2];
    int k=0;
    for(int i=0;i<cnt;i++){
        if(a[i] !=a[i+1]){
        unikai[k][0]=a[i];
        }
        cout<<unikai[k][0]<<" ";
    }
    for(int i=0;i<n;i++){






    }
}