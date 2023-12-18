#include<stdio.h> 
#include<stdlib.h>

int Factorial_by_recur(int num);
int Factorial_by_lopin(int num);

int main(){
    int num, factorial;
    printf("Enter the number : ");scanf("%d",&num);
    factorial = Factorial_by_recur(num);
    printf("factorial of  the number  by recursion: %d\n", factorial);
    factorial = Factorial_by_lopin(num);
    printf("factorial of  the number  by non recursion: %d\n", factorial);
    return 0;
}

int Factorial_by_recur(int num){
    if(num == 0){
        return 1;
    }else{
        return num*Factorial_by_recur(num-1);
    }
}
int Factorial_by_lopin(int num){
   if(num == 0){
        return 1;
    }else{
        int val = 1;
        for(int i = 1; i<=num; i++){
            val *= i;
        }
        return val;
    }
}