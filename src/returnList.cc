#include "returnList.h"
 
FooGiver::FooGiver(int n){
    // inicializo vector I/O
    toReturn = std::vector<double>(n);
    for(int i=0; i<toReturn.size(); i++){
        toReturn[i] = i * 3.1416;
    }
    // inicializo matriz i/o
    nx = 4;
    ny = 3;
    matrix = std::vector< std::vector<double> > (nx);
    for(int i=0; i<nx; i++){
	    matrix[i].resize(ny);
    }
    matrix[0][0] = 99.876;
    matrix[0][1] = 666.61;
    //st=100.889;
}

FooGiver::~FooGiver(){
//     delete toReturn;
    ;
}

/*void FooGiver::retSt(){
	printf(" nx: %d\n", nx);
}*/
 
double FooGiver::gg(double a){
	return 2.*a;
}

std::vector<double> FooGiver::foo(){
    return toReturn;
}

// matriz de 'nx' filas por 'ny' columnas :-)
std::vector< std::vector<double> > FooGiver::foomat(){
    /*std::vector< std::vector<double> > matrix(nx);
    for(int i=0; i<nx; i++){
	    matrix[i].resize(ny);
    }
    matrix[0][0] = 99.876;
    matrix[0][1] = 666.61;*/

    return matrix;
}

std::vector<double> FooGiver::change(std::vector<double> v){
	v[0] = -999.67;
	return v;
}

//------------------------------------------------
ESCALAS::ESCALAS(double R, char* cadena){
	cad = cadena;	// tb podria modificar la cadena
	build(R);
}

char* ESCALAS::returncad(){
	return cad;
}

void ESCALAS::build(double R){
	mo = 1.;
        mo *= R;
}
