#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,num=0;
    cin>>n;
    int arr[n];
    int max = -999999;
    for (int i = 0; i<n;i++){
        cin>>arr[i];
        if (arr[i]%10 == 7){
            num = num+1;
        }
    }
    cout<<num;
    return 0;
}