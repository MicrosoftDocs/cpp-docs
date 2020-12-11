---
description: "Learn more about: warning pragma"
title: "warning pragma"
ms.date: "08/29/2019"
f1_keywords: ["warning_CPP", "vc-pragma.warning"]
helpviewer_keywords: ["pragmas, warning", "push pragma warning", "pop warning pragma", "warning pragma"]
ms.assetid: 8e9a0dec-e223-4657-b21d-5417ebe29cc8
---
# warning pragma

Enables selective modification of the behavior of compiler warning messages.

## Syntax

> **#pragma warning(**\
> &nbsp;&nbsp;&nbsp;&nbsp;*warning-specifier* **:** *warning-number-list*\
> &nbsp;&nbsp;&nbsp;&nbsp;[**;** *warning-specifier* **:** *warning-number-list* ... ] **)**\
> **#pragma warning( push** [ **,** *n* ] **)**\
> **#pragma warning( pop )**

## Remarks

The following warning-specifier parameters are available.

|warning-specifier|Meaning|
|------------------------|-------------|
|*1, 2, 3, 4*|Apply the given level to the specified warning(s). Also turns on a specified warning that is off by default.|
|*default*|Reset warning behavior to its default value. Also turns on a specified warning that is off by default. The warning will be generated at its default, documented, level.<br /><br /> For more information, see [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md).|
|*disable*|Don't issue the specified warning message(s).|
|*error*|Report the specified warnings as errors.|
|*once*|Display the specified message(s) only one time.|
|*suppress*|Pushes the current state of the pragma on the stack, disables the specified warning for the next line, and then pops the warning stack so that the pragma state is reset.|

The following code statement illustrates that a `warning-number-list` parameter can contain multiple warning numbers, and that multiple `warning-specifier` parameters can be specified in the same pragma directive.

```cpp
#pragma warning( disable : 4507 34; once : 4385; error : 164 )
```

This directive is functionally equivalent to the following code:

```cpp
// Disable warning messages 4507 and 4034.
#pragma warning( disable : 4507 34 )

// Issue warning C4385 only once.
#pragma warning( once : 4385 )

// Report warning C4164 as an error.
#pragma warning( error : 164 )
```

The compiler adds 4000 to any warning number that is between 0 and 999.

For warning numbers in the range 4700-4999, which are the ones associated with code generation, the state of the warning in effect when the compiler encounters the function definition will be in effect for the rest of the function. Use of the **warning** pragma in the function to change the state of a warning number larger than 4699 only takes effect after the end of the function. The following example shows the correct placement of **warning** pragmas to disable a code-generation warning message, and then to restore it.

```cpp
// pragma_warning.cpp
// compile with: /W1
#pragma warning(disable:4700)
void Test() {
   int x;
   int y = x;   // no C4700 here
   #pragma warning(default:4700)   // C4700 enabled after Test ends
}

int main() {
   int x;
   int y = x;   // C4700
}
```

Notice that throughout a function body, the last setting of the **warning** pragma will be in effect for the whole function.

## Push and Pop

The **warning** pragma also supports the following syntax, where *n* represents a warning level (1 through 4).

`#pragma warning( push [ , n ] )`

`#pragma warning( pop )`

The pragma `warning( push )` stores the current warning state for every warning. The pragma `warning( push, n )` stores the current state for every warning and sets the global warning level to *n*.

The pragma `warning( pop )` pops the last warning state pushed onto the stack. Any changes that you made to the warning state between *push* and *pop* are undone. Consider this example:

```cpp
#pragma warning( push )
#pragma warning( disable : 4705 )
#pragma warning( disable : 4706 )
#pragma warning( disable : 4707 )
// Some code
#pragma warning( pop )
```

At the end of this code, *pop* restores the state of every warning (includes 4705, 4706, and 4707) to what it was at the start of the code.

When you write header files, you can use *push* and *pop* to guarantee that warning-state changes made by a user don't prevent the headers from compiling correctly. Use *push* at the start of the header and *pop* at the end. For example, if you have a header that doesn't compile cleanly at warning level 4, the following code changes the warning level to 3, and then restores the original warning level at the end of the header.

```cpp
#pragma warning( push, 3 )
// Declarations/definitions
#pragma warning( pop )
```

For more information about compiler options that help you suppress warnings, see [/FI](../build/reference/fi-name-forced-include-file.md) and [/w](../build/reference/compiler-option-warning-level.md).

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
