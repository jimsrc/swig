#include <vector>
#include <cstdio>

class FooGiver {
public:
    FooGiver(int n);	// recibe escalar
    ~FooGiver();
    std::vector<double> foo();
    std::vector<double> change(std::vector<double> v);
    std::vector< std::vector<double> > foomat();
    double gg(double);
    //void retSt(void);
private:
    //const static double st;
    std::vector<double> toReturn;
    std::vector< std::vector<double> > matrix;
    int nx, ny;
    //const static double a =9.33; NO LE GUSTA A SWIG!!
};

//----------------------------
#ifndef SCLS
#define SCLS
class ESCALAS{
	public:
		ESCALAS(double, char*);
		~ESCALAS() {};
		void build(double);
		double mo;        // [gr] masa PROTON
		char* cad;
		char* returncad(void);
};
#endif

//----------------------------
typedef struct{
	double La, Lb;
}pp;
