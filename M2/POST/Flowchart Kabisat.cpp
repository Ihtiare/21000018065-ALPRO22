#include <iostream>
using namespace std;
int main()
{
  
   int T;
   cout << "Masukkan tahun: ";
   cin >> T;
   if (T % 400==0)
   {
      cout << "Tahun Kabisat" << endl;   }
   else
   {
      if (T % 100==0)
      {
         cout << "Bukan Tahun Kabisat" << endl;      }
      else
      {
         if (T % 4==0)
         {
            cout << "Tahun Kabisat" << endl;         }
         else
         {
            cout << "Bukan Tahun Kabisat" << endl;         }
      }
   }

   return 0;
}
