#include<iostream>
using namespace std;
int main()
{
int x,a,b;
cout<<"Molq vuvedete chislo ot 5 do 15: ";
cin>>x;
if(x<5|x>15){
cout<<"Molq vuvedete drugo chislo, koeto da e mejdu 5 i 15!";
}
else{
for(a=0;a<x;a=a+1){
    for(int n=0;n<a;n=n+1){
    cout<<" ";
    }
    for(int m=x;m>a;m=m-1){
    cout<<"*";
    }
    cout<<" "<<endl;
}
}
return 0;
}
