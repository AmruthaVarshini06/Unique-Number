#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int l[10]={0},rem,i,u=1;
	while(n>0){
		rem = n%10;
		l[rem]++;
		n = n/10;
	}
	for(i=0;i<10;i++){
		if(l[i]>1){
			u = 0;
			break;
		}
	}
	if(u){
		printf("Unique Number");
	}
	else  { 
	    printf("Not Unique Number");
    }
    return 0;
}
