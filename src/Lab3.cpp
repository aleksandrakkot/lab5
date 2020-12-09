#include <Folder/Lab3.hpp>

using namespace std;

/*wyjątki*/
class WrongElement : public exception
{
    virtual const char *what() const throw()
    {
        return "Brak zadanego elementu";
    }
};

class WrongOpenFile : public exception
{
    virtual const char *what() const throw()
    {
        return "Blad otwarcia pliku";
    }
};

class WrongSize : public exception
{
    virtual const char *what() const throw()
    {
        return "Zly rozmiar macierzy";
    }
};

void Matrix::utworzMacierz()
{
	macierz = new int*[n];
	for (int i = 0; i < n; i++)
	{
		macierz[i] = (int*)calloc(m, sizeof(int));
	}
	
}

Matrix::Matrix(int nn, int mm)
{
	if(nn<=0 || mm<=0)
    {
        throw WrongElement();
    }
    else
    {
	n = nn;
	m = mm;
	utworzMacierz();
	}
}

Matrix::Matrix(const Matrix& matrix)
{
	n = matrix.n;
	m = matrix.m;
	utworzMacierz();
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			macierz[i][j] = matrix.macierz[i][j];
		}
	}
}

Matrix::Matrix(int nn)
{
	 if(nn<=0)
    {
        throw WrongElement();
    }
    else
    {
	n = nn;
	m = nn;
	utworzMacierz();
	}
}

void Matrix::set(int i, int j, int val)
{
	 if((i<0 || i>n) || (j<1 || j>m))
    {
        throw WrongElement();
    }
    else
    {
       macierz[i][j] = val;
    }
}

int Matrix::get(int i, int j) const
{
 if((i<0 || i>=n) || (j<1 || j>=m))
    {
        throw WrongElement();
    }
    else
    {
      return macierz[i][j];
    }
}

Matrix Matrix::add(const Matrix& m2)
{
	if (m != m2.cols() && n != m2.rows())
	{
		   throw WrongSize();
	}
    else 
	{
	Matrix wynik(n, m);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			wynik.macierz[i][j] = macierz[i][j] + m2.macierz[i][j];
		}
	}
	return wynik;
	}
}

Matrix Matrix::subtract(const Matrix& m2)
{
	if (m != m2.cols() && n != m2.rows())
	{
		   throw WrongSize();
	}
	else
	{
	Matrix wynik(n, m);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			wynik.macierz[i][j] = macierz[i][j] - m2.macierz[i][j];
		}
	}
	return wynik;
	}
}

Matrix Matrix::multiply(const Matrix& m2)
{
	if (n == m2.rows())
	{
    Matrix wynik(n, m2.rows());
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m2.rows(); j++)
		{
			double mnozenie = 0;
			for (int k = 0; k < m; k++)
			{
				mnozenie += macierz[i][k] * m2.get(k,j);
			}
			wynik.set(i, j, mnozenie);
		}
	}
	return wynik;
	}
	else
	{
		 throw WrongSize();
	}
	
}

int Matrix::cols() const
{
	return m;
}

int Matrix::rows() const
{
	return n;
}

void Matrix::print()
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << macierz[i][j] << " ";
		}
		cout << endl;
	}
}

void Matrix::store(std::string filename, std::string path)
{
	path += "\\" + filename;
	ofstream plik(path);
	
	if (!plik.good())
	{
	     throw WrongOpenFile();
	}
	else
	{
	plik << n << "\t" << m << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			plik << macierz[i][j] << "\t";
		plik << endl;
	}

	plik.close();
	}
}

Matrix::Matrix(std::string fileName, std::string path)
{
	path += "\\" + fileName;
	ifstream plik(path);
	if (!plik.good())
	{
		 throw WrongOpenFile();
	}
	else
	{
	plik >> n;
	plik >> m;
	utworzMacierz();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			plik >> macierz[i][j];
		}
	}
	plik.close();
	}
}

Matrix::~Matrix()
{
	for (int i = 0; i < n; i++)
	{
		delete macierz[i];
	}
	delete[] macierz;
}
