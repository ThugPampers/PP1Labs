#include <iostream>
using namespace std;

int main(){
// можно через fpr
int n;
cin >> n;
string a[n][n];
for( int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      //  a[i][j] = "[*]";
      cout << "[*]";
    }
    cout << endl;
}
/*for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout << a[i][j];
    }
    cout << endl;
}*/
return 0;
}