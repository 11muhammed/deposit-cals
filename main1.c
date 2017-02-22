#include <stdio.h>
#include <stdlib.h>

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
  if(i<10000)
    {
      if(s>0 && s<31)
	printf("Summa s prosentami=%.2f", (float)i * 0.9);
      if(s>30 && s<121)
	printf("Summa s prosentami=%.2f", (float)i * 1.02);
      if(s>120 && s<241)
	printf("Summa s prosentami=%.2f", (float)i * 1.06);
      if(s>240 && s<366)
	printf("summa s prosentami=%.2f", (float)i * 1.12);
    }
  else
    {
      if(s>0 && s<31)
        printf("Summa s prosentami=%.2f", (float)i * 0.9);
      if(s>30 && s<121)
        printf("Summa s prosentami=%.2f", (float)i * 1.03);
      if(s>120 && s<241)
        printf("Summa s prosentami=%.2f", (float)i * 1.08);
      if(s>240 && s<366)
        printf("Summa s prosentami=%.2f", (float)i * 1.15);
    }
  return 0;
}
