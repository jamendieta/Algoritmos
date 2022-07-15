#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> pila;
	int value;
	int count = 0;
	for (int i = 0; i < n / 2; ++i)
	{
		cin >> value;
		pila.push(value);
		count++;
	}

	if (n % 2 != 0) cin >> value; count++;

	bool palind = true;
	while (cin >> value and palind and count < n) {
		if (value != pila.top()) palind = false;
		pila.pop();
		count++;
	}

	if (palind) cout << "Si";
	else cout << "No";
	cout << endl;
}