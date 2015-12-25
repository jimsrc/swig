# setup.py

from distutils.core import setup, Extension

setup(name="returnList",
      py_modules=['returnList'], 
      ext_modules=[Extension("_returnList",
                     ["src/returnList.i","src/returnList.cc"],
                     swig_opts=['-c++'],
                  )]  
    
)
# python setup.py build_ext --inplace
