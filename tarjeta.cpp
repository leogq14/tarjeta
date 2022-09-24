#include <iostream>
using namespace std;

int main()
{
    // La clave correcta
    const string claveCorrecta = "2022";
    cout << "Bienvenido al cajero automático" << endl;
    cout << "Ingrese la clave: " << endl;
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Clave incorrecta";

        return 0;
    }
   
    cout << "Clave correcta Bienvenido" << endl;
    cout << "MARVIN LEONEL GOMEZ QUINTANILLA 0909-22-2340" << endl;
    double fondos = 3000; 

    string eleccion = "";
    
    while (eleccion != "2")
    {
       
        cout << "Fondos disponibles: " << fondos << endl;
     
            cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
           
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
           
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
               
                cout << "OK. Ha retirado " << retiro << endl;
             
                fondos = fondos - retiro;
            
            }
        }
    }
    return 0;
}