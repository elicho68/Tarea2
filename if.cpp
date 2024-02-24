#include <iostream>
using namespace std;
main(){
	//funciona = si
	//es funcional e ficiente?
	
	int codigo=0;
	cout<<"Ingrese codigo de area: ";
	cin>>codigo;
	switch(codigo){
		case 501 : 
			cout<<"Belice"<<endl;
			break;
		case 502 : 
			cout<<"Guatemala"<<endl;
			break;
		case 503 : 
			cout<<"El Salvador"<<endl;
			break;
		case 504 : 
			cout<<"Honduras"<<endl;
			break;
		case 505 : 
			cout<<"Nicaragua"<<endl;
			break;
		case 506 : 
			cout<<"Costa Rica"<<endl;
			break;
		case 507 : 
			cout<<"Panama"<<endl;
			break;			
	
		default:
			cout<<"este codigo no es de centroamerica"<<endl;	
		
		
	}

	
/*
	//and (y) &&
	// or (o) ||	
	char lapiz, lapicero, cuaderno;
	cout<<"Trae lapiz? (s/n): ";
	cin>>lapiz;
	cout<<"Trae lapicero? (s/n): ";
	cin>>lapicero;	
	cout<<"Trae cuaderno? (s/n): ";
	cin>>cuaderno;	
	//puede entrar a mi clase si usted trae un lapiz y un lapicero
	//and = el valor es verdadero si ambas son verdaderos
	//puede entrar a mi clase si usted trae un lapiz o un lapicero
	// or (o) = el valor es verdadero si por lo menos una es verdadero
	
	//puede entrar a mi clase si usted trae un lapiz o un lapicero y cuaderno
	if((lapiz=='s'|| lapicero=='s') && cuaderno=='s'){
			cout<<"Ingresa "<<endl;
		
	}else{
			cout<<"Lo siento no puede ingresar ";
		
	}
*/
		
/*	
	// determinarsi un numero es par o impar
	int num=0;
	cout<<"Ingresar el numero: ";
	cin>>num;
	//si al dividir entre 2 su residuo es cero entonces es par caso contrario impar
	if(num%2==0){ 
		//entra aca cuando  la condicion es verdadera
		cout<<"Par"<<endl;
	}
	else{
			cout<<"ImPar"<<endl;
		}
	
*/	

/*
	//numero es positivo > 0 negativo <0
	string pais="";
	cout<<"Ingrese el pais: ";
	cin>>pais;
	if(pais=="Guatemala"){
		cout<<"Yo soy de " << pais <<" mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}
*/	

/* scrip de numeros
	//numero es positivo > 0 negativo <0
	int num=0;
	cout<<"Ingresar el numero: ";
	cin>>num;
	if(num>0){ //>0
		//entra aca cuando  la condicion es verdadera
		cout<<"Positivo"<<endl;
	}
	else{
		//anidar estructuras
		if(num==0){ // 0
			cout<<"Neutro"<<endl;			
		}else{ //<0
			cout<<"Negativo"<<endl;
		}
		

	}
*/
	system("pause");
}
