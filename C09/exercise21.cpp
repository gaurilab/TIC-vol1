/*Write a program that uses the IFOPEN( ) macro to open
a file as an input stream. Note the creation of the ifstream
object and its scope.*/

#define IFOPEN(VAR, NAME) \
ifstream VAR(NAME); \
