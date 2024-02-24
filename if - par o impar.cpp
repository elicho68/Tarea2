#include <iostream>
using namespace std;
main(){
		
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

	system("pause");
}
