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
   for (int i =2; i <= n; i+=2)
   {
       total = total + i;
   }
   
   // Moatrar el resultado
   cout << "La suma de pares es: " << total << endl;
   
    return 0;
}