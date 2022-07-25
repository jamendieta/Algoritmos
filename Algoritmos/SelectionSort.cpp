#include <iostream>
#include <vector>
using namespace std;

int posicion_minima(const vector<int>& v, int left, int right) {
	int posicion = left;
	for (int i = left+1; i <= right; i++)
	{
		if (v[i] < v[posicion]) posicion = i;
	}
	return posicion;
}

void selection_sort(vector<int>& v) {
	int last = v.size() - 1;
	for (int i = 0; i < last; i++)
	{
		int k = posicion_minima(v, i, last);
		cout << "posicion minima: " << k << endl;
		swap(v[k], v[i]);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	cout << "El vector sin ordenar es: " << endl;
	for (int j = 0; j < n; j++)
	{
		cout << v[j] << ' ';
	}

	cout << endl;

	selection_sort(v);

	cout << "El vector ordenado es: " << endl;
	for (int k = 0; k < n; k++)
	{
		cout << v[k] << ' ';
	}
}