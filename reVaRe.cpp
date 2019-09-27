#include <iostream>
#include<conio.h>
using namespace std; 
void valor(int, int);
void referencia(int&, int&);
int factorial(int);
int n1, n2;
int main(int argc, char** argv){
	int n;	
	do{
	
	cout<<"\n Ingresa una opcion para sobre unt tipo: \n";
	cout<<"1: Paso por valor : \n";
	cout<<"2: Paso por referencia : \n";
	cout<<"3: Recursividad : \n";
	
	cin >> n;
        switch(n)
        {
            case 1:
            	cout<<"Ingresa 2 numeros: ";
            	cin>>n1>>n2;
            	valor(n1,n2);
            	
            
            break;
            case 2: 
            	cout<<"Ingresa 2 numeros: ";
            	cin>>n1>>n2;
            	referencia(n1,n2);

            break;
            case 3:
            	int n, r;
   				cout << "FACTORIAL : Escribe un numero : ";
   				cin >> n;
   				r=factorial(n);
   				cout << n << "! = " << r << endl;
            break;
            
            default: 
            cout << "Opcion desconocida!" << endl;
            break;
		}    
    } while (n != 4); 
	getch();
	return 0;
}

void valor(int n1, int n2 ){
	cout<<"El valor del 1 numero: "<<n1<<endl;
	cout<<"El valor del 2 numero: "<<n2<<endl;
}

void referencia(int& xn, int& yn ){
	cout<<"El valor del 1 numero: "<<xn<<endl;
	cout<<"El valor del 2 numero: "<<yn<<endl;
}
int factorial(int n1){
   if(n1 < 0) return 0;
   else if(n1 > 1) return n1*factorial(n1-1);
   return 1;  
}
