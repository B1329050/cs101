#include <stdio.h>

int main()
{
   char v = 'A';
   int *p = NULL;
   p = &v ;
   
   printf("Adress of V:%x\n", v);
   printf("Adress stored in p:%x\n", p);
   printf("Adress of p:%x\n", &p);
   printf("value of *p: %d\n", *p);
   
   return 0;
   
}
