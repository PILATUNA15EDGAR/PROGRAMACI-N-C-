#include<iostream>
using namespace std;
int main ()
{
int tv=0,n,i=0,v,pv,tp,c;
string p;
cout<<"FACTURA DE COMPRA"<<endl;
cout<<"ingrese el numero de personas: ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"ingrese el producto: ";
cin>>p;
cout<<"ingrese la cantidad de productos: ";
cin>>c;
cout<<"ingrese el precio por producto: ";
cin>>pv;
tp=c*pv;
cout<<"TOTAL A PAGAR: "<<tp<<"USD: "<<endl;
}
tv=tv+tp;
cout<<"TOTAL DE VENTA DEL DIA: "<<tv<<"USD: "<<endl;
return 0;
}






