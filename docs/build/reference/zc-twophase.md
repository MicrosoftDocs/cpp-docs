---
title: "/Zc:twoPhase- (disable two-phase name lookup)"
description: "Explains how /Zc:twoPhase- disables two-phase name lookup when /permissive- is specified."
ms.date: 09/27/2022
f1_keywords: ["twoPhase", "/Zc:twoPhase"]
helpviewer_keywords: ["twoPhase", "disable two-phase name lookup", "/Zc:twoPhase"]
---
# `/Zc:twoPhase-` (disable two-phase name lookup)

The **`/Zc:twoPhase-`** option, under **`/permissive-`**, tells the compiler to use the original, non-conforming Microsoft C++ compiler behavior to parse and instantiate class templates and function templates.

## Syntax

> **`/Zc:twoPhase-`**

## Remarks

Visual Studio 2017 version 15.3 and later: Under [`/permissive-`](permissive-standards-conformance.md), the compiler uses two-phase name lookup for template name resolution. If you also specify **`/Zc:twoPhase-`**, the compiler reverts to its previous non-conforming class template and function template name resolution and substitution behavior. When **`/permissive-`** isn't specified, the non-conforming behavior is the default.

The Windows SDK header files in version 10.0.15063.0 (Creators Update or RS2) and earlier don't work in conformance mode. **`/Zc:twoPhase-`** is required to compile code for those SDK versions when you use **`/permissive-`**. Versions of the Windows SDK starting with version 10.0.15254.0 (Fall Creators Update or RS3) work correctly in conformance mode. They don't require the **`/Zc:twoPhase-`** option.

Use **`/Zc:twoPhase-`** if your code requires the old behavior to compile correctly. Strongly consider updating your code to conform to the standard.

### Compiler behavior under `/Zc:twoPhase-`

By default, or in Visual Studio 2017 version 15.3 and later when you specify both **`/permissive-`** and **`/Zc:twoPhase-`**, the compiler uses this behavior:

- It parses only the template declaration, the class head, and the base class list. The template body is captured as a token stream. No function bodies, initializers, default arguments, or noexcept arguments are parsed. The class template is pseudo-instantiated on a tentative type to validate that the declarations in the class template are correct. Consider this class template:

   ```cpp
   template <typename T> class Derived : public Base<T> { ... }
   ```

   The template declaration, `template <typename T>`, the class head `class Derived`, and the base-class list `public Base<T>` are parsed, but the template body is captured as a token stream.

- When it parses a function template, the compiler parses only the function signature. The function body is never parsed. Instead, it's captured as a token stream.

As a result, if the template body has syntax errors, but the template never gets instantiated, the compiler doesn't diagnose the errors.

Another effect of this behavior is in overload resolution. Non-standard behavior occurs because of the way the token stream is expanded at the site of instantiation. Symbols that weren't visible at the template declaration may be visible at the point of instantiation. That means they can participate in overload resolution. You may find templates change behavior based on code that wasn't visible at template definition, contrary to the standard.

For example, consider this code:

```cpp
// zctwophase.cpp
// To test options, compile by using
// cl /EHsc /nologo /W4 zctwophase.cpp
// cl /EHsc /nologo /W4 /permissive- zctwophase.cpp
// cl /EHsc /nologo /W4 /permissive- /Zc:twoPhase- zctwophase.cpp

#include <cstdio>

void func(long) { std::puts("Standard two-phase") ;}

template<typename T> void g(T x)
{
    func(0);
}

void func(int) { std::puts("Microsoft one-phase"); }

int main()
{
    g(6174);
}
```

Here's the output when you use the default mode, conformance mode, and conformance mode with **`/Zc:twoPhase-`** compiler options:

```cmd
C:\Temp>cl /EHsc /nologo /W4 zctwophase.cpp && zctwophase
zctwophase.cpp
Microsoft one-phase

C:\Temp>cl /EHsc /nologo /W4 /permissive- zctwophase.cpp && zctwophase
zctwophase.cpp
Standard two-phase

C:\Temp>cl /EHsc /nologo /W4 /permissive- /Zc:twoPhase- zctwophase.cpp && zctwophase
zctwophase.cpp
Microsoft one-phase
```

When compiled in conformance mode under **`/permissive-`**, this program prints "`Standard two-phase`", because the second overload of `func` isn't visible when the compiler reaches the template. If you add **`/Zc:twoPhase-`**, the program prints "`Microsoft one-phase`". The output is the same as when you don't specify **`/permissive-`**.

*Dependent names* are names that depend on a template parameter. These names have lookup behavior that is also different under **`/Zc:twoPhase-`**. In conformance mode, dependent names aren't bound at the point of the template's definition. Instead, the compiler looks them up when it instantiates the template. For function calls with a dependent function name, the name gets bound to functions visible at the call site in the template definition. Other overloads from argument-dependent lookup are added, both at the point of the template definition, and at the point of template instantiation.

Two-phase lookup consists of two parts: The lookup for non-dependent names during template definition, and the lookup for dependent names during template instantiation. Under **`/Zc:twoPhase-`**, the compiler doesn't do argument-dependent lookup separately from unqualified lookup. That is, it doesn't do two-phase lookup, so the results of overload resolution may be different.

Here's another example:

```cpp
// zctwophase1.cpp
// To test options, compile by using
// cl /EHsc /W4 zctwophase1.cpp
// cl /EHsc /W4 /permissive- zctwophase1.cpp
// cl /EHsc /W4 /permissive- /Zc:twoPhase- zctwophase1.cpp

#include <cstdio>

void func(long) { std::puts("func(long)"); }

template <typename T> void tfunc(T t) {
    func(t);
}

void func(int) { std::puts("func(int)"); }

namespace NS {
    struct S {};
    void func(S) { std::puts("NS::func(NS::S)"); }
}

int main() {
    tfunc(1729);
    NS::S s;
    tfunc(s);
}
```

When compiled without **`/permissive-`**, this code prints:

```Output
func(int)
NS::func(NS::S)
```

When compiled with **`/permissive-`**, but without **`/Zc:twoPhase-`**, this code prints:

```Output
func(long)
NS::func(NS::S)
```

When compiled with both **`/permissive-`** and **`/Zc:twoPhase-`**, this code prints:

```Output
func(int)
NS::func(NS::S)
```

In conformance mode under **`/permissive-`**, the call `tfunc(1729)` resolves to the `void func(long)` overload. It doesn't resolve to the `void func(int)` overload, as under **`/Zc:twoPhase-`**. The reason is, the unqualified `func(int)` is declared after the definition of the template, and it isn't found through argument-dependent lookup. But `void func(S)` does participate in argument-dependent lookup, so it's added to the overload set for the call `tfunc(s)`, even though it's declared after the function template.

### Update your code for two-phase conformance

Older versions of the compiler don't require the keywords **`template`** and **`typename`** everywhere the C++ Standard requires them. These keywords are needed in some positions to disambiguate how compilers should parse a dependent name during the first phase of lookup. For example:

`T::Foo<a || b>(c);`

A conforming compiler parses `Foo` as a variable in the scope of `T`, meaning this code is a logical-or expression with `T::foo < a` as the left operand and `b > (c)` as the right operand. If you mean to use `Foo` as a function template, you must indicate that it's a template by adding the **`template`** keyword:

`T::template Foo<a || b>(c);`

In versions Visual Studio 2017 version 15.3 and later, when **`/permissive-`** and **`/Zc:twoPhase-`** are specified, the compiler allows this code without the **`template`** keyword. It interprets the code as a call to a function template with an argument of `a || b`, because it only parses templates in a limited fashion. The code above isn't parsed at all in the first phase. During the second phase, there's enough context to tell that `T::Foo` is a template rather than a variable, so the compiler doesn't enforce use of the keyword.

This behavior can also be seen by eliminating the keyword **`typename`** before names in function template bodies, initializers, default arguments, and noexcept arguments. For example:

```cpp
template<typename T>
typename T::TYPE func(typename T::TYPE*)
{
    /* typename */ T::TYPE i;
}
```

If you don't use the keyword **`typename`** in the function body, this code compiles under **`/permissive- /Zc:twoPhase-`**, but not under **`/permissive-`** alone. The **`typename`** keyword is required to indicate that the `TYPE` is dependent. Because the body isn't parsed under **`/Zc:twoPhase-`**, the compiler does't require the keyword. In **`/permissive-`** conformance mode, code without the **`typename`** keyword generates errors. To migrate your code to conformance in Visual Studio 2017 version 15.3 and beyond, insert the **`typename`** keyword where it's missing.

Similarly, consider this code sample:

```cpp
template<typename T>
typename T::template X<T>::TYPE func(typename T::TYPE)
{
    typename T::/* template */ X<T>::TYPE i;
}
```

Under **`/permissive- /Zc:twoPhase-`** and in older compilers, the compiler only requires the **`template`** keyword on line 2. In conformance mode, the compiler now also requires the **`template`** keyword on line 4 to indicate that `T::X<T>` is a template. Look for code that is missing this keyword, and supply it to make your code conform to the standard.

For more information about conformance issues, see [C++ conformance improvements in Visual Studio](../../overview/cpp-conformance-improvements.md) and [Nonstandard behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include *`/Zc:twoPhase-`* and then choose **OK**.

## See also

[`/Zc` (Conformance)](zc-conformance.md)
