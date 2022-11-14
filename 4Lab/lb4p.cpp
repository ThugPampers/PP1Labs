#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
int a[n][n];
int s=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> a[i][j];
        if(i+j==n-1){
            s+=a[i][j];
        }
        }
    }
cout << s;

    return 0;
}