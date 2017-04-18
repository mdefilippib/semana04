// vec.push_back()
// vec.pop_back()
// vec.insert
// vec.operator[]
// vec.at
// vec.size
// vec.resize

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Crear el vector
    vector<int> vec; // vec= {1,4,5,3,10,100,21,11,66,67};
    
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);
    
    // Tamaño del vector
    cout << "El tamaño es: " << vec.size() << endl;

    // usando operador []
    cout << "Usando operador []" << endl;
    for (int i = 0; i < vec.size(); i++)
         cout<< vec[i] << endl;
         
         
    // usando metodo at()    
    cout << "Usando operador at()" << endl;
    for (int i = 0; i < vec.size(); i++)
         cout<< vec.at(i) << endl;
    
    vec.pop_back();
    
    cout << "El tamaño es: " << vec.size() << endl;
        
    
    for(auto i: vec)
    {
        cout << i << endl;
    }
    
    return 0;
}

