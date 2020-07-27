#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Name;
	float Salary;
	float Sale;
	float Percent;
	cout << "Enter Name : ";
	cin >> Name;
	cout << "Enter Salary : ";
	cin >> Salary;
	cout << "Enter Sale : ";
	cin >> Sale;
	cout << "Enter Commission Percent : ";
	cin >> Percent;
	cout << endl;
	cout << "Your name = " << Name << endl;
	cout << "Total Revenue " << (Sale * Percent) / 100 + Salary << endl;
}
