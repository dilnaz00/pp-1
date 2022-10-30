#include <iostream>

using namespace std;
int main(){
int a,b,c,x,y,z;
cin>>a>>b>>c;

if (a > b && b > c) {
    cout << a << ' '<<b<<' '<<c;
}
else if(b > c && c > a){
cout<<b<<' '<<c<<' '<<a;
}
else if(c>a && a>b){
    cout<<c<<' '<<a<<' '<<b;
}
    return 0;
}