#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int a[n][n];
int max=-1e9;
int maxx=-1e9;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> a[i][j];
    }
}
    int l=0;

for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
if(a[i][j]==a[i][j+1]){
    l++;
}
    }
    if(a[i][0]==a[i+1][0]){
        l++;
    }
    
}
if (l==n*n){
    cout << 0;
return 0;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
 if(a[i][j]>max){
        max=a[i][j];
    }  } }

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
 
     if(a[i][j]==max){
        a[i][j]=0;
    }    } }

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     if(a[i][j]>maxx){
        maxx=a[i][j];
    }
    }
    }
    
cout << maxx;
return 0;
}