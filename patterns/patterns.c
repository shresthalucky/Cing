void pattern_1(int rows){
	int a, b;

	for(a=1; a<=rows; a++){
		for(b=1; b<=rows; b++){
			printf("*");
		}
		printf("\n");
	}
}

void pattern_2(int rows){
    int a, b, c;

    for(a=1; a<=rows; a++){

        for (b=a; b<=rows; b++){
            printf("*");
        }
        printf("\n");
    }
}

void pattern_3(int rows){
    int a, b, c;

    for(a=1; a<=rows; a++){
        for(b=1; b<=rows; b++){
            if(b<=rows-a) {
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}

void pattern_4(int rows) {
	int a, b, c, x=1;

	for(a=rows; a>=1; a--){
        for(b=x; b>=1; b--){
        	printf(" ");
        }
        for(c=a; c>=1; c--){
        	printf("*");
        }
        x=x+1;

        printf("\n");
    }
}

void pattern_5(int rows){
    int a, b, c, x=1;

    for(a=1; a<=rows; a++){

        for(b=x; b<=rows; b++){
            printf(" ");
        }

        for(c=0; c<a; c++){
            printf("*");
        }

        x = x+1;

        printf("\n");
    }

    x = 1;

    for(a=rows-1; a>=1; a--){
        for(b=x; b>=0; b--){
            printf(" ");
        }
        for(c=a; c>=1; c--){
            printf("*");
        }
        x=x+1;
        printf("\n");
    }
}

void pattern_6(int rows){
    int a, b, c, x=1;

    for(a=1; a<=rows; a++){

        for(b=x; b<=rows; b++){
            printf(" ");
        }

        for(c=1; c<=a; c++){
            printf("* ");
        }
        x=x+1;


        printf("\n");
    }

}

void pattern_7(int rows){
    int a, b, c, x=1;

    for(a=1; a<=rows; a++){

        for(b=x; b<=rows; b++){
            printf(" ");
        }

        for(c=1; c<=a; c++){
            printf("*");
        }
        a=a+1;
        x=x+1;


        printf("\n");
    }

}


void pattern_8(int rows){
    int a, b, c, num=1;

    for(a=1; a<=rows; a++){

        for (b=1; b<=a; b++){
            printf("%d ", num);
            num = num+1;
        }
        printf("\n");
    }
}


void pattern_9(int rows){
    int a, b, c, num=10;

    for(a=1; a<=rows; a++){

        for (b=1; b<=a; b++){
            printf("%d ", num);
            num = num-1;
        }
        printf("\n");
    }
}

void pattern_10(int rows) {
	int a, b, count=0, x=1, space;

	for(a=1; a<=2*rows; a=a+2){

		for(space=x; space<=rows; space++){
            printf(" ");
        }

		for(b=1; b<=a; b++){
			printf("%c", '1'+count);
			if(b<=a/2){
				count++;
			}else{
				count--;
			}
		}
		x = x+1;
		count=0;
		printf("\n");
	}

}