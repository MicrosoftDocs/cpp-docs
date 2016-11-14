---
title: "Indirection and Address-of Operators | Microsoft Docs"
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
  - "address-of operator (&)"
  - "* operator"
  - "operators [C++], address-of"
  - "ampersand operator (&)"
  - "* operator, indirection operator"
  - "addresses [C++], indirection"
  - "addresses [C++]"
  - "indirection operator"
  - "& operator, address-of operator"
  - "null pointers [C++]"
  - "* operator, address-of operator"
  - "operators [C++], indirection"
ms.assetid: 10d62b00-12ba-4ea9-a2d5-09ac29ca2232
caps.latest.revision: 6
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
# Indirection and Address-of Operators
The indirection operator (**\***) accesses a value indirectly, through a pointer. The operand must be a pointer value. The result of the operation is the value addressed by the operand; that is, the value at the address to which its operand points. The type of the result is the type that the operand addresses.  
  
 If the operand points to a function, the result is a function designator. If it points to a storage location, the result is an l-value designating the storage location.  
  
 If the pointer value is invalid, the result is undefined. The following list includes some of the most common conditions that invalidate a pointer value.  
  
-   The pointer is a null pointer.  
  
-   The pointer specifies the address of a local item that is not visible at the time of the reference.  
  
-   The pointer specifies an address that is inappropriately aligned for the type of the object pointed to.  
  
-   The pointer specifies an address not used by the executing program.  
  
 The address-of operator (**&**) gives the address of its operand. The operand of the address-of operator can be either a function designator or an l-value that designates an object that is not a bit field and is not declared with the **register** storage-class specifier.  
  
 The result of the address operation is a pointer to the operand. The type addressed by the pointer is the type of the operand.  
  
 The address-of operator can only be applied to variables with fundamental, structure, or union types that are declared at the file-scope level, or to subscripted array references. In these expressions, a constant expression that does not include the address-of operator can be added to or subtracted from the address expression.  
  
## Examples  
 The following examples use these declarations:  
  
```  
int *pa, x;  
int a[20];  
double d;  
```  
  
 This statement uses the address-of operator:  
  
```  
pa = &a[5];  
```  
  
 The address-of operator (**&**) takes the address of the sixth element of the array `a`. The result is stored in the pointer variable `pa`.  
  
```  
x = *pa;  
```  
  
 The indirection operator (**\***) is used in this example to access the `int` value at the address stored in `pa`. The value is assigned to the integer variable `x`.  
  
```  
if( x == *&x )  
    printf( "True\n" );  
```  
  
 This example prints the word `True`, demonstrating that the result of applying the indirection operator to the address of `x` is the same as `x`.  
  
```  
int roundup( void );     /* Function declaration */  
  
int  *proundup  = roundup;  
int  *pround  = &roundup;  
```  
  
 Once the function `roundup` is declared, two pointers to `roundup` are declared and initialized. The first pointer, `proundup`, is initialized using only the name of the function, while the second, `pround`, uses the address-of operator in the initialization. The initializations are equivalent.  
  
## See Also  
 [Indirection Operator: *](../cpp/indirection-operator-star.md)   
 [Address-of Operator: &](../cpp/address-of-operator-amp.md)