#include <stdio.h> 

int main(void) 
{ 
float value1, saved_value = .0; 
char operator; 

printf ("Type in your expression.\n\n"); 
while (operator != 'E') {
scanf ("%f %c", &value1, &operator); 
switch (operator) 
{ 
case 'S' : 
saved_value = value1; 
printf ("= %.6f\n", saved_value ); 
break; 

case '+':
saved_value = saved_value + value1;
break;

case '-' : 
saved_value = saved_value - value1; 
printf ("= %.6f\n", saved_value); 
break; 

case '*': 
saved_value = saved_value * value1; 
printf ("= %.6f\n", saved_value); 
break; 

case '/' :  
if ( value1 == 0 ) 
printf ("Division by zero.\n"); 
else 
	saved_value = saved_value / value1;
printf ("= %.6f\n", saved_value); 
break; 
default: 
printf ("Unknown operator.\n"); 
break; 
}

} 
return 0; 
}