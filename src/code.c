#include <stdio.h>
#include <espl_lib.h>
int main() {
   int num ;
   char ch;
   // printf() displays the string inside quotation
 do{
   printf("give a number\n");
    scanf("%d",&num);
    printf ("%s\n",num_to_words( num));
    printf ("Do you want to repeat the operation Y/N: ");
    scanf (" %c", &ch);
       }
        while (ch == 'y' || ch == 'Y');
   return 0;
}

