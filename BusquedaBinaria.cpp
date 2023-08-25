#include <iostream>
#include <conio.h>

//*Julian David Ortiz Molina*//
//*Busqueda Binaria*//

using namespace std;

int main (){
	int num[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};	
	int i,s,m,dato;
	char band= 'F';
	dato= 16;	
	
	i= 0;
	s= 15;
	
	while(i<=s){
		
		m = (i+s)/2;
		
		if(num[m]== dato){
			band = 'V';
			break;
		} 
		if(num[m]> dato){
			s= m;
			m= (i+s)/2 ;
		}
		if(num[m]< dato){
			i= m;
			m= (i+s)/2;
		}
	}

	if(band == 'V'){
		cout<<"El numero esta en la posicion:"<<m<<endl;
	}
	else{
		cout<<"El numero no ha sido encontrado";
	}
	
	int num1[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	int i1,s1,m1,dato1;
	char band1= 'F';
	dato1= 31;	
	
	i1= 0;
	s1= 15;
	
	while(i1<=s1){
		
		m1 = (i1+s1)/2;
		
		if(num1[m1]== dato1){
			band = 'V';
			break;
		} 
		if(num1[m1]> dato1){
			s1= m1;
			m1= (i1+s1)/2 ;
		}
		if(num1[m1]< dato1){
			i1= m1;
			m1= (i1+s1)/2;
		}
	}

	if(band == 'V'){
		cout<<"El numero esta en la posicion:"<<m1<<endl;
	}
	else{
		cout<<"El numero no ha sido encontrado";
	}
	
	int num2[] = {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
	int i2,s2,m2,dato2;
	char band2= 'F';
	dato2= 46;	
	
	i2= 0;
	s2= 15;
	
	while(i2<=s2){
		
		m2 = (i2+s2)/2;
		
		if(num2[m2]== dato2){
			band = 'V';
			break;
		} 
		if(num2[m2]> dato2){
			s2= m2;
			m2= (i2+s2)/2 ;
		}
		if(num2[m2]< dato2){
			i2= m2;
			m2= (i2+s2)/2;
		}
	}

	if(band == 'V'){
		cout<<"El numero esta en la posicion:"<<m2<<endl;
	}
	else{
		cout<<"El numero no ha sido encontrado";
	}
		
	getch ();
	return 0;
} 
