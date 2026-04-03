#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double a, b, c, d, x;
   cout << "Введите 1 число."<< endl;
   cin >> a;
   cout << "Введите 2 число."<< endl;
   cin >> b;
   cout << "Введите 3 число." << endl;
   cin >> c;
   if(a != 0)
   {
		d = b * b - 4 * a * c;
		if(d < 0)
		{
			cout << "Корней нет.";
		}
		if(d == 0)
		{
			x = -b / (2 * a);
			cout << x;
		}
		if(d > 0)
		{
			double x1,x2;
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			cout << "x1 = " << x1 << "x2 = " << x2;
		}
   }
   else
   {
		cout << "Уравнение не квадратное.";
   }
}
