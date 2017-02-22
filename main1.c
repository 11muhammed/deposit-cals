#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  int i,s;
  printf("Vvedite summu vklada" "");
  scanf("%d", &i);
  while(i<10000);
  {
    printf("Summa neverna \n povtor vvoda" "");
    scanf("%d", &i);
  }
  printf("Vvedite srok  vklada" "");
  scanf("%d",&s);
  while(s<1 || s>365)
  {
    printf("Srok vklada ne bolshe 365 dney i menshe 1 dny \n");
    printf("povtorite vvod" "");
    scanf("%d", &s);
  }
  return 0;
}
