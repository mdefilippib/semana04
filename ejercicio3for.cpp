#include <iostream>
using namespace std;

int main()
{
   // Creacion de variable
   int n = 0;
   
   // Ingreso de datos
   cout << "Ingrese numero de datos: " << endl; cin >> n;
   
   // Creacion de variable total
   int total = 0;
   
   // for antiguo
   for (int i =1; i <= n; i++)
   {
       total = total + i;
   }
   
   // Moatrar el resultado
   cout << "La suma es: " << total << endl;
   
    return 0;
}