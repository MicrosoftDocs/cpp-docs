---
title: "C enumeration declarations"
description: "Enumeration declarations in the C programming language."
ms.date: 10/02/2020
helpviewer_keywords: ["declarations, enumerations", "define directive (#define), alternative to", "enumerators, declaring", "#define directive, alternative to", "named constants, enumeration declarations", "declaring enumerations"]
ms.assetid: bd18f673-4dda-4bc1-92fd-d1ce10074910
---
# C enumeration declarations

An enumeration consists of a set of named integer constants. An enumeration type declaration gives the name of the (optional) enumeration tag. And, it defines the set of named integer identifiers (called the *enumeration set*, *enumerator constants*, *enumerators*, or *members*). A variable of the enumeration type stores one of the values of the enumeration set defined by that type.

Variables of **`enum`** type can be used in indexing expressions and as operands of all arithmetic and relational operators. Enumerations provide an alternative to the `#define` preprocessor directive with the advantages that the values can be generated for you and obey normal scoping rules.

In ANSI C, the expressions that define the value of an enumerator constant always have **`int`** type. That means the storage associated with an enumeration variable is the storage required for a single **`int`** value. An enumeration constant or a value of enumerated type can be used anywhere the C language permits an integer expression.

## Syntax

*`enum-specifier`*:\
&emsp;**`enum`** *`identifier`*<sub>opt</sub> **`{`** *`enumerator-list`* **`}`**\
&emsp;**`enum`** *`identifier`*

*`enumerator-list`*:\
&emsp;*`enumerator`*\
&emsp;*`enumerator-list`* **`,`** *`enumerator`*

*`enumerator`*:\
&emsp;*`enumeration-constant`*\
&emsp;*`enumeration-constant`* **`=`** *`constant-expression`*

*`enumeration-constant`*:\
&emsp;*`identifier`*

The optional *`identifier`* names the enumeration type defined by *`enumerator-list`*. This identifier is often called the "tag" of the enumeration specified by the list. A type specifier declares `identifier` to be the tag of the enumeration specified by the *`enumerator-list`* nonterminal, as seen here:

```C
enum identifier
{
    // enumerator-list
}
```

The *`enumerator-list`* defines the members of the enumeration set.

If the declaration of a tag is visible, later declarations that use the tag but omit *`enumerator-list`* specify the previously declared enumerated type. The tag must refer to a defined enumeration type, and that enumeration type must be in current scope. Since the enumeration type is defined elsewhere, the *`enumerator-list`* doesn't appear in this declaration. Declarations of types derived from enumerations and **`typedef`** declarations for enumeration types can use the enumeration tag before the enumeration type is defined.

Each *`enumeration-constant`* in an *`enumerator-list`* names a value of the enumeration set. By default, the first *`enumeration-constant`* is associated with the value 0. The next *`enumeration-constant`* in the list is associated with the value of ( *`constant-expression`* + 1 ), unless you explicitly associate it with another value. The name of an *`enumeration-constant`* is equivalent to its value.

You can use *`enumeration-constant`* = *`constant-expression`* to override the default sequence of values. That is, if *`enumeration-constant`* = *`constant-expression`* appears in the *`enumerator-list`*, the *`enumeration-constant`* is associated with the value given by *`constant-expression`*. The *`constant-expression`* must have **`int`** type and can be negative.

The following rules apply to the members of an enumeration set:

- An enumeration set can contain duplicate constant values. For example, you could associate the value 0 with two different identifiers, for example, members named `null` and `zero`, in the same set.

- The identifiers in the enumeration list must be distinct from other identifiers in the same scope with the same visibility. That includes ordinary variable names and identifiers in other enumeration lists.

- Enumeration tags obey the normal scoping rules. They must be distinct from other enumeration, structure, and union tags with the same visibility.

## Examples

These examples illustrate enumeration declarations:

```C
enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
} workday;
```

The value 0 is associated with `saturday` by default. The identifier `sunday` is explicitly set to 0. The remaining identifiers are given the values 1 through 5 by default.

In this example, a value from the set `DAY` is assigned to the variable `today`.

```C
enum DAY today = wednesday;
```

The name of the enumeration constant is used to assign the value. Since the `DAY` enumeration type was previously declared, only the enumeration tag `DAY` is necessary.

To explicitly assign an integer value to a variable of an enumerated data type, use a type cast:

```C
workday = ( enum DAY ) ( day_value - 1 );
```

This cast is recommended in C but isn't required.

```C
enum BOOLEAN  /* Declares an enumeration data type called BOOLEAN */
{
    false,     /* false = 0, true = 1 */
    true
};

enum BOOLEAN end_flag, match_flag; /* Two variables of type BOOLEAN */
```

This declaration can also be specified as

```C
enum BOOLEAN { false, true } end_flag, match_flag;
```

or as

```C
enum BOOLEAN { false, true } end_flag;
enum BOOLEAN match_flag;
```

An example that uses these variables might look like this:

```C
if ( match_flag == false )
    {
     .
     .   /* statement */
     .
    }
    end_flag = true;
```

Unnamed enumerator data types can also be declared. The name of the data type is omitted, but variables can be declared. The variable `response` is a variable of the type defined:

```C
enum { yes, no } response;
```

## See also

[Enumerations](../cpp/enumerations-cpp.md)
