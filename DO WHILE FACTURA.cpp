#include<iostream>
using namespace std;
int main ()
{
int tv=0,i=1,n,v,pv,tp,c;
string p;
cout<<"FACTURA DE COMPRA"<<endl;
cout<<"ingrese el numero de personas: ";
cin>>n;
do
{
cout<<"ingrese el producto: ";
cin>>p;
cout<<"ingrese la cantidad de productos: ";
cin>>c;
cout<<"ingrese el precio por producto: ";
cin>>pv;
tp=c*pv;
cout<<"TOTAL A PAGAR: "<<tp<<"USD: "<<endl;
tv=tv+tp;
i=i=+1;
}
while(i<=n);
cout<<"TOTAL DE VENTA DEL DIA: "<<tv<<"USD: ";
return 0;
}
