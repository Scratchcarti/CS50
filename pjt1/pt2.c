#include <stdio.h>
#include <string.h>

int main (void)
{
	struct
	{
	char code[4];
	float rate;
	}
	currency;

	struct currency exc[192];
exc[1].code = "INR"; exc[1].rate = 1;
printf("Currency to convert FROM:     ");
scanf("%s", tempfrom);
printf("Currency to convert TO:     " );
scanf("%s", tempto);
for (int i =0; i < 192; i++)
{
if (strcmp(tempto,exc.code[i])==0)
}
printf("Enter the amount to be converted:           ");
scanf("%s", amount);


}