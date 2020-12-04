---
description: "Learn more about: #define directive (C/C++)"
title: "#define directive (C/C++)"
ms.date: "08/29/2019"
f1_keywords: ["#define"]
helpviewer_keywords: ["define directive (#define), syntax", "preprocessor, directives", "define directive (#define)", "#define directive, syntax", "#define directive"]
ms.assetid: 33cf25c6-b24e-40bf-ab30-9008f0391710
---
# #define directive (C/C++)

The **#define** creates a *macro*, which is the association of an identifier or parameterized identifier with a token string. After the macro is defined, the compiler can substitute the token string for each occurrence of the identifier in the source file.

## Syntax

> **#define** *identifier* *token-string*<sub>opt</sub>\
> **#define** *identifier* **(** *identifier*<sub>opt</sub>**,** ... **,** *identifier*<sub>opt</sub> **)** *token-string*<sub>opt</sub>

## Remarks

The **#define** directive causes the compiler to substitute *token-string* for each occurrence of *identifier* in the source file. The *identifier* is replaced only when it forms a token. That is, *identifier* is not replaced if it appears in a comment, in a string, or as part of a longer identifier. For more information, see [Tokens](../cpp/character-sets.md).

The *token-string* argument consists of a series of tokens, such as keywords, constants, or complete statements. One or more white-space characters must separate *token-string* from *identifier*. This white space is not considered part of the substituted text, nor is any white space that follows the last token of the text.

A `#define` without a *token-string* removes occurrences of *identifier* from the source file. The *identifier* remains defined and can be tested by using the `#if defined` and `#ifdef` directives.

The second syntax form defines a function-like macro with parameters. This form accepts an optional list of parameters that must appear in parentheses. After the macro is defined, each subsequent occurrence of *identifier*( *identifier*<sub>opt</sub>, ..., *identifier*<sub>opt</sub> ) is replaced with a version of the *token-string* argument that has actual arguments substituted for formal parameters.

Formal parameter names appear in *token-string* to mark the locations where actual values are substituted. Each parameter name can appear multiple times in *token-string*, and the names can appear in any order. The number of arguments in the call must match the number of parameters in the macro definition. Liberal use of parentheses guarantees that complex actual arguments are interpreted correctly.

The formal parameters in the list are separated by commas. Each name in the list must be unique, and the list must be enclosed in parentheses. No spaces can separate *identifier* and the opening parenthesis. Use line concatenation — place a backslash (`\`) immediately before the newline character — for long directives on multiple source lines. The scope of a formal parameter name extends to the new line that ends *token-string*.

When a macro has been defined in the second syntax form, subsequent textual instances followed by an argument list indicate a macro call. The actual arguments that follows an instance of *identifier* in the source file are matched to the corresponding formal parameters in the macro definition. Each formal parameter in *token-string* that is not preceded by a stringizing (`#`), charizing (`#@`), or token-pasting (`##`) operator, or not followed by a `##` operator, is replaced by the corresponding actual argument. Any macros in the actual argument are expanded before the directive replaces the formal parameter. (The operators are described in [Preprocessor operators](../preprocessor/preprocessor-operators.md).)

The following examples of macros with arguments illustrate the second form of the **#define** syntax:

```C
// Macro to define cursor lines
#define CURSOR(top, bottom) (((top) << 8) | (bottom))

// Macro to get a random integer with a specified range
#define getrandom(min, max) \
    ((rand()%(int)(((max) + 1)-(min)))+ (min))
```

Arguments with side effects sometimes cause macros to produce unexpected results. A given formal parameter may appear more than one time in *token-string*. If that formal parameter is replaced by an expression with side effects, the expression, with its side effects, may be evaluated more than one time. (See the examples under [Token-Pasting Operator (##)](../preprocessor/token-pasting-operator-hash-hash.md).)

The `#undef` directive causes an identifier's preprocessor definition to be forgotten. See [The #undef Directive](../preprocessor/hash-undef-directive-c-cpp.md) for more information.

If the name of the macro being defined occurs in *token-string* (even as a result of another macro expansion), it is not expanded.

A second **#define** for a macro with the same name generates a warning unless the second token sequence is identical to the first.

**Microsoft Specific**

Microsoft C/C++ lets you redefine a macro if the new definition is syntactically identical to the original definition. In other words, the two definitions can have different parameter names. This behavior differs from ANSI C, which requires that the two definitions be lexically identical.

For example, the following two macros are identical except for the parameter names. ANSI C does not allow such a redefinition, but Microsoft C/C++ compiles it without error.

```C
#define multiply( f1, f2 ) ( f1 * f2 )
#define multiply( a1, a2 ) ( a1 * a2 )
```

On the other hand, the following two macros are not identical and will generate a warning in Microsoft C/C++.

```C
#define multiply( f1, f2 ) ( f1 * f2 )
#define multiply( a1, a2 ) ( b1 * b2 )
```

**END Microsoft Specific**

This example illustrates the **#define** directive:

```C
#define WIDTH       80
#define LENGTH      ( WIDTH + 10 )
```

The first statement defines the identifier `WIDTH` as the integer constant 80 and defines `LENGTH` in terms of `WIDTH` and the integer constant 10. Each occurrence of `LENGTH` is replaced by (`WIDTH + 10`). In turn, each occurrence of `WIDTH + 10` is replaced by the expression (`80 + 10`). The parentheses around `WIDTH + 10` are important because they control the interpretation in statements such as the following:

```C
var = LENGTH * 20;
```

After the preprocessing stage the statement becomes:

```C
var = ( 80 + 10 ) * 20;
```

which evaluates to 1800. Without parentheses, the result is:

```C
var = 80 + 10 * 20;
```

which evaluates to 280.

**Microsoft Specific**

Defining macros and constants with the [/D](../build/reference/d-preprocessor-definitions.md) compiler option has the same effect as using a **#define** preprocessing directive at the start of your file. Up to 30 macros can be defined by using the /D option.

**END Microsoft Specific**

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)
