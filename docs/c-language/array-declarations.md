---
title: "Array Declarations | Microsoft Docs"
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
  - "multidimensional arrays"
  - "declaring arrays"
  - "arrays [C++], declaring"
ms.assetid: 5f958b97-cef0-4058-bbc6-37c460aaed9b
caps.latest.revision: 10
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
# Array Declarations
An "array declaration" names the array and specifies the type of its elements. It can also define the number of elements in the array. A variable with array type is considered a pointer to the type of the array elements.  
  
## Syntax  
 `declaration`:  
 *declaration-specifiers init-declarator-list* opt**;**  
  
 *init-declarator-list*:  
 *init-declarator*  
  
 *init-declarator-list* **,**  *init-declarator*  
  
 *init-declarator*:  
 *declarator*  
  
 *declarator*  **=**  *initializer*  
  
 `declarator`:  
 *pointer* opt*direct-declarator*  
  
 *direct-declarator*:  
 *direct-declarator*  **[**  *constant-expression* opt**]**  
  
 Because *constant-expression* is optional, the syntax has two forms:  
  
-   The first form defines an array variable. The *constant-expression* argument within the brackets specifies the number of elements in the array. The *constant-expression*, if present, must have integral type, and a value larger than zero. Each element has the type given by *type-specifier*, which can be any type except `void`. An array element cannot be a function type.  
  
-   The second form declares a variable that has been defined elsewhere. It omits the *constant-expression* argument in brackets, but not the brackets. You can use this form only if you previously have initialized the array, declared it as a parameter, or declared it as a reference to an array explicitly defined elsewhere in the program.  
  
 In both forms, *direct-declarator* names the variable and can modify the variable's type. The brackets (**[ ]**) following *direct-declarator* modify the declarator to an array type.  
  
 Type qualifiers can appear in the declaration of an object of array type, but the qualifiers apply to the elements rather than the array itself.  
  
 You can declare an array of arrays (a "multidimensional" array) by following the array declarator with a list of bracketed constant expressions in this form:  
  
```  
  
type-specifier  
declarator [constant-expression] [constant-expression] ...  
```  
  
 Each *constant-expression* in brackets defines the number of elements in a given dimension: two-dimensional arrays have two bracketed expressions, three-dimensional arrays have three, and so on. You can omit the first constant expression if you have initialized the array, declared it as a parameter, or declared it as a reference to an array explicitly defined elsewhere in the program.  
  
 You can define arrays of pointers to various types of objects by using complex declarators, as described in [Interpreting More Complex Declarators](../c-language/interpreting-more-complex-declarators.md).  
  
 Arrays are stored by row. For example, the following array consists of two rows with three columns each:  
  
```  
char A[2][3];  
```  
  
 The three columns of the first row are stored first, followed by the three columns of the second row. This means that the last subscript varies most quickly.  
  
 To refer to an individual element of an array, use a subscript expression, as described in [Postfix Operators](../c-language/postfix-operators.md).  
  
## Examples  
 These examples illustrate array declarations:  
  
```  
float matrix[10][15];  
```  
  
 The two-dimensional array named `matrix` has 150 elements, each having **float** type.  
  
```  
struct {  
    float x, y;  
} complex[100];  
```  
  
 This is a declaration of an array of structures. This array has 100 elements; each element is a structure containing two members.  
  
```  
extern char *name[];  
```  
  
 This statement declares the type and name of an array of pointers to `char`. The actual definition of `name` occurs elsewhere.  
  
 **Microsoft Specific**  
  
 The type of integer required to hold the maximum size of an array is the size of **size_t**. Defined in the header file STDDEF.H, **size_t** is an `unsigned int` with the range 0x00000000 to 0x7CFFFFFF.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)