#include <stdio.h>
#include <string.h>
#define  MAX 193

int main (void)
{
	int count=0,i,j,opt;
	char tempfrom[4],tempto[4],new[4];
	float newrate,amount;

	struct currency
	{
	char code[4];
	float rate;
	}
	;

	struct currency exc[MAX];

strcpy(exc[0].code,"INR"); exc[0].rate = 1;
strcpy(exc[1].code,"USD"); exc[1].rate = 0.012;
strcpy(exc[2].code,"GBP"); exc[2].rate = 0.012;
strcpy(exc[3].code,"AED"); exc[3].rate = 0.012;
strcpy(exc[4].code,"EUR"); exc[4].rate = 0.012;
strcpy(exc[5].code,"RUB"); exc[5].rate = 0.012;
strcpy(exc[6].code,"USD"); exc[6].rate = 0.012;


printf("Currency to convert FROM(ex: USD...):  ");
scanf("%s", tempfrom);

from:

for (i =0; i < 192; i++)
{
if (strcmp(tempfrom,exc[i].code)==0)
{
	count++;
	break;
}

}
if (count == 0)
{
	printf("Currency not found\nEnter 1 to ADD this new currency\nEnter 2 to EXIT\n");
	scanf("%d",&opt);
	if (opt == 1 )
	{

	printf("ENTER THE EXCHANGE RATE OF THIS CURRENCY WITH ONE INR:   ");
	scanf("%f",&newrate);

	strcpy(exc[MAX-1].code,tempfrom); exc[MAX-1].rate = newrate;

	goto from;
	}

	if (opt == 2)
	{
		return 1;
	}
}


printf("Currency to convert to(ex:INR...):  " );

scanf("%s", tempto);

to:

count = 0;

for (j =0; j < 192; j++)
{
if (strcmp(tempto,exc[j].code)==0)
{
	count++;
	break;
}
}

if (count == 0)
{
	printf("Currency not found\nEnter 1 to ADD this new currency\nEnter 2 to EXIT\n");
	scanf("%d",&opt);
	if (opt == 1 )
	{
	printf("ENTER THE EXCHANGE RATE OF THIS CURRENCY WITH ONE INR:   ");
	scanf("%f",&newrate);

	strcpy(exc[MAX-2].code,tempto); exc[MAX-2].rate = newrate;

	goto to;
	}

	if (opt == 2)
	{
		return 2;
	}
}

printf("Enter the amount to be converted:  ");
scanf("%f",&amount);

		printf("%f from %s to %s is %f\n", amount,exc[i].code,exc[j].code,amount*((exc[j].rate)/exc[i].rate));

	return 0;

}
