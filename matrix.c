#include<stdio.h>

main()
{
int mat[10][10],matt[10][10],mattt[10][10],i,j;

printf("enter the first matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	scanf("%d",&mat[i][j]);
}
	}	
		printf("enter the second matrix");
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			scanf("%d",&matt[i][j]);
		}
		
	
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
		mattt[i][j]=mat[i][j]+matt[i][j];
		}
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("%d",&mattt[i][j]);
	}
	 if(j==2)
            {
                printf("\n\n");
            }
		
		
			}	
			
