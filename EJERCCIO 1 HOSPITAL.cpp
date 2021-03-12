#include<iostream>
using namespace std;
int main()
{
int op;
double p,a,imc ;
cout<<"INDICE DE MASA CORPORAL"<<endl;
cout<<"ingrese el peso ";
cin>>p;
cout<<"ingrese la altura ";
cin>>a;
imc=p/(a*a);
cout<<"el valor del imc es: "<<imc<<endl;
cout<<"[1]imc<16"<<endl;
cout<<"[2]imc>=16 y 17"<<endl;
cout<<"[3]imc>=17 y <18"<<endl;
cout<<"[4]imc>=18 y <25"<<endl;
cout<<"[5]imc>=25 y <30"<<endl;
cout<<"[6]imc>=30 y <35"<<endl;
cout<<"[7]imc>=35 y <40"<<endl;
cout<<"[8]imc>40"<<endl;
cout<<"seleccione una opcion: ";
cin>>op;

switch(op)
{
	case 1:
	cout<<"INGRESE HOSPITAL";
	break;
	case 2:
		cout<<"INFRAPESO";
		break;
	case 3:
		cout<<"BAJO PESO";
		break;
	case 4:
		cout<<"PESO NORMAL";
		break;
	case 5:
		cout<<"OBESIDAD GRADO 1";
		break;
	case 6:
		cout<<"OBESIDAD GRADO 2";
		break;
	case 7:
		cout<<"OBESIDAD GRADO 3";
		break;
	case 8:
		cout<<"OBESIDAD GRADO 4";
		break;
	default:
		cout<<"OBSICION INCORRECTA";
}

return 0;
}
