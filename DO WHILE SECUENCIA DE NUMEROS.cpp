#include<iostream>
using namespace std;
int main ()
{
int s=0,n,sn;
cout<<"SECUENCIA DE NUMEROS"<<endl;
do
{
cout<<"ingrese el  numero entero: ";
cin>>n;
s=s+n;
}while(n!=0);

cout<<"VALOR NUMERICO TOTAL: "<<s;
return 0;
}
