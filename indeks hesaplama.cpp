#include <iostream>
#include <math.h>
int main()
{
	float  kilo,boy,vki;
	printf("\n kilonuzu kilogram cinsinden giriniz");
	scanf("%f",&kilo);
	printf("\n boyunuzu metre cinsinden  giriniz");
	scanf("%f",&boy);
	printf("\n  vki=kilo/(boy*boy)=%f" , vki=kilo/(boy*boy));

	if(vki<18.5)
	{
		printf("ZAYIF");
	}
	if(vki>=18.5 && vki<=24.9)
	{
		printf("NORMAL");
	}
	if(vki>=25 && vki<=29.9)
	{
		printf("FAZLA KÝLOLU");
	}
	if(vki>=30 && vki<=34.9)
	{
		printf("1.DERECE OBEZ");
	}
	if(vki>=35 && vki<=39.9)
	{
		printf("2.DERECE OBEZ");
	}
	if(vki>40)
	{
		printf("3.DERECE OBEZ");
	}
	system("pause");
	return 0;
}
