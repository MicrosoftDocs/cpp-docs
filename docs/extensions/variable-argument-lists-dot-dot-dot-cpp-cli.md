---
description: "Learn more about: Variable Argument Lists (...) (C++/CLI)"
title: "Variable Argument Lists (...) (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["variable argument lists", "parameter arrays"]
ms.assetid: db1a27f4-02a8-4318-8690-1f2893f52b38
---
# Variable Argument Lists (...) (C++/CLI)

This example shows how you can use the `...` syntax in C++/CLI to implement functions that have a variable number of arguments.

> [!NOTE]
> This topic pertains to C++/CLI. For information about using the `...` in ISO Standard C++, see [Ellipsis and variadic templates](../cpp/ellipses-and-variadic-templates.md) and Ellipsis and default arguments in [Postfix expressions](../cpp/postfix-expressions.md).

The parameter that uses `...` must be the last parameter in the parameter list.

## Example

### Code

```cpp
// mcppv2_paramarray.cpp
// compile with: /clr
using namespace System;
double average( ... array<Int32>^ arr ) {
   int i = arr->GetLength(0);
   double answer = 0.0;

   for (int j = 0 ; j < i ; j++)
      answer += arr[j];

   return answer / i;
}

int main() {
   Console::WriteLine("{0}", average( 1, 2, 3, 6 ));
}
```

```Output
3
```

## Code Example

The following example shows how to call from C# a Visual C++ function that takes a variable number of arguments.

```cpp
// mcppv2_paramarray2.cpp
// compile with: /clr:safe /LD
using namespace System;

public ref class C {
public:
   void f( ... array<String^>^ a ) {}
};
```

The function `f` can be called from C# or Visual Basic, for example, as though it were a function that can take a variable number of arguments.

In C#, an argument that is passed to a `ParamArray` parameter can be called by a variable number of arguments. The following code sample is in C#.

```csharp
// mcppv2_paramarray3.cs
// compile with: /r:mcppv2_paramarray2.dll
// a C# program

public class X {
   public static void Main() {
      // Visual C# will generate a String array to match the
      // ParamArray attribute
      C myc = new C();
      myc.f("hello", "there", "world");
   }
}
```

A call to `f` in Visual C++ can pass an initialized array or a variable-length array.

```cpp
// mcpp_paramarray4.cpp
// compile with: /clr
using namespace System;

public ref class C {
public:
   void f( ... array<String^>^ a ) {}
};

int main() {
   C ^ myc = gcnew C();
   myc->f("hello", "world", "!!!");
}
```

## See also

[Arrays](arrays-cpp-component-extensions.md)
