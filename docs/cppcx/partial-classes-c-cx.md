---
title: "Partial classes (C++/CX)"
description: "How to declare and use partial classes in C++/CX."
ms.date: "12/30/2016"
ms.assetid: 69d93575-636c-4564-8cca-6dfba0c7e328
---
# Partial classes (C++/CX)

A partial class is a construct that supports scenarios in which you are modifying one part of a class definition, and automatic code-generating software—for example, the XAML designer—is also modifying code in the same class. By using a partial class, you can prevent the designer from overwriting your code. In a Visual Studio project, the **`partial`** modifier is applied automatically to the generated file.

## Syntax

To define a partial class, use the **`partial`** keyword immediately before the class-key of what would otherwise be a normal class definition. A keyword such as **`partial ref class`** is a contextual keyword that contains whitespace characters. Partial definitions are supported in the following constructs.

- **`class`** or **`struct`**

- **`ref class`** or **`ref struct`**

- **`value class`** or **`value struct`**

- **`enum`** or **`enum class`**

- **`ref interface`**, **`interface class`**, **`interface struct`**, or **`__interface`**

- **`union`**

This example demonstrates a partial **`ref class`**:

[!code-cpp[cx_partial#01](../cppcx/codesnippet/CPP/partialclassexample/class1.h#01)]

## Contents

A partial class definition can contain anything that the full class definition can contain if the **`partial`** keyword had been omitted. With one exception, this includes any valid construct such as base classes, data members, member functions, enums, friend declarations, and attributes. And inline definitions of static data members are permitted.

The one exception is class accessibility. For example, the statement `public partial class MyInvalidClass {/* ... */};` is an error. Any access specifiers that are used in a partial class definition for MyInvalidClass don't affect the default accessibility in a subsequent partial or full class definition for MyInvalidClass.

The following code fragment demonstrates accessibility. In the first partial class, `Method1` is public because its accessibility is public. In the second partial class, `Method2` is private because the default class accessibility is private.

[!code-cpp[cx_partial#02](../cppcx/codesnippet/CPP/partialclassexample/class1.h#02)]

## Declaration

A partial definition of a class such as `MyClass` is only a declaration of MyClass. That is, it only introduces the name `MyClass`. `MyClass` can't be used in a way that requires a class definition, for example, knowing the size of `MyClass` or using a base or member of `MyClass`. `MyClass` is considered to be defined only when the compiler encounters a non-partial definition of `MyClass`.

The following example demonstrates the declaration behavior of a partial class. After declaration #1, `MyClass` can be used as if it were written as the forward declaration, `ref class MyClass;`. Declaration #2 is equivalent to declaration #1. Declaration #3 is valid because it's a forward declaration to a class. But declaration #4 is invalid because

`MyClass` is not fully defined.

Declaration #5 does not use the **`partial`** keyword, and the declaration fully defines `MyClass`. Consequently, declaration #6 is valid.

[!code-cpp[Cx_partial#03](../cppcx/codesnippet/CPP/partialclassexample/class1.h#03)]

## Number and ordering

There can be zero or more partial class definitions for every full definition of a class.

Every partial class definition of a class must lexically precede the one full definition of that class, but doesn't have to precede forward declarations of the class. If there's no full definition of the class, then the partial class declarations can only be forward declarations.

All class-keys such as **`class`** and **`struct`** must match. For example, it's an error to code `partial class X {}; struct X {};`.

The following example demonstrates number and ordering. The last partial declaration fails because the class is already defined.

[!code-cpp[cx_partial#04](../cppcx/codesnippet/CPP/partialclassexample/class1.h#04)]

## Full definition

At the point of the full definition of the class X, the behavior is the same as if the definition of X had declared all base classes, members, and so on, in the order in which they were encountered and defined in the partial classes. That is, the contents of the partial classes are treated as though they were written at the point of full definition of the class, and name lookup and other language rules are applied at the point of the full definition of the class as if the contents of the partial classes were written in place

The following two code examples have identical meaning and effect. The first example uses a partial class and the second example doesn't.

[!code-cpp[cx_partial#05](../cppcx/codesnippet/CPP/partialclassexample/class1.h#05)]
&nbsp;
[!code-cpp[cx_partial#06](../cppcx/codesnippet/CPP/partialclassexample/class1.h#06)]

## Templates

A partial class can't be a template.

## Restrictions

A partial class can't span beyond one translation unit.

The **`partial`** keyword is supported only in combination with the **`ref class`** keyword or the **`value class`** keyword.

### Examples

The following example defines the `Address` class across two code files. The designer modifies `Address.details.h` and you modify `Address.h`. Only the class definition in the first file uses the **`partial`** keyword.

[!code-cpp[cx_partial#07](../cppcx/codesnippet/CPP/partialclassexample/address.details.h#07)]
&nbsp;
[!code-cpp[cx_partial#09](../cppcx/codesnippet/CPP/partialclassexample/address.h#09)]

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
