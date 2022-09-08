#include <iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
	void Print()
	{
		cout << "X - " << x << endl;
		cout << "Y - " << y << endl;
	}
	void Init()
	{
		cout << "X = ";
		cin >> x;
		cout << endl << "Y = ";
		cin >> y;
		cout << endl;
	}
};
class Car
{
	char* Model;
	char* Country;
	int number;
public:
	Car()
	{
		Model = nullptr;
		Country = nullptr;
		number = 0;
	}
	Car(const char* mod, const char* coun, int y)
	{
		Model = new char[strlen(mod) + 1];
		strcpy_s(Model, strlen(mod) + 1, mod);
		Country = new char[strlen(coun) + 1];
		strcpy_s(Country, strlen(coun) + 1, coun);
		number = y;
	}
	~Car()
	{
		delete[]Model;
		delete[]Country;
	}
	void Print()
	{
		cout << "Model: " << Model << endl;
		cout << "Country: " << Country << endl;
		cout << "Number: " << number << endl;
	}
};
int main()
{
	Point obj1;
	Car obj2;
}