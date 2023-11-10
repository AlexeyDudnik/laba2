#include <iostream>
using namespace std;
int main()
{
	using byte = unsigned short int;
	pair <byte, byte> position1;
	pair <byte, byte> position2;
	cin >> position1.first >> position1.second;
	cin >> position2.first >> position2.second;
	if ((position1.first > 8) or (position1.first <= 0) or (position1.second > 8) or (position1.second <= 0) or (position2.first > 8) or (position2.first <= 0) or (position2.second > 8) or (position2.second <= 0)) {
		cout << "Zachem ti eto sdelal";
		return 0;
	}
	if ((position1.first == position2.first) or (position1.second == position2.second)) {
		cout << "ladya pobedil" << endl;
	}
	else {
		cout << "ladya proigral" << endl;
	}
	if ((abs(position1.first - position2.first)) == (abs(position1.second - position2.second))) {
		cout << "slon pobedil" << endl;
	}
	else {
		cout << "slon proigral" << endl;
	}
	if (((abs(position1.first - position2.first)) <= 1) and ((abs(position1.second - position2.second <= 1)))) {
		cout << "korol pobedil" << endl;
	}
	else {
		cout << "korol proigral" << endl;
	}
	if ((position1.first == position2.first) or (position1.second == position2.second) or (abs(position1.first - position2.first)) == (abs(position1.second - position2.second))) {
		cout << "ferz pobedil" << endl;
	}
	else {
		cout << "ferz proigral" << endl;
	}
	if ((position1.first == position2.first) and (position2.second == position1.second + 1) or ((position2.first == position1.first + 1) and (position2.second == position1.second + 1)) or ((position2.first == position1.first - 1) and (position2.second == position1.second + 1))) {
		cout << "peshka pobedila" << endl;
	}
	else {
		cout << "peshka proigrala" << endl;
	}
}