#include<stdio.h>
int main(satyam)
{
	int n,key,flag=0,a[20],i,pos,beg,end,mid;
	printf("\n Enter The No. of Elements:");
	scanf("%d",&n);
	printf("\n Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("\n Enter The No. That You Wants You Search : \n");
		scanf("%d",&key); // Inputing of key...
		beg=0;
		end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==key)
		{
		printf("\n  %d is found at position:%d",key,mid+1);
		flag++;
		break;
	}
    	else if(key<a[mid])
	     end=mid-1;
	  else
	     beg=mid+1;
	}
	if(flag==0)
	printf("\n %d is not found In the Given Nos.",key);
}


