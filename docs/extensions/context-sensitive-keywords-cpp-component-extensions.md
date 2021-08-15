---
description: "Learn more about: Context-Sensitive Keywords  (C++/CLI and C++/CX)"
title: "Context-Sensitive Keywords  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
f1_keywords: ["internal_CPP"]
helpviewer_keywords: ["context-sensitive keywords"]
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
---
# Context-Sensitive Keywords  (C++/CLI and C++/CX)

*Context-sensitive keywords* are language elements that are recognized only in specific contexts. Outside the specific context, a context-sensitive keyword can be a user-defined symbol.

## All Runtimes

### Remarks

The following is a list of context-sensitive keywords:

- [abstract](abstract-cpp-component-extensions.md)

- [delegate](delegate-cpp-component-extensions.md)

- [event](event-cpp-component-extensions.md)

- [finally](../dotnet/finally.md)

- [for each, in](../dotnet/for-each-in.md)

- [initonly](../dotnet/initonly-cpp-cli.md)

- `internal`

- [literal](literal-cpp-component-extensions.md)

- [override](override-cpp-component-extensions.md)

- [property](property-cpp-component-extensions.md)

- [sealed](sealed-cpp-component-extensions.md)

- `where` (part of [Generics](generics-cpp-component-extensions.md))

For readability purposes, you may want to limit your use of context-sensitive keywords as user-defined symbols.

## Windows Runtime

### Remarks

(There are no platform-specific remarks for this feature.)

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

### Remarks

(There are no platform-specific remarks for this feature.)

### Requirements

Compiler option: `/clr`

### Examples

The following code example shows that in the appropriate context, the **`property`** context-sensitive keyword can be used to define a property and a variable.

```cpp
// context_sensitive_keywords.cpp
// compile with: /clr
public ref class C {
   int MyInt;
public:
   C() : MyInt(99) {}

   property int Property_Block {   // context-sensitive keyword
      int get() { return MyInt; }
   }
};

int main() {
   int property = 0;               // variable name
   C ^ MyC = gcnew C();
   property = MyC->Property_Block;
   System::Console::WriteLine(++property);
}
```

```Output
100
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
