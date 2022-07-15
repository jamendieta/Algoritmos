#include <stack>
#include <iostream>

using namespace std;

int main() {
	char c;
	stack<char> p;
	bool correcto = true;

	cin >> c;

	while (correcto and c != '.')
	{
		if (c == '(' or c == '[') {
			p.push(c);
		}
		else if (c == ']')
		{
			if (p.empty() or p.top() != '[') correcto = false;
			else p.pop();
		}
		else if (c == ')') {
			if (p.empty() or p.top() != '(') correcto = false;
			else p.pop();
		}
		cin >> c;
	}

	if (correcto and p.empty())
		cout << "Correcto" << endl;
	else
		cout << "Incorrecto" << endl;
	cout << endl;
}