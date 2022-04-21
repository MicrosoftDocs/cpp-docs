---
description: "Learn more about: Attributes in C++"
title: "Attributes in C++"
ms.date: 04/18/2021
---
# Attributes in C++

The C++ Standard defines a common set of attributes. It also allows compiler vendors to define their own attributes within a vendor-specific namespace. However, compilers are only required to recognize the attributes defined in the standard.

In some cases, standard attributes overlap with compiler-specific `__declspec` parameters. In Microsoft C++, you can use the `[[deprecated]]` attribute instead of using `__declspec(deprecated)`. The `[[deprecated]]` attribute is recognized by any conforming compiler. For all other `__declspec` parameters such as `dllimport` and `dllexport`, so far there's no attribute equivalent, so you must continue to use `__declspec` syntax. Attributes don't affect the type system, and they don’t change the meaning of a program. Compilers ignore attribute values they don't recognize.

**Visual Studio 2017 version 15.3 and later** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later): In the scope of an attribute list, you can specify the namespace for all names with a single **`using`** introducer:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## C++ Standard Attributes

In C++11, attributes provide a standardized way to annotate C++ constructs (including but not limited to classes, functions, variables, and blocks) with additional information. Attributes may or may not be vendor-specific. A compiler can use this information to generate informational messages, or to apply special logic when compiling the attributed code. The compiler ignores any attributes that it doesn't recognize, which means you can't define your own custom attributes using this syntax. Attributes are enclosed by double square brackets:

```cpp
[[deprecated]]
void Foo(int);
```

Attributes represent a standardized alternative to vendor-specific extensions such as `#pragma` directives, `__declspec()` (Visual C++), or `__attribute__` (GNU). However, you'll still need to use the vendor-specific constructs for most purposes. The standard currently specifies the following attributes that a conforming compiler should recognize:

- `[[noreturn]]` Specifies that a function never returns; in other words it always throws an exception. The compiler can adjust its compilation rules for `[[noreturn]]` entities.

- `[[carries_dependency]]` Specifies that the function propagates data dependency ordering for thread synchronization. The attribute can be applied to one or more parameters, to specify that the passed-in argument carries a dependency into the function body. The attribute can be applied to the function itself, to specify that the return value carries a dependency out of the function. The compiler can use this information to generate more efficient code.

- `[[deprecated]]` **Visual Studio 2015 and later:** Specifies that a function isn't intended for use. Or, that it might not exist in future versions of a library interface. The compiler can use this attribute to generate an informational message when client code attempts to call the function. `[[deprecated]]` can be applied to declaration of a class, a typedef-name, a variable, a non-static data member, a function, a namespace, an enumeration, an enumerator, or a template specialization.

- `[[fallthrough]]` **Visual Studio 2017 and later:** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later.) The `[[fallthrough]]` attribute can be used in the context of [`switch`](switch-statement-cpp.md) statements as a hint to the compiler (or anyone reading the code) that the fallthrough behavior is intended. The Microsoft C++ compiler currently doesn't warn on fallthrough behavior, so this attribute has no effect compiler behavior.

- `[[nodiscard]]` **Visual Studio 2017 version 15.3 and later:** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later.) Specifies that a function's return value isn't intended to be discarded. Raises warning [C4834](../error-messages/compiler-warnings/c4834.md), as shown in this example:

    ```cpp
    [[nodiscard]]
    int foo(int i) { return i * i; }

    int main()
    {
        foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
        return 0;
    }
    ```

- `[[maybe_unused]]` **Visual Studio 2017 version 15.3 and later:** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later.) Specifies that a variable, function, class, typedef, non-static data member, enum, or template specialization may be intentionally unused. The compiler doesn't warn when an entity marked `[[maybe_unused]]` isn't used. An entity that's declared without the attribute can later be redeclared with the attribute and vice-versa. An entity is considered *marked* after its first declaration that's marked `[[maybe_unused]]` gets analyzed, and for the rest of the current translation unit.

- `[[likely]]` **Visual Studio 2019 version 16.6 and later:** (Available with [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) and later.) Specifies a hint to the compiler that the code path for the attributed label or statement is more likely to execute than alternatives. In the Microsoft compiler, the `[[likely]]` attribute marks blocks as "hot code", which increments an internal optimization score. The score is incremented more when optimizing for speed, and not as much when optimizing for size. The net score affects the likelihood of inlining, loop unrolling, and vectorizing optimizations. The effect of `[[likely]]` and `[[unlikely]]` is similar to [Profile-guided optimization](../build/profile-guided-optimizations.md), but limited in scope to the current translation unit.

- `[[unlikely]]` **Visual Studio 2019 version 16.6 and later:** (Available with [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) and later.) Specifies a hint to the compiler that the code path for the attributed label or statement is less likely to execute than alternatives. In the Microsoft compiler, the `[[unlikely]]` attribute marks blocks as "cold code", which decrements an internal optimization score. The score is decremented more when optimizing for size, and not as much when optimizing for speed. The net score affects the likelihood of inlining, loop unrolling, and vectorizing optimizations.

## Microsoft-specific attributes

- `[[gsl::suppress(rules)]]` This Microsoft-specific attribute is used for suppressing warnings from checkers that enforce [Guidelines Support Library (GSL)](https://github.com/Microsoft/GSL) rules in code. For example, consider this code snippet:

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

  - 26494 (Type Rule 5: Always initialize an object.)

  - 26485 (Bounds Rule 3: No array to pointer decay.)

  - 26481 (Bounds Rule 1: Don't use pointer arithmetic. Use span instead.)

  The first two warnings fire when you compile this code with the CppCoreCheck code analysis tool installed and activated. But the third warning doesn't fire because of the attribute. You can suppress the entire bounds profile by writing `[[gsl::suppress(bounds)]]` without including a specific rule number. The C++ Core Guidelines are designed to help you write better and safer code. The suppress attribute makes it easy to turn off the warnings when they aren't wanted.
