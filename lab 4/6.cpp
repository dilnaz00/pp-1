#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m,d;
  cin>>n;
  int a[n][m];
  long long int sum=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      a[i][j]=d;
    if(i%2!=0){
      d++;
    }
    else if(i%2==0){
      d--;
    }
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
