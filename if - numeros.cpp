#include <iostream>
using namespace std;
main(){
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
	system("pause");
}
