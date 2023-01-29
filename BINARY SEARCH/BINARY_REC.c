#include <stdio.h>
#include <stdlib.h>
void BinarySearch(int arr[],int num,int first,int last)
{
    int mid;
    if(first > last){
       printf("Number is not found");
    }
	else {
       
        mid = (first + last)/2;
    }
    if(arr[mid]==num){
          
            printf("Element is found at position %d ",mid+1);
            exit(0);
			
	}else if(arr[mid] > num){
            
            BinarySearch(arr, num, first, mid-1);
        
    }else{
            
            BinarySearch(arr, num, mid+1, last);
        }   
    }  


int main(){

   int arr[100],key,mid,end,i,n,num;

   printf("Enter the size of an array ");
   scanf("%d",&n);

   printf("Enter the values in sorted sequence \n");

   for(i=0;i<n;i++)
   {   
       scanf("%d",&arr[i]);
   }   


   key=0;
   end=n-1;

   printf("Enter a value to be search: ");
   scanf("%d",&num);

   BinarySearch(arr,num,key,end);

}
