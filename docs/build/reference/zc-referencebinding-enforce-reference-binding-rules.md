---
description: "Learn more about: /Zc:referenceBinding (Enforce reference binding rules)"
title: "/Zc:referenceBinding (Enforce reference binding rules)"
ms.date: "03/06/2018"
f1_keywords: ["referenceBinding", "/Zc:referenceBinding"]
helpviewer_keywords: ["-Zc compiler options (C++)", "referenceBinding", "Enforce reference binding rules", "/Zc compiler options (C++)", "Zc compiler options (C++)"]
ms.assetid: 0c6cfaac-9c2a-41a3-aa94-64ca8ef261fc
---
# /Zc:referenceBinding (Enforce reference binding rules)

When the **/Zc:referenceBinding** option is specified, the compiler doesn't allow a non-const lvalue reference to bind to a temporary.

## Syntax

> **/Zc:referenceBinding**[**-**]

## Remarks

If **/Zc:referenceBinding** is specified, the compiler follows section 8.5.3 of the C++11 standard: It doesn't allow expressions that bind a user-defined type temporary to a non-const lvalue reference. By default, or if **/Zc:referenceBinding-** is specified, the compiler allows such expressions as a Microsoft extension, but a level 4 warning is issued. For code security, portability and conformance, we recommend you use **/Zc:referenceBinding**.

The **/Zc:referenceBinding** option is off by default. The [/permissive-](permissive-standards-conformance.md) compiler option implicitly sets this option, but it can be overridden by using **/Zc:referenceBinding-**.

## Example

This sample shows the Microsoft extension that allows a temporary of a user-defined type to be bound to a non-const lvalue reference.

```cpp
// zcreferencebinding.cpp
struct S {
};

void f(S&) {
}

S g() {
    return S{};
}

int main() {
    S& s = g();         // warning C4239 at /W4
    const S& cs = g();  // okay, bound to const ref
    f(g());             // Extension: error C2664 only if /Zc:referenceBinding
}
```

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:referenceBinding** and then choose **OK**.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/Zc (Conformance)](zc-conformance.md)<br/>
