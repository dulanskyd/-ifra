#include <stdio.h>

int main()
{
   int i, x;
   char str[99];

   printf("\nVložte text :\t");
   gets(str);

   printf("\nVyberte :\n");
   printf("1 = Zašifrovat .\n");
   printf("2 = Rozšifrovat .\n");
   scanf("%d", &x);

   switch(x)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 6;

      printf("\nZašifrovaný text: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 6;

      printf("\nRozšifrovaný text: %s\n", str);
      break;

   default:
      printf("\n Něco se pokazilo :/ \n");
   }
   return 0;
}