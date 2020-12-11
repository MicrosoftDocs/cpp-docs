---
description: "Learn more about: deprecated (C++)"
title: "deprecated (C++)"
ms.date: "03/28/2017"
f1_keywords: ["deprecated_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], deprecated", "deprecated __declspec keyword"]
ms.assetid: beef1129-9434-4cb3-8392-f1eb29e04805
---
# deprecated (C++)

This topic is about the Microsoft-specific deprecated declspec declaration. For information about the C++14 `[[deprecated]]` attribute, and guidance on when to use that attribute vs. the Microsoft-specific declspec or pragma, see [C++ Standard Attributes](attributes.md).

With the exceptions noted below, the **`deprecated`** declaration offers the same functionality as the [deprecated](../preprocessor/deprecated-c-cpp.md) pragma:

- The **`deprecated`** declaration lets you specify particular forms of function overloads as deprecated, whereas the pragma form applies to all overloaded forms of a function name.

- The **`deprecated`** declaration lets you specify a message that will display at compile time. The text of the message can be from a macro.

- Macros can only be marked as deprecated with the **`deprecated`** pragma.

If the compiler encounters the use of a deprecated identifier or the standard [`[[deprecated]]`](attributes.md) attribute, a [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) warning is thrown.

## Examples

The following sample shows how to mark functions as deprecated, and how to specify a message that will be displayed at compile time, when the deprecated function is used.

```cpp
// deprecated.cpp
// compile with: /W3
#define MY_TEXT "function is deprecated"
void func1(void) {}
__declspec(deprecated) void func1(int) {}
__declspec(deprecated("** this is a deprecated function **")) void func2(int) {}
__declspec(deprecated(MY_TEXT)) void func3(int) {}

int main() {
   func1();
   func1(1);   // C4996
   func2(1);   // C4996
   func3(1);   // C4996
}
```

The following sample shows how to mark classes as deprecated, and how to specify a message that will be displayed at compile time, when the deprecated class is used.

```cpp
// deprecate_class.cpp
// compile with: /W3
struct __declspec(deprecated) X {
   void f(){}
};

struct __declspec(deprecated("** X2 is deprecated **")) X2 {
   void f(){}
};

int main() {
   X x;   // C4996
   X2 x2;   // C4996
}
```

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
