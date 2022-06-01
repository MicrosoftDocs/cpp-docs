---
description: "Learn more about: Constraints on generic type parameters (C++/CLI)"
title: "Constraints on generic type parameters (C++/CLI)"
ms.date: 06/01/2022
ms.topic: "reference"
f1_keywords: ["where"]
helpviewer_keywords: ["where keyword [C++]", "constraints, C++"]
ms.assetid: eb828cc9-684f-48a3-a898-b327700c0a63
---
# Constraints on generic type parameters (C++/CLI)

In generic type or method declarations, you can qualify a type parameter with *constraints*. A constraint is a requirement that types used as type arguments must satisfy. For example, a constraint might be that the type argument must implement a certain interface or inherit from a specific class.

Constraints are optional; not specifying a constraint on a parameter is equivalent to using a <xref:System.Object> constraint.

## Syntax

> **`where`** *`type-parameter`* **`:`** *`constraint-list`*

### Parameters

*`type-parameter`*\
One of the type parameter identifiers to constrain.

*`constraint-list`*\
A comma-separated list of constraint specifications. The list can include interfaces to be implemented by the *`type-parameter`*.

The list can also include a class. To satisfy a base class constraint, the type argument must be the same class as the constraint or derive from the constraint. Specify **`ref class`** to indicate the type argument must be a reference type, including any `class`, `interface`, `delegate`, or `array` type. Specify **`value class`** to indicate the type argument must be a value type. Any value type except `Nullable<T>` can be specified. 

You can also specify `gcnew()` to indicate the type argument must have a public parameterless constructor.

You can also specify a generic parameter as a constraint. The type argument supplied for the type you're constraining must be or derive from the type of the constraint. This parameter is called a *naked type constraint*.

## Remarks

The constraint clause consists of **`where`** followed by a type parameter, a colon (**`:`**), and the constraint, which specifies the nature of the restriction on the type parameter. **`where`** is a context-sensitive keyword. For more information, see [Context-sensitive keywords](context-sensitive-keywords-cpp-component-extensions.md). Separate multiple **`where`** clauses with a space.

Constraints are applied to type parameters to place limitations on the types that can be used as arguments for a generic type or method.

Class and interface constraints specify that the argument types must be or inherit from a specified class or implement a specified interface.

The application of constraints to a generic type or method allows code in that type or method to take advantage of the known features of the constrained types. For example, you can declare a generic class such that the type parameter implements the `IComparable<T>` interface:

```cpp
// generics_constraints_1.cpp
// compile with: /c /clr
using namespace System;
generic <typename T>
where T : IComparable<T>
ref class List {};
```

This constraint requires that a type argument used for `T` implements `IComparable<T>` at compile time. It also allows interface methods, such as `CompareTo`, to be called. No cast is needed on an instance of the type parameter to call interface methods.

Static methods in the type argument's class can't be called through the type parameter; they can be called only through the actual named type.

A constraint can't be a value type, including built-in types such as **`int`** or **`double`**. Since value types can't have derived classes, only one class could ever satisfy the constraint. In that case, the generic can be rewritten with the type parameter replaced by the specific value type.

Constraints are required in some cases since the compiler won't allow the use of methods or other features of an unknown type unless the constraints imply that the unknown type supports the methods or interfaces.

Multiple constraints for the same type parameter can be specified in a comma-separated list

```cpp
// generics_constraints_2.cpp
// compile with: /c /clr
using namespace System;
using namespace System::Collections::Generic;
generic <typename T>
where T : List<T>, IComparable<T>
ref class List {};
```

With multiple type parameters, use one **where** clause for each type parameter. For example:

```cpp
// generics_constraints_3.cpp
// compile with: /c /clr
using namespace System;
using namespace System::Collections::Generic;

generic <typename K, typename V>
   where K: IComparable<K>
   where V: IComparable<K>
ref class Dictionary {};
```

Use constraints in your code according to the following rules:

- If multiple constraints are listed, the constraints may be listed in any order.

- Constraints can also be class types, such as abstract base classes. However, constraints can't be value types or `sealed` classes.

- Constraints can't themselves be type parameters, but they can involve the type parameters in an open constructed type. For example:

    ```cpp
    // generics_constraints_4.cpp
    // compile with: /c /clr
    generic <typename T>
    ref class G1 {};

    generic <typename Type1, typename Type2>
    where Type1 : G1<Type2>   // OK, G1 takes one type parameter
    ref class G2{};
    ```

## Examples

The following example demonstrates using constraints to call instance methods on type parameters.

```cpp
// generics_constraints_5.cpp
// compile with: /clr
using namespace System;

interface class IAge {
   int Age();
};

ref class MyClass {
public:
   generic <class ItemType> where ItemType : IAge
   bool isSenior(ItemType item) {
      // Because of the constraint,
      // the Age method can be called on ItemType.
      if (item->Age() >= 65)
         return true;
      else
         return false;
   }
};

ref class Senior : IAge {
public:
   virtual int Age() {
      return 70;
   }
};

ref class Adult: IAge {
public:
   virtual int Age() {
      return 30;
   }
};

int main() {
   MyClass^ ageGuess = gcnew MyClass();
   Adult^ parent = gcnew Adult();
   Senior^ grandfather = gcnew Senior();

   if (ageGuess->isSenior<Adult^>(parent))
      Console::WriteLine("\"parent\" is a senior");
   else
      Console::WriteLine("\"parent\" is not a senior");

   if (ageGuess->isSenior<Senior^>(grandfather))
      Console::WriteLine("\"grandfather\" is a senior");
   else
      Console::WriteLine("\"grandfather\" is not a senior");
}
```

```Output
"parent" is not a senior
"grandfather" is a senior
```

When a generic type parameter is used as a constraint, it's called a *naked type constraint*. Naked type constraints are useful when a member function with its own type parameter needs to constrain that parameter to the type parameter of the containing type.

In the following example, `T` is a naked type constraint in the context of the `Add` method.

Naked type constraints can also be used in generic class definitions. The usefulness of naked type constraints with generic classes is limited because the compiler can assume nothing about a naked type constraint except that it derives from <xref:System.Object>. Use naked type constraints on generic classes in scenarios in which you wish to enforce an inheritance relationship between two type parameters.

```cpp
// generics_constraints_6.cpp
// compile with: /clr /c
generic <class T>
ref struct List {
   generic <class U>
   where U : T
   void Add(List<U> items)  {}
};

generic <class A, class B, class C>
where A : C
ref struct SampleClass {};
```

## See also

[Generics](generics-cpp-component-extensions.md)
