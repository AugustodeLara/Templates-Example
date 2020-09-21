#include <iostream>
using namespace std;

template<class T> T Soma(T x, T y)
{
	return (x + y);
}

int main()
{
	int a = 10, b = 5;
	long c = 1010101L, d = 2020202L;
	float e = 5.2, f = 6.4;

	cout << "Int = " << Soma(a, b) << endl;
	cout << "Long= " << Soma(c, d) << endl;
	cout << "Float = " << Soma(e, f) << endl;

	system("pause");

}