#include <iostream>
using namespace std;

int main()
{
   int a, b,c,g = 0;
   cout << "Введите цену за товар." << endl;
   cin >> a;
   cout << "Введите количество товара." << endl;
   cin >> b;
   c = a * b;
   if(c > 1000)
   {
		g = c - (c * 10 / 100);
		cout << "Скидка есть. Сумма к оплате " << g;
   }
   else
   {
		cout << "Скидки нету. Сумма к оплате " << c;
   }
}
