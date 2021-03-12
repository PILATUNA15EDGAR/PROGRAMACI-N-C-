#include<iostream>
using namespace std;
   int main ()
{
	double k,tb,cv,cp,d;
	int  nv;
	char t;
	cout<< "PRESUPUESTO DEL VIAJE"<<endl;
	cout<<"ingrese el numero de personas"<<endl;
	cin>>nv;
	cout<<"ingrese el numero de kilometros"<<endl;
	cin>>k;
	cout<<"BUS TIPO A: "<<tb<<endl;
	cout<<"BUS TIPO B: "<<tb<<endl;
	cout<<"BUS TIPO C: "<<tb<<endl;
	cout<<"SELECCIONE EL TIPO DE BUS: ";cin>>t;

	if(t=='A' or t=='a')
	   d=2.0;
	else if(t=='B' or t=='b')
	      d=2.5;
	else if(t=='C' or t=='c')
	       d=3.0;
	
	if(nv<20)
{
	cv=20*d*k;
	cp=cv/nv;
}
	else
{
	cv=nv*k*d;
	cp=cv/nv;
}
	cout<<"COSTO TOTAL DEL VIAJE:  "<<cv<<endl;
	cout<<"COSTO POR PERSONA A VIAJAR:  "<<cp<<endl;
	return 0;
	}
