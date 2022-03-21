#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int y1, a, jarak, x2, y2, b, x1;
   
   cout << "Masukkan A titik X1 : "; cin >> x1;
   cout << "Masukkan A titik Y1 : "; cin >> y1;
   cout << "Masukkan B titik X2 : "; cin >> x2;
   cout << "Masukkan B titik Y2 : "; cin >> y2;
   a =(x2-x1)*(x2-x1);
   b =(y2-y1)*(y2-y1);
   jarak = sqrt (a+b);
   cout << "\n";
   cout << "Jarak titik A  ke titik B : "<<jarak;
   return 0;
}
