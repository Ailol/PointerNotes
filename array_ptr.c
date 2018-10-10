#include <stdio.h>

/**
 * @ARRAY POINTERS
 *    Pointers to array NEED TO MATCH TYPE
 */

/*
	@ARRAY_POINTER_INCREMENT
		[INFO]ptr1 = ptr1

		INDEX: 0, *ptr++ = 1
		INDEX: 1, *ptr++ = 2
		INDEX: 2, *ptr++ = 3
		INDEX: 3, *ptr++ = 4
		INDEX: 4, *ptr++ = 5
	
	[INFO]Assigning ptr1 = ptr2

		INDEX: 0, *ptr++ = 6
		INDEX: 1, *ptr++ = 7
		INDEX: 2, *ptr++ = 8
		INDEX: 3, *ptr++ = 9
		INDEX: 4, *ptr++ = 0
	
	@ARRAY_POINTER_PRINT
	
	[INFO]: (void*) prints ptr mem addr,
	[INFO]: & prints val mem addr

		(void*)ptr1 : 0x7fff2745d590
		(void*)ptr2: 0x7fff2745d590
		&ptr1 : 0x7fff2745d560
		&ptr2: 0x7fff2745d568

*/

int print_function(int *ptr1){
	int i;

	for (i = 0; i < 5; i++ ) {
		int value = *ptr1++;
		printf("INDEX: %d, *ptr++ = %d\n", i, value);
	}
	printf("\n");

}

int pointer_increment(){

	int i;
	int numbers[5] = {1,2,3,4,5};
	int numbers2[5] = {6,7,8,9,0};
	int *ptr1 = numbers;
	int *ptr2 = numbers2;
	
	printf("\n[INFO]ptr1 = ptr1\n\n");
	print_function(ptr1);

	/* Assign ptr1 as ptr2, which overwrites the
	   current value, and both point to the same
	   memory space */
	printf("[INFO]Assigning ptr1 = ptr2\n\n");

	ptr1 = ptr2;
	print_function(ptr1);

	printf("[INFO]: (void*) prints ptr mem addr,\n[INFO]: & prints val mem addr\n\n");

	printf("(void*)ptr1 : %p\n(void*)ptr2: %p\n", (void *)ptr1, (void*)ptr2);
	printf("&ptr1 : %p\n&ptr2: %p\n", &ptr1, &ptr2);

	
}

int main(void){

	pointer_increment();


}