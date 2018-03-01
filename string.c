#include <stdio.h>
#include <ctype.h>

int main(){
    char a[20], b[20], i;
    printf("Enter string :");
    scanf("%[^\n]",a);
    puts(a);
    for(i=0; *(a+i)!='\0'; i++){
        if(islower(*(a+i))!=0){
            *(b+i) = toupper(*(a+i));
        }else if(islower(*(a+i))==0){
            *(b+i) = (*(a+i));
        }
    }
    *(b+i) = '\0';
    printf("New string %s\n", b);
}
