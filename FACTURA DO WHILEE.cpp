#include<iostream>
using namespace std;
int main()
{
	int i=1, n,c,pv,tp,tv=0;
	string p;
	cout<<"    FACTURA DO WHILE "<<endl<<endl;
	cout<<"INGRESAR NUMERO DE CLIENTES: ";cin>>n;
	do
	{
		cout<<"CLIENTE "<<i<<":"<<endl;
		cout<<" INGRESAR PRODUCTO: ";cin>>p;
		cout<<" INGRESAR LA CANTIDAD: ";cin>>c;
		cout<<" INGRESAR PRECIO DE VENTA: ";cin>>pv;
		tp=c*pv;
		cout<<" TOTAL A PAGAR ES:  "<<tp<<" USD"<<endl;
		tv=tv+tp;
		i=i+1;
	}while(i<=n);
	cout<<" TOTAL DE VENTAS ES: "<<tv<<" USD";
	return 0;
}
