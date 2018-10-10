#include <stdio.h>


/*	
@POINTER TO STRUCT DEREFERENCING
	
	struct person first;
	struct person ptr;

	first.age = 21;
	first.name = "Allan Kellan";

	*ptr = &first;

	[PRINT OUTPUT]: 
		first.age  = 21
		first.name = Allan Kellan
		ptr->age  = 21
		ptr->name = Allan Kellan

=====================================
	
@POINTER TO POINTER
	
	int val = 1;
	int *ptr = 0;
	int **double_ptr = 0;

	ptr = &val;
	double_ptr = &ptr;

	[PRINT OUTPUT]
		(void *)&ptr = 0x7ffc41eb8da8,
		(void *)&val = 0x7ffc41eb8da4
		(void *)double_ptr = 0x7ffc41eb8da8,
		(void *)*double_ptr = 0x7ffc41eb8da4
		 		**double_ptr = 1
*/


struct person{
	int age;
	char *name;
};

int pointer_struct(){


	printf("\n ====================================== \n");
	printf("\n[INFO]: POINTER TO STRUCT DEREFERENCING\n");

	struct person first;
	struct person *ptr;

	first.age = 21;
	first.name = "Allan Kellan";
	ptr = &first;

	/* How different type of referencing works. */

	printf("\nfirst.age  = %d\nfirst.name = %s\n", first.age, first.name);
	printf("\n[INFO]: Assigning *ptr = &first\n\n");
	printf("ptr->age  = %d\nptr->name = %s\n", first.age, first.name);
	printf("\n");
	printf("\n ====================================== \n");
}

int pointer_to_pointer(){


	printf("\n[INFO]: POINTER TO POINTER\n\n");

	int val = 1;
	int *ptr = 0;
	int **double_ptr = 0;

	ptr = &val;

	double_ptr = &ptr;


	printf("(void *)&ptr = %p,\n(void *)&val = %p\n", (void *)&ptr, (void *)&val);
	printf("(void *)double_ptr = %p,\n(void *)*double_ptr = %p\n", (void*)double_ptr, (void*)*double_ptr);
	printf("       **double_ptr = %d\n\n", **double_ptr);

	printf("\n ====================================== \n\n");
}

int main(void){

	pointer_struct();
	pointer_to_pointer();


}