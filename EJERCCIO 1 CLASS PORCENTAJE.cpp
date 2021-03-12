#include<iostream>
using namespace std;
int main()
{
int NH,NM,TE,PH,PM;
cout <<"PORCETAJE DE ESTUDIANTES"<<endl;
cout<<"ingrese el numero de hombres: ";
cin>>NH;
cout<<"ingrese el numero de mujeres: ";
cin>>NM;
TE=NH+NM;
PH=(NH*100)/TE;
PM=(NM*100)/TE;
cout<<"PORCENTAJE DE HOMBRES ES: "<<PH<<"%"<<endl;
cout<<"PORCENTAJE DE MUJERES ES: "<<PM<<"%";
return 0;
}
