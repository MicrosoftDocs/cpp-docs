---
description: "Learn more about: `/Zc:ternary` (Enforce conditional operator rules)"
title: "/Zc:ternary (Enforce conditional operator rules)"
ms.date: "09/12/2019"
f1_keywords: ["/Zc:ternary"]
helpviewer_keywords: ["/Zc:ternary", "Zc:ternary", "-Zc:ternary"]
---
# `/Zc:ternary` (Enforce conditional operator rules)

Enable enforcement of C++ Standard rules for the types and const or volatile (cv) qualification of the second and third operands in a conditional operator expression.

## Syntax

> **`/Zc:ternary`**[**`-`**]

## Remarks

Starting in Visual Studio 2017, the compiler supports C++ standard *conditional operator* (**`?:`**) behavior. It's also known as the *ternary operator*. The C++ Standard requires ternary operands satisfy one of three conditions: The operands must be of the same type and **`const`** or **`volatile`** qualification (cv-qualification), or only one operand must be unambiguously convertible to the same type and cv-qualification as the other. Or, one or both operands must be a throw expression. In versions before Visual Studio 2017 version 15.5, the compiler allowed conversions that are considered ambiguous by the standard.

When the **`/Zc:ternary`** option is specified, the compiler conforms to the standard. It rejects code that doesn't satisfy the rules for matched types and cv-qualification of the second and third operands.

The **`/Zc:ternary`** option is off by default in Visual Studio 2017. Use **`/Zc:ternary`** to enable conforming behavior, or **`/Zc:ternary-`** to explicitly specify the previous non-conforming compiler behavior. The [`/permissive-`](permissive-standards-conformance.md) option implicitly enables this option, but it can be overridden by using **`/Zc:ternary-`**.

### Examples

This sample shows how a class that provides both non-explicit initialization from a type, and conversion to a type, can lead to ambiguous conversions. This code is accepted by the compiler by default, but rejected when **/`Zc:ternary`** or **`/permissive-`** is specified.

```cpp
// zcternary1.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary zcternary1.cpp

struct A
{
   long l;
   A(int i) : l{i} {}    // explicit prevents conversion of int
   operator int() const { return static_cast<int>(l); }
};

int main()
{
   A a(42);
   // Accepted when /Zc:ternary (or /permissive-) is not used
   auto x = true ? 7 : a;  // old behavior prefers A(7) over (int)a
   auto y = true ? A(7) : a;   // always accepted
   auto z = true ? 7 : (int)a; // always accepted
   return x + y + z;
}
```

To fix this code, make an explicit cast to the preferred common type, or prevent one direction of type conversion. You can keep the compiler from matching a type conversion by making the conversion explicit.

An important exception to this common pattern is when the type of the operands is one of the null-terminated string types, such as `const char*`, `const char16_t*`, and so on. You can also reproduce the effect with array types and the pointer types they decay to. The behavior when the actual second or third operand to `?:` is a string literal of corresponding type depends on the language standard used. C++17 has changed semantics for this case from C++14. As a result, the compiler accepts the code in the following example under the default **`/std:c++14`**, but rejects it when you specify **`/std:c++17`**.

```cpp
// zcternary2.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary /std:c++17 zcternary2.cpp

struct MyString
{
   const char * p;
   MyString(const char* s = "") noexcept : p{s} {} // from char*
   operator const char*() const noexcept { return p; } // to char*
};

int main()
{
   MyString s;
   auto x = true ? "A" : s; // MyString: permissive prefers MyString("A") over (const char*)s
}
```

To fix this code, cast one of the operands explicitly.

Under **`/Zc:ternary`**, the compiler rejects conditional operators where one of the arguments is of type **`void`**, and the other isn't a **`throw`** expression. A common use of this pattern is in ASSERT-like macros:

```cpp
// zcternary3.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary /c zcternary3.cpp

void myassert(const char* text, const char* file, int line);
#define ASSERT(ex) (void)((ex) ? 0 : myassert(#ex, __FILE__, __LINE__))
// To fix, define it this way instead:
// #define ASSERT(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))

int main()
{
   ASSERT(false);  // C3447
}
```

The typical solution is to replace the non-void argument with `void()`.

This sample shows code that generates an error under both **`/Zc:ternary`** and **`/Zc:ternary-`**:

```cpp
// zcternary4.cpp
// Compile by using:
//   cl /EHsc /W4 /nologo /Zc:ternary zcternary4.cpp
//   cl /EHsc /W4 /nologo /Zc:ternary zcternary4.cpp

int main() {
   auto p1 = [](int a, int b) { return a > b; };
   auto p2 = [](int a, int b) { return a > b; };
   auto p3 = true ? p1 : p2; // C2593 under /Zc:ternary, was C2446
}
```

This code previously gave this error:

```Output
error C2446: ':': no conversion from 'foo::<lambda_f6cd18702c42f6cd636bfee362b37033>' to 'foo::<lambda_717fca3fc65510deea10bc47e2b06be4>'
note: No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
```

With **`/Zc:ternary`**, the reason for failure becomes clearer. Any of several implementation-defined calling conventions could be used to generate each lambda. However, the compiler has no preference rule to disambiguate the possible lambda signatures. The new output looks like this:

```Output
error C2593: 'operator ?' is ambiguous
note: could be 'built-in C++ operator?(bool (__cdecl *)(int,int), bool (__cdecl *)(int,int))'
note: or       'built-in C++ operator?(bool (__stdcall *)(int,int), bool (__stdcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__fastcall *)(int,int), bool (__fastcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__vectorcall *)(int,int), bool (__vectorcall *)(int,int))'
note: while trying to match the argument list '(foo::<lambda_717fca3fc65510deea10bc47e2b06be4>, foo::<lambda_f6cd18702c42f6cd636bfee362b37033>)'
```

A common source of problems found by **`/Zc:ternary`** comes from conditional operators used in template meta-programming. Some of the result types change under this switch. The following example demonstrates two cases where **`/Zc:ternary`** changes a conditional expression's result type in a non-meta-programming context:

```cpp
// zcternary5.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary zcternary5.cpp

int main(int argc, char**) {
   char a = 'A';
   const char b = 'B';
   decltype(auto) x = true ? a : b; // char without, const char& with /Zc:ternary
   const char(&z)[2] = argc > 3 ? "A" : "B"; // const char* without /Zc:ternary
   return x > *z;
}
```

The typical fix is to apply a `std::remove_reference` trait on the result type, where needed to preserve the old behavior.

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **`/Zc:ternary`** or **`/Zc:ternary-`** and then choose **OK**.

## See also

[`/Zc` (Conformance)](zc-conformance.md)
