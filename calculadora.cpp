#include<iostream>
#include<math.h>
 using namespace std;

 int main()
 {
	 char salir = 'n';

	 float  numero1, numero2 ,resultado;
	 int  operacion;

	 while (salir =='n')
	 {
		 
		 cout<<"menu de operaciones\n";
		 cout<<"1.Suma\n";
         cout<<"2.Resta\n";
		 cout<<"3.Multiplicacion\n";
		 cout<<"4.Division\n";
		 cout<<"5.Potencia\n";
		 cout<<"6.raiz\n";

		 cin>>operacion;

		 cout<<"ingresar el primer numero\n";
		 cin>>numero1;
		 cout<<"ingresar el segundo numero\n";
		 cin>>numero2;

		 switch (operacion)
		 {
		 case 1:
				 cout<<"El resultado de la suma\n" <<numero1<< " +  "<< numero2 << "es" << numero1 + numero2<<"\n";
				 break;
          case 2:
				 cout<<"El resultado de la resta\n" <<numero1<< " -  "<< numero2 << "es" << numero1 - numero2<<"\n";
				 break;
		   case 3:
				 cout<<"El resultado de la multiplicacion\n" <<numero1<< " *  "<< numero2 << "es" << numero1 * numero2<<"\n";
				 break;	  
            case 4:
				 cout<<"El resultado de la division\n" <<numero1<< " /  "<< numero2 << "es" << numero1 / numero2<<"\n";
				 break;
              case 5:
				  cout<<"El resultado de la potencia\n" <<numero1<< " ^ "<< numero2 << "es" << pow(numero1, numero2) <<"\n";
				 break;
				  case 6:
				 cout<<"El resultado de la raiz\n" <<numero1<< " r "<< numero2 << "es" << pow(numero1, 1/numero2)<<"\n";
				 break;
				  default:
				  break;
		 }
		 cout<<"Quieres salir? (y/n)\n)";
		 cin>>salir;
	 } 
	 return 0;
 }