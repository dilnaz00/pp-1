#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1, n2, n3;
    n1=n/100;
    n2=n/10%10;
    n3=n%10;
    cout<<max(n1,max(n2,n3))<<" "<<min(n1,min(n2,n3));
}