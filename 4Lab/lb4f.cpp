#include <iostream>
using namespace std;
int main(){
    int n,p,l;
    cin >> n;
    int a[n][n];
int max=-1e9;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]>max){
        max=a[i][j];
       p=i+1;
       l=j+1;
    }
    }
}
cout << p << " " << l;
    return 0;
}