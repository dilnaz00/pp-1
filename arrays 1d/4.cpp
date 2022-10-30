#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
for(int x = 1; x <= 14; x++)
    if(n==(int)pow(2,x)){
        cout<<"YES";
        return 0;
    }

cout << "NO";

}