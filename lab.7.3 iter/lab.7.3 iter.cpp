#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Fill(int** a, const int rowCount, const int colCount, const int Low,
	const int High);
bool Minr(int** a, const int rowCount, const int colCount);
bool Sum(int** a, const int rowCount, const int colCount, int& Sn, int& S);
void Print(int** a, const int rowCount, const int colCount);
int main()
{
	srand((unsigned)time(NULL));
	int Low, High, sizearr;
	cout << " Low= "; cin >> Low;
	cout << " High= "; cin >> High;
	cout << " sizearr= "; cin >> sizearr;
	int rowCount = sizearr;
	int colCount = sizearr;
	int Sn = 0;
	int S = 0;
	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];
	Fill(a, rowCount, colCount, Low, High);
	Minr(a, rowCount, colCount);
	Sum(a, rowCount, colCount, Sn, S);
	Print(a, rowCount, colCount);
	return 0;
}

void Fill(int** a, const int rowCount, const int colCount, const int Low,
	const int High)
{
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}

void Print(int** a, const int rowCount, const int colCount)
{
	cout << endl;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

bool Minr(int** a, const int rowCount, const int colCount)
{
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			if (a[i][j] >= 0)
			{
				return true;
				return i;
			}
			else
			{
				return false;
			}
}

bool Sum(int** a, const int rowCount, const int colCount, int& Sn, int& S)
{

	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			if ()
			{
				for (int j = 0; j < colCount; j++)
					Sn += a[i][j];
			}
			else
			{
				Sn = 0;
			}
	for (int j = 0; j < rowCount; j++)
		S += Sn;


	return Sum(a, rowCount, colCount, Sn, S);
}
