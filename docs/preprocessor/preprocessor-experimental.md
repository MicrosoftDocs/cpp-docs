---
title: "MSVC experimental preprocessor"
description: "The MSVC preprocessor is being updated for conformance with C/C++ standards."
ms.date: "10/31/2019"
helpviewer_keywords: ["preprocessor, experimental"]
---

# MSVC experimental preprocessor

The Microsoft C++ preprocessor is currently being updated to improve standards conformance, fix longstanding bugs, and change some behaviors which are officially undefined. The experimental preprocessor is currently conformant to the C99 and C11 standards, and the C++11 standard. In addition, new diagnostics have been added to warn on errors in macro definitions.
These changes in their current state are available by using the [/experimental:preprocessor](../build/reference/experimental-preprocessor.md) compiler switch in Visual Studio 2017 or Visual Studio 2019. The default preprocessor behavior remains the same as in previous versions.

## New predefined macro

A new predefined macro in the compiler, **_MSVC_TRADITIONAL**, indicates whether the traditional preprocessor is being used. Its value is **1** for the traditional preprocessor, and **0** for the conformant experimental preprocessor.

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

## Behavior changes in the experimental preprocessor

The initial work on the experimental preprocessor has been focused on making all macro expansions conformant in order to enable the use of the MSVC compiler with libraries that are currently blocked due to traditional behaviors. Below is a list of some of the more common breaking changes that were run into when testing the updated preprocessor with real world projects.

## Macro comments

The traditional preprocessor is based on character buffers rather than preprocessor tokens. This allows unusual behavior such as the following preprocessor comment trick which will not work under the conforming preprocessor:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
DISAPPEARING_TYPE myVal;
```

The standards-conformant fix is to declare `int myVal` inside the appropriate **#ifdef/#endif** directives:

```cpp
#define MYVAL 1

#ifdef MYVAL
int myVal;
#endif
```

## L#val

The traditional preprocessor incorrectly combines a string prefix to the result of the **#** operator:

```cpp
 #define DEBUG_INFO(val) L"debug prefix:" L#val
//                                       ^
//                                       this prefix

const wchar_t *info = DEBUG_INFO(hello world);
```

In this case the **L** prefix is unnecessary because the adjacent string literals are combined after macro expansion anyway. The backward-compatible fix is to change the definition to the following:

```cpp
#define DEBUG_INFO(val) L"debug prefix:" #val
//                                       ^
//                                       no prefix
```

The same issue is also found in convenience macros that "stringize" the argument to a wide string literal:

```cpp
 // The traditional preprocessor creates a single wide string literal token
#define STRING(str) L#str
```

You can fix the issue in various ways:

- Use string concatenation of **L""** and **#str** to add prefix. This works because adjacent string literals are combined after macro expansion:

   ```cpp
   #define STRING1(str) L""#str
   ```

- Add the prefix after **#str** is stringized with additional macro expansion

   ```cpp
   #define WIDE(str) L##str
   #define STRING2(str) WIDE(#str)
   ```

- Use the concatenation operator **##** to combine the tokens. The order of operations for **##** and **#** is unspecified, although all compilers seem to evaluate the **#** operator before **##** in this case.

   ```cpp
   #define STRING3(str) L## #str
   ```

## Warning on invalid \#\#

When the **##** operator does not result in a single valid preprocessing token, the behavior is undefined. The traditional preprocessor will silently fail to combine the tokens. The new preprocessor will match the behavior of most other compilers and emit a diagnostic.

```cpp
// The ## is unnecessary and does not result in a single preprocessing token.
#define ADD_STD(x) std::##x
// Declare a std::string
ADD_STD(string) s;
```

## Comma elision in variadic macros

The traditional MSVC preprocessor always removes commas before empty **__VA_ARGS__** replacements. The experimental preprocessor more closely follows the behavior of other popular cross-platform compilers. For the comma to be removed, the variadic argument must be missing (not just empty) and it must be marked with a **##** operator. Consider the following example:

```cpp
void func(int, int = 2, int = 3);
// This macro replacement list has a comma followed by __VA_ARGS__
#define FUNC(a, …) func(a, __VA_ARGS__)
int main()
{
    // In the traditional preprocessor, the following macro is replaced with:
    // func(10,20,30)
    FUNC(10, 20, 30);

    // A conforming preprocessor will replace the following macro with: func(1, ), which will result in a syntax error.
    FUNC(1, );
}
```

In the following example, in the call to `FUNC2(1)` the variadic argument is missing in the macro being evoked. In the call to `FUNC2(1, )` the variadic argument is empty, but not missing (notice the comma in the argument list).

```cpp
#define FUNC2(a, …) func(a , ## __VA_ARGS__)
int main()
{
   // Expands to func(1)
   FUNC2(1);

   // Expands to func(1, )
   FUNC2(1, );
}
```

In the upcoming C++2a standard this issue has been addressed by adding **__VA_OPT__**, which is not yet implemented.

## Macro arguments are "unpacked"

In the traditional preprocessor, if a macro forwards one of its arguments to another dependent macro then the argument does not get "unpacked" when it is substituted. Usually this optimization goes unnoticed, but it can lead to unusual behavior:

```cpp
// Create a string out of the first argument, and the rest of the arguments.
#define TWO_STRINGS( first, … ) #first, #__VA_ARGS__
#define A( … ) TWO_STRINGS(__VA_ARGS__)
const char* c[2] = { A(1, 2) };

// Conformant preprocessor results:
// const char c[2] = { "1", "2" };

// Traditional preprocessor results, all arguments are in the first string:
// const char c[2] = { "1, 2", };
```

When expanding `A()`, the traditional preprocessor forwards all of the arguments packaged in **__VA_ARGS__** to the first argument of TWO_STRINGS, which leaves the variadic argument of `TWO_STRINGS` empty. This causes the result of **#first** to be "1, 2" rather than just "1". If you are following along closely, then you may be wondering what happened to the result of **#__VA_ARGS__** in the traditional preprocessor expansion: if the variadic parameter is empty it should result in an empty string literal `""`. Due to a separate issue, the empty string literal token was not generated.

## Rescanning replacement list for macros

After a macro is replaced, the resulting tokens are re-scanned for additional macro identifiers that need to be replaced. The algorithm used by the traditional preprocessor for doing the rescan is not conformant, as shown in this example based on actual code:

```cpp
#define CAT(a,b) a ## b
#define ECHO(…) __VA_ARGS__
// IMPL1 and IMPL2 are implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)

// MACRO chooses the expansion behavior based on the value passed to macro_switch
#define DO_THING(macro_switch, b) CAT(IMPL, macro_switch) ECHO(( "Hello", b))
DO_THING(1, "World");

// Traditional preprocessor:
// do_thing_one( "Hello", "World");
// Conformant preprocessor:
// IMPL1 ( "Hello","World");
```

Although this example seems a bit contrived, it has been found to occur real world code. To see what is going on we can break down the expansion starting with `DO_THING`:

1. `DO_THING(1, "World")` expands to `CAT(IMPL, 1) ECHO(("Hello", "World"))`
1. `CAT(IMPL, 1)` expands to `IMPL ## 1` which expands to `IMPL1`
1. Now the tokens are in this state: `IMPL1 ECHO(("Hello", "World"))`
1. The preprocessor finds the function-like macro identifier `IMPL1`, but it is not followed by a `(`, so it is not considered a function-like macro invocation. 
1. It moves on to the following tokens and finds the function-like macro `ECHO` being invoked: `ECHO(("Hello", "World"))`, which expands to `("Hello", "World")`
1. IMPL1 is never considered again for expansion, so the full result of the expansions is: `IMPL1("Hello", "World");`


The macro can be modified to behave the same under the experimental preprocessor and the traditional preprocessor by adding in another layer of indirection:

```cpp
#define CAT(a,b) a##b
#define ECHO(…) __VA_ARGS__
// IMPL1 and IMPL2 are macros implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)
#define CALL(macroName, args) macroName args
#define DO_THING_FIXED(a,b) CALL( CAT(IMPL, a), ECHO(( "Hello",b)))
DO_THING_FIXED(1, "World");

// macro expands to:
// do_thing_one( "Hello", "World");
```

