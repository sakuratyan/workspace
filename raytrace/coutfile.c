#include"coutfile.h"
#include <ios>
#include <iostream>
#include <fstream>
using namespace std;

streambuf* coutfile(char* s){
	ofstream file(s);
	streambuf* r = cout.rdbuf(file.rdbuf());
	return r;
}

