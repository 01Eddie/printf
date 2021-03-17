#include "holberton.h"

    /* len = Myprintf("Let's try to printf a simple sentence.\n"); */
    //printf(" WWW.FIRMCODES.COM %d %d %d", 9, 152, 35);
int main(void) 
{ 
    //Myprintf(" WWW.FIRMCODES.COM %s %s %s", "9", "152", "35");
    int len;
    int len2;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Length:[%d, %i]\n", len, len);
   _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
 	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return 0;
} 