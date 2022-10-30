#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
if(a<3 && a==12){
    cout<<"Winter";
    
}
else if(a>=3 && a<6){
    cout<<"Spring";
}

else if(a>=6 && a<9){
    cout<<"Summer";
} 
else if(a>=9 && a<12){
    cout<<"Autumn";
}
else{
    cout<<"Error";
}
    return 0;
}