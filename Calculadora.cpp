#include<iostream>
#include<math.h>

using namespace std;

void Seno(double);
void Coseno(double);
void Tangente(double);
void arcoTangente(double);
void arcoCoseno(double);
void arcoSeno(double);
<<<<<<< HEAD
void Resta (double numero, double numero2);
void multiplicacion();
=======

void Suma(double, double);
<<<<<<< HEAD
>>>>>>> Develop
=======
void Absoluto( double );
>>>>>>> Develop

main()
{
   char opcion;
   double numero;
   double numero2;

   cout << "Ingrese un numero: ";
   cin >> numero;

   cout << "\n\nElija la operacion que desea realizar con el numero que ingreso: \n a) Seno \n b) Coseno \n c )Tangente \n d )Arco seno \n e) Arco coseno \n f) Arco Tangente \n g) Suma \n h) Resta \n i) Multiplicacion \n j) Division \n k) Valor absoluto";
   cin >> opcion;

   switch(opcion)
   {
         case 'a':
            Seno(numero);
            break;
         case 'b':
                    Coseno(numero);
            break;
         case 'c':
         			Tangente(numero);
            break;
         case 'd':
         			arcoSeno(numero);
            break;
         case 'e':  arcoCoseno(numero);
            break;
         case 'f':
         		 	arcoTangente(numero);
            break;
         case 'g':
                  cout << "\n\ningrese el siguiente numero:  ";
                  cin >> numero2;
                  Suma(numero, numero2);
            break;

         case 'h':
                  cout << "\n\ningrese el siguiente numero:  ";
                  cin >> numero2;
                  Resta(numero,numero2);
            break;

         case 'i':
                  cout << "\n\ningrese el siguiente numero:  ";
                  cin >> numero2;
                  multiplicacion(numero, numero2);
            break;

         case 'j':
                  cout << "\n\ningrese el siguiente numero:  ";
                  cin >> numero2;
                   Division(numero,numero2);
            break;

         case 'k':
                  vAbsoluto(numero);
            break;

         default:
            cout << "Elija una opcion correcta";
   }

}

void Seno( double Entrada){
	Entrada =  sin(Entrada);
	cout<<Entrada;
}

void Coseno (double numero){

double resultado=0;
resultado = cos(numero);
cout <<"\n" << resultado;

}

void Tangente (double numero){

double resultado=0;
resultado = tan(numero);
cout <<"\n" << resultado;

}

void arcoTangente (double numero){

double resultado=0;
resultado = atan(numero);
cout <<"\n" << resultado;

}

void arcoCoseno(double numero)
{
   cout << "\n" << acos(numero);
}

void arcoSeno (double numero)
{
    double resultado = asin(numero);
    cout << "\n" <<resultado;
}

void Resta (double numero, double numero2)
{
   double resultado = numero - numero2;
   cout << "\n" <<resultado;
}
<<<<<<< HEAD
<<<<<<< HEAD

void multiplicacion(double numero, double numero1){
	numero = numero * numero1;
	cout<<"El resultado de la multiplicacion es: "<<numero<<endl;
}
=======
=======

>>>>>>> Develop
void Suma(double n1, double n2)
{
   cout << "La suma es: " << n1 + n2;
}

<<<<<<< HEAD


>>>>>>> Develop
=======
void Absoluto(double numero)
{
   cout << "El absoluto es: " << abs(numero);
}
>>>>>>> Develop

void Division (double numero, double numero2)
{
   double resultado = numero / numero2;
   cout << "\n" <<resultado;
}
