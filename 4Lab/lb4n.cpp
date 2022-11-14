#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c=2;
    bool flag=true;
    int p=0;

do{
    flag=true;
p=0;
for(int i=1;i<=n;i++){
    if(c%i==0){
        p++;
    }
}
    if(p==2){
        flag=true;
    }
    else {
        flag=false;
    }
if(flag==true){
    cout << c << " " << "is" << " " << "prime" << endl;
}
    c++;

} while (c<=n);

return 0;
}