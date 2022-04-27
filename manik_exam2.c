#include <stdio.h>

int main()
{
	int t;
	int res;
	printf("The following integers have 5 factors besides 1 and itself\n");
	for(int i=2;i<=1000;i++){
		t=0;
		for(int j=2;j<i;j++){
			if(i%j == 0){
				t++;
			}
		}
		if(t>=5){
			printf("%d\n",i);
		}
		t=0;
	}

	return 0;

}