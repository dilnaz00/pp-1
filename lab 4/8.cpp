#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,max = 0;
    cin >> n>>m;
    int arr[n][m];
    long long int min = 1*10e9;
    for(int i = 0;i < n;i++){
        for(int j=0;j<m; j++){
        cin >> arr[i][j];
       if(arr[i][j] > max){
            max = arr[i][j];
            
        }
        if(arr[i] [j]< min){
            min = arr[i][j];
             
        }
    }
    }
    for(int i = 0;i < n;i++){    
        for(int j=0;j<m; j++){

        
        if(arr[i][j] == max){
            arr[i][j] = min;
            
        }
        cout << arr[i][j] << " ";
    }    
    cout<<endl;
    }
}
