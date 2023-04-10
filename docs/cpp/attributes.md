---
description: "Learn more about: Attributes in C++"
title: "Attributes in C++"
f1_keywords: ["deprecated", "no_return", "carries_dependency", "fallthrough", "nodiscard", "maybe_unused", "likely", "unlikely", "gsl::suppress", "msvc::intrinsic", "msvc::no_tls_guard"]
helpviewer_keywords: ["deprecated", "no_return", "carries_dependency", "fallthrough", "nodiscard", "maybe_unused", "likely", "unlikely", "gsl::suppress", "msvc::intrinsic", "msvc::no_tls_guard"]
ms.date: 12/06/2022
---
# Attributes in C++

The C++ Standard defines a common set of attributes. It also allows compiler vendors to define their own attributes within a vendor-specific namespace. However, compilers are only required to recognize the attributes defined in the standard.

In some cases, standard attributes overlap with compiler-specific `__declspec` parameters. In Microsoft C++, you can use the `[[deprecated]]` attribute instead of using `__declspec(deprecated)`. The `[[deprecated]]` attribute is recognized by any conforming compiler. For all other `__declspec` parameters such as `dllimport` and `dllexport`, so far there's no attribute equivalent, so you must continue to use `__declspec` syntax. Attributes don't affect the type system, and they don't change the meaning of a program. Compilers ignore attribute values they don't recognize.

**Visual Studio 2017 version 15.3 and later** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later): In the scope of an attribute list, you can specify the namespace for all names with a single **`using`** introducer:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## C++ standard attributes

In C++11, attributes provide a standardized way to annotate C++ constructs (including but not limited to classes, functions, variables, and blocks) with additional information. Attributes may or may not be vendor-specific. A compiler can use this information to generate informational messages, or to apply special logic when compiling the attributed code. The compiler ignores any attributes that it doesn't recognize, which means you can't define your own custom attributes using this syntax. Attributes are enclosed by double square brackets:

```cpp
[[deprecated]]
void Foo(int);
```

Attributes represent a standardized alternative to vendor-specific extensions such as `#pragma` directives, `__declspec()` (Visual C++), or `__attribute__` (GNU). However, you'll still need to use the vendor-specific constructs for most purposes. The standard currently specifies the following attributes that a conforming compiler should recognize.

### `[[noreturn]]`

The `[[noreturn]]` attribute specifies that a function never returns; in other words, it always throws an exception or exits. The compiler can adjust its compilation rules for `[[noreturn]]` entities.

### `[[carries_dependency]]`

The `[[carries_dependency]]` attribute specifies that the function propagates data dependency ordering for thread synchronization. The attribute can be applied to one or more parameters, to specify that the passed-in argument carries a dependency into the function body. The attribute can be applied to the function itself, to specify that the return value carries a dependency out of the function. The compiler can use this information to generate more efficient code.

### `[[deprecated]]`

**Visual Studio 2015 and later:** The `[[deprecated]]` attribute specifies that a function isn't intended for use. Or, that it might not exist in future versions of a library interface. The `[[deprecated]]` attribute can be applied to declaration of a class, a typedef-name, a variable, a non-static data member, a function, a namespace, an enumeration, an enumerator, or a template specialization. The compiler can use this attribute to generate an informational message when client code attempts to call the function. When the Microsoft C++ compiler detects the use of a `[[deprecated]]` item, it raises compiler warning [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

### `[[fallthrough]]`

**Visual Studio 2017 and later:** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later.) The `[[fallthrough]]` attribute can be used in the context of [`switch`](switch-statement-cpp.md) statements as a hint to the compiler (or anyone reading the code) that the fallthrough behavior is intended. The Microsoft C++ compiler currently doesn't warn on fallthrough behavior, so this attribute has no effect on compiler behavior.

### `[[nodiscard]]`

**Visual Studio 2017 version 15.3 and later:** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later.) Specifies that a function's return value isn't intended to be discarded. Raises warning [C4834](../error-messages/compiler-warnings/c4834.md), as shown in this example:

```cpp
[[nodiscard]]
int foo(int i) { return i * i; }

int main()
{
    foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
    return 0;
}
```

### `[[maybe_unused]]`

**Visual Studio 2017 version 15.3 and later:** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later.) The `[[maybe_unused]]` attribute specifies that a variable, function, class, typedef, non-static data member, enum, or template specialization may be intentionally unused. The compiler doesn't warn when an entity marked `[[maybe_unused]]` isn't used. An entity that's declared without the attribute can later be redeclared with the attribute and vice-versa. An entity is considered *marked* after its first declaration that's marked `[[maybe_unused]]` gets analyzed, and for the rest of the current translation unit.

### `[[likely]]`

**Visual Studio 2019 version 16.6 and later:** (Available with [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) and later.) The `[[likely]]` attribute specifies a hint to the compiler that the code path for the attributed label or statement is more likely to execute than alternatives. In the Microsoft compiler, the `[[likely]]` attribute marks blocks as "hot code", which increments an internal optimization score. The score is incremented more when optimizing for speed, and not as much when optimizing for size. The net score affects the likelihood of inlining, loop unrolling, and vectorizing optimizations. The effect of `[[likely]]` and `[[unlikely]]` is similar to [Profile-guided optimization](../build/profile-guided-optimizations.md), but limited in scope to the current translation unit. The block reordering optimization isn't implemented yet for this attribute.

### `[[unlikely]]`

**Visual Studio 2019 version 16.6 and later:** (Available with [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) and later.) The `[[unlikely]]` attribute specifies a hint to the compiler that the code path for the attributed label or statement is less likely to execute than alternatives. In the Microsoft compiler, the `[[unlikely]]` attribute marks blocks as "cold code", which decrements an internal optimization score. The score is decremented more when optimizing for size, and not as much when optimizing for speed. The net score affects the likelihood of inlining, loop unrolling, and vectorizing optimizations. The block reordering optimization isn't implemented yet for this attribute.

## Microsoft-specific attributes

### `[[gsl::suppress(rules)]]`

The Microsoft-specific `[[gsl::suppress(rules)]]` attribute is used to suppress warnings from checkers that enforce [Guidelines Support Library (GSL)](https://github.com/Microsoft/GSL) rules in code. For example, consider this code snippet:

```cpp
int main()
{
    int arr[10]; // GSL warning C26494 will be fired
    int* p = arr; // GSL warning C26485 will be fired
    [[gsl::suppress(bounds.1)]] // This attribute suppresses Bounds rule #1
    {
        int* q = p + 1; // GSL warning C26481 suppressed
        p = q--; // GSL warning C26481 suppressed
    }
}
```

The example raises these warnings:

- [C26494](../code-quality/c26494.md) (Type Rule 5: Always initialize an object.)

- [C26485](../code-quality/c26485.md) (Bounds Rule 3: No array to pointer decay.)

- [C26481](../code-quality/c26481.md) (Bounds Rule 1: Don't use pointer arithmetic. Use span instead.)

The first two warnings fire when you compile this code with the CppCoreCheck code analysis tool installed and activated. But the third warning doesn't fire because of the attribute. You can suppress the entire bounds profile by writing `[[gsl::suppress(bounds)]]` without including a specific rule number. The C++ Core Guidelines are designed to help you write better and safer code. The suppress attribute makes it easy to turn off the warnings when they aren't wanted.

### `[[msvc::intrinsic]]`

The Microsoft-specific `[[msvc::intrinsic]]` attribute tells the compiler to inline a metafunction that acts as a named cast from the parameter type to the return type. When the attribute is present on a function definition, the compiler replaces all calls to that function with a simple cast. The `[[msvc::intrinsic]]` attribute is available in Visual Studio 2022 version 17.5 preview 2 and later versions. This attribute applies only to the specific function that follows it.

The `[[msvc::intrinsic]]` attribute has two constraints on the function it's applied to:

1. The function can't be recursive; its body must only have a return statement with a cast.
1. The function can only accept a single parameter.
1. The **`/permissive-`** compiler option is required. (The **`/std:c++20`** and later options imply **`/permissive-`** by default.)

#### Example

In this sample code, the `[[msvc::intrinsic]]` attribute applied to the `my_move` function makes the compiler replace calls to the function with the inlined static cast in its body:

```cpp
template <typename T>
[[msvc::intrinsic]] T&& my_move(T&& t) { return static_cast<T&&>(t); }

void f() {
    int i = 0;
    i = my_move(i);
}
```

### `[[msvc::no_tls_guard]]`

The Microsoft-specific `[[msvc::no_tls_guard]]` attribute disables checks for initialization on first access to thread-local variables in DLLs. The checks are enabled by default in code built using Visual Studio 2019 version 16.5 and later versions. This attribute applies only to the specific variable that follows it. To disable checks globally, use the [`/Zc:tlsGuards-`](../build/reference/zc-tlsguards.md) compiler option.

### `[[msvc::forceinline]]`

This Microsoft specific `[[msvc::forceinline]]` attribute has the same meaning as `__forceinline` when placed before a function declaration. 

### `[[msvc::forceinline_calls]]`

This Microsoft specific `[[msvc::forceinline_calls]]` attribute can be placed on before a statement or a block, and will cause the inline heurisitc to attempt to forceinline all calls in that statement or block:

```cpp
void f() {
    [[msvc::forceinline_calls]]
    {
        foo();
        bar();
    }
    ...
    [[msvc::forceinline_calls]]
    bar();
    
    foo();
}
```

Here, the first call to `foo` and both calls to `bar` will be treated as if they were declared `__forceinline`, but not the second call to `foo`.

### `[[msvc::noinline]]`

This Microsoft specific `[[msvc::noinline]]` attribute has the same meaning as `declspec(noinline)` when placed before a function declaration. 

### `[[msvc::noinline_calls]]`

This Microsoft specific `[[msvc::noinline_calls]]` attribute has the same usage as `[[msvc::forceinline_calls]]`, and can be placed before any statement or block. Rather than forceinlining all calls in that block, however, it has the effect of turning off inlining for the scope to which it is applied.

### `[[msvc::flatten]]`

This Microsoft specific `[[msvc::flatten]]` attribute is very similar to `[[msvc::forceinline_calls]]`, and can be used in the same places and in the same way. The difference is flatten will dutifully forceinline all calls in the scope to which it is applied recursively, until no calls are left. This may have consequences for the resulting code size growth of the function or the throughput of the compiler, which the user must manage manually.
