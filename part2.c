#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ROWS 250
#define MAX_PER_ROW 256





//Print the string
 void println(char* str1){
     int i=0;
    if(str1[i]=='\n'){
        return;
    }
    while (str1[i]!=0)
    {
        printf("%c",str1[i]);
int substring(char* str1, char* str2){
     return 0;
 
 }

      //     caats      cat     2
 int similar (char* s, char* t, int n){
     if (strlen(t)>strlen(s)){
         return 0;
     }
+    if (strlen(t)==strlen(s) ) {
         return substring(s,t);
     }
     int i=0, j=0,counter=0;
     int similar (char* s, char* t, int n){
     return 0;
 }
  
 void print_similar_words(char* str,char* s){
     int i=0,num=0;
     similar(str,s,1);
 }
 

int main() {
    char letter;
    int count=0;
    char buffer;
    char Line[MAX_PER_ROW];
    char check [30];
    int i=0,j=0;
    scanf("%c",&letter);
    while(letter!=' '){
        check[i]=letter;
         i++;
        scanf("%c",&letter);
 
    }
    check[i]='\0';
    scanf("%c\n",&letter);
 
 

   if(letter == 'a'){
        for(i=0;i<MAX_ROWS;i++){
            scanf("%c",&buffer);
            count++;
            while(buffer!='\n' && count<MAX_PER_ROW ){
                Line[j++]=buffer;
                scanf("%c",&buffer);
                
            }
            Line[j]=0;
            j=0;
            substring(Line,check);
            count=0;            
            
 
   }
     if(letter == 'b'){
        for(i=0;i<MAX_ROWS;i++){
            scanf("%c",&buffer);
            count++;
            while(buffer!='\n' && count<MAX_PER_ROW && buffer!=' '){
                Line[j++]=buffer;
                scanf("%c",&buffer);
                 
             }
            Line[j]=0;
            j=0;
            print_similar_words(Line,check);
            count=0;            
            
 
            if(*(letter) == 'b'){
                print_similar_words(wordToSearch,line);
           }
           
         }
        count++;

        

        
     }

    
     
     return 0;
 }

