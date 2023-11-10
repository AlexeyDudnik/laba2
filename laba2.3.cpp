#include <iostream>
using namespace std;
int main()
{
	int n,a,i;
	cin >> n;
	for (i = 1; i <= 9; i++) {
		a = n * i;
		cout << i << " X " << n << " = " << a << endl;
	}
}