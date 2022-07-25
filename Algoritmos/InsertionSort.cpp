#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& v) {
	for (int i = 1; i < v.size(); i++)
	{
		int x = v[i];
		int j = i;
		while (j > 0 and v[j - 1] > x)
		{
			v[j] = v[j - 1];
			--j;
		}
		v[j] = x;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	cout << "vector sin ordenar" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
	insertionSort(v);
	
	cout << "vector ordenado" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
}