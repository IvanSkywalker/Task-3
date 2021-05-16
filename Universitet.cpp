#include<iostream>
using namespace std;
int main()
{
double cena=10000,suma=0;
cout<<"Za godina nomer 1 cenata shte e 10000 dolara."<<endl;
for(int n=2;n<11;n++)
{
cena=(cena*106)/100;
cout<<"Za godina nomer "<<n<<" cenata shte e "<<cena<<" dolara."<<endl;
}
for(int m=11;m<15;m++)
{
suma=suma+cena;
cena=(cena*106)/100;
}
cout<<"Razhodite za obuchenie v produljenie na 4 godini sled desetata shte sa "<<suma<<" dolara."<<endl;
return 0;
}
