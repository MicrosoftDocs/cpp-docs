---
title: "References (C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 68156f7f-97a0-4b66-b26d-b25ade5e3bd8
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# References (C++)
A reference, like a pointer, stores the address of an object that is located elsewhere in memory. Unlike a pointer, a reference after it is initialized cannot be made to refer to a different object or set to null. There are two kinds of references: lvalue references which refer to a named variable and rvalue references which refer to a [temporary object](../VS_visualcpp/Temporary-Objects.md). The & operator signifies an lvalue reference and the && operator signifies either an rvalue reference, or a universal reference (either rvalue or lvalue) depending on the context.  
  
 References may be declared using the following syntax:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers   
[ms-modifier] declarator [= expression];  
```  
  
 Any valid declarator specifying a reference may be used. Unless the reference is a reference to function or array type, the following simplified syntax applies:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers [& or &&]   
[cv-qualifiers] identifier [= expression];  
```  
  
 References are declared using the following sequence:  
  
 1. The declaration specifiers:  
  
-   An optional storage class specifier.  
  
-   Optional **const** and/or `volatile` qualifiers.  
  
-   The type specifier: the name of a type.  
  
-   2. The declarator:  
  
-   An optional Microsoft specific modifier. For more information, see [Microsoft-Specific Modifiers](../VS_visualcpp/Microsoft-Specific-Modifiers.md).  
  
-   The & operator or && operator.  
  
-   Optional **const** and/or `volatile` qualifers.  
  
-   The identifier.  
  
 3. An optional initializer.  
  
 The more complex declarator forms for pointers to arrays and functions also apply to references to arrays and functions, see [pointers](../VS_visualcpp/Pointers--C---.md) and [declarators](assetId:///8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
 Multiple declarators and initializers may appear in a comma-separated list following a single declaration specifier. For example:  
  
```  
int &i;   
int &i, &j;   
```  
  
 References, pointers and objects may be declared together:  
  
```  
int &ref, *ptr, k;   
```  
  
 A reference holds the address of an object, but behaves syntactically like an object.  
  
 In the following program, notice that the name of the object, `Today`, and the reference to the object, `TodayRef`, can be used identically in programs:  
  
## Example  
  
```  
// references.cpp  
#include <stdio.h>  
struct S {  
   short i;  
};  
  
int main() {  
   S  s;   // Declare the object.  
   S& SRef = s;   // Declare the reference.  
   s.i = 3;  
  
   printf_s("%d\n", s.i);  
   printf_s("%d\n", SRef.i);  
  
   SRef.i = 4;  
   printf_s("%d\n", s.i);  
   printf_s("%d\n", SRef.i);  
}  
```  
  
 **3**  
**3**  
**4**  
**4**   
## Comment  
 Topics in this section:  
  
-   [Reference-Type Function Arguments](../VS_visualcpp/Reference-Type-Function-Arguments.md)  
  
-   [Reference-Type Function Returns](../VS_visualcpp/Reference-Type-Function-Returns.md)  
  
-   [References to Pointers](../VS_visualcpp/References-to-Pointers.md)  
  
## See Also  
 [Initializing References](../Topic/Initializing%20References.md)