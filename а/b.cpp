#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long  int bus=0;
    cin>>n;
while(n>0){
    if(bus%7!=0 && bus%2==0){
        n=n-4;
    }
    else if(bus%7!=0 && bus%2!=0){
        n=n+3;
    }
    bus++;
}
cout<<bus;
}