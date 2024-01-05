#include<stdio.h>

void currencyconvert(int value)
{
	float rupeesvalue;
	printf("Enter how many Indian Rupees(INR) you want to convert\t");
	scanf("%f",&rupeesvalue);
	switch(value)
	{
		case 1:
			printf("%f Indian Rupees(INR) in Euro(EUR) is %f \n",rupeesvalue,(rupeesvalue*0.011));
			break;
		case 2:
			printf("%f Indian Rupees(INR) in Pound Sterling(GBP) is %f\n",rupeesvalue,(rupeesvalue*0.0094));
			break;
		case 3:
			printf("%f Indian Rupees(INR) in Dollar(USD) is %f\n",rupeesvalue,(rupeesvalue*0.012));
			break;
		case 4:
			printf("%f Indian Rupees(INR) in Australian Dollar(AUD) is %f\n",rupeesvalue,(rupeesvalue*0.018));
			break;
		case 5:
			printf("%f Indian Rupees(INR) in Canadian Dollar(CAD) is %f\n",rupeesvalue,(rupeesvalue*0.016));
			break;
		case 6:
			printf("%f Indian Rupees(INR) in South Korean Won(KRW) is %f\n",rupeesvalue,(rupeesvalue*15.75));
			break;
		case 7:
			printf("%f Indian Rupees(INR) in Indonesian Rupiah(IDR) is %f\n",rupeesvalue,(rupeesvalue*186.21));
			break;
		case 8:
			printf("%f Indian Rupees(INR) in Iranian Riyal(IRR) is %f\n",rupeesvalue,(rupeesvalue*506.24));
			break;
		case 9:
			printf("%f Indian Rupees(INR) in Iraqi Dinar(IQD) is %f\n",rupeesvalue,(rupeesvalue*15.77));
			break;
		case 10:
			printf("%f Indian Rupees(INR) in Japanese Yen(JPY) is %f\n",rupeesvalue,(rupeesvalue*1.73));
			break;
		case 11:
			printf("%f Indian Rupees(INR) in Kuwaiti Dinar(KWD) is %f\n",rupeesvalue,(rupeesvalue*0.0037));
			break;
		case 12:
			printf("%f Indian Rupees(INR) in Malayasian Ringgit(MYR) is %f\n",rupeesvalue,(rupeesvalue*0.056));
			break;
		case 13:
			printf("%f Indian Rupees(INR) in Pakistani Rupee(PKR) is %f\n",rupeesvalue,(rupeesvalue*3.35));
			break;
		case 14:
			printf("%f Indian Rupees(INR) in Swiss Franc(CHF) is %f\n",rupeesvalue,(rupeesvalue*0.010));
			break;
		case 15:
			printf("%f Indian Rupees(INR) in Vietnamese dong(VND) is %f\n",rupeesvalue,(rupeesvalue*293.37));
			break;
		case 16:
			printf("%f Indian Rupees(INR) in Russian Ruble(RUB) is %f\n",rupeesvalue,(rupeesvalue*1.10));
			break;
		default:
			printf("Please enter valid input\n");
			break;
	}
}

int main()
{
	printf("Currency Converter....\n");
	int userinput,select;
	again:
		printf("Select Option....\n\n");
	    printf("1.Rupees to Euro(EUR)\n");
	    printf("2.Rupees to Pound Sterling(GBP)\n");
	    printf("3.Rupees to Dollar(USD)\n");
	    printf("4.Rupees to Australian Dollar(AUD)\n");
	    printf("5.Rupees to Canadian Dollar(CAD)\n");
	    printf("6.Rupees to South Korean Won(KRW)\n");
	    printf("7.Rupees to Indonesian Rupiah(IDR)\n");
	    printf("8.Rupees to Iranian Riyal(IRR)\n");
	    printf("9.Rupees to Iraqi Dinar(IQD)\n");
	    printf("10.Rupees to Japanese Yen(JPY)\n");
	    printf("11.Rupees to Kuwaiti Dinar(KWD)\n");
	    printf("12.Rupees to Malayasian Ringgit(MYR)\n");
	    printf("13.Rupees to Pakistani Rupee(PKR)\n");
	    printf("14.Rupees to Swiss Franc(CHF)\n");
	    printf("15.Rupees to Vietnamese dong(VND)\n");
	    printf("16.Rupees to Russian Ruble(RUB)\n");
	    scanf("%d",&userinput);
	    printf("\n");
	    currencyconvert(userinput);
	    printf("\n");
	printf("If you want to continue then enter 1 else enter 0\n");
	scanf("%d",&select);
	if(select==1)
	{
		goto again;
	}
	else
	{
		printf("Thanks....\n");
	}
	return 0;
}