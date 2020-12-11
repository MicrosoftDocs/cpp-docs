---
description: "Learn more about: Union Declarations"
title: "Union Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["unions", "union keyword [C], declarations", "variant records"]
ms.assetid: 978c6165-e0ae-4196-afa7-6d94e24f62f7
---
# Union Declarations

A "union declaration" specifies a set of variable values and, optionally, a tag naming the union. The variable values are called "members" of the union and can have different types. Unions are similar to "variant records" in other languages.

## Syntax

*struct-or-union-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union* *identifier*<sub>opt</sub> **{** *struct-declaration-list* **}**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union* *identifier*

*struct-or-union*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`struct`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`union`**

*struct-declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration-list* *struct-declaration*

The union content is defined to be

*struct-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-qualifier-list* *struct-declarator-list*  **;**

*specifier-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *specifier-qualifier-list*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *specifier-qualifier-list*<sub>opt</sub>

*struct-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declarator-list*  **,**  *struct-declarator*

A variable with **`union`** type stores one of the values defined by that type. The same rules govern structure and union declarations. Unions can also have bit fields.

Members of unions cannot have an incomplete type, type **`void`**, or function type. Therefore members cannot be an instance of the union but can be pointers to the union type being declared.

A union type declaration is a template only. Memory is not reserved until the variable is declared.

> [!NOTE]
> If a union of two types is declared and one value is stored, but the union is accessed with the other type, the results are unreliable. For example, a union of **`float`** and **`int`** is declared. A **`float`** value is stored, but the program later accesses the value as an **`int`**. In such a situation, the value would depend on the internal storage of **`float`** values. The integer value would not be reliable.

## Examples

The following are examples of unions:

```C
union sign   /* A definition and a declaration */
{
    int svar;
    unsigned uvar;
} number;
```

This example defines a union variable with `sign` type and declares a variable named `number` that has two members: `svar`, a signed integer, and `uvar`, an unsigned integer. This declaration allows the current value of `number` to be stored as either a signed or an unsigned value. The tag associated with this union type is `sign`.

```C
union               /* Defines a two-dimensional */
{                   /*  array named screen */
    struct
    {
      unsigned int icon : 8;
      unsigned color : 4;
    } window1;
    int screenval;
} screen[25][80];
```

The `screen` array contains 2,000 elements. Each element of the array is an individual union with two members: `window1` and `screenval`. The `window1` member is a structure with two bit-field members, `icon` and `color`. The `screenval` member is an **`int`**. At any given time, each union element holds either the **`int`** represented by `screenval` or the structure represented by `window1`.

**Microsoft Specific**

Nested unions can be declared anonymously when they are members of another structure or union. This is an example of a nameless union:

```C
struct str
{
    int a, b;
    union            / * Unnamed union */
    {
      char c[4];
      long l;
      float f;
   };
   char c_array[10];
} my_str;
.
.
.
my_str.l == 0L;  /* A reference to a field in the my_str union */
```

Unions are often nested within a structure that includes a field giving the type of data contained in the union at any particular time. This is an example of a declaration for such a union:

```C
struct x
{
    int type_tag;
    union
    {
      int x;
      float y;
    }
}
```

See [Structure and Union Members](../c-language/structure-and-union-members.md) for information about referencing unions.

**END Microsoft Specific**

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
