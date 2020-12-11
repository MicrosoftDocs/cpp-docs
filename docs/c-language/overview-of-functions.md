---
description: "Learn more about: Overview of Functions"
title: "Overview of Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["functions [C++]", "control flow, function calls"]
ms.assetid: b6f4637f-02b9-49d8-8601-1f886bd2cfb9
---
# Overview of Functions

Functions must have a definition and should have a declaration, although a definition can serve as a declaration if the declaration appears before the function is called. The function definition includes the function body — the code that executes when the function is called.

A function declaration establishes the name, return type, and attributes of a function that is defined elsewhere in the program. A function declaration must precede the call to the function. This is why the header files containing the declarations for the run-time functions are included in your code before a call to a run-time function. If the declaration has information about the types and number of parameters, the declaration is a prototype. See [Function Prototypes](../c-language/function-prototypes.md) for more information.

The compiler uses the prototype to compare the types of arguments in subsequent calls to the function with the function's parameters and to convert the types of the arguments to the types of the parameters whenever necessary.

A function call passes execution control from the calling function to the called function. The arguments, if any, are passed by value to the called function. Execution of a **`return`** statement in the called function returns control and possibly a value to the calling function.

## See also

[Functions](../c-language/functions-c.md)
