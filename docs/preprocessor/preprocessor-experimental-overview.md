---
title: "MSVC new preprocessor overview"
description: "The MSVC preprocessor is being updated for conformance with C/C++ standards."
ms.date: 09/10/2020
helpviewer_keywords: ["preprocessor, experimental", "preprocessor, new"]
---
# MSVC new preprocessor overview

::: moniker range="msvc-140"

Visual Studio 2015 uses the traditional preprocessor, which doesn't conform with Standard C++ or C99. Starting in Visual Studio 2019 version 16.5, new preprocessor support for the C++20 standard is feature-complete. These changes are available by using the [/Zc:preprocessor](../build/reference/zc-preprocessor.md) compiler switch. An experimental version of the new preprocessor is available starting in Visual Studio 2017 version 15.8 and later by using the [/experimental:preprocessor](../build/reference/experimental-preprocessor.md) compiler switch. More information about using the new preprocessor in Visual Studio 2017 and Visual Studio 2019 is available. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker-end

::: moniker range=">=msvc-150"

We're updating the Microsoft C++ preprocessor to improve standards conformance, fix longstanding bugs, and change some behaviors that are officially undefined. We've also added new diagnostics to warn on errors in macro definitions.

Starting in Visual Studio 2019 version 16.5, preprocessor support for the C++20 standard is feature-complete. These changes are available by using the [/Zc:preprocessor](../build/reference/zc-preprocessor.md) compiler switch. An experimental version of the new preprocessor is available in earlier versions starting in Visual Studio 2017 version 15.8. You can enable it by using the [/experimental:preprocessor](../build/reference/experimental-preprocessor.md) compiler switch. The default preprocessor behavior remains the same as in previous versions.

## New predefined macro

You can detect which preprocessor is in use at compile time. Check the value of the predefined macro [`_MSVC_TRADITIONAL`](predefined-macros.md) to tell if the traditional preprocessor is in use. This macro is set unconditionally by versions of the compiler that support it, independent of which preprocessor is invoked. Its value is 1 for the traditional preprocessor. It's 0 for the conforming preprocessor.

```cpp
#if !defined(_MSVC_TRADITIONAL) || _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

## Behavior changes in the new preprocessor

The initial work on the new preprocessor has been focused on making all macro expansions conform to the standard. It lets you use the MSVC compiler with libraries that are currently blocked by the traditional behaviors. We tested the updated preprocessor on real world projects. Here are some of the more common breaking changes we found:

### Macro comments

The traditional preprocessor is based on character buffers rather than preprocessor tokens. It allows unusual behavior such as the following preprocessor comment trick, which doesn't work under the conforming preprocessor:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
DISAPPEARING_TYPE myVal;
```

The standards-conforming fix is to declare `int myVal` inside the appropriate `#ifdef/#endif` directives:

```cpp
#define MYVAL 1

#ifdef MYVAL
int myVal;
#endif
```

### L#val

The traditional preprocessor incorrectly combines a string prefix to the result of the [stringizing operator (#)](stringizing-operator-hash.md) operator:

```cpp
#define DEBUG_INFO(val) L"debug prefix:" L#val
//                                       ^
//                                       this prefix

const wchar_t *info = DEBUG_INFO(hello world);
```

In this case, the `L` prefix is unnecessary because the adjacent string literals are combined after macro expansion anyway. The backward-compatible fix is to change the definition:

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

- Use string concatenation of `L""` and `#str` to add prefix. Adjacent string literals are combined after macro expansion:

   ```cpp
   #define STRING1(str) L""#str
   ```

- Add the prefix after `#str` is stringized with additional macro expansion

   ```cpp
   #define WIDE(str) L##str
   #define STRING2(str) WIDE(#str)
   ```

- Use the concatenation operator `##` to combine the tokens. The order of operations for `##` and `#` is unspecified, although all compilers seem to evaluate the `#` operator before `##` in this case.

   ```cpp
   #define STRING3(str) L## #str
   ```

### Warning on invalid \#\#

When the [token-pasting operator (##)](token-pasting-operator-hash-hash.md) doesn't result in a single valid preprocessing token, the behavior is undefined. The traditional preprocessor silently fails to combine the tokens. The new preprocessor matches the behavior of most other compilers and emits a diagnostic.

```cpp
// The ## is unnecessary and does not result in a single preprocessing token.
#define ADD_STD(x) std::##x
// Declare a std::string
ADD_STD(string) s;
```

### Comma elision in variadic macros

The traditional MSVC preprocessor always removes commas before empty `__VA_ARGS__` replacements. The new preprocessor more closely follows the behavior of other popular cross-platform compilers. For the comma to be removed, the variadic argument must be missing (not just empty) and it must be marked with a `##` operator. Consider the following example:

```cpp
void func(int, int = 2, int = 3);
// This macro replacement list has a comma followed by __VA_ARGS__
#define FUNC(a, ...) func(a, __VA_ARGS__)
int main()
{
    // In the traditional preprocessor, the
    // following macro is replaced with:
    // func(10,20,30)
    FUNC(10, 20, 30);

    // A conforming preprocessor replaces the
    // following macro with: func(1, ), which
    // results in a syntax error.
    FUNC(1, );
}
```

In the following example, in the call to `FUNC2(1)` the variadic argument is missing in the macro being invoked. In the call to `FUNC2(1, )` the variadic argument is empty, but not missing (notice the comma in the argument list).

```cpp
#define FUNC2(a, ...) func(a , ## __VA_ARGS__)
int main()
{
   // Expands to func(1)
   FUNC2(1);

   // Expands to func(1, )
   FUNC2(1, );
}
```

In the upcoming C++20 standard, this issue has been addressed by adding `__VA_OPT__`. New preprocessor support for  `__VA_OPT__` is available starting in Visual Studio 2019 version 16.5.

### C++20 variadic macro extension

The new preprocessor supports C++20 variadic macro argument elision:

```cpp
#define FUNC(a, ...) __VA_ARGS__ + a
int main()
  {
  int ret = FUNC(0);
  return ret;
  }
```

This code isn't conforming before the C++20 standard. In MSVC, the new preprocessor extends this C++20 behavior to lower language standard modes (**`/std:c++14`**, **`/std:c++17`**). This extension matches the behavior of other major cross-platform C++ compilers.

### Macro arguments are "unpacked"

In the traditional preprocessor, if a macro forwards one of its arguments to another dependent macro then the argument doesn't get "unpacked" when it's inserted. Usually this optimization goes unnoticed, but it can lead to unusual behavior:

```cpp
// Create a string out of the first argument, and the rest of the arguments.
#define TWO_STRINGS( first, ... ) #first, #__VA_ARGS__
#define A( ... ) TWO_STRINGS(__VA_ARGS__)
const char* c[2] = { A(1, 2) };

// Conforming preprocessor results:
// const char c[2] = { "1", "2" };

// Traditional preprocessor results, all arguments are in the first string:
// const char c[2] = { "1, 2", };
```

When expanding `A()`, the traditional preprocessor forwards all of the arguments packaged in `__VA_ARGS__` to the first argument of TWO_STRINGS, which leaves the variadic argument of `TWO_STRINGS` empty. That causes the result of `#first` to be "1, 2" rather than just "1". If you're following along closely, then you may be wondering what happened to the result of `#__VA_ARGS__` in the traditional preprocessor expansion: if the variadic parameter is empty it should result in an empty string literal `""`. A separate issue kept the empty string literal token from being generated.

### Rescanning replacement list for macros

After a macro is replaced, the resulting tokens are rescanned for additional macro identifiers to replace. The algorithm used by the traditional preprocessor for doing the rescan isn't conforming, as shown in this example based on actual code:

```cpp
#define CAT(a,b) a ## b
#define ECHO(...) __VA_ARGS__
// IMPL1 and IMPL2 are implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)

// MACRO chooses the expansion behavior based on the value passed to macro_switch
#define DO_THING(macro_switch, b) CAT(IMPL, macro_switch) ECHO(( "Hello", b))
DO_THING(1, "World");

// Traditional preprocessor:
// do_thing_one( "Hello", "World");
// Conforming preprocessor:
// IMPL1 ( "Hello","World");
```

Although this example may seem a bit contrived, we've seen it in real-world code.

To see what's going on, we can break down the expansion starting with `DO_THING`:

1. `DO_THING(1, "World")` expands to `CAT(IMPL, 1) ECHO(("Hello", "World"))`
1. `CAT(IMPL, 1)` expands to `IMPL ## 1`, which expands to `IMPL1`
1. Now the tokens are in this state: `IMPL1 ECHO(("Hello", "World"))`
1. The preprocessor finds the function-like macro identifier `IMPL1`. Since it's not followed by a `(`, it isn't considered a function-like macro invocation.
1. The preprocessor moves on to the following tokens. It finds the function-like macro `ECHO` gets invoked: `ECHO(("Hello", "World"))`, which expands to `("Hello", "World")`
1. `IMPL1` is never considered again for expansion, so the full result of the expansions is: `IMPL1("Hello", "World");`

To modify the macro to behave the same way under both the new preprocessor and the traditional preprocessor, add another layer of indirection:

```cpp
#define CAT(a,b) a##b
#define ECHO(...) __VA_ARGS__
// IMPL1 and IMPL2 are macros implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)
#define CALL(macroName, args) macroName args
#define DO_THING_FIXED(a,b) CALL( CAT(IMPL, a), ECHO(( "Hello",b)))
DO_THING_FIXED(1, "World");

// macro expands to:
// do_thing_one( "Hello", "World");
```

## Incomplete features before 16.5

Starting in Visual Studio 2019 version 16.5, the new preprocessor is feature-complete for C++20. In previous versions of Visual Studio, the new preprocessor is mostly complete, although some preprocessor directive logic still falls back to the traditional behavior. Here's a partial list of incomplete features in Visual Studio versions before 16.5:

- Support for `_Pragma`
- C++20 features
- Boost blocking bug: Logical operators in preprocessor constant expressions aren't fully implemented in the new preprocessor before version 16.5. On some `#if` directives, the new preprocessor can fall back to the traditional preprocessor. The effect is only noticeable when macros incompatible with the traditional preprocessor get expanded. It can happen when building Boost preprocessor slots.

::: moniker-end
