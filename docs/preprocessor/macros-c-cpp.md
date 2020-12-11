---
description: "Learn more about: Macros (C/C++)"
title: "Macros (C/C++)"
ms.date: "08/29/2019"
helpviewer_keywords: ["preprocessor", "preprocessor, macros", "Visual C++, preprocessor macros"]
ms.assetid: a7bfc5d4-2537-4fe0-bef0-70cec0b43388
---
# Macros (C/C++)

The preprocessor expands macros in all lines except *preprocessor directives*, lines that have a **#** as the first non-white-space character. It expands macros in parts of some directives that aren't skipped as part of a conditional compilation. *Conditional compilation directives* allow you to suppress compilation of parts of a source file. They test a constant expression or identifier to determine which text blocks to pass on to the compiler, and which ones to remove from the source file during preprocessing.

The `#define` directive is typically used to associate meaningful identifiers with constants, keywords, and commonly used statements or expressions. Identifiers that represent constants are sometimes called *symbolic constants* or *manifest constants*. Identifiers that represent statements or expressions are called *macros*. In this preprocessor documentation, only the term "macro" is used.

When the name of a macro is recognized in the program source text, or in the arguments of certain other preprocessor commands, it's treated as a call to that macro. The macro name is replaced by a copy of the macro body. If the macro accepts arguments, the actual arguments following the macro name are substituted for formal parameters in the macro body. The process of replacing a macro call with the processed copy of the body is called *expansion* of the macro call.

In practical terms, there are two types of macros. *Object-like* macros take no arguments. *Function-like* macros can be defined to accept arguments, so that they look and act like function calls. Because macros don't generate actual function calls, you can sometimes make programs run faster by replacing function calls with macros. (In C++, inline functions are often a preferred method.) However, macros can create problems if you don't define and use them with care. You may have to use parentheses in macro definitions with arguments to preserve the proper precedence in an expression. Also, macros may not correctly handle expressions with side effects. For more information, see the `getrandom` example in [The #define directive](../preprocessor/hash-define-directive-c-cpp.md).

Once you've defined a macro, you can't redefine it to a different value without first removing the original definition. However, you can redefine the macro with exactly the same definition. Thus, the same definition may appear more than once in a program.

The `#undef` directive removes the definition of a macro. Once you've removed the definition, you can redefine the macro to a different value. [The #define directive](../preprocessor/hash-define-directive-c-cpp.md) and [The #undef directive](../preprocessor/hash-undef-directive-c-cpp.md) discuss the `#define` and `#undef` directives, respectively.

For more information, see,

- [Macros and C++](../preprocessor/macros-and-cpp.md)

- [Variadic Macros](../preprocessor/variadic-macros.md)

- [Predefined macros](../preprocessor/predefined-macros.md)

## See also

[C/C++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)
