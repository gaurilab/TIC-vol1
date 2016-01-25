#-----Macros---------------------------------

# for cs machines
#BASEDIR = /usr/project/courses/cps008/lib
# for acpub machines
BASEDIR =/home/gauri/test/TC1Vo1/C05 

INCLUDES = -I. -I$(BASEDIR) -I/usr/include/c++/4.1.2/

# set up compiler and options
CXX = g++
CXXFLAGS = -g $(INCLUDES)

#-----File Dependencies----------------------

OBJ=example7 example3 example6 example8 
all: example7 example3 example6 example8

example7:exercise7.cpp
	$(CXX) $(CXXFLAGS)   $< -o $@

example3:exercise3.cpp
	$(CXX) $(CXXFLAGS)   $< -o $@
example6:exercise6.cpp
	$(CXX) $(CXXFLAGS)   $< -o $@

example8:exercise8.cpp
	$(CXX) $(CXXFLAGS)   $< -o $@



example9:example9.cpp 
	$(CXX) $(CXXFLAGS)   $< -o $@
 


clean:
	rm -f $(OBJ)
# DO NOT DELETE
