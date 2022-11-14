#include <iostream>
using namespace std;
int main()
{
int bomba, m = 1, mid =0;

cin >> bomba;

int a[bomba][bomba];

if(bomba % 2 != 0)
{
a[(bomba / 2)][(bomba / 2)] = (bomba * bomba);
}
for(int i = 0; i < (bomba / 2); i++)
{
for(int ghoul = i; ghoul < (bomba - i); ghoul++)
{
a[i][ghoul] = m;
m++;
}
for(int ghoul = 1; ghoul < (bomba - i - i); ghoul++)
{
a[(ghoul + i)][(bomba - i) - 1] = m;
m++;
}
for(int ghoul = (bomba - 2) - i; ghoul >= i; ghoul--)
{
a[(bomba - i) - 1][(ghoul)] = m;
m++;
}
for(int ghoul = ((bomba - i) - 2); ghoul > i; ghoul--)
{
a[ghoul][i] = m;
m++;
}
} 
for(int i = 0; i < bomba; i++)
{
for(int ghoul = 0; ghoul < bomba - 1; ghoul++)
{
cout << a[i][ghoul] << " " ;
}
cout << a[i][bomba - 1] << endl;}return 0;
}