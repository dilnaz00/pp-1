#include<iostream>

#include<algorithm>
using namespace std;




int main(){

    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n;i++){

        cin >> a[i];

    }

    sort(a , a +n);

    // sorted array 

    int cnt = 0;

    for(int i = 0; i < n;i++){

        if(a[i] != a[i+1]){

            cnt++;

        }

    }
     int no_dup[cnt][2];

    // массив no_dup[cnt][0] это уникальные элементы ,

    // no_dup[cnt][1] -счетчик  сколько их в ориг массиве 

    int k = 0;

    for(int i = 0; i < n;i++){

        if(a[i] != a[i+1]){

            no_dup[k][0] = a[i];

            no_dup[k][1] = 0;

    
            k++;

        }

    }

    for(int i = 0;i < n;i++){

        for(int j = 0; j < cnt;j++){

            if(no_dup[j][0] == a[i]){

                no_dup[j][1]++;

            }

        }

    }
}