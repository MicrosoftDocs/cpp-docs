---
description: "Learn more about: __identifier (C++/CLI)"
title: "__identifier (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
f1_keywords: ["__identifier", "__identifier_cpp"]
helpviewer_keywords: ["__identifier keyword [C++]"]
ms.assetid: 348428af-afa7-4ff3-b571-acf874301cf2
---
# __identifier (C++/CLI)

Enables the use of C++ keywords as identifiers.

## All Platforms

### Syntax

```cpp
__identifier(C++_keyword)
```

### Remarks

Use of the **__identifier** keyword for identifiers that are not keywords is permitted, but strongly discouraged as a matter of style.

## Windows Runtime

### Requirements

Compiler option: `/ZW`

### Examples

**Example**

In the following example, a class named `template` is created in C# and distributed as a DLL. In the C++/CLI program that uses the `template` class, the **`__identifier`** keyword conceals the fact that `template` is a standard C++ keyword.

```csharp
// identifier_template.cs
// compile with: /target:library
public class template {
   public void Run() { }
}
```

```cpp
// keyword__identifier.cpp
// compile with: /ZW
#using <identifier_template.dll>
int main() {
   __identifier(template)^ pTemplate = ref new __identifier(template)();
   pTemplate->Run();
}
```

## Common Language Runtime

### Remarks

The **__identifier** keyword is valid with the `/clr` compiler option.

### Requirements

Compiler option: `/clr`

### Examples

In the following example, a class named `template` is created in C# and distributed as a DLL. In the C++/CLI program that uses the `template` class, the **`__identifier`** keyword conceals the fact that `template` is a standard C++ keyword.

```csharp
// identifier_template.cs
// compile with: /target:library
public class template {
   public void Run() { }
}
```

```cpp
// keyword__identifier.cpp
// compile with: /clr
#using <identifier_template.dll>

int main() {
   __identifier(template) ^pTemplate = gcnew __identifier(template)();
   pTemplate->Run();
}
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)<br/>
[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
