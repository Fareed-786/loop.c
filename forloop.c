#include <stdio.h>
int main() {
    int num = 0,i,j;
    printf("Enter no. of rows for pattern:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
	{
        for(j=i; j<=i && j>0; j--)
		{
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
