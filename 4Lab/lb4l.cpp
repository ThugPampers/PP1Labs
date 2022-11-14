#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    int min=1e9;
    int s=0;

    int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> a[i][j];
    }
}
cout << "coordinates of min elements: " << endl;

for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        if(a[i][j]<min){
            min=a[i][j];
        }
   }
    for(int i=0;i<n;i++){
        if(a[i][j]==min){
            cout << i+1 << ";" << j+1 << endl;
            break;
        }
    } 
            s+=min;

        min=1e9;

}
cout << endl << "Their sum:" << endl << s;
return 0;
}