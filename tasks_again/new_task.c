#include <stdio.h> 
#include <string.h> 
void main() 
{ 
    char first[100] = "love "; 
    char *a = first; 
    char second[100] = "McDonalds"; 
    char *b = second; 

    strcat(a, b); 
    puts(a); 
    return 0; 
    
} 