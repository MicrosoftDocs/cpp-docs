---
description: "Learn more about: Using VERIFY Instead of ASSERT"
title: "Using VERIFY Instead of ASSERT"
ms.date: "05/06/2019"
helpviewer_keywords: ["ASSERT statements", "debugging [MFC], ASSERT statements", "VERIFY macro", "assertions, troubleshooting ASSERT statements", "debugging assertions", "assertions, debugging"]
ms.assetid: 4c46397b-3fb1-49c1-a09b-41a72fae3797
---
# Using VERIFY Instead of ASSERT

Suppose that when you run the debug version of your MFC application, there are no problems. However, the release version of the same application crashes, returns incorrect results, and/or exhibits some other abnormal behavior.

This problem can be caused when you place important code in an ASSERT statement to verify that it performs correctly. Because ASSERT statements are commented out in a release build of an MFC program, the code does not run in a release build.

If you are using ASSERT to confirm that a function call succeeded, consider using [VERIFY](../mfc/reference/diagnostic-services.md#verify) instead. The VERIFY macro evaluates its own arguments in both debug and release builds of the application.

Another preferred technique is to assign the function's return value to a temporary variable and then test the variable in an ASSERT statement.

Examine the following code fragment:

```
enum {
    sizeOfBuffer = 20
};
char *buf;
ASSERT(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));
strcpy_s( buf, sizeOfBuffer, "Hello, World" );
free( buf );
```

This code runs perfectly in a debug version of an MFC application. If the call to `calloc( )` fails, a diagnostic message that includes the file and line number appears. However, in a retail build of an MFC application:

- the call to `calloc( )` never occurs, leaving `buf` uninitialized, or

- `strcpy_s( )` copies "`Hello, World`" into a random piece of memory, possibly crashing the application or causing the system to stop responding, or

- `free()` attempts to free memory that was never allocated.

To use ASSERT correctly, the code sample should be changed to the following:

```
enum {
    sizeOfBuffer = 20
};
char *buf;
buf = (char *) calloc(sizeOfBuffer, sizeof(char) );
ASSERT( buf != NULL );
strcpy_s( buf, sizeOfBuffer, "Hello, World" );
free( buf );
```

Or, you can use VERIFY instead:

```
enum {
    sizeOfBuffer = 20
};
char *buf;
VERIFY(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));
strcpy_s( buf, sizeOfBuffer, "Hello, World" );
free( buf );
```

## See also

[Fixing Release Build Problems](fixing-release-build-problems.md)
