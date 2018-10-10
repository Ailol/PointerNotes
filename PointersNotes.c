#include <stdio.h>
/**
 * @POINTERS CHEAT SHEET
 *   * = Declaration of pointers and dereferencing
 *   	 SIZES : 32 bits sys = 4 BYTES or 32 BITS 
 *  	 		 64 bits sys = 8 BYTES or 64 BITS
 *  	 DEREFERENCING:
 *  	 	Not assigning values, indirectly access
 *  	 	the address stored in the pointer
 *  	 		- Either get a value OR set a value. 
 *  	
 *  	
 *   & = Gets the addr of another variable.
 *   	 Used to assign value to a pointer
 *   	 EX: *ptr = &val
 */

/**
 * Showing pointer arithmetics on how to increment 
 * values through pointers. 
 */

int pointer_referencing(){

	/* PTR: Either value OR memory space*/
	int val = 1;
	int *ptr = &val;

	/* NOTE: *ptr for value printing */
	printf("PTR value: %d\nVAL value: %d\n", *ptr, val);
	printf("PTR MEM ADDR: %p\nVAL MEM ADDR: %p\n",&ptr, &val);
}

int main(void){
	pointer_referencing();
	// pointer_increment();

}