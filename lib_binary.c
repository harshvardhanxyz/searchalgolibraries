

#include  <stdio.h>

int binary()  {

	int arr[100],i,n,mid,key,high,low;

	printf("enter the no of elements");
	scanf("%d",&n);
	
	printf("enter the elements in ascending order");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("enter the key element");
	scanf("%d",&key);
	
	high=n-1;
	low=0;
	mid=(high+low)/2;

	while(low<=high)  {

                if(arr[mid]<key) 
                        low=mid+1;
		else if(arr[mid]==key){
			printf("key found at position %d",mid);
			break;

		}
			
		else
			high=mid-1;
			mid=(high+low)/2;
	}
	
	if(low>high)
		printf("invalid!!");
		return 0;

}
				
