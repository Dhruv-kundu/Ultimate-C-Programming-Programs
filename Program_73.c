//         Program 73
// Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.
#include<stdio.h>

char* slice(int start_index , int end_index ,char st[]){
    int i = 0; 
    int count;
    char *ptr1 = &st[start_index];
    char *ptr2 = &st[end_index];

    st = ptr1;
    st[end_index]='\0';
    return st;
}

int main(){
    char st[]="Dhruv";
    int start_index=1 , end_index=3;
    printf("%s\n",st);
    printf("%s\n",slice(start_index,end_index,st));
    return 0;
}

// method 2 slice 
// #include<stdio.h>
// #include<string.h>
// char *slice(char source[],char result[], int start , int end){
//     int j =0 ;
//     for(int i =start ; i<end&& source[i]!='\0';i++){
//         result[j]=source[i];
//         j++;
//     }
//     result[j]='\0';
//     return result;
// } 
// int main(){
//     char st[]="Dhruv";
//     int start_index=1 , end_index=3;
//     char result[100];
//     printf("%s\n",st);
//     printf("%s\n",slice(st , result,start_index,end_index));

//     return 0;
// }
