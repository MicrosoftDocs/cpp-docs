---
description: "Learn more about: C++ Program Startup and Termination"
title: "C++ Program Startup and Termination"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ Standard Library, program startup and termination", "terminating execution", "Function Main procedures", "control text streams", "startup code, and C++ program termination", "main function, program startup"]
ms.assetid: f72c8f76-f507-4ddd-a270-7b60f4fed625
---
# C++ Program Startup and Termination

A C++ program performs the same operations as a C program does at program startup and at program termination, plus a few more outlined here.

Before the target environment calls the function `main`, and after it stores any constant initial values you specify in all objects that have static duration, the program executes any remaining constructors for such static objects. The order of execution is not specified between translation units, but you can nevertheless assume that some [iostreams](../standard-library/iostreams-conventions.md) objects are properly initialized for use by these static constructors. These control text streams are:

- [cin](../standard-library/iostream.md#cin) — for standard input.

- [cout](../standard-library/iostream.md#cout) — for standard output.

- [cerr](../standard-library/iostream.md#cerr) — for unbuffered standard error output.

- [clog](../standard-library/iostream.md#clog) — for buffered standard error output.

You can also use these objects within the destructors called for static objects, during program termination.

As with C, returning from `main` or calling `exit` calls all functions registered with `atexit` in reverse order of registry. An exception thrown from such a registered function calls `terminate`.

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
