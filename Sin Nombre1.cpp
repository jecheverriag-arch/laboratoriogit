#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	ifstream archivoEntrada("input/archivoEntrada.txt")	;
	
	if (archivoEntrada.is_open()) {
		cout<<"Archivo abierto"<<endl;
		string linea;
		while (getline(archivoEntrada, linea)){
			cout<< "\t" << linea << endl;
		}
		
		archivoEntrada.close(); 
 	}else {
 		cout<< "Error al abrir el archivo."<<endl;
	 }
	return 0;
}
