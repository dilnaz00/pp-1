#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=1;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        
            
            if(i%2==0){      
                a[i][j]=c;
                c++;
            }
            else{
                a[i][j]=c;
                c--;
            }
            cout<<a[i][j]<<" ";
        }
        if(i % 2 == 0) c += 3;
        else c += 5;
        cout<<endl;
    }
}