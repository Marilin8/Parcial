#include <iostream>
#include <cstdlib>
#include <Practica.h>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Area de un cuadrado" << endl;
        cout << "\t2. Area de un rectangulo" << endl;
        cout << "\t3. Area de un triangulo" << endl;
        cout << "\t4. Area de un circulo" << endl;
           cout << "\t5. Area de un rombo" << endl;
        cout << "\t0. SALIR" << endl;
        
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        
        int numero1, numero2;
		float L, B, H, radio, D, d;
        switch (opcion) {
            case 1:
            
                // Instrucciones para encontrar el area
                cout << "\n\tIngrese primer lado: ";
                cin >> L;
                
                cout << "\tIngrese segundo lado: ";
                cin >> L;
                
                cout << "\t---------------------------" << endl;
                
   	         cout<<"el area del cuadrado es: "<<area_cuadrado(L)<<endl;
                
                system("pause>nul");
                break;
                
            case 2:
            
                // Instrucciones para encontrar el area
                cout << "\n\tIngrese la base: ";
                cin >> B;
                
                cout << "\tIngrese la altura: ";
                cin >> H;
                
                cout << "\t---------------------------" << endl;
             
                cout<<"el area del rectangulo es: "<<area_rectangulo(B, H)<<endl;
                
                system("pause>nul");
                break;
                
            case 3:
            	
                // Instrucciones para encontrar el area
                cout << "\n\tIngrese la base: ";
                cin >> B;
                
                cout << "\tIngrese la altura: ";
                cin >> H;
                
                cout << "\t---------------------------" << endl;
                
                cout<<"el area del triangulo es: "<<area_triangulo(B, H)<<endl;
                
                system("pause>nul");
                break;
                
            case 4:
            	
                // Instrucciones para encontrar el area
                cout << "\n\t Ingrese el radio: ";
                cin >> radio;
            
        cout<<"el area del circuo es: "<<area_circulo(radio)<<endl;
                
                system("pause>nul");     
                break;
            
             case 5:
            	
                // Instrucciones para encontrar el area
                cout << "\n\t Ingrese la diagonal mayor: ";
                cin >> D;
                
                cout << "\n\t Ingrese la diagonal menor: ";
                cin >> d;
            
        cout<<"el area del rombo es: "<<area_rombo(D,d)<<endl;
                
                system("pause>nul");     
                break;
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}