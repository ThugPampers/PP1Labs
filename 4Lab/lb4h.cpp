#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int s=0;
    int ss=0;
    int sss=1;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> a[i][j];
    }
}
for(int j=0;j<m;j++){
    ss+=a[0][j];
}

for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
        s+=a[i][j];
    }
    if(s<ss){
    ss=s;
sss =i+1;
} 
}
cout << sss; 
return 0;
}