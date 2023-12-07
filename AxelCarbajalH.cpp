/*Primer Programa 
Dado el suelo mensual de una persona
indicarle al usuario de que manera debería administrar su sueldo, siendo:
	
30% para renta o vivienda
30% para alientos y despensa
15% para servicios
15% para salud y cuidados
10% para ahorros
*/

#include<iostream>

using namespace std;

int main(){
	
      int sueldo;//Definiendo variables
      float rentapor=.30,alimentospor =.30,serviciospor=.15,saludpor=.15,ahorropor=.10;
      
      cout<<"Ingrese su sueldo mensual:";//Pidiendo datos al usuario
      cin>>sueldo;//Guardando la variable
      
      //Operaciones
	   
      float renta=sueldo*rentapor;
      float alimento=sueldo*alimentospor;
      float servicios=sueldo *serviciospor;
      float salud=sueldo*saludpor;
      float ahorro=sueldo*ahorropor;
      
      //Sus gastos son
      cout<<"\nSu ingreso para la renta es de; "<<renta;
      cout<<"\nSu ingreso para el alimento es de;"<<alimento;
      cout<<"\nSu ingreso para los servicios es de;"<<servicios;
      cout<<"\nSu ingreso para la salud es de;"<<salud;
      cout<<"\nSu ingreso para su ahorro es de;"<<ahorro;
      
    
     
       return 0;
}
