#include <stdio.h>


int send_down(int val, int *ptrval, int **dblptr){

	printf("%d, %d, %d,\n %p, %p, %p \n", val, ptrval, dblptr, &val, &ptrval, &dblptr);

}

char check_str(char str, char *strp, char **dblstr){
	printf("\n%s, %s, %s\n", &str, strp, dblstr);
}

int main(void){

	int val = 2;
	int *ptrval = &val;

	int **dblptr = &ptrval;

	char str = "first";
	char *strp = &str;
	char **dblstr = &strp;

	// send_down(val, ptrval, dblptr);
	// check_str(str, strp, dblstr);
	int numbers[5] = {1,2,3,4,5};
	int numbers2[5] = {6,7,8,9,0};
	int *ptr1 = numbers;
	int *ptr2 = numbers2;
	 
	// this will compile
	ptr1 = ptr2;

	 int i;
	// print the addresses
	printf("numbers = %p\n", (void *)numbers);
	printf("numbers2 = %p\n", (void *)numbers2);
	printf("ptr1 = %p\n", (void *)ptr1);
	printf("ptr2 = %p\n", (void *)ptr2);
	for (i = 0; i < 5; i++ ) {
	  int value = *ptr1++;
	  printf("%d, *ptr++ = %d\n", i, value);
	 }
}