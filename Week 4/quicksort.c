#include<stdio.h>
#include<stdlib.h>

int quickSort(int* arr, int low, int high);
int partition(int* arr, int low, int high);
void printArray(int* arr, int len);
void swap(int* a, int* b);


int main(){
    int len;
    printf("Enter the length of array : "); scanf("%d", &len);
    
    int arr[len];
    printf("Enter the elements of array :");
    for(int i =0 ;i<len;i++){scanf("%d",&arr[i]);}

    printf("Before Sorting : \n");
    printArray(arr, len);

    quickSort(arr,0,len-1);

    printf("After Sorting : \n");
    printArray(arr, len);
}

void printArray(int* arr, int len){
    printf("\n");
    for (int i = 0; i < len; i++){
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

void swap(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int quickSort(int* arr, int low, int high){
    if(low < high){
        pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }

    return 0;
}
int partition(int *arr, int low, int high){
    int pivot = arr[high];
    int lft = low;
    int ryt = high;
    while (lft < ryt){
        
    }
    
}