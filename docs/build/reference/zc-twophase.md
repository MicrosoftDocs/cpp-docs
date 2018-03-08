---
title: "/Zc:twoPhase- (disable two-phase name lookup) | Microsoft Docs"
ms.custom: ""
ms.date: "03/06/2018"
ms.technology: ["cpp-tools"]
ms.topic: "article"
f1_keywords: ["twoPhase", "/Zc:twoPhase", "VC.Project.VCCLCompilerTool.EnforceTypeConversionRules"]
dev_langs: ["C++"]
helpviewer_keywords: ["twoPhase", "disable two-phase name lookup", "/Zc:twoPhase"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /Zc:twoPhase- (disable two-phase name lookup)

When the **/Zc:twoPhase-** option is specified, the compiler parses and instantiates class templates and function templates in the same non-conforming way as versions of Visual Studio before Visual Studio 2017 version 15.3. 

## Syntax

> **/Zc:twoPhase-**

## Remarks

In Visual Studio 2017 version 15.3 and later, by default, the compiler uses two-phase name lookup for template name resolution. If **/Zc:twoPhase-** is specified, the compiler reverts to its previous non-conforming class template and function template name resolution and substitution behavior.

The **/Zc:twoPhase-** option to enable non-conforming behavior is not set by default. The [/permissive-](permissive-standards-conformance.md) option implicitly sets the conforming two-phase lookup compiler behavior, but it can be overridden by using **/Zc:twoPhase-**.

The Windows SDK header files in version 10.0.15063.0 (Creators Update or Redstone 2) and earlier versions do not work correctly in conformance mode. You must use **/Zc:twoPhase-** to compile code for those SDK versions when you use Visual Studio 2017 version 15.3 and later versions. Versions of the Windows SDK starting with version 10.0.15254.0 (Redstone 3 or Fall Creators Update) work correctly in conformance mode and do not require the **/Zc:twoPhase-** option.

Use **/Zc:twoPhase-** if your code requires the old behavior to compile correctly. Strongly consider updating your code to conform to the standard.

### Compiler behavior under /Zc:twoPhase-

In versions of the compiler before Visual Studio 2017 version 15.3, and when **/Zc:twoPhase-** is specified, the compiler uses this behavior:

- It parses only the template declaration, the class head, and the base class list. The template body is captured as a token stream. No function bodies, initializers, default arguments, or noexcept arguments are parsed. The class template is pseudo-instantiated on a tentative type to validate that the declarations in the class template are correct. Consider this class template:

   ```cpp
   template <typename T> class Derived : public Base<T> { ... }
   ```

   The template declaration, `template <typename T`>, the class head `class Derived`, and the base-class list `public Base<T>` are parsed, but the template body is captured as a token stream.

- When parsing a function template, the compiler parses only the function signature. The function body is never parsed. Instead, it is captured as a token stream.

As a result, if the template body has syntax errors and the template is never instantiated, the errors are never diagnosed.

Another effect of this behavior is in overload resolution. Because of the way the token stream is expanded at the site of instantiation, symbols that were not visible at the template declaration may be visible at the point of instantiation and participate in overload resolution. This can lead to templates that change behavior based on code that was not visible when the template was defined, contrary to the standard.

### Update your code for two-phase conformance

Older versions of the compiler do not require the keywords `template` and `typename` everywhere the C++ Standard requires them. These keywords are needed in some positions to disambiguate how compilers should parse a dependent name during the first phase of lookup. For example:

`T::Foo<a || b>(c);`

A conforming compiler parses `Foo` as a variable in the scope of `T`, meaning this code is a logical-or expression with `T::foo < a` as the left operand and `b > (c)` as the right operand. If you mean to use `Foo` as a function template, you must indicate that this is a template by adding the `template` keyword:

`T::template Foo<a || b>(c);`

In versions prior to Visual Studio 2017 version 15.3, and when **/Zc:twoPhase-** is specified, the compiler allows this code without the `template` keyword and interprets it as a call to a function template with an argument of `a || b`, because it parses templates in a very limited fashion. The code above isn't parsed at all in the first phase. During the second phase there’s enough context to tell that `T::Foo` is a template rather than a variable so the compiler does not enforce use of the keyword.

This behavior can also be seen by eliminating the keyword `typename` before names in function template bodies, initializers, default arguments, and noexcept arguments. For example:

```cpp
template<typename T>
typename T::TYPE func(typename T::TYPE*)
{
    /* typename */ T::TYPE i;
}
```

If you do not use the keyword `typename` in the function body, this code compiles under **/Zc:twoPhase-**, but not under **/permissive-**. The `typename` keyword is required to indicate that the `TYPE` is dependent. Because the body is not parsed under **/Zc:twoPhase-**, the compiler does’t require the keyword. In **/permissive-** conformance mode, code without the `typename` keyword generates errors. To migrate your code to Visual Studio 2017 version 15.3 and beyond, insert the `typename` keyword where it is missing.

Similarly, consider this code sample:

```cpp
template<typename T>
typename T::template X<T>::TYPE func(typename T::TYPE)
{
    typename T::/* template */ X<T>::TYPE i;
}
```

Under **/Zc:twoPhase-** and in older compilers, the compiler only requires the `template` keyword on line 2. By default, and in conformance mode, the compiler now also requires the `template` keyword on line 4 to indicate that `T::X<T>` is a template. Look for code that is missing this keyword, and supply it to make your code conform to the standard.

For more information about conformance issues, see [C++ conformance improvements in Visual Studio](../../cpp-conformance-improvements-2017.md) and [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:twoPhase-** and then choose **OK**.

## See also

[/Zc (Conformance)](../../build/reference/zc-conformance.md)<br/>
