#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
//atributos
private : string nit;

//constructor
public : 
Cliente (){
}
Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
	nit = n;
	
}
//metodos
//set modificar
void setNit(string n){nit = n;}
void setNombres(string nom){nombres = nom;}
void setApellidos(string ape){apellidos = ape;}
void setDireccion(string dir){direccion = dir;}
void setTelefono(int tel){telefono = tel;}
//get (mostrar)
string getNit(){return nit;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
int getTelefono(){return telefono;}
//metodos
void mostrar(){
	cout<<"_____________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	
}
};

#include <iostream>
using namespace std;
class Persona{
	// atributos 
	protected : string nombres,apellidos,direccion;
				int telefono;
	//constructo
	protected :
		Persona(){
		}
		Persona(string nom,string ape,string dir,int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel; 
		}
		
	//metodo
	void mostrar();
};


#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit:";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"Datos del Cliente"<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<",";

	
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
	
}

