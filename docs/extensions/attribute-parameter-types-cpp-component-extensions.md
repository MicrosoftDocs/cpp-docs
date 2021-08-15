---
description: "Learn more about: Attribute Parameter Types  (C++/CLI and C++/CX)"
title: "Attribute Parameter Types  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["custom attributes, parameter types"]
ms.assetid: d9f127a3-7f08-456f-acc6-256805632712
---
# Attribute Parameter Types  (C++/CLI and C++/CX)

Values passed to attributes must be known to the compiler at compile time.  Attribute parameters can be of the following types:

- **`bool`**

- **`char`**, **`unsigned char`**

- **`short`**, **`unsigned short`**

- **`int`**, **`unsigned int`**

- **`long`**, **`unsigned long`**

- **`__int64`**, **unsigned __int64**

- **`float`**, **`double`**

- **`wchar_t`**

- **`char*`** or `wchar_t*` or `System::String*`

- `System::Type ^`

- `System::Object ^`

- **`enum`**

## Example: Attribute parameter types

### Code

```cpp
// attribute_parameter_types.cpp
// compile with: /clr /c
using namespace System;
ref struct AStruct {};

[AttributeUsage(AttributeTargets::ReturnValue)]
ref struct Attr : public Attribute {
   Attr(AStruct ^ i){}
   Attr(bool i){}
   Attr(){}
};

ref struct MyStruct {
   static AStruct ^ x = gcnew AStruct;
   [returnvalue:Attr(x)] int Test() { return 0; }   // C3104
   [returnvalue:Attr] int Test2() { return 0; }   // OK
   [returnvalue:Attr(true)] int Test3() { return 0; }   // OK
};
```

## Example: Unnamed arguments precede named arguments

### Description

When specifying attributes, all unnamed (positional) arguments must precede any named arguments.

### Code

```cpp
// extending_metadata_c.cpp
// compile with: /clr /c
using namespace System;
[AttributeUsage(AttributeTargets::Class)]
ref class MyAttr : public Attribute {
public:
   MyAttr() {}
   MyAttr(int i) {}
   property int Priority;
   property int Version;
};

[MyAttr]
ref class ClassA {};   // No arguments

[MyAttr(Priority = 1)]
ref class ClassB {};   // Named argument

[MyAttr(123)]
ref class ClassC {};   // Positional argument

[MyAttr(123, Version = 1)]
ref class ClassD {};   // Positional and named
```

## Example: One-dimensional array attribute parameter

### Description

Attribute parameters can be one-dimensional arrays of the previous types.

### Code

```cpp
// extending_metadata_d.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::Class)]
public ref struct ABC : public Attribute {
   ABC(array<int>^){}
   array<double> ^ param;
};

[ABC( gcnew array<int> {1,2,3}, param = gcnew array<double>{2.71, 3.14})]
ref struct AStruct{};
```

## See also

[User-Defined Attributes](user-defined-attributes-cpp-component-extensions.md)
