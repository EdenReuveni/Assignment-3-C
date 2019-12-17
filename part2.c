#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char s[256];
char word[30];
char wordToSearch[30];
char letter[2];

int getLine1(char s[]){
int i=0,count=0;
while(s[i]!=0){
    if(s[i]=='\n'){
       return count; 
}
i++;
count++;
}
return count;
}

//just to print in line
void println(char* str1){
    int i=0;
   while (str1[i]!=0)
   {
       printf("%c",str1[i]);
       i++;
   }
   printf("\n");
}


                 //cat is cats                cat
int substring(char* str1, char* str2){
    int i=0,j=0;
    while(str1[i] != 0){
        j=0;                  //i=0    j=0
        if(str1[i]==str2[j]){ //chis   cat  
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
char* Buildword(char w[],int choice){
    int i=0;
    if(choice==0){
    while(w[i]!=0){
        if(w[i]=='\n' || w[i]== ' ' || w[i]=='\t'){
            break;
        }
        word[i]=w[i];
        i++;
    }
   
   
     word[i]=0;
     return word;
    }
    //For WordToSearch
    if(choice==1){
        while(w[i]!=0){
        if(w[i]=='\n' || w[i]== ' ' || w[i]=='\t'){
            break;
        }
        wordToSearch[i]=w[i];
        i++;
    }
   
   
     wordToSearch[i]=0;
     return wordToSearch;
    }

    //letter builder 
     if(choice==2){
        while(w[i]!=0){
        if(w[i]=='\n' || w[i]== ' ' || w[i]=='\t'){
            break;
        }
        letter[i]=w[i];
        i++;
    }
   
   
     letter[i]=0;
     return letter;
    }
 }

       //     caats      cat     2
int similar (char* s, char* t, int n){
    if (strlen(t)>strlen(s)){
        return 0;
    }
    if (strlen(t)==strlen(s) && n==0) {
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

int countLetters(char s[]){
    int count=0,i=0;
    while(s[i]!=0){
          if(s[i]=='\n' || s[i]== ' ' || s[i]=='\t'){
              return count;
          }
          count++;
          i++;
    }
    return count;
}

void print_similar_words(char* str,char* s){
    int i=0,num=0;
    char* ptr=NULL;
    while (s[i]!=0)
    {
       num=countLetters(s+i);
       ptr=Buildword(s+i,0);
       if(strlen(ptr)==strlen(str)){
           similar(ptr,str,0);
       }
       else{
           similar(ptr,str,1);
       }
       
       ptr=NULL;
       i+=num+1;
    } 
}

char* BulidNewString(char* ptr){
    int i=0;
    while(*(ptr+i)!=0){
        if(*(ptr+i)=='\n'){
            break;
        }
        s[i]=*(ptr+i);
        i++;
    }
    s[i]=0;
    return s;

}


void print_lines(char* s,char *s_ptr){
    // char* ptr=NULL;
    int i=0,num=0;
    // while(s[i]!=0){
        // num = getLine1(s+i);
        // ptr=BulidNewString(s+i);
        substring(s,s_ptr);
        
              
        
    // }



}



int main(int argc,char* argv[]) {
    int num=0;
    int count=0;
    char* letter=NULL;
    char* wordToSearch=NULL;
    char* Line=NULL;
    char* var=NULL;
    char* lineToCompare=NULL;
     FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    fp = fopen(argv[1], "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        var = line;
        if(count==0){
             num = countLetters(line);
             wordToSearch = Buildword(line,1);//Build word to search 
             letter = Buildword(line+num+1,2);//choose which action to do 
        }
        if(count>1){
            if(*(letter) == 'a'){
                lineToCompare = BulidNewString(line);
                print_lines(lineToCompare,wordToSearch);
                
            }

            if(*(letter) == 'b'){
                print_similar_words(wordToSearch,line);
           }
           
        }
        count++;

        

        
    }

    fclose(fp);
    
    return 0;
}
