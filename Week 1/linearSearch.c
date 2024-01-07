#include<stdio.h>


/* This Function linear search 'element' in the array 'arr' in length 'len' if found it returns index of  first occurence else it return -1*/
int linearSearch(int element, int* arr, int len);
/* Gets input from user and fill it in given array of length 'len' */
int getArrayElement(int* arr, int len);


int main(){
    printf("Enter the length of array : ");
    int len;scanf("%d", &len);
    int arr[len];
} 

int linearSearch(int element, int* arr, int len){
    for(int i = 0; i < len; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int getArrayElement(int* arr, int len){
    for(int i = 0; i < len; i++){
        printf("Enter the %d Element : ", i + 1);
    }
}