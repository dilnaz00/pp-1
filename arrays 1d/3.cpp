#include <iostream>
using namespace std;
 int main() {
int n;
cin>>n;
int a[n];
int sum=0;
for(int i;i<n;i++){
    cin>>a[i];
}
for(int i;i<n;i++){
    if(a[i]==0) {
        a[i]=sum;
        sum++;
    }
}
   if(sum<=n/2){
        sum=sum;
    }
    else {
        sum=n-sum;
    }
    cout<<sum;
 }
 