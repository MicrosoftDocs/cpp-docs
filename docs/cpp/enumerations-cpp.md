---
description: "Learn more about: Enumerations (C++)"
title: "Enumerations (C++)"
ms.date: 06/30/2022
f1_keywords: ["enum_cpp"]
helpviewer_keywords: ["declarations, enumerations", "enumerators, declaring", "enum keyword [C++]", "named constants, enumeration declarations", "declaring enumerations"]
ms.assetid: 081829db-5dca-411e-a53c-bffef315bcb3
---
# Enumerations (C++)

An enumeration is a user-defined type that consists of a set of named integral constants that are known as *enumerators*.

> [!NOTE]
> This article covers the ISO Standard C++ Language **`enum`** type and the scoped (or strongly-typed) **`enum class`** type which is introduced in C++11. For information about the **`public enum class`** or **`private enum class`** types in C++/CLI and C++/CX, see [`enum class` (C++/CLI and C++/CX)](../extensions/enum-class-cpp-component-extensions.md).

## Syntax

*`enum-name`*:\
&emsp;*`identifier`*

*`enum-specifier`*:\
&emsp;*`enum-head`* **`{`** *`enumerator-list`*<sub>opt</sub> **`}`**\
&emsp;*`enum-head`* **`{`** *`enumerator-list`* **`,`** **`}`**

*`enum-head`*:\
&emsp;*`enum-key`* *`attribute-specifier-seq`*<sub>opt</sub> *`enum-head-name`*<sub>opt</sub> *`enum-base`*<sub>opt</sub>

*`enum-head-name`*:\
&emsp;*`nested-name-specifier`*<sub>opt</sub> *`identifier`*

*`opaque-enum-declaration`*:\
&emsp;*`enum-key`* *`attribute-specifier-seq`*<sub>opt</sub> *`enum-head-name`* *`enum-base`*<sub>opt</sub> **`;`**

*`enum-key`*:\
&emsp;**`enum`**\
&emsp;**`enum class`**\
&emsp;**`enum struct`**

*`enum-base`*:\
&emsp;**`:`** *`type-specifier-seq`*

*`enumerator-list`*:\
&emsp;*`enumerator-definition`*\
&emsp;*`enumerator-list`* **`,`** *`enumerator-definition`*

*`enumerator-definition`*:\
&emsp;*`enumerator`*\
&emsp;*`enumerator`* **`=`** *`constant-expression`*

*`enumerator`*:\
&emsp;*`identifier`* *`attribute-specifier-seq`*<sub>opt</sub>

## Usage

```cpp
// unscoped enum:
// enum [identifier] [: type] {enum-list};

// scoped enum:
// enum [class|struct] [identifier] [: type] {enum-list};

// Forward declaration of enumerations  (C++11):
enum A : int;          // non-scoped enum must have type specified
enum class B;          // scoped enum defaults to int but ...
enum class C : short;  // ... may have any integral underlying type
```

### Parameters

*`identifier`*\
The type name given to the enumeration.

*`type`*\
The underlying type of the enumerators; all enumerators have the same underlying type. May be any integral type.

*`enum-list`*\
Comma-separated list of the enumerators in the enumeration. Every enumerator or variable name in the scope must be unique. However, the values can be duplicated. In an unscoped enum, the scope is the surrounding scope; in a scoped enum, the scope is the *`enum-list`* itself.  In a scoped enum, the list may be empty, which in effect defines a new integral type.

*`class`*\
By using this keyword in the declaration, you specify the enum is scoped, and an *`identifier`* must be provided. You can also use the **`struct`** keyword in place of **`class`**, as they're semantically equivalent in this context.

## Enumerator scope

An enumeration provides context to describe a range of values that are represented as named constants. These named constants are also called *enumerators*. In the original C and C++ `enum` types, the unqualified enumerators are visible throughout the scope in which the `enum` is declared. In scoped enums, the enumerator name must be qualified by the `enum` type name. The following example demonstrates this basic difference between the two kinds of enums:

```cpp
namespace CardGame_Scoped
{
    enum class Suit { Diamonds, Hearts, Clubs, Spades };

    void PlayCard(Suit suit)
    {
        if (suit == Suit::Clubs) // Enumerator must be qualified by enum type
        { /*...*/}
    }
}

namespace CardGame_NonScoped
{
    enum Suit { Diamonds, Hearts, Clubs, Spades };

    void PlayCard(Suit suit)
    {
        if (suit == Clubs) // Enumerator is visible without qualification
        { /*...*/
        }
    }
}
```

Every name in an enumeration is assigned an integral value that corresponds to its place in the order of the values in the enumeration. By default, the first value is assigned 0, the next one is assigned 1, and so on, but you can explicitly set the value of an enumerator, as shown here:

```cpp
enum Suit { Diamonds = 1, Hearts, Clubs, Spades };
```

The enumerator `Diamonds` is assigned the value `1`. Subsequent enumerators, if they aren't given an explicit value, receive the value of the previous enumerator plus one. In the previous example, `Hearts` would have the value 2, `Clubs` would have 3, and so on.

Every enumerator is treated as a constant and must have a unique name within the scope where the **`enum`** is defined (for unscoped enums) or within the **`enum`** itself (for scoped enums). The values given to the names don't have to be unique. For example, consider this declaration of an unscoped enum `Suit`:

```cpp
enum Suit { Diamonds = 5, Hearts, Clubs = 4, Spades };
```

The values of `Diamonds`, `Hearts`, `Clubs`, and `Spades` are 5, 6, 4, and 5, respectively. Notice that 5 is used more than once; it's allowed even though it may not be intended. These rules are the same for scoped enums.

## Casting rules

Unscoped enum constants can be implicitly converted to **`int`**, but an **`int`** is never implicitly convertible to an enum value. The following example shows what happens if you try to assign `hand` a value that isn't a `Suit`:

```cpp
int account_num = 135692;
Suit hand;
hand = account_num; // error C2440: '=' : cannot convert from 'int' to 'Suit'
```

A cast is required to convert an **`int`** to a scoped or unscoped enumerator. However, you can promote an unscoped enumerator to an integer value without a cast.

```cpp
int account_num = Hearts; //OK if Hearts is in a unscoped enum
```

Using implicit conversions in this way can lead to unintended side-effects. To help eliminate programming errors associated with unscoped enums, scoped enum values are strongly typed. Scoped enumerators must be qualified by the enum type name (identifier) and can't be implicitly converted, as shown in the following example:

```cpp
namespace ScopedEnumConversions
{
    enum class Suit { Diamonds, Hearts, Clubs, Spades };

    void AttemptConversions()
    {
        Suit hand;
        hand = Clubs; // error C2065: 'Clubs' : undeclared identifier
        hand = Suit::Clubs; //Correct.
        int account_num = 135692;
        hand = account_num; // error C2440: '=' : cannot convert from 'int' to 'Suit'
        hand = static_cast<Suit>(account_num); // OK, but probably a bug!!!

        account_num = Suit::Hearts; // error C2440: '=' : cannot convert from 'Suit' to 'int'
        account_num = static_cast<int>(Suit::Hearts); // OK
    }
}
```

Notice that the line `hand = account_num;` still causes the error that occurs with unscoped enums, as shown earlier. It's allowed with an explicit cast. However, with scoped enums, the attempted conversion in the next statement, `account_num = Suit::Hearts;`, is no longer allowed without an explicit cast.

## <a name="no_enumerators"></a> Enums with no enumerators

**Visual Studio 2017 version 15.3 and later** (Available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and later): By defining an enum (regular or scoped) with an explicit underlying type and no enumerators, you can in effect introduce a new integral type that has no implicit conversion to any other type. By using this type instead of its built-in underlying type, you can eliminate the potential for subtle errors caused by inadvertent implicit conversions.

```cpp
enum class byte : unsigned char { };
```

The new type is an exact copy of the underlying type, and therefore has the same calling convention, which means it can be used across ABIs without any performance penalty. No cast is required when variables of the type are initialized by using direct-list initialization. The following example shows how to initialize enums with no enumerators in various contexts:

```cpp
enum class byte : unsigned char { };

enum class E : int { };
E e1{ 0 };
E e2 = E{ 0 };

struct X
{
    E e{ 0 };
    X() : e{ 0 } { }
};

E* p = new E{ 0 };

void f(E e) {};

int main()
{
    f(E{ 0 });
    byte i{ 42 };
    byte j = byte{ 42 };

    // unsigned char c = j; // C2440: 'initializing': cannot convert from 'byte' to 'unsigned char'
    return 0;
}
```

## See also

[C Enumeration declarations](../c-language/c-enumeration-declarations.md)\
[Keywords](../cpp/keywords-cpp.md)
