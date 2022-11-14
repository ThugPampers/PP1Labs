#include <iostream>
using namespace std;
int main(){
    int n,p;
    cin >> n;
int a=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(j+i==n-1){
        cout << a;
    }
    else{
        cout << ".";
    }
    }
    a++;
    cout << endl;
}
return 0;
}