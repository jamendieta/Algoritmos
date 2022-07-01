
#include <iostream>
#include <vector>
using namespace std;

void exchange(int* i, int* j) {
	int t = *i;
	*i = *j;
	*j = t;
}

int partition(vector<int>& a, int p, int r) {
	int x = a[r];
	int i = p - 1;
	for (int j = p; j <= r - 1;j++)
	{
		if (a[j] < x)
		{
			i++;
			exchange(&a[i],&a[j]);
		}
	}
	exchange(&a[i+1], &a[r]);
	return (i + 1);
}

//Algoritmo llamado quicksort para ordenar un vector, en función a un campo pivote, el cual es el ultimo elemento del arreglo en la recursividad
//p es el inicio del vector y r el final
void quicksort(vector<int>& a, int p, int r) {
	if (p < r)
	{
		int q = partition(a, p, r);
		quicksort(a, p, q - 1);
		quicksort(a, q + 1, r);
	}
}

int main()
{
	vector<int> a{ 10,20,30,50,40,23,10 };
	int size = a.size();
	quicksort(a, 0, size-1);
	for (int i = 0; i < size; i++)
	{
		std::cout << a[i] << " ";
	}
}

