---
description: "Learn more about: Attributes in C++"
title: "Attributes in C++"
ms.date: "05/06/2019"
ms.assetid: 748340d9-8abf-4940-b0a0-91b6156a3ff8
---
# Attributes in C++

The C++ Standard defines a set of attributes and also allows compiler vendors to define their own attributes (within a vendor-specific namespace), but compilers are required to recognize only those attributes defined in the standard.

In some cases, standard attributes overlap with compiler-specific declspec parameters. In Visual C++, you can use the `[[deprecated]]` attribute instead of using `declspec(deprecated)` and the attribute will be recognized by any conforming compiler. For all other declspec parameters such as dllimport and dllexport, there is as yet no attribute equivalent so you must continue to use declspec syntax. Attributes do not affect the type system, and they don’t change the meaning of a program. Compilers ignore attribute values they don't recognize.

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): In the scope of an attribute list, you can specify the namespace for all names with a single **`using`** introducer:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## C++ Standard Attributes

In C++11, attributes provide a standardized way to annotate C++ constructs (including but not limited to classes, functions, variables, and blocks) with additional information that may or may not be vendor-specific. A compiler can use this information to generate informational messages, or to apply special logic when compiling the attributed code. The compiler ignores any attributes that it does not recognize, which means that you cannot define your own custom attributes using this syntax. Attributes are enclosed by double square brackets:

```cpp
[[deprecated]]
void Foo(int);
```

Attributes represent a standardized alternative to vendor-specific extensions such as #pragma directives, __declspec() (Visual C++), or &#95;&#95;attribute&#95;&#95; (GNU). However, you will still need to use the vendor-specific constructs for most purposes. The standard currently specifies the following attributes that a conforming compiler should recognize:

- `[[noreturn]]` Specifies that a function never returns; in other words it always throws an exception. The compiler can adjust its compilation rules for `[[noreturn]]` entities.

- `[[carries_dependency]]` Specifies that the function propagates data dependency ordering with respect to thread synchronization. The attribute can be applied to one or more parameters, to specify that the passed-in argument carries a dependency into the function body. The attribute can be applied to the function itself, to specify that the return value carries a dependency out of the function. The compiler can use this information to generate more efficient code.

- `[[deprecated]]` **Visual Studio 2015 and later:** Specifies that a function is not intended to be used, and might not exist in future versions of a library interface. The compiler can use this to generate an informational message when client code attempts to call the function. Can be applied to declaration of a class, a typedef-name, a variable, a non-static data member, a function, a namespace, an enumeration, an enumerator, or a template specialization.

- `[[fallthrough]]` **Visual Studio 2017 and later:** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)) The `[[fallthrough]]` attribute can be used in the context of [switch](switch-statement-cpp.md) statements as a hint to the compiler (or anyone reading the code) that the fallthrough behavior is intended. The Microsoft C++ compiler currently does not warn on fallthrough behavior, so this attribute has no effect compiler behavior.

- `[[nodiscard]]` **Visual Studio 2017 version 15.3 and later:** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)) Specifies that a function's return value is not intended to be discarded. Raises warning C4834, as shown in this example:

    ```cpp
    [[nodiscard]]
    int foo(int i) { return i * i; }

    int main()
    {
        foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
        return 0;
    }
    ```

- `[[maybe_unused]]` **Visual Studio 2017 version 15.3 and later:** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)) Specifies that a variable, function, class, typedef, non-static data member, enum, or template specialization may intentionally not be used. The compiler does not warn when an entity marked `[[maybe_unused]]` is not used. An entity that is declared without the attribute can later be redeclared with the attribute and vice versa. An entity is considered marked after its first declaration that is marked is analyzed, and for the remainder of translation of the current translation unit.

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

  The first two warnings fire when you compile this code with the CppCoreCheck code analysis tool installed and activated. But the third warning doesn't fire because of the attribute. You can suppress the entire bounds profile by writing [[gsl::suppress(bounds)]] without including a specific rule number. The C++ Core Guidelines are designed to help you write better and safer code. The suppress attribute makes it easy to turn off the warnings when they are not wanted.
  
