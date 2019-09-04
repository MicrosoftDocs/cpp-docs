---
title: "/experimental:preprocessor (Enable preprocessor conformance mode)"
description: "Use the /experimental:preprocessor compiler option to enable experimental compiler support for a standard conforming preprocessor."
ms.date: "09/03/2019"
f1_keywords: ["preprocessor", "/experimental:preprocessor"]
helpviewer_keywords: ["preprocessor conformance", "/experimental:preprocessor", "Enable preprocessor conformance mode"]
---
# /experimental:preprocessor (Enable preprocessor conformance mode)

This option enables an experimental, token-based preprocessor that conforms to C++11 standards, including C99 preprocessor features.

## Syntax

> **/experimental:preprocessor**[**-**]

## Remarks

Use the **/experimental:preprocessor** compiler option to enable the experimental conforming preprocessor. You can use **/experimental:preprocessor-** option to explicitly specify the traditional preprocessor.

The **/experimental:preprocessor** option is available starting in Visual Studio 2017 version 15.8.

You can detect which preprocessor is in use at compile time. Check the value of the predefined macro [\_MSVC\_TRADITIONAL](../../preprocessor/predefined-macros.md) to tell if the traditional preprocessor is in use. This macro is set unconditionally by versions of the compiler that support it, independent of which preprocessor is invoked. Its value is 1 for the traditional preprocessor. It's 0 for the conformant experimental preprocessor:

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

### Behavior changes in the experimental preprocessor

Here are some of the more common breaking changes found when preprocessor conformance mode is enabled:

#### Macro comments

The traditional preprocessor uses character buffers instead of preprocessor tokens. That allows some unusual behavior, such as this preprocessor comment trick, which doesn't work under the conforming preprocessor:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
// To make standards compliant, wrap the following line with the appropriate #if/#endif
DISAPPEARING_TYPE myVal;
```

#### String prefixes (L#val)

The traditional preprocessor incorrectly combines a string prefix to the result of the [stringizing operator (#)](../../preprocessor/stringizing-operator-hash.md):

```cpp
#define DEBUG_INFO(val) L"debug prefix:" L#val
//                                       ^
//                                       this prefix

const wchar_t *info = DEBUG_INFO(hello world);
```

The `L` prefix is unnecessary here, because the adjacent string literals get combined after macro expansion anyway. The backward compatible fix is to change the definition to:

```cpp
#define DEBUG_INFO(val) L"debug prefix:" #val
//                                       ^
//                                       no prefix
```

This issue is also found in convenience macros that 'stringize' the argument to a wide string literal:

```cpp
// The traditional preprocessor creates a single wide string literal token
#define STRING(str) L#str

// Potential fixes:
// Use string concatenation of L"" and #str to add prefix
// This works because adjacent string literals are combined after macro expansion
#define STRING1(str) L""#str

// Add the prefix after #str is stringized with additional macro expansion
#define WIDE(str) L##str
#define STRING2(str) WIDE(#str)

// Use concatenation operator ## to combine the tokens.
// The order of operations for ## and # is unspecified, although all compilers
// checked perform the # operator before ## in this case.
#define STRING3(str) L## #str
```

#### Warning on invalid ##

When the [token-pasting operator (##)](../../preprocessor/token-pasting-operator-hash-hash.md) doesn't result in a single, valid preprocessing token, the behavior is undefined. The traditional preprocessor silently fails to combine the tokens. The new preprocessor matches the behavior of most other compilers and emits a diagnostic.

```cpp
// The ## is unnecessary and doesn't result in a single preprocessing token.
#define ADD_STD(x) std::##x

// Declare a std::string
ADD_STD(string) s;
```

#### Comma elision in variadic macros

Consider the following example:

```cpp
void func(int, int = 2, int = 3);
// This macro replacement list has a comma followed by __VA_ARGS__
#define FUNC(a, ...) func(a, __VA_ARGS__)
int main()
{
    // The following macro is replaced with:
    // func(10,20,30)
    FUNC(10, 20, 30);

    // A conforming preprocessor replaces the following macro with:
    // func(1, );
    // which results in a syntax error.
    FUNC(1, );
}
```

All major compilers have a preprocessor extension that helps address this issue. The traditional MSVC preprocessor always removes commas before empty `__VA_ARGS__` replacements. The updated preprocessor more closely follows the behavior of other popular cross platform compilers. For the comma to be removed, the variadic argument must be missing, not just empty, and it must be marked with a `##` operator:

```cpp
#define FUNC2(a, ...) func(a , ## __VA_ARGS__)
int main()
{
    // The variadic argument is missing in the macro being evoked
    // The comma is removed and replaced with:
    // func(1)
    FUNC2(1);

    // The variadic argument is empty, but not missing. (Notice the
    // comma in the argument list.) The comma isn't removed
    // when the macro is replaced:
    // func(1, )
    FUNC2(1, );
}
```

In the upcoming C++2a standard, this issue has been addressed by adding `__VA_OPT__`, which isn't implemented yet.

#### Macro arguments are 'unpacked'

In the traditional preprocessor, if a macro forwards one of its arguments to another dependent macro, then the argument doesn't get "unpacked" when it's substituted. Usually this optimization goes unnoticed, but it can lead to unusual behavior:

```cpp
// Create a string out of the first argument, and the rest of the arguments.
#define TWO_STRINGS( first, ... ) #first, #__VA_ARGS__
#define A( ... ) TWO_STRINGS(__VA_ARGS__)

const char* c[2] = { A(1, 2) };
// Conformant preprocessor results:
// const char c[2] = { "1", "2" };
// Traditional preprocessor results, all arguments are in the first string:
// const char c[2] = { "1, 2", };
```

When expanding `A()`, the traditional preprocessor forwards all of the arguments packaged in `__VA_ARGS__` to the first argument of `TWO_STRINGS`. The variadic argument of `TWO_STRINGS` is empty, which causes the result of `#first` to be `"1, 2"` rather than just `"1"`. You may be wondering what happened to the result of `#__VA_ARGS__` in the traditional preprocessor expansion. if the variadic parameter is empty, it should result in an empty string literal "". Because of a separate issue, the empty string literal token wasn't generated.

#### Rescanning replacement list for macros

After a macro is replaced, the resulting tokens are rescanned for additional macro identifiers to replace. The rescan algorithm used by the traditional preprocessor isn't conformant, as shown in this example based on actual code:

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
// Conformant preprocessor:
// IMPL1 ( "Hello","World");
```

To see what is going on in this example, we break down the expansion starting with `DO_THING`:

`DO_THING(1, "World")` ->
`CAT(IMPL, 1) ECHO(("Hello", "World"))`

Second, CAT is expanded:

`CAT(IMPL, 1)` -> `IMPL ## 1` -> `IMPL1`

Which puts the tokens into this state:

`IMPL1 ECHO(("Hello", "World"))`

The preprocessor finds the function-like macro identifier `IMPL1`, but it's not followed by a "(", so it's not considered a function-like macro invocation. It moves on to the following tokens and finds the function-like macro `ECHO` invoked:

`ECHO(("Hello", "World"))` -> `("Hello", "World")`

`IMPL1` is never considered again for expansion, so the full result of the expansions is:

`IMPL1("Hello", "World");`

The macro can be modified to behave the same way under both the experimental preprocessor and the traditional preprocessor. The solution is to add another layer of indirection:

```cpp
#define CAT(a,b) a##b
#define ECHO(...) __VA_ARGS__

// IMPL1 and IMPL2 are macros implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)

#define CALL(macroName, args) macroName args
#define DO_THING_FIXED(a,b) CALL( CAT(IMPL, a), ECHO(( "Hello",b)))

DO_THING_FIXED(1, "World");
// macro expanded to:
// do_thing_one( "Hello", "World");
```

### Conformance mode conformance

The experimental preprocessor isn't complete yet, and some preprocessor directive logic still falls back to the traditional behavior. Here is a partial list of incomplete features:

- Support for `_Pragma`
- C++20 features
- Additional diagnostic improvements
- Switches to control the output under /E and /P
- Boost blocking bug: Logical operators in preprocessor constant expressions aren't fully implemented in the new preprocessor. On some `#if` directives, the new preprocessor can fall back to the traditional preprocessor. The effect is only noticeable when macros that are incompatible with the traditional preprocessor get expanded, which can happen when building Boost preprocessor slots.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/experimental:preprocessor** and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)
