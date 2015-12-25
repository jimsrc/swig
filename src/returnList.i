%module returnList
%include "std_vector.i"
namespace std {
   %template(IntVector) vector<int>;
   %template(DoubVector) vector<double>;
   %template(DoubMatrix) vector<vector<double> >;
}
 
%include "returnList.h"
 
%{
#include "returnList.h"
%}
