#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Fill(int** a, const int rowCount, const int colCount, const int Low,
	const int High);
bool hasOnlyPositiveInRow(int** a, const int currentRow, const int colCount);
int Sum(int** a, const int rowCount, const int colCount, int& sum);
void SumDiagonal(int** a, const int sizearr, int& sumdiagonal);
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
	int sum = 0;
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Fill(int** a, const int rowCount, const int colCount, const int Low,
	const int High);
bool hasOnlyPositiveInRow(int** a, const int currentRow, const int colCount);
int Sum(int** a, const int rowCount, const int colCount, int& sum);
void SumDiagonal(int** a, const int sizearr, int& sumdiagonal);
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
	int sum = 0;
	int sumdiagonal = 0;
	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];
	Fill(a, rowCount, colCount, Low, High);
	Print(a, rowCount, colCount);

	Sum(a, rowCount, colCount, sum);
		cout << "sum positive rows" << setw(4) << sum << endl;

		SumDiagonal(a, sizearr, sumdiagonal);
		cout << "sumdiagonal" << setw(4) << sumdiagonal << endl;
		
		

	

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

bool hasOnlyPositiveInRow(int** a, const int currentRow, const int colCount)
{
	for (int i = 0; i < colCount; i++) {
		if (a[currentRow][i] < 0) {
			return false;
		}
	}
	return true;
}

int Sum(int** a, const int rowCount, const int colCount, int& sum)
{
	

	for (int i = 0; i < rowCount; i++)
		if (hasOnlyPositiveInRow(a, i, colCount))
		{
			for (int j = 0; j < colCount; j++)
				sum += a[i][j];
		}

	return sum;
}

void SumDiagonal(int** a, const int sizearr, int& sumdiagonal)
{

	for (int i = 0; i < sizearr; i++) {
		sumdiagonal += a[i][i];
	}
	
}



