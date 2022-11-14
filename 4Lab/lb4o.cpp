#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    int max=-1e9;
    int c=0;
    int v=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> a[i][j];
        if(i==j){
        if(a[i][j]>max){
            max=a[i][j];
            c=i;
            v=j;
        }
        }
    }
}
cout << "Maximum element is: " << max << " with coordinates: " << c+1 << ";" << v+1;

return 0;
}