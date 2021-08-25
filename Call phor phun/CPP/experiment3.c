#include <stdio.h>

void insertion(int arr[],int n,int ele,int pos){
	for(int i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
	arr[pos]=ele;
}


void deletion(int arr[],int n,int pos){
	for(int i=pos;i<n-1;i++)
		arr[i]=arr[i+1];
}


int binarysearch(int arr[],int k,int lo,int hi){
    int mid=(lo+hi)/2;

	if(lo>hi)
		return -1;
	else if(k==arr[mid])
		return mid;
	else if(k<arr[mid])
		return binarysearch(arr,k,lo,mid-1);
	else
		return binarysearch(arr,k,mid+1,hi);
}


int main(){
	int n;
	printf("enter size of array:\n");
	scanf("%d",&n);
	int arr[n];
	int i=0;

	while(i!=n){
		printf("enter %d element of array:\n",i+1);
		scanf("%d",&arr[i]);
		i++;
	    }

	int ele;
	printf("enter the element you want to search:\n");
	scanf("%d",&ele);
	int index=binarysearch(arr,ele,0,n-1);

	if(index!=-1){
		deletion(arr,n,index);
		n=n-1;
	    }
	else{
		int k;
		printf("enter the position where you want to insert an element:\n");
		scanf("%d",&k);
		insertion(arr,n,ele,k-1);
		n=n+1;
	    }

	for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

	return 0;
}