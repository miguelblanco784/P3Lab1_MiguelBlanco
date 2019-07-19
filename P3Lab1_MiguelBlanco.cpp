#include<iostream>
#include<string.h>

using namespace std;
void recursivas(a, b, c, d);

int main(){
	int opcion;
	while(true){
		cout<<"0- Salir\n1- Punto de Silla\n2- Numeros Triangulares\n3- Sin repeticion\n";
		cin>>opcion;
		switch(opcion){
			case 1:
				int **matrizsilla;
				matrizsilla = new int *[5];
				matrizsilla[0] = new int [5];
				matrizsilla[1] = new int [5];
				matrizsilla[2] = new int [5];
				matrizsilla[3] = new int [5];
				matrizsilla[4] = new int [5];
				
				for(int a = 0;a < 5;a++){
					for(int b = 0;b < 5;b++){
						int temp;
						cout<<"Ingrese el numero de la cordenada ["<<a<<"]["<<b<<"]:"<<endl;
						cin>>temp;
						matrizsilla[a][b] = temp;
					}
					cout<<endl;
				}
				
				for(int a = 0;a < 5;a++){
					for(int b = 0;b < 5;b++){
						cout<<"["<<matrizsilla[a][b]<<"]";
					}
					cout<<endl;
				}
				int tester;
				int fila; 
				int columna;
				int centinela1;
				for(int a = 0;a < 5;a++){
					for(int b = 0;b < 5;b++){
						centinela1 = -1;
						fila = a;
						columna = b;
						tester = matrizsilla[fila][columna];
						
						for(int c = 0; c < 5; c++){
							if(c != columna){
								if(tester >= matrizsilla[fila][c]){
									centinela1 = 1;
									c = 5;
								}
							}
						}
						
						if(centinela1 == -1){
							for(int c = 0; c < 5; c++){
								if(c != fila){
									if(tester <= matrizsilla[c][columna]){
										centinela1 = 1;
										c = 5;
									}
								}
							}	
						}
						
						if(centinela1 == -1){
							cout<<tester<<" es un numero silla"<<endl;
						}
					}
					cout<<endl;
				}
				break;	
			case 2:
				int triangular;
				cout<<"Ingrese su numero: ";
				cin>>triangular;
				bool p;
				p = true;
				int k;
				k = 0;
				int h;
				while(p){
					h = k*(k + 1)/2;
					k++;
					if(h == triangular){
						cout<<"Es un numero triangular\n";
						p = false;
					}	
					if(h > triangular){
						cout<<"El numero no es triangular el mas cercando es "<<h<<endl;
						p = false;
					}
				}
				break;
			case 3:
				string palabra;
				cout<<"Ingrese sus 3 letras: ";
				cin>>palabra;
				
				if(palabra.length() == 3 ){
					char a = palabra.charAt(0);
					char b = palabra.charAt(1);
					char c = palabra.charAt(2);
					recursiva(a, b, c, 0);
				}
				break;
		}//fin switch
	}//fin while infinito
	system("pause");
	return 0;
}

void recursiva(int a, int b, int c, int cont){
	switch(cont){
		case 1:
			cout<<a<<b<<c<<endl;
			recursiva(a, b, c, cont+1);
			break;
		case 2:
			cout<<a<<c<<b<<endl;
			recursiva(a, b, c, cont+1);
			break;
		case 3:
			cout<<b<<a<<c<<endl;
			recursiva(a, b, c, cont+1);
			break;
		case 4:
			cout<<b<<c<<a<<endl;
			recursiva(a, b, c, cont+1);
			break;
		case 5:
			
			break;
		case 6:
			break;
		case 7:
			break;
				
	}
}
