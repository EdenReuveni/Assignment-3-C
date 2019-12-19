#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ROWS 250
#define MAX_PER_ROW 256
#define WORD_LENGTH 30


 


//Print the string
 void println(char* str1){
     int i=0;
    if(str1[i]=='\n'||str1[i]==' '){
        return;
    }
    while (str1[i]!=0)
    {
        printf("%c",str1[i]);
        i++;
 
     }  
     printf("\n");
 }


 int substring(char* str1, char* str2){
    int i=0,j=0;
    while(str1[i] != 0){
        j=0;                  
        if(str1[i]==str2[j]){  
            while(str1[i]!=0 && str2[j]!=0){
                 j++;
                 i++;
                if(str1[i]!=str2[j]){
                   break;
                }
                
            }
            if(str2[j]==0){
                println(str1);
                return 1;
            }
        }
        i++;
    }
    return 0;

}

      //     caats      cat     2
int similar(char* s, char* t, int n){
    if (strlen(t)>strlen(s)){
        return 0;
    }
    if (strlen(t)==strlen(s)) {
        return substring(s,t);
    }
    int i=0, j=0,counter=0;
    while (s[i]!=0 && t[j]!=0){
        if (s[i]==t[j]){
        i++;
        j++;
        counter++;
        }
    
        if (s[i]!=t[j])
        {
            i++;
        }
    }
    int diff=strlen(s)-counter;
    if (diff==n){
        println(s);
        return 1;
    }
    return 0;
}
  
 

int main() {
    char letter;
    int count=0;
    char buffer;
    char Line[MAX_PER_ROW];
    char check[WORD_LENGTH];
    char similarArray[WORD_LENGTH];
    int i=0,j=0;
    scanf("%c",&letter);
    while(letter!=' '){
        check[i]=letter;
         i++;
        scanf("%c",&letter);
 
    }
    check[i]='\0';
    scanf("%c\n",&letter);
 
    scanf("%c",&buffer);
   if(letter == 'a'){
        for(i=0;i<MAX_ROWS;i++){
            count++;
            while(buffer!='\n' && count<MAX_PER_ROW ){
                Line[j++]=buffer;
                scanf("%c",&buffer);
                count++;
            }
            Line[j]=0;
            scanf("%c\n",&buffer);  
            j=0;
            substring(Line,check);
            count=0;            
            
 
   }
   }
     if(letter == 'b'){
        for(i=0;i<MAX_ROWS ;i++){
            while(buffer!='\n' && j<WORD_LENGTH && buffer!=0 && buffer!='\t' && buffer!=' '){
                similarArray[j++]=buffer;
                scanf("%c",&buffer);
            }
              similarArray[j]=0;
              similar(similarArray,check,1);
              j=0;
              scanf("%c",&buffer);
        }
     return 0;
 }
}
