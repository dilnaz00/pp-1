#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, m;
    cin >> n >> m;

    int marks[n][m];
    int gpa[n];


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> marks[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        gpa[i] = 0;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            gpa[i]=gpa[i] + marks[i][j];

        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

    
        }
    }

   int max = -123123;
    int k = 0;

    for (int i = 0; i < n; i++){
        if(gpa[i]>max){
            max = gpa[i];
            k = i;
        }
    }
    cout << max<<" "<< k;
}