#include<iostream>
#include<math.h>

using namespace std;
<<<<<<< Updated upstream
=======
void Coseno(double);
>>>>>>> Stashed changes
void Tangente(double);
void arcoTangente(double);

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
                        Coseno(numero);
            break;
         case 'c':
         		Tangente(numero);
            break;
         case 'd':
            break;
         case 'e':
            break;
         case 'f':
         		arcoTangente(numero);
            break;

         default:
            cout << "Elija una opcion correcta";
   }

}


<<<<<<< Updated upstream
=======
void Coseno (double numero){

double resultado=0;
resultado = cos(numero);
cout <<"\n" << resultado;

}
>>>>>>> Stashed changes
void Tangente (double numero){

double resultado=0;
resultado = tan(numero);
cout <<"\n" << resultado;

}

void arcoTangente (double numero){

double resultado=0;
resultado = atan(numero);
cout <<"\n" << resultado;

<<<<<<< Updated upstream
}
=======
}
>>>>>>> Stashed changes
