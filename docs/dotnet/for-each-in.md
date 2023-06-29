---
title: "for each, in"
description: "C++/CLI for each, in, statement descriptions and examples."
ms.date: 06/29/2023
ms.topic: "reference"
f1_keywords: ["cliext::foreach", "each_CPP", "in_CPP", "for each_CPP", "for each", "in"]
helpviewer_keywords: ["for each keyword [C++]"]
---
# `for each`, `in`

Iterates through an array or collection. This nonstandard keyword is available in both C++/CLI and native C++ projects. However, using a standard [Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md) is preferred, instead.

## All runtimes

### Syntax

> **`for each (`** *`type`* *`identifier`* **`in`** *`expression`* **`) {`**\
> &emsp;*`statements`*\
> **`}`**

### Parameters

*`type`*\
The type of `identifier`.

*`identifier`*\
The iteration variable that represents the collection element.  When `identifier` is a [Tracking Reference Operator](../extensions/tracking-reference-operator-cpp-component-extensions.md), you can modify the element.

*`expression`*\
An array expression or collection. The collection element must be such that the compiler can convert it to the `identifier` type.

*`statements`*\
One or more statements to be executed.

### Remarks

The `for each` statement is used to iterate through a collection. You can modify elements in a collection, but you can't add or delete elements.

The *`statements`* are executed for each element in the array or collection. After the iteration has been completed for all the elements in the collection, control is transferred to the statement that follows the `for each` block.

`for each` and `in` are [context-sensitive keywords](../extensions/context-sensitive-keywords-cpp-component-extensions.md).

## Windows Runtime

### Requirements

Compiler option: **`/ZW`**

### Example

This example shows how to use `for each` to iterate through a string.

```cpp
// for_each_string1.cpp
// compile with: /ZW
#include <stdio.h>
using namespace Platform;

ref struct MyClass
{
   property String^ MyStringProperty;
};

int main()
{
   String^ MyString = ref new String("abcd");

   for each ( char c in MyString )
   {
      wprintf("%c", c);
   }

   wprintf("\n");

   MyClass^ x = ref new MyClass();
   x->MyStringProperty = "Testing";

   for each( char c in x->MyStringProperty )
   {
      wprintf("%c", c);
   }
}
```

```Output
abcd
Testing
```

## Common Language Runtime

### Remarks

The CLR syntax is the same as the **All Runtimes** syntax, except as follows.

*`expression`*\
A managed array expression or collection. The collection element must be such that the compiler can convert it from <xref:System.Object> to the *`identifier`* type.

*`expression`* evaluates to a type that implements <xref:System.Collections.IEnumerable>, <xref:System.Collections.Generic.IEnumerable%601>, or a type that defines a `GetEnumerator` method that either returns a type that implements <xref:System.Collections.IEnumerator> or declares all of the methods that are defined in `IEnumerator`.

### Requirements

Compiler option: **`/clr`**

### Example

This example shows how to use `for each` to iterate through a string.

```cpp
// for_each_string2.cpp
// compile with: /clr
using namespace System;

ref struct MyClass
{
   property String ^ MyStringProperty;
};

int main()
{
   String ^ MyString = gcnew String("abcd");

   for each ( Char c in MyString )
   {
      Console::Write(c);
   }

   Console::WriteLine();

   MyClass ^x = gcnew MyClass();
   x->MyStringProperty = "Testing";

   for each( Char c in x->MyStringProperty )
   {
      Console::Write(c);
   }
}
```

```Output
abcd
Testing
```

## See also

[Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md)\
[Range-based for statement (C++)](../cpp/range-based-for-statement-cpp.md)
