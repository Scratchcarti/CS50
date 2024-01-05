#include <stdio.h>
#include <string.h>

int main (void)
{
	int count=0,i,j,newrate;
	
	struct currency
	{
	char code[4];
	float rate;
	}
	;

	struct currency exc[192];

exc[1].code = "INR"; exc[1].rate = 1;
exc[2].code = "USD"; exc[1].rate = 0.012;
printf("Currency to convert FROM:     ");
scanf("%s", tempfrom);

from:

for (i =0; i < 192; i++)
{
if (strcmp(tempfrom,exc.code[i])==0)
{
	count++;
	break;
}
if (count == 0)
{
	printf("Currency not found\nAdd this currency by entering the name then the exchange rate with inr");
	scanf("%s",new);
	scanf("%d",&newrate);
	goto from;
}


printf("Currency to convert TO:     " );

scanf("%s", tempto);

to:

count = 0;

for (j =0; j < 192; j++)
{
if (strcmp(tempto,exc.code[i])==0)
{
	count++;
	break;
}
}

if (count == 0)
{
	printf("Currency not found\nAdd this currency by entering the name then the exchange rate with inr");
	scanf("%s",new);
	scanf("%d",&newrate);

	goto to;
}


}
}