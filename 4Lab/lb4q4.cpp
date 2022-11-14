#include <iostream>
using namespace std;
int main(){
int n,m;
cin >> n;
m=2*n-1;
string a[n][m];
string b = ".";
string c = "*";

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        a[i][j]=b;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    if(j==n-1){
a[i][j]=c;
    }
}
    for(int i=1;i<n;i++){
    for(int j=0;j<n-1;j++){
if(i+j>=n-1){
    a[i][j]=c;
}
    }
    }


    for(int i=1;i<n;i++){
    for(int j=n;j<m;j++){
if(i+n-1>=j){
a[i][j]=c;
}


    }
    }

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << a[i][j];
    }
    cout << endl;
}
}