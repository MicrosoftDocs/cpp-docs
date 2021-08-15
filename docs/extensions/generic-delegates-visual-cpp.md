---
description: "Learn more about: Generic Delegates (C++/CLI)"
title: "Generic Delegates (C++/CLI)"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["generic delegates", "delegates, generic [C++]"]
ms.assetid: 09d430b2-1aef-4fbc-87f9-9d7b8185d798
---
# Generic Delegates (C++/CLI)

You can use generic type parameters with delegates. For more information on delegates, see [delegate  (C++/CLI and C++/CX)](delegate-cpp-component-extensions.md).

## Syntax

```cpp
[attributes]
generic < [class | typename] type-parameter-identifiers>
[type-parameter-constraints-clauses]
[accessibility-modifiers] delegate result-type identifier
([formal-parameters]);
```

### Parameters

*attributes*<br/>
(Optional) Additional declarative information. For more information on attributes and attribute classes, see Attributes.

*type-parameter-identifier(s)*<br/>
Comma-separated list of identifiers for the type parameters.

*type-parameter-constraints-clauses*<br/>
Takes the form specified in [Constraints on Generic Type Parameters (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md)

*accessibility-modifiers*<br/>
(Optional) Accessibility modifiers (e.g. **`public`**, **`private`**).

*result-type*<br/>
The return type of the delegate.

*identifier*<br/>
The name of the delegate.

*formal-parameters*<br/>
(Optional) The parameter list of the delegate.

## Examples

The delegate type parameters are specified at the point where a delegate object is created. Both the delegate and method associated with it must have the same signature. The following is an example of a generic delegate declaration.

```cpp
// generics_generic_delegate1.cpp
// compile with: /clr /c
generic <class ItemType>
delegate ItemType GenDelegate(ItemType p1, ItemType% p2);
```

The following sample shows that

- You cannot use the same delegate object with different constructed types. Create different delegate objects for different types.

- A generic delegate can be associated with a generic method.

- When a generic method is called without specifying type arguments, the compiler tries to infer the type arguments for the call.

```cpp
// generics_generic_delegate2.cpp
// compile with: /clr
generic <class ItemType>
delegate ItemType GenDelegate(ItemType p1, ItemType% p2);

generic <class ItemType>
ref struct MyGenClass {
   ItemType MyMethod(ItemType i, ItemType % j) {
      return ItemType();
   }
};

ref struct MyClass {
   generic <class ItemType>
   static ItemType MyStaticMethod(ItemType i, ItemType % j) {
      return ItemType();
   }
};

int main() {
   MyGenClass<int> ^ myObj1 = gcnew MyGenClass<int>();
   MyGenClass<double> ^ myObj2 = gcnew MyGenClass<double>();
   GenDelegate<int>^ myDelegate1 =
      gcnew GenDelegate<int>(myObj1, &MyGenClass<int>::MyMethod);

   GenDelegate<double>^ myDelegate2 =
      gcnew GenDelegate<double>(myObj2, &MyGenClass<double>::MyMethod);

   GenDelegate<int>^ myDelegate =
      gcnew GenDelegate<int>(&MyClass::MyStaticMethod<int>);
}
```

The following example declares a generic delegate `GenDelegate<ItemType>`, and then instantiates it by associating it to the method `MyMethod` that uses the type parameter `ItemType`. Two instances of the delegate (an integer and a double) are created and invoked.

```cpp
// generics_generic_delegate.cpp
// compile with: /clr
using namespace System;

// declare generic delegate
generic <typename ItemType>
delegate ItemType GenDelegate (ItemType p1, ItemType% p2);

// Declare a generic class:
generic <typename ItemType>
ref class MyGenClass {
public:
   ItemType MyMethod(ItemType p1, ItemType% p2) {
      p2 = p1;
      return p1;
    }
};

int main() {
   int i = 0, j = 0;
   double m = 0.0, n = 0.0;

   MyGenClass<int>^ myObj1 = gcnew MyGenClass<int>();
   MyGenClass<double>^ myObj2 = gcnew MyGenClass<double>();

   // Instantiate a delegate using int.
   GenDelegate<int>^ MyDelegate1 =
      gcnew GenDelegate<int>(myObj1, &MyGenClass<int>::MyMethod);

   // Invoke the integer delegate using MyMethod.
   i = MyDelegate1(123, j);

   Console::WriteLine(
      "Invoking the integer delegate: i = {0}, j = {1}", i, j);

   // Instantiate a delegate using double.
   GenDelegate<double>^ MyDelegate2 =
      gcnew GenDelegate<double>(myObj2, &MyGenClass<double>::MyMethod);

   // Invoke the integer delegate using MyMethod.
   m = MyDelegate2(0.123, n);

   Console::WriteLine(
      "Invoking the double delegate: m = {0}, n = {1}", m, n);
}
```

```Output
Invoking the integer delegate: i = 123, j = 123
Invoking the double delegate: m = 0.123, n = 0.123
```

## See also

[Generics](generics-cpp-component-extensions.md)
