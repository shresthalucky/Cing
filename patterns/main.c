#include <stdio.h>
#include "patterns.c"


int main() {

	int rows;

    printf("Number of rows: ");
    scanf("%d", &rows);

	pattern_1(rows);
	pattern_2(rows);
	pattern_3(rows);
	pattern_4(rows);
	pattern_5(rows);
	pattern_6(rows);
	pattern_7(rows);
	pattern_8(rows);
	pattern_9(rows);
	pattern_10(rows);

    return 0;
}	