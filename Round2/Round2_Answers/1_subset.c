#include <stdio.h>
int main()
{
	int no_of_element,no_of_subset,i,j,start,index,a[50],x;

	printf("\nEnter the size of main set: ");
	scanf("%d", &no_of_element);

	printf("\nEnter the elements of main set: ");
	for(x=0; x<no_of_element; x++)
	{
		scanf("%d",&a[x]);
	}		

	printf("\nThe subsets are :\n");

	for(no_of_subset=1; no_of_subset<=no_of_element; no_of_subset++)
	{
		for(start=0; start<=no_of_element-no_of_subset; start++)
		{
			if(no_of_subset==1)
			{
				printf("%d\n",a[start]);				
			}
			else
			{
				index=start+no_of_subset-1;
				for(j=index;j<no_of_element;j++)
				{
					for(i=start;i<index;i++)
					{
						printf("%d ",a[i]);						
					}

					printf("%d\n\n",a[j]);	
				}
			}
		}
	}
}
