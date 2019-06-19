#include<iostream>
#include<math.h>

using namespace std;

void arcoseno (double numero);

main()
{
   char opcion;
   double numero;

   cout << "Ingrese un numero: ";
   cin >> numero;

   cout << "\n\nElija la operacion que desea realizar con el numero que ingreso: \n a) Seno \n b) Coseno \n c )Tangente \n d )Arco seno \n e) Arco coseno \n f) Arco Tangente \n\n";
   cin >> opcion;

   switch(opcion)
   {
         case 'a':
            break;
         case 'b':
            break;
         case 'c':
            break;
         case 'd':
            break;
         case 'e':
            break;
         case 'f':
            break;

         default:
            cout << "Elija una opcion correcta";
   }

}

void arcoseno (double numero)
{
    double resultado = asin(numero);
    cout << "\n" <<resultado;
}
