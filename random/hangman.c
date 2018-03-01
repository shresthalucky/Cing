#include <stdio.h>
char a[]="I LOVE C PROGRAMMING";
char ques[] = "_ L_V_ C P_____M___G";
char opt;

int compare(){
    int temp=0;
    for(int i=0; i<20; i++){
        if(a[i]==ques[i]){
            temp++;
        }
    }
    if(temp==20){
        return 1;
    }else return 0;
}

void print(){
  int i;
  for(i=0; i<20; i++){
        if(opt==a[i]){
            ques[i] = opt;
        }
  }
  printf("%s\n", ques);
}

int main(){
    int count=0 ,i;
    printf("HANG MAN\n");
    puts(ques);
    do{
        printf("Enter Character: ");
        scanf("%c", &opt);
        for(i=0; i<20; i++){
            if(opt==a[i]){
                print();
                break;
            }
            else{
              if(i==19){
                count++;
              }
            }
        }
        printf("Chances left = %d\n", 7-count);
        if(compare()==1) break;
        fflush(stdin);
    }while(count<7);

    if((count>=0 && count<7) && compare()==1){
        printf("You have won!\n");
    }else{
      printf("You have lost!\n");
    }
    return 0;
}
