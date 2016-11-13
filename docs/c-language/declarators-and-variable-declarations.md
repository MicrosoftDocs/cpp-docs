---
title: "Declarators and Variable Declarations | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "declaring variables, declarators"
  - "declarators, definition"
  - "declaring variables, declaration statements"
ms.assetid: 5fd67a6a-3a6a-4ec9-b257-3f7390a48d40
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Declarators and Variable Declarations
The rest of this section describes the form and meaning of declarations for variable types summarized in this list. In particular, the remaining sections explain how to declare the following:  
  
|Type of Variable|Description|  
|----------------------|-----------------|  
|[Simple variables](../c-language/simple-variable-declarations.md)|Single-value variables with integral or floating-point type|  
|[Arrays](../c-language/array-declarations.md)|Variables composed of a collection of elements with the same type|  
|[Pointers](../c-language/pointer-declarations.md)|Variables that point to other variables and contain variable locations (in the form of addresses) instead of values|  
|[Enumeration variables](../c-language/c-enumeration-declarations.md)|Simple variables with integral type that hold one value from a set of named integer constants|  
|[Structures](../c-language/structure-declarations.md)|Variables composed of a collection of values that can have different types|  
|[Unions](../c-language/union-declarations.md)|Variables composed of several values of different types that occupy the same storage space|  
  
 A declarator is the part of a declaration that specifies the name that is to be introduced into the program. It can include modifiers such as **\*** (pointer-to) and any of the Microsoft calling-convention keywords.  
  
 **Microsoft Specific**  
  
 In the declarator  
  
```  
__declspec(thread) char *var;  
```  
  
 `char` is the type specifier, `__declspec(thread)` and `*` are the modifiers, and `var` is the identifier's name.  
  
 **END Microsoft Specific**  
  
 You use declarators to declare arrays of values, pointers to values, and functions returning values of a specified type. Declarators appear in the array and pointer declarations described later in this section.  
  
## Syntax  
 `declarator`:  
 *pointer* opt*direct-declarator*  
  
 *direct-declarator*:  
 *identifier*  
  
 **(**  *declarator*  **)**  
  
 *direct-declarator*  **[**  *constant-expression* opt**]**  
  
 *direct-declarator*  **(**  *parameter-type-list*  **)**  
  
 *direct-declarator*  **(**  *identifier-list* opt**)**  
  
 `pointer`:  
 **\*** *type-qualifier-list* opt  
  
 **\*** *type-qualifier-list* opt`pointer`  
  
 *type-qualifier-list*:  
 *type-qualifier*  
  
 *type-qualifier-list type-qualifier*  
  
> [!NOTE]
>  See the syntax for `declaration` in [Overview of Declarations](../c-language/overview-of-declarations.md) or [C Language Syntax Summary](../c-language/c-language-syntax-summary.md) for the syntax that references a `declarator`.  
  
 When a declarator consists of an unmodified identifier, the item being declared has a base type. If an asterisk (**\***) appears to the left of an identifier, the type is modified to a pointer type. If the identifier is followed by brackets (**[ ]**), the type is modified to an array type. If the identifier is followed by parentheses, the type is modified to a function type. For more information about interpreting precedence within declarations, see [Interpreting More Complex Declarators](../c-language/interpreting-more-complex-declarators.md).  
  
 Each declarator declares at least one identifier. A declarator must include a type specifier to be a complete declaration. The type specifier gives the type of the elements of an array type, the type of object addressed by a pointer type, or the return type of a function.  
  
 [Array](../c-language/array-declarations.md) and [pointer](../c-language/pointer-declarations.md) declarations are discussed in more detail later in this section. The following examples illustrate a few simple forms of declarators:  
  
```  
int list[20]; // Declares an array of 20 int values named list  
char *cp;     // Declares a pointer to a char value  
double func( void ); // Declares a function named func, with no   
                     // arguments, that returns a double value  
int *aptr[10] // Declares an array of 10 pointers  
```  
  
 **Microsoft Specific**  
  
 The Microsoft C compiler does not limit the number of declarators that can modify an arithmetic, structure, or union type. The number is limited only by available memory.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Declarations and Types](../c-language/declarations-and-types.md)