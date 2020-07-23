//1. Escribe un programa en C ++ que pida al usuario tres valores enteros y los ejemplos de menor a 
//mayor separados por comas. Por ejemplo, si el usuario introduce 10, 4 y 6, el resultado será: 4, 6, 10.


#include <iostream>
using namespace std;


int main() {

	int A, B, C;
	char X, D;
	cout << "ingresar 3 numeros separados por comas ";

	cin >> A >> X >> B >> D >> C;

	if (A > B && B > C)
	{
		cout << C << " , " << B << " , " << A;
	}
	else if (B > A && A > C)
	{
		cout << C << " , " << A << " , " << B;
	}
	else if (B > C && C > A)
	{
		cout << A << " , " << C << " , " << B;
	}
	else { cout << A << " , " << B << " , " << C; }
	return 0;
}

//2. Se desea calcular el número de monedas que se necesitan para completar un valor determinado de dinero, ingresado por el usuario.
//El resultado debe ser el número de monedas de cada denominación: 1 dólar, 50 ctvs, 25 ctvs, 10 ctvs, 5 ctvs y 1 ctv, la mayor denominación 
//posible considerada de manera segura.Ejemplo para 7, 12 dólares ingresado por el usuario el resultado debería ser :
/*

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int Dolar, CENT = 0, YT, AP, PU, RA, RE, RI, RO;
	int A, B, C, E;
	char D;
	double Dinero, En_Centavos;
	cout << " Ingresar la cantidad ";
	cin >> Dinero >> D >> En_Centavos;
	cout << endl;
	Dolar = Dinero * 100;

	CENT = Dolar + En_Centavos;

	if (CENT % 100 == 0)
	{
		YT = Dolar / 100;
		cout << "Monedas de 1 dolar = " << YT << endl;
		cout << "Monedas de 50 centavos = 0 " << endl;
		cout << "Monedas de 25 centavos = 0 " << endl;
		cout << "Monedas de 10 centavos = 0 " << endl;
		cout << "Monedas de 5 centavos = 0 " << endl;
		cout << "Monedas de 1 centavos = 0 " << endl;
	}
	else {

		AP = CENT % 100;
		A = AP % 50;
		B = A % 25;
		C = B % 10;
		E = C % 5;
		RA = (AP - A);
		RE = (A - B);
		RI = B - C;
		RO = C - E;

		cout << "Monedas de 1 dolar = " << Dinero << endl;
		cout << "Monedas de 50 centavos =  " << RA / 50 << endl;
		cout << "Monedas de 25 centavos =  " << RE / 25 << endl;
		cout << "Monedas de 10 centavos =  " << RI / 10 << endl;
		cout << "Monedas de 5 centavos =  " << RO / 5 << endl;
		cout << "Monedas de 1 centavos =  " << E << endl;

	}
	return 0;
}

*/
//3. Hacer un programa para una tienda de ropa que tiene una promoción de descuento para vendedor al mayor,
//esta dependerá del número de prendas que se compren. Se ofrecen a disposición de la promoción tres prendas:
//vestidos ($ 80 c / u), zapatos ($ 50 c / u) y carteras ($ 40 c / u). Si son más de diez, se les dará un 10% de
//descuento sobre el total de la compra; si el número de prendas es mayor de veinte pero menor de treinta, se le otorga
//un 20% de descuento; y si son más treinta prendas se otorgará un 40% de descuento. Indicar el resumen de la compra y el total a pagar.

/*
#include <iostream>
using namespace std;

int main() {
int A , B , C ,Neto, TOTAL , XD , YT, PU ;
int vest,Cart, zap, NUMERO = 0;
vest = 80 ;
Cart = 40 ;
zap = 50 ;

cout <<"Precio Unit. 50"<< "\t\t\t\tCant. Zapatos  \t\t" ;
cin >> A ;
cout <<"Precio Unit. 80"<< "\t\t\t\tCant. Vestidos\t\t" ;
cin >> B ;
cout <<"Precio Unit. 40"<< "\t\t\t\tCant. Carteras\t\t" ;
cin >> C ;
NUMERO = A + B + C ;

if ( NUMERO > 0 && NUMERO <= 10){
  Neto = A*zap + B* vest + C* Cart ;
cout << "Total   \t\t\t\t\t\t\t\t\t\t" << Neto ;
}

else if (NUMERO > 10 && NUMERO <= 20){
  Neto = A*zap + B* vest + C* Cart ;
  XD = (Neto * 10)/100 ;

  TOTAL = Neto - XD ;
cout << "Total   \t\t\t\t\t\t\t\t\t\t" << TOTAL ;
}
else if (NUMERO > 20 && NUMERO <= 30){
  Neto = A*zap + B* vest + C* Cart ;
  XD = (Neto * 20)/100 ;

  TOTAL = Neto - XD ;
cout << "Total   \t\t\t\t\t\t\t\t\t\t" << TOTAL ;
}

else if (NUMERO > 30 ){
  Neto = A*zap + B* vest + C* Cart ;
  XD = (Neto * 40)/100 ;

  TOTAL = Neto - XD ;
cout << "Total   \t\t\t\t\t\t\t\t\t\t" << TOTAL ;
}


return 0 ;
}
*/
//4.Realice un programa para que los alumnos puedan visualizar si fueron aceptados o no, en las 
//carreras en las que se inscribió, luego de rendir el examen de admisión. Los alumnos seleccionarán 
//desde un menú la carrera a la que se inscribió ya continuación ingresarán la calificación obtenida en el examen 
//de admisión. Si el alumno es aceptado teniendo en cuenta las especificaciones que se listan abajo se debe imprimir
//su calificación, carrera y la palabra "Aceptado", caso contrario específico la palabra "No aceptado".

/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int carrera;
  double nota;
  cout<<"1: Ingeniería "<<endl;
  cout<<"2: Medicina"<<endl;
  cout<<"3: Licenciatura"<<endl;
  cout<<"4: Técnico "<<endl;
  cout<<"Ingrese el numero de la carrera que desea:"<<endl;
  cin>>carrera;
  cout<<"Ingrese su calificacion:"<<endl;
  cin>>nota;

switch (carrera)
{
  case (1):
	if(nota>=8.8){
	  cout<<"Ingeniería\t"<<"Calificación:\t" << nota<<"\tAceptado" <<endl;
	}
	else{
	  cout<<"Ingeniería\t"<<"Calificación:\t" << nota<<"\tNo aceptado" <<endl;
	}
  break;

  case (2):
	if(nota>8.5){
	  cout<<"Medicina\t"<<"Calificación:\t" << nota<<"\tAceptado" <<endl;
	}
	else{
	  cout<<"Medicina\t"<<"Calificación:\t" << nota<<"\tNo aceptado" <<endl;
	}
  break;

  case (3):
	if(nota>=8.3){
	  cout<<"Licenciatura\t"<<"Calificación:\t" << nota<<"\tAceptado" <<endl;
	}
	else{
	  cout<<"icenciatura\t"<<"Calificación:\t" << nota<<"\tNo aceptado" <<endl;
	}
	break;

  case (4):
	if(nota>=7.8){
	  cout<<"Técnico\t"<<"Calificación:\t" << nota<<"\tAceptado" <<endl;
	}
	else{
	  cout<<"Técnico\t"<<"Calificación:\t" << nota<<"\tNo aceptado" <<endl;
	}
	break;
	return 0;
}
}

*/
//5.Un almacén de pedidos por correo vende cinco productos distintos, nuestros precios de venta son los siguientes:
//producto 1, $ 2.98; producto 2, $ 4.50; producto 3, $ 9.98; producto 4, $ 4.49 y producto 5, $ 6.87. Escriba un programa
//que lea una serie de pares de números, como se muestra a continuación:
//a) número del producto
//b) cantidad vendida
//Su programa debe utilizar una instrucción para cambiar el precio de venta de cada producto.Debe calcular y mostrar el valor 
//total de la venta de todos los productos vendidos.Use un ciclo controlado por centinela para determinar cuándo debe el programa 
//dejar de iterar para mostrar los resultados finales.
/*
#include<stdio.h>
#include <iostream>
#include<stdlib.h>
#include<float.h>
using namespace std ;
int main()
{
	int np,cant;
	float A,B,C,D,E,XD,YT=0;
	printf("Calculo del total de ventas\n");
	for (int i=1;i<=7;i++)
	{
		printf("Dia %d\n",i);
		XD=0;
		do
		{
			printf(" numero del producto a comprar:\n");
			printf("Introduzca 0 para terminar\n");
			scanf("%d",&np);
			switch (np)
			{
				case 0:
					continue;
				case 1:
					printf("unidades del producto 1:\n");
					scanf("%d",&cant);
					A=cant*2.98;
					break;
				case 2:
					printf("unidades del producto 2:\n");
					scanf("%d",&cant);
					B=cant*4.5;
					break;
				case 3:
					printf("unidades del producto 3:\n");
					scanf("%d",&cant);
					C=cant*9.98;
					break;
				case 4:
					printf("unidades del producto 4:\n");
					scanf("%d",&cant);
					D=cant*4.49;
					break;
				case 5:
					printf("unidades del producto 5:\n");
					scanf("%d",&cant);
					E=cant*6.87;
					break;
				default:
					printf("Numero ingresado no valido\n");
					break;
			}
			XD=A+B+C+D+E;
		} while (np!=0);
		YT= YT +XD;
		system("cls");
	}
	printf("\nEl total de las ventas de la semana es: $%.2f",YT);
	system("pause");
}
*/
//6. Una aplicación interesante de las computadoras es dibujar gráficos y de barra. 
//Escriba un programa que lea cinco números (cada uno entre 1 y 30). Suponga que el usuario solo introduce valores válidos. 
//Por cada número leído, su programa debe imprimir una línea que contenga ese número de asteriscos adyacentes. 
//Por ejemplo, si su programa lee el número 7, debe mostrar *******.
/*
#include <iostream>
using namespace std;
const char sim='*';
int main() {
  int variable[5],j,i,k;
  k=1;
   for(i=0;i<5;i++){
	cout << "\n";
	cout << "Ingrese el valor del numero: " << k << " 'Elija un numero del 1-30" << endl;
	cin >> variable[i];
	k++;
	if(variable[i]>30){
	 cout << "Vuelva a ingresar el valor\n";
	 i--;
	 k--;
   }
   }
   cout << " ";
   for(i=0;i<5;i++){

	 cout << endl << "Linea de :" << variable[i] << endl ;
	 for (j=1;j<=variable[i];j++){
	   cout <<sim;}
   }
}
*/
//7. Escriba un programa que utilice instrucciones de repetición y cambio para imprimir la 
//canción “Los Doce Días de Navidad”. Una instrucción cambiar debe instrucciones para imprimir el día 
//(es decir, "primer", "segundo", etcétera). Una instrucción cambia las obligaciones separadas para imprimir 
//el resto de cada verso. Visite el sitio web http://www.12days.com/library/carols/ para obtener la letra completa
//de la canción
/*
#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;
int main()
{
  int Inicio,Dia;
  do{
  cout<<"para iniciar preciones 1 y para terminar precione 2 :"<<endl;
  cin>>Inicio;
  if (Inicio==1){
  cout<<" \t\t\t\t\tLOS DOCE DIAS DE NAVIDAD\n";
  cout<<"\t\t\t\t\tIngrese el dia que desea\n";
  cin>> Dia;
 switch(Dia){
  case (1):
  cout<<"\n"<<"\t\t\t\t\t->El primer día de Navidad\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t1 perdiz en un peral"<<endl;
  case(2) :
  cout<<"\n"<<"\t\t\t\t\t->El segundo día de Navidad,\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t2 tórtolas\n"<<"\t\t\t\t\ty una Perdiz en un peral.\n";
  case (3):
  cout<<"\n"<<"\t\t\t\t\t->El tercer día de Navidad,\n"<<"\t\t\t\t\tmi verdadero amor. amor me envió:\n"<<"\t\t\t\t\t3 gallinas francesas\n"<<"\t\t\t\t\tdos palomas de la tortuga\n"<<"\t\t\t\t\ty una perdiz en un peral.\n";
  case (4):
  cout<<"\n"<<"\t\t\t\t\t->en el cuarto día de Navidad\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t4 pájaros de llamada *\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tDos palomas de la tortuga\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case (5):
  cout<<"\n"<<"\t\t\t\t\t->En el quinto día de Navidad que\n"<<"\t\t\t\t\tme envió mi verdadero amor:\n"<<"\t\t\t\t\t5 anillos de oro\n"<<"\t\t\t\t\tcuatro pájaros voladores\n"<<"\t\t\t\t\tcuatro pájaros voladores\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tDos palomas de la tortuga\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case (6):
  cout<<"\n"<<"\t\t\t\t\t->En el sexto día de Navidad\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t6 gansos a poner \n"<<"\t\t\t\t\tCinco anillos de oro\n"<<"\t\t\t\t\tCuatro pájaros de llamada\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tDos palomas de la tortuga\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case (7):
  cout<<"\n"<<"\t\t\t\t\t->En el séptimo día de Navidad,\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t7 cisnes nadando ,\n"<<"\t\t\t\t\tseis gansos, un tendido,\n"<<"\t\t\t\t\tcinco anillos de oro,\n"<<"\t\t\t\t\tcuatro pájaros voladores,\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tdos tórtolas\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case(8):
  cout<<"\n"<<"\t\t\t\t\t->El octavo día de Navidad,\n"<<"\t\t\t\t\tmi verdadero amor fue enviado a yo:\n"<<"\t\t\t\t\t8 criadas un ordeño\n"<<"\t\t\t\t\tSiete cisnes a nadar\n"<<"\t\t\t\t\tSiete cisnes, a nadar ,\n"<<"\t\t\t\t\tSeis gansos a Poner\n"<<"\t\t\t\t\tcinco anillos de oro,\n"<<"\t\t\t\t\tcuatro pájaros voladores,\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tdos tórtolas\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case(9):
  cout<<"\n"<<"\t\t\t\t\t->El noveno día de Navidad\n"<<"\t\t\t\t\tme envió mi verdadero amor:\n"<<"\t\t\t\t\t9 damas bailando\n"<<"\t\t\t\t\tocho doncellas a Ordeñando\n"<<"\t\t\t\t\tSiete cisnes, a nadar ,\n"<<"\t\t\t\t\tSeis gansos a Poner\n"<<"\t\t\t\t\tcinco anillos de oro,\n"<<"\t\t\t\t\tcuatro pájaros voladores,\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tdos tórtolas\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case (10):
  cout<<"\n"<<"\t\t\t\t\t->El décimo día de Navidad,\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t10 señores,\n"<<"\t\t\t\t\tnueve saltando, nueve damas bailando,\n"<<"\t\t\t\t\tocho criadas, ordeñando\n"<<"\t\t\t\t\tSiete cisnes, a nadar ,\n"<<"\t\t\t\t\tSeis gansos a Poner\n"<<"\t\t\t\t\tcinco anillos de oro,\n"<<"\t\t\t\t\tcuatro pájaros voladores,\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tdos tórtolas\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case (11):
  cout<<"\n"<<"\t\t\t\t\t->El undécimo día de Navidad\n"<<"\t\t\t\t\tme envió mi verdadero amor:\n"<<"\t\t\t\t\t11 gaiteros,\n"<<"\t\t\t\t\tdiez señores, saltando,\n"<<"\t\t\t\t\tnueve damas bailando,\n"<<"\t\t\t\t\tocho sirvientas y ordeñando.\n"<<"\t\t\t\t\tSiete cisnes, a nadar ,\n"<<"\t\t\t\t\tSeis gansos a Poner\n"<<"\t\t\t\t\tcinco anillos de oro,\n"<<"\t\t\t\t\tcuatro pájaros voladores,\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tdos tórtolas\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  case (12):
  cout<<"\n"<<"->\t\t\t\t\tEn el duodécimo día de Navidad\n"<<"\t\t\t\t\tmi verdadero amor me envió:\n"<<"\t\t\t\t\t12 tambores tambores\n"<<"\t\t\t\t\tTubería de once gaiteros\n"<<"\t\t\t\t\t Diez señores saltando\n"<<"\t\t\t\t\tNueve señoras bailando\n"<<"\t\t\t\t\tOcho criadas un ordeño\n"<<"\t\t\t\t\t Siete cisnes nadando\n"<<"\t\t\t\t\tSeis gansos a Poner\n"<<"\t\t\t\t\tcinco anillos de oro,\n"<<"\t\t\t\t\tcuatro pájaros voladores,\n"<<"\t\t\t\t\tTres gallinas francesas\n"<<"\t\t\t\t\tdos tórtolas\n"<<"\t\t\t\t\ty una perdiz en un peral\n";
  }
  }  else if (Inicio==2){
	cout<<"Cancion terminada\n";}
  else {
	cout<<"Error intente de nuevo\n";}
  }while (Inicio !=2);
  system("cls");
  return 0;
}

*/
//8. Escriba un programa que pida al usuario que ingrese el tamaño del lado de un cuadrado y que muestre un cuadrado 
//de ese tamaño, compuesto de asteriscos y espacios en blanco. Su programa debe funcionar con cuadrados que tengan lados 
//de todas las longitudes entre 1 y 20. Por ejemplo, si su programa lee un tamaño de 5, debe imprimir:
/*

#include <stdio.h>

int main(){

	int W;

	printf("Ingresa el lado del cuadrado: ");
	scanf("%i",&W);

	printf("\n");
		for(int XP=1; XP<=W ; XP++)
		{
			for(int XD=1; XD<=W; XD++)
			{

				if(XP == 1 || XP == W || XD== 1 || XD==W)
				{
					printf("*");
				}

				else
				{
					printf(" ");
				}
			}
			printf("\n");
	  }

	return 0;
}
*/
//9. Escriba un programa que calcule el factorial de un número ingresado por el usuario
/*
#include <iostream>
using namespace std ;

int main() {
int  j , k = 1 ;
cout << "ingrese el numero que desee sacar el factorial" << endl  ;
cin >> j ;
for (int i = 1 ; i<= j; i++ ) {
k *= i ;
}
cout << "El factorial es : " << k ;
}
*/
//10. Escriba un programa para encontrar los números y la suma de todos los enteros entre 100 y 200 que sean divisibles para 9.

/*
#include <iostream>
using namespace std;
int main() {
 int Intervalo=200, numero=0,numero_1,x;
 cout<<"Numeros enteros divisiblies de 9 entre 100 a 200 son: "<<endl;
 for(int i=100;Intervalo>=i;i++){
if (i%9==0){
  cout<<i<<endl;
  numero=numero+i;
  }
  }
 cout<<"La suma de los numeros entre 100 a 200 y divisiblies para 9 son: "<<numero<<endl;
}
*/

