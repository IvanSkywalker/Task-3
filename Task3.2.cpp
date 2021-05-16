#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"Molq vuvedete chislo ot 5 do 15: ";
cin>>x;
if(x<5|x>15){
cout<<"Molq vuvedete drugo chislo, koeto da e mejdu 5 i 15!";
}
else{
for(x;x>0;x=x-1){
    for(int a=x;a>0;a=a-1){
    cout<<a<<" ";
    }
    for(int b=2;b<x+1;b=b+1){
    cout<<b<<" ";
    }
    cout<<" "<<endl;
}
}
return 0;
}
