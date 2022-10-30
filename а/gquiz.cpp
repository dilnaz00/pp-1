#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i; i<n;i++){
        cin>>a[n];
    }
    for(int i; i<n;i++){
        if(max<a[i]){
            max=i;
            cout<<max;
        }
    }}