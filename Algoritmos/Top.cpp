
#include <iostream>
#include <vector>
using namespace std;

//Algoritmo  llamado top para encontrar el top de la secuencia unimodal
//l es el inicio del vector y r el final
int top(const vector<int>& v, int l, int r)
{
	//Cuando el vector tiene un maximo de 2
	if (l + 1 == r) return max(l, r);
	else {
		int m = (l + r) / 2; //elemento del medio
		if (v[m] < v[m + 1]) top(v, m + 1, r); // el mayor esta por la derecha
		else if (v[m - 1] > v[m]) top(v, l, m - 1); //el mayor esta por la izquierda
		else return v[m]; //el mayor esta en la mitad
	}
}

//int main()
//{
//	vector<int> v{ 10,20,30,50,40,23,10 };
//	int result = top(v, 1, v.size());
//	std::cout << result;
//}

