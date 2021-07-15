#include<stdio.h>
void delation(int ar[],int size,int index){
    if(index > size){
        printf("invalid");
    }
    else{
        for(int a, i=index;i<size-1;i++){
            ar[i]=ar[i+1];
        }
    }
}
int main()
{
    int arr[6]={1,2,3,4,5};
    int size=6;
    delation(arr,6,2);
	for(int i=0;i<6;i++){
        printf("%d \n",arr[i]);
	}
	return 0;

}
