#include <stdio.h>
#include "exampleClass.h"

void exampleFunction();

// <Snippet3>
// Demonstration of __COUNTER__, assigns unique identifiers to
//  different objects of the same type
int main(int argc, char** argv)
{
	// __COUNTER__ is initially defined as 0
	exampleClass e1(__COUNTER__);

	// having been referenced, __COUNTER__ is now defined as 1
	exampleClass e2(__COUNTER__);

	// __COUNTER__ is now defined as 2
	exampleClass e3(__COUNTER__);

	printf("e1 ID: %i\n", e1.GetID());
	printf("e2 ID: %i\n", e2.GetID());
	printf("e3 ID: %i\n", e3.GetID());

	// Output
	// ------------------------------
	// e1 ID: 0
	// e2 ID: 1
	// e3 ID: 2

	return 0;
}
// </Snippet3>

// <Snippet1>
// Demonstrates functionality of __FUNCTION__, __FUNCDNAME__, and __FUNCSIG__ macros
void exampleFunction()
{
	printf("Function name: %s\n", __FUNCTION__);
	printf("Decorated function name: %s\n", __FUNCDNAME__);
	printf("Function signature: %s\n", __FUNCSIG__);
	
	// Sample Output
	// -------------------------------------------------
	// Function name: exampleFunction
	// Decorated function name: ?exampleFunction@@YAXXZ
	// Function signature: void __cdecl exampleFunction(void)
}
// </Snippet1>