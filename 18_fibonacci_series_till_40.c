//C Program to print fibonacci series till 40

#include<stdio.h>

int main(){
    int first=0, second=1, next;
    while(first<=40){
    for (int i=0; i<10; i++){
        printf("%d\t", first);
        next=first+second;
        first=second;
        second=next;
        }    
    }
}
