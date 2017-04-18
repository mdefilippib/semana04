#include <iostream>
using namespace std;

int main()
{
    int arreglo[10] = {1,4,5,3,10,100,21,11,66,67};
    
    int max = arreglo[0];
    
    for (auto i : arreglo) 
    {
        if (max < i)
            max = i;
    }
    
    cout << "El valor maximo es: " << ma << endl;
    
    return 0;
}