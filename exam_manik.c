#include <stdio.h>

int main()
{

	int price,time;
	float sales_price;
	printf("Please input Price and time:");
	scanf("%d%d",&price,&time);

	if(2 <= time && time < 4){
		sales_price = price*1.2; 
	}else if(4 <= time && time < 6){
		sales_price = price*1.3; 
	}else if(6 <= time && time < 8){
		sales_price = price*1.4;
	}else if(8 <= time && time < 10){
		sales_price = price*1.5;
	}
	else if(10<=time){
		sales_price = price*1.6;
	}
	printf("Price is:%.2f",sales_price);

	return 0;


}