#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[], int elmt,int low, int high);

int main(){
    int len; 
    
    printf("Enter the len of array : ");scanf("%d", &len);

    int arr[len];
    printf("Enter the elments of array :\n");
    for(int i =0 ;i<len;i++){scanf("%d", &arr[i]);}

    int elment;
    printf("Enter the Element to search : ");scanf("%d", &elment);

    int index = binarySearch(arr,elment,0, len);
    if( index == -1){
        printf("Element Not in array");
    }else{
        printf("Element found in %d index in the array", arr[index]);
    }
}


int binarySearch(int arr[], int elmt,int low, int high){
    if(low < high){
        int mid = (int)((low + high)/2);
        if(arr[mid] == elmt){
            return mid;
        }else if(arr[mid] < elmt){
            return binarySearch(arr,elmt,mid, high);
        }
        return binarySearch(arr,elmt,low,mid);
    }
    return -1;
}