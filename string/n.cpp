#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    
    getline(cin , s);
    for(auto c : s) {
        if(c>='0' && c<='9'){
            cout<<c<<" ";
        }
    }
}