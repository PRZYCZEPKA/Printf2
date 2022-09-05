#include <iostream>
#include <cstdio>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	double number, number2;
	int number1;
	char a;
	     
	    while (true) {
		
    printf("--Menu-- \n"
    " 1:Liczba zmiennoprzecinkowa do 2 miejsca po przecinku \n"
    " 2:Liczba w systemie szesnastkowym \n"
    " 3:Liczba z zerami z przodu \n"
    " 4: Wyjscie \n");
    a = getch();
    switch(a) {
    	
		
    	
    	case '1':
    	printf("Podaj a:");
    	scanf("%lf" , &number);
    	printf("Liczba: %4.2f \n" , number);
    	break;
    	
    	case '2':
    	printf("Podaj a:");
    	scanf("%d" , &number1);
    	printf("Liczba: %x \n" , number1);
		break;
		
		case '3':
		printf("Podaj a:");
		scanf("%ld" , &number2);
		printf("Liczba: %08d \n" , number2);
		break;
		case '4':
		return 0;
		break;
		
}
		
}

return 0;
}
    
    
 
