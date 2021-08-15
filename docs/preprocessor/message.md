---
description: "Learn more about the message pragma directive in Microsoft C/C++"
title: "message pragma"
ms.date: 01/22/2021
f1_keywords: ["message_CPP", "vc-pragma.message"]
helpviewer_keywords: ["message pragma", "pragma, message"]
no-loc: ["pragma"]
---
# `message` pragma

Sends a string literal to the standard output without terminating the compilation.

## Syntax

> **`#pragma message(`** *message-string* **`)`**

## Remarks

A typical use of the **`message`** pragma is to display informational messages at compile time.

The *message-string* parameter can be a macro that expands to a string literal, and you can concatenate such macros with string literals in any combination.

If you use a predefined macro in the **`message`** pragma, the macro should return a string. Otherwise, you'll have to convert the output of the macro to a string.

The following code fragment uses the **`message`** pragma to display messages during compilation:

```cpp
// pragma_directives_message1.cpp
// compile with: /LD
#if _M_IX86 >= 500
#pragma message("_M_IX86 >= 500")
#endif

#pragma message("")

#pragma message( "Compiling " __FILE__ )
#pragma message( "Last modified on " __TIMESTAMP__ )

#pragma message("")

// with line number
#define STRING2(x) #x
#define STRING(x) STRING2(x)

#pragma message (__FILE__ "[" STRING(__LINE__) "]: test")

#pragma message("")
```

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
