#include <stdio.h>
#include <stdlib.h>

void menu() {
	printf("--------HELLO--WORLD--PROGRAM--------\n");
	printf("--------HELLO--WORLD--PROGRAM--------\n");
	printf("--------HELLO--WORLD--PROGRAM--------\n");
	printf("--------HELLO--WORLD--PROGRAM--------\n");
}

int main(void) {
    int a;
	menu();
    printf("Please input a:");
    scanf("%d", &a);
    printf("a = %d\n", a);
	system("pause");
    return 0;
}
