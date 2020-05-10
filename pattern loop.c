 #include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("enter the number of rows=");
	scanf("%d",&n);
	for(i=0;i<=n;++i){
		for(j=0;j<=n-i;++j){
			printf(" ");
		}
		for(m=1;m<=i;m++){
			printf("01");
		}
       
     printf("\n");		
	}
	 for(i=0;i<=n;++i)
		{
			for(j=0;j<=i;++j)
			{
				printf(" ");
			}
			for(m=1;m<=n-i;m++)
			{ 
			printf("01");
			}
			printf("\n");
				}		
		
	return 0;
}
