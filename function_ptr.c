#include <stdio.h>

// https://denniskubes.com/2013/03/22/basics-of-function-pointers-in-c/


void sayHello();

void sayHello() {
	printf("hello world");
}

int main(void){

	void (*sayHelloPtr)() = sayHello;
	(*sayHelloPtr)();

}