#include <iostream>
using namespace std;

int main()
{
   int a;
   cout << "Введите оценку обучающегося." << endl;
   cin >> a;
   if(a > 3)
   {
		cout << "Обучающийся допущен до экзамена.";
   }
   else
   {
		cout << "Обучающийся не допущен до экзамена.";
   }

}
