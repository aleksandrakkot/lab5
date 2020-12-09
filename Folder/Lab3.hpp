#ifndef Lab3_hpp
#define Lab3_hpp
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <exception>


class Matrix
{
private: //atrybuty prywatne, hermetyzacja danych
	int** macierz; 
	int n;
	int m;
	void utworzMacierz();

public: //metody udostępniane publicznie dla każdego
	
	Matrix(int nn, int mm); //konstruktor
	Matrix(int nn);
	Matrix(const Matrix& matrix);
	void set(int i, int j, int val);
	int get(int i, int j) const;
	Matrix add(const Matrix& m2);
	Matrix subtract(const Matrix& m2);
	Matrix multiply(const Matrix& m2);
	int cols() const;
	int rows() const;
	void print();
	void store(std::string filename, std::string path);
	Matrix(std::string fileName, std::string path);
	~Matrix(); //destruktor
};
#endif