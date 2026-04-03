#include <iostream>
using namespace std;

int main()
{
   int a,b;
   cout << "Введите 2 числа" << endl;
   cin >> a;
   cin >> b;
   if (a > b)
   {
		cout << "Число А больше.";
   }
   if (a < b)
   {
		cout << "Число B больше.";
   }
   if (a = b)
   {
		cout << "Числа равны";
   }
}
