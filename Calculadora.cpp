#include<iostream>
#include<math.h>

using namespace std;

void Seno(double);
void Coseno(double);
void Tangente(double);
void arcoTangente(double);
void arcoCoseno(double);
void arcoSeno(double);
void Inverso(double);
void Cuadrado(double);
void Cubo(double);

void Division(double, double);
void Resta (double numero, double numero2);
void multiplicacion(double, double);
void Suma(double, double);
void Absoluto( double );

void funcionExponencial(double);
void Logaritmo10(double);
void chicharronera(double, double, double);
void LogaritmoNatural (double);
void Factorial (double);
void XPotenciaY(double, double);
void RaizCuadrada( double );

main()
{
   char opcion;
   double numero;
   double numero2;
   double numero3;

   cout << "Ingrese un numero: ";
   cin >> numero;

   cout << "\n\nElija la operacion que desea realizar con el numero que ingreso: \n a) Seno \n b) Coseno \n c )Tangente \n d )Arco seno \n e) Arco coseno \n f) Arco Tangente \n g) Suma \n h) Resta \n i) Multiplicacion \n j) Division \n k) Valor absoluto\n";
   cout << "l) Funcion exponencial\n";
   cout << "m) Logaritmo natural\n";
   cout << "n) Logaritmo base 10\n";
   cout << "o) 1/x\n";
   cout << "p) x^2\n";
   cout << "q) x^3\n";
   cout << "r) x^y\n";
   cout << "s) x!\n";
   cout << "t) Raiz cuadrada de x\n";
   cout << "u) Resolucion cuadratica\n\n";

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
                  Absoluto(numero);
            break;

         case 'l':
         			funcionExponencial(numero);
            break;

         case 'm':
         			LogaritmoNatural(numero);
            break;

         case 'n':
                  Logaritmo10(numero);
            break;

         case 'o': Inverso(numero);
            break;

         case 'p': Cuadrado(numero);
            break;

         case 'q': Cubo(numero);
            break;

         case 'r':
                  cout << "\n Ingrese el segundo numero";
                  cin >> numero2;
                  XPotenciaY(numero, numero2);
            break;

         case 's':
                  Factorial(numero);
            break;

         case 't': RaizCuadrada(numero);
            break;

         case 'u':
            cout<<"Ingresa a: ";
            cin>>numero;
            cout<<endl<<"Ingresa b: ";
            cin>>numero2;
            cout<<endl<<"Ingresa c: ";
            cin>>numero3;
            chicharronera(numero,numero2,numero3);
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

void multiplicacion(double numero, double numero1){
	numero = numero * numero1;
	cout<<"El resultado de la multiplicacion es: "<<numero<<endl;
}

void Suma(double n1, double n2)
{
   cout << "La suma es: " << n1 + n2;
}

void Absoluto(double numero)
{
   cout << "El absoluto es: " << abs((int)numero);
}

void Division (double numero, double numero2)
{
   double resultado = numero / numero2;
   cout << "\n" <<resultado;
}

void Inverso (double numero)
{
   double resultado = 1/ numero;
   cout << "\n" <<resultado;
}
void Cuadrado (double numero)
{
   double resultado =  numero*numero;
   cout << "\n" <<resultado;
}
void Cubo (double numero)
{
   double resultado = numero*numero*numero;
   cout << "\n" <<resultado;
}

void funcionExponencial (double numero){

cout<<" Exponencial: " << exp(numero);

}

void Logaritmo10 (double numero){

cout<<" Logaritmo de 10: " << log10(numero);

}

void chicharronera(double a, double b, double c){
	double resultado1, resultado2, indefinido;
	indefinido = pow(b,2)-(4*a*c);
	if (indefinido>0){
		resultado1 = (-b + (sqrt(pow(b,2)-(4*a*c))))/(2*a);

		resultado2 = (-b - (sqrt(pow(b,2)-(4*a*c))))/(2*a);

		cout<<"Resultado '+': "<<resultado1<<endl;

		cout<<"Resultado '-': "<<resultado2<<endl;
	}
	else {
		cout<<"No hay solucion."<<endl;
	}

}

void RaizCuadrada( double numero )
{
   cout << "La raiz cuadrada es: " << sqrt(numero);
}

void XPotenciaY( double numero1, double numero2)
{
   cout << "La potencia es: " << pow(numero1,numero2);
}

/* Funcion Factorial */
void Factorial (double numero)
{
   int factorial = 1;

   if (numero<0) factorial = 0;

   else if (numero==0) factorial = 1;

   else{
      for (int i = 1; i <= numero; i++)
         factorial = factorial * i;
      }

   cout<<"\n El Factorial de " <<numero <<" es " <<factorial;

}

/* Funcion Logaritmo Natural */
void LogaritmoNatural (double numero)
{
   double resultado = log(numero);
   cout<< "\n" <<resultado;
}
