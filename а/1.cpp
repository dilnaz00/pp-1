#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a>=93 )|| (a<=727) ||(b>=93) ||(b<=727) ||(c>=93)|| (c<=727)){
        cout<<max(a,max(b,c));
    }
    else  {
        cout<<"Error";
    }
    return 0;
}
