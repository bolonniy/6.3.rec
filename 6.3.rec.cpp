
#include <iostream>
#include <iomanip> 
#include <time.h>

using namespace std;


void array_create(int* arr, const int size, int i) {
	cout << "arr[" << i << "] = ";
	cin >> arr[i];
	if (i < size - 1)
		array_create(arr, size, i + 1);
	else
		cout << endl;

}
void array_out(int* arr, const int size, int i)
{
	cout << setw(4) << arr[i];
	if (i < size - 1)
		array_out(arr, size, i + 1);
	else
		cout << endl;
}

// ØÀÁËÎÍÈ

template <typename R>
void array_create(R* arr, const int size, R i) {
	cout << "arr[" << i << "] = ";
	cin >> arr[i];
	if (i < size - 1)
		array_create(arr, size, i + 1);
	else
		cout << endl;
}

template <typename T>

void array_out(T* arr, const int size, T i)
{
	cout << setw(4) << arr[i];
	if (i < size - 1)
		array_out(arr, size, i + 1);
	else
		cout << endl;

}


int main()
{

	const int n = 5;
	int p[n];


	array_create(p, n, 0);
	array_out(p, n, 0);

	cout << endl;
	cout << endl;

	array_create<int>(p, n, 0);
	array_out<int>(p, n, 0);

	cout << endl;



}
