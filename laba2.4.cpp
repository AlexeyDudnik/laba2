#include <iostream>
using namespace std;
int main()
{
	int i,a,b;
	long long pr1 = 2, pr2 = 1, pr3 = 1, pr4 = 1;
	cin >> a >> b;
	for (i = 8; i <= 15; i++) {
		pr1 = i * pr1;
	}
	cout << pr1 << endl;
	for (i = a; i <= 20; i++) {
		pr2 = i * pr2;
	}
	cout << pr2 << endl;
	for (i = 1; i <= b; i++) {
		pr3 = i * pr3;
	}
	cout << pr3 << endl;
	for (i = a; i <= b; i++) {
		pr4 = i * pr4;
	}
	cout << pr4 << endl;
}