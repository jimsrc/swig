import returnList as rr
import numpy as np

#-------------------
print " ----> inicializo FooGiver:\n"
g 	= rr.FooGiver(5)
v	= g.foo()		# v es una lista en python
print " vector:\n", v

vv	= g.change(v)		# funcion de un vector
print "\n vector cambiando el 1er elemento:\n", vv

#-------------------
print "\n\n ----> inicializo ESCALAS:\n"
scl 	= rr.ESCALAS(44.3, 'cadena-ejemplo')
print " mo: ", scl.mo
print " cad: ", scl.cad

mat	= np.array(g.foomat())
print "\n matrix: \n", mat
