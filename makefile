module=returnList
default:
	python setup.py build_ext --inplace
clean:
	rm -rf src/${module}.py src/${module}_wrap.cpp build *.pyc *.so *.o
