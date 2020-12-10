---
description: "Learn more about: Name Spaces"
title: "Name Spaces"
ms.date: "11/04/2016"
helpviewer_keywords: ["union keyword [C], tags", "enumeration tags", "structure tags", "names [C++], declared elements", "name spaces [C++]", "tags, structure tags", "union keyword [C]"]
ms.assetid: b4bda1d1-cb5e-4f60-ac2b-29af93d8a9a2
---
# Name Spaces

The compiler sets up "name spaces" to distinguish between the identifiers used for different kinds of items. The names within each name space must be unique to avoid conflict, but an identical name can appear in more than one name space. This means that you can use the same identifier for two or more different items, provided that the items are in different name spaces. The compiler can resolve references based on the syntactic context of the identifier in the program.

> [!NOTE]
> Do not confuse the limited C notion of a name space with the C++ "namespace" feature. See [Namespaces](../cpp/namespaces-cpp.md) in the C++ Language Reference for more information.

This list describes the name spaces used in C.

Statement labels
Named statement labels are part of statements. Definitions of statement labels are always followed by a colon but are not part of **`case`** labels. Uses of statement labels always immediately follow the keyword **`goto`**. Statement labels do not have to be distinct from other names or from label names in other functions.

Structure, union, and enumeration tags
These tags are part of structure, union, and enumeration type specifiers and, if present, always immediately follow the reserved words **`struct`**, **`union`**, or **`enum`**. The tag names must be distinct from all other structure, enumeration, or union tags with the same visibility.

Members of structures or unions
Member names are allocated in name spaces associated with each structure and union type. That is, the same identifier can be a component name in any number of structures or unions at the same time. Definitions of component names always occur within structure or union type specifiers. Uses of component names always immediately follow the member-selection operators (**->** and **.**). The name of a member must be unique within the structure or union, but it does not have to be distinct from other names in the program, including the names of members of different structures and unions, or the name of the structure itself.

Ordinary identifiers
All other names fall into a name space that includes variables, functions (including formal parameters and local variables), and enumeration constants. Identifier names have nested visibility, so you can redefine them within blocks.

Typedef names
Typedef names cannot be used as identifiers in the same scope.

For example, since structure tags, structure members, and variable names are in three different name spaces, the three items named `student` in this example do not conflict. The context of each item allows correct interpretation of each occurrence of `student` in the program. (For information about structures, see [Structure Declarations](../c-language/structure-declarations.md).)

```C
struct student {
   char student[20];
   int class;
   int id;
   } student;
```

When `student` appears after the **`struct`** keyword, the compiler recognizes it as a structure tag. When `student` appears after a member-selection operator (**->** or **.**), the name refers to the structure member. In other contexts, `student` refers to the structure variable. However, overloading the tag name space is not recommended since it obscures meaning.

## See also

[Program Structure](../c-language/program-structure.md)
