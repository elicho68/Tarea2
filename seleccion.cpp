#include <iostream>
using namespace std;
main(){
	int n1=2,n2=0,n3=0,promedio;
	cout<<"Ingrese Nota 1: ";
	cin>>n1;
	cout<<"Ingrese Nota 2: ";
	cin>>n2;
	cout<<"Ingrese Nota 3: ";
	cin>>n3;
	promedio=(n1+n2+n3)/3;	
//	cout<<promedio<<endl;
	string  mensaje="";
	
	mensaje=promedio>=61 ? "Aprobado" : "ReProbado";
	cout<<"Su promedio es de: "<<promedio<<" por lo tanto: "<<mensaje<<endl;

	if(promedio>=0 && promedio<=60){
		cout<<"Mala nota"<<endl;
	}
	if(promedio>=61 && promedio <=80){
		cout<<"Buena nota"<<endl;
	}
	if(promedio>=81){
		cout<<"Excelente nota"<<endl;
	}
	

/*	
	if(promedio>=61){
		cout<<"Aprobado"<<endl;
	}else{
		cout<<"Reprobado"<<endl;
	}
*/	
	
	system("pause");	
}
