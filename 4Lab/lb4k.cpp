#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int r,c;
    c=0;
    r=0;
    int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> a[i][j];
    }
}


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
c+=a[i][j];
    }
    cout << "The sum of row number" << " " << i+1 << " " << "is" << " " << c << endl;
    c=0;
}


for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        r+=a[i][j];
    }
    cout << "The sum of column number" << " " << j+1 << " " << "is" << " " << r << endl;
    r=0;
}


return 0;
}