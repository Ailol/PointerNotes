#include <stdio.h>

static int add(int x, int y){

	// printf("%d\n", arr[0]);
	return x + y;
}	

static int sub(int x, int y){

	return x - y;
}

static int calc(int(*op)(int, int), int x, int y){
	return (*op)(x, y);

}


static void sayHello() {
	printf("hello world");
}
static void add_two(char *name, int x, int y){
	printf("%s gives: %d\n", name, x+y);
}

int main(void){
	/* Simple pfunc prototype  */
	/* A pointer to a function */
	void (*sayHelloPtr)() = sayHello;
	(*sayHelloPtr)();


	/* More complex versions */
 	int (*add_func)(int,int) = add;
 	int x = (*add_func)(16,4);
 	int i = calc(sub, 16, 4);

 	/* Gives the address of the function */
 	void(*p_add1)(char *, int, int) = add_two;
 	
 	/* Address of (&) operrates gives the addr of func */
 	/* Also yields a function pointer*/
 	void(*p_add2)(char *, int, int)	= &add_two;
 	
 	/* Value-at-address operator *add*/
 	/* gives the function of that addres */
 	void(*p_add3)(char *, int, int)	= *add_two;
 	
 	/* Keep yielding themselves over and over again  */
 	/* Returning the function addr which is converted */
 	/* To a function pointer */
 	void(*p_add4)(char *, int, int) = **add_two;
 	void(*p_add5)(char *, int, int) = ***add_two;

	printf("Simple Math OP, ADD: %d -- SUB: %d\n", x, i);

 	(*p_add1)("Add 1", 10, 2);
 	(*p_add2)("Add 2", 10, 2);
 	(*p_add3)("Add 3", 10, 2);
 	(*p_add4)("Add 4", 10, 2);
 	(*p_add5)("Add 5", 10, 2);
 


}