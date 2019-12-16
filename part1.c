#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void shift_element(int* arr, int i){
int num1=*(arr);
int num2=0;
for(int j=0;j<=i+1;j++){
num2=*(arr+j+1);
*(arr+j+1) = num1;
num1=num2;
}}

void print1(int* ptr){

    for(int i=0;i<50;i++){
        if(i==49){
            printf("%d",*(ptr+i));
        }
        else{
        printf("%d,",*(ptr+i));
        }
    }

}

void swap12(int* ptr,int* ptr2){
    int num = *(ptr2);
    *(ptr2)=*(ptr);
    *(ptr)=num;
}

// [4,3,2,1]
// [3,4,2,1]  i=1
// [2,3,4,1] ,           i=2 ,j=1
//  [2,3,1,4]                      i=3
void insertion_sort(int* arr , int len){
int j=0;
for(int i=1;i<len;i++){

    if(*(arr+i)<*(arr+i-1)){
        swap12(arr+i,arr+i-1);
        j=i-1;
        while(j>0 && *(arr+j)<*(arr+j-1)){
            swap12(arr+j,arr+j-1);
            j--;
        }
    }
}
    
}   
int main(int argc,char* argv[]){
FILE *myFile;
myFile = fopen(argv[1], "r");
//read file into array
int numberArray[50];
int i;
  for (i = 0; i < 50; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }
    insertion_sort(numberArray,50);
    print1(numberArray);
    return 0;
}
