---
description: "Learn more about: Structure Declarations"
title: "Structure Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["structure declarations", "anonymous structures", "types [C], declarations", "structure members", "embedded structures"]
ms.assetid: 5be3be77-a236-4153-b574-7aa77675df7f
---
# Structure Declarations

A "structure declaration" names a type and specifies a sequence of variable values (called "members" or "fields" of the structure) that can have different types. An optional identifier, called a "tag," gives the name of the structure type and can be used in subsequent references to the structure type. A variable of that structure type holds the entire sequence defined by that type. Structures in C are similar to the types known as "records" in other languages.

## Syntax

*`struct-or-union-specifier`*:\
&emsp;*`struct-or-union`* *`identifier`*<sub>opt</sub> **`{`** *`struct-declaration-list`* **`}`**\
&emsp;*`struct-or-union`* *`identifier`*

*`struct-or-union`*:\
&emsp;**`struct`**\
&emsp;**`union`**

*`struct-declaration-list`*:\
&emsp;*`struct-declaration`*\
&emsp;*`struct-declaration-list`* *`struct-declaration`*

*`struct-declaration`*:\
&emsp;*`specifier-qualifier-list`* *`struct-declarator-list`* **`;`**

*`specifier-qualifier-list`*:\
&emsp;*`type-specifier`* *`specifier-qualifier-list`*<sub>opt</sub>\
&emsp;*`type-qualifier`* *`specifier-qualifier-list`*<sub>opt</sub>

*`struct-declarator-list`*:\
&emsp;*`struct-declarator`* *`struct-declarator-list`* **`,`** *`struct-declarator`*

*`struct-declarator`*:\
&emsp;*`declarator`*\
&emsp;*`type-specifier`* *`declarator`*<sub>opt</sub> **`:`** *`constant-expression`*

The declaration of a structure type doesn't set aside space for a structure. It's only a template for later declarations of structure variables.

A previously defined *`identifier`* (tag) can be used to refer to a structure type defined elsewhere. In this case, *`struct-declaration-list`* can't be repeated as long as the definition is visible. Declarations of pointers to structures and typedefs for structure types can use the structure tag before the structure type is defined. However, the structure definition must be encountered prior to any actual use of the size of the fields. This use is an incomplete definition of the type and the type tag. For this definition to be completed, a type definition must appear later in the same scope.

The *`struct-declaration-list`* specifies the types and names of the structure members. A *`struct-declaration-list`* argument contains one or more variable or bit-field declarations.

Each variable declared in *`struct-declaration-list`* is defined as a member of the structure type. Variable declarations within *`struct-declaration-list`* have the same form as other variable declarations discussed in this section, except that the declarations can't contain storage-class specifiers or initializers. The structure members can have any variable types except type **`void`**, an incomplete type, or a function type.

A member can't be declared to have the type of the structure in which it appears. However, a member can be declared as a pointer to the structure type in which it appears as long as the structure type has a tag. It allows you to create linked lists of structures.

Structures follow the same scoping as other identifiers. Structure identifiers must be distinct from other structure, union, and enumeration tags with the same visibility.

Each *`struct-declaration`* in a *`struct-declaration-list`* must be unique within the list. However, identifier names in a *`struct-declaration-list`* don't have to be distinct from ordinary variable names or from identifiers in other structure declaration lists.

Nested structures can also be accessed as though they were declared at the file-scope level. For example, given this declaration:

```C
struct a
{
    int x;
    struct b
    {
      int y;
    } var2;
} var1;
```

these declarations are both legal:

```C
struct a var3;
struct b var4;
```

## Examples

These examples illustrate structure declarations:

```C
struct employee   /* Defines a structure variable named temp */
{
    char name[20];
    int id;
    long class;
} temp;
```

The `employee` structure has three members: `name`, `id`, and `class`. The `name` member is a 20-element array, and `id` and `class` are simple members with **`int`** and **`long`** type, respectively. The identifier `employee` is the structure identifier.

```C
struct employee student, faculty, staff;
```

This example defines three structure variables: `student`, `faculty`, and `staff`. Each structure has the same list of three members. The members are declared to have the structure type `employee`, defined in the previous example.

```C
struct           /* Defines an anonymous struct and a */
{                /* structure variable named complex  */
    float x, y;
} complex;
```

The `complex` structure has two members with **`float`** type, `x` and `y`. The structure type has no tag and is therefore unnamed or anonymous.

```C
struct sample   /* Defines a structure named x */
{
    char c;
    float *pf;
    struct sample *next;
} x;
```

The first two members of the structure are a **`char`** variable and a pointer to a **`float`** value. The third member, `next`, is declared as a pointer to the structure type being defined (`sample`).

Anonymous structures can be useful when the tag name isn't needed, such as when one declaration defines all structure instances. For example:

```C
struct
{
    int x;
    int y;
} mystruct;
```

Embedded structures are often anonymous.

```C
struct somestruct
{
    struct    /* Anonymous structure */
    {
        int x, y;
    } point;
    int type;
} w;
```

**Microsoft Specific**

The compiler allows an unsized or zero-sized array as the last member of a structure. It's useful if the size of a constant array differs when used in various situations. The declaration of such a structure looks like this:

**`struct`** *`identifier`* **`{`** *`set-of-declarations`* *`type`* *`array-name`* **`[]; };`**

Unsized arrays can appear only as the last member of a structure. Structures containing unsized array declarations can be nested within other structures as long as no further members are declared in any enclosing structures. Arrays of such structures aren't allowed. The **`sizeof`** operator, when applied to a variable of this type or to the type itself, assumes 0 for the size of the array.

Structure declarations can also be specified without a declarator when they're members of another structure or union. The field names are promoted into the enclosing structure. For example, a nameless structure looks like this:

```C
struct s
{
    float y;
    struct
    {
        int a, b, c;
    };
    char str[10];
} *p_s;
.
.
.
p_s->b = 100;  /* A reference to a field in the s structure */
```

For more information about structure references, see [Structure and Union Members](../c-language/structure-and-union-members.md).

**END Microsoft Specific**

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
