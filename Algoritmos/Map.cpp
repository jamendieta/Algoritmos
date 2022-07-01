#include <iostream>
#include <map>


using namespace std;


int main() {

	// Alumno tendrá como key = nombre	(string)
	// Alumno tendrá como value = nota	(int)

	map<string, int> alumnoNota;

	alumnoNota["santiago"] = 8;
	alumnoNota["ana"] = 4;
	alumnoNota["carlos"] = 9;
	alumnoNota["ulises"] = 5;
	alumnoNota["adan"] = 10;

	// begin() retorna un puntero al primer elemento
	// end()   retorna un puntero al ficticio elemento que va despues del ultimo

	map<string, int>::iterator it;	// tengo un iterador que apunta a map<string,int>

	it = alumnoNota.begin();
	//it = --alumnoNota.end(); //acceder al ultimo elemento

	cout << "La nota del alumno " << it->first << " es: " << it->second << endl;


}
