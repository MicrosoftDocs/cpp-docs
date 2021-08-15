---
description: "Learn more about: nullptr  (C++/CLI and C++/CX)"
title: "nullptr  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["__nullptr keyword (C++)", "nullptr keyword [C++]"]
ms.assetid: 594cfbf7-06cb-4366-9ede-c0b703e1d095
---
# nullptr  (C++/CLI and C++/CX)

The **`nullptr`** keyword represents a *null pointer value*. Use a null pointer value to indicate that an object handle, interior pointer, or native pointer type does not point to an object.

Use **`nullptr`** with either managed or native code. The compiler emits appropriate but different instructions for managed and native null pointer values. For information about using the ISO standard C++ version of this keyword, see [nullptr](../cpp/nullptr.md).

The **__nullptr** keyword is a Microsoft-specific keyword that has the same meaning as **`nullptr`**, but applies to only native code. If you use **`nullptr`** with native C/C++ code and then compile with the [/clr](../build/reference/clr-common-language-runtime-compilation.md) compiler option, the compiler cannot determine whether **`nullptr`** indicates a native or managed null pointer value. To make your intention clear to the compiler, use **`nullptr`** to specify a managed value or **__nullptr** to specify a native value.

The **`nullptr`** keyword is equivalent to **Nothing** in Visual Basic and **null** in C#.

## Usage

The **`nullptr`** keyword can be used anywhere a handle, native pointer, or function argument can be used.

The **`nullptr`** keyword is not a type and is not supported for use with:

- [sizeof](../cpp/sizeof-operator.md)

- [typeid](../cpp/typeid-operator.md)

- `throw nullptr` (although `throw (Object^)nullptr;` will work)

The **`nullptr`** keyword can be used in the initialization of the following pointer types:

- Native pointer

- Windows Runtime handle

- Managed handle

- Managed interior pointer

The **`nullptr`** keyword can be used to test if a pointer or handle reference is null before the reference is used.

Function calls among languages that use null pointer values for error checking should be interpreted correctly.

You cannot initialize a handle to zero; only **`nullptr`** can be used. Assignment of constant 0 to an object handle produces a boxed `Int32` and a cast to `Object^`.

## Example: `nullptr` keyword

The following code example demonstrates that the **`nullptr`** keyword can be used wherever a handle, native pointer, or function argument can be used. And the example demonstrates that the **`nullptr`** keyword can be used to check a reference before it is used.

```cpp
// mcpp_nullptr.cpp
// compile with: /clr
value class V {};
ref class G {};
void f(System::Object ^) {}

int main() {
// Native pointer.
   int *pN = nullptr;
// Managed handle.
   G ^pG = nullptr;
   V ^pV1 = nullptr;
// Managed interior pointer.
   interior_ptr<V> pV2 = nullptr;
// Reference checking before using a pointer.
   if (pN == nullptr) {}
   if (pG == nullptr) {}
   if (pV1 == nullptr) {}
   if (pV2 == nullptr) {}
// nullptr can be used as a function argument.
   f(nullptr);   // calls f(System::Object ^)
}
```

## Example: Use `nullptr` and zero interchangeably

The following code example shows that **`nullptr`** and zero can be used interchangeably on native pointers.

```cpp
// mcpp_nullptr_1.cpp
// compile with: /clr
class MyClass {
public:
   int i;
};

int main() {
   MyClass * pMyClass = nullptr;
   if ( pMyClass == nullptr)
      System::Console::WriteLine("pMyClass == nullptr");

   if ( pMyClass == 0)
      System::Console::WriteLine("pMyClass == 0");

   pMyClass = 0;
   if ( pMyClass == nullptr)
      System::Console::WriteLine("pMyClass == nullptr");

   if ( pMyClass == 0)
      System::Console::WriteLine("pMyClass == 0");
}
```

```Output
pMyClass == nullptr

pMyClass == 0

pMyClass == nullptr

pMyClass == 0
```

## Example: Interpret `nullptr` as a handle

The following code example shows that **`nullptr`** is interpreted as a handle to any type or a native pointer to any type. In case of function overloading with handles to different types, an ambiguity error will be generated. The **`nullptr`** would have to be explicitly cast to a type.

```cpp
// mcpp_nullptr_2.cpp
// compile with: /clr /LD
void f(int *){}
void f(int ^){}

void f_null() {
   f(nullptr);   // C2668
   // try one of the following lines instead
   f((int *) nullptr);
   f((int ^) nullptr);
}
```

## Example: Cast `nullptr`

The following code example shows that casting **`nullptr`** is allowed and returns a pointer or handle to the cast type that contains the **`nullptr`** value.

```cpp
// mcpp_nullptr_3.cpp
// compile with: /clr /LD
using namespace System;
template <typename T>
void f(T) {}   // C2036 cannot deduce template type because nullptr can be any type

int main() {
   f((Object ^) nullptr);   // T = Object^, call f(Object ^)

   // Delete the following line to resolve.
   f(nullptr);

   f(0);   // T = int, call f(int)
}
```

## Example: Pass `nullptr` as a function parameter

The following code example shows that **`nullptr`** can be used as a function parameter.

```cpp
// mcpp_nullptr_4.cpp
// compile with: /clr
using namespace System;
void f(Object ^ x) {
   Console::WriteLine("test");
}

int main() {
   f(nullptr);
}
```

```Output
test
```

## Example: Default initialization

The following code example shows that when handles are declared and not explicitly initialized, they are default initialized to **`nullptr`**.

```cpp
// mcpp_nullptr_5.cpp
// compile with: /clr
using namespace System;
ref class MyClass {
public:
   void Test() {
      MyClass ^pMyClass;   // gc type
      if (pMyClass == nullptr)
         Console::WriteLine("NULL");
   }
};

int main() {
   MyClass ^ x = gcnew MyClass();
   x -> Test();
}
```

```Output
NULL
```

## Example: Assign `nullptr` to a native pointer

The following code example shows that **`nullptr`** can be assigned to a native pointer when you compile with `/clr`.

```cpp
// mcpp_nullptr_6.cpp
// compile with: /clr
int main() {
   int * i = 0;
   int * j = nullptr;
}
```

## Requirements

Compiler option: (Not required; supported by all code generation options, including `/ZW` and `/clr`)

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)<br/>
[nullptr](../cpp/nullptr.md)
