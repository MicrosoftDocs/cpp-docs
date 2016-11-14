---
title: "extern Storage-Class Specifier | Microsoft Docs"
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
  - "extern keyword [C]"
  - "storage class specifiers, extern"
  - "extern keyword [C], storage class specifier"
  - "external linkage, storage-class specifiers"
  - "external linkage, extern modifier"
ms.assetid: 6e16d927-291f-49e4-986c-9d91a482a441
caps.latest.revision: 7
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
# extern Storage-Class Specifier
A variable declared with the `extern` storage-class specifier is a reference to a variable with the same name defined at the external level in any of the source files of the program. The internal `extern` declaration is used to make the external-level variable definition visible within the block. Unless otherwise declared at the external level, a variable declared with the `extern` keyword is visible only in the block in which it is declared.  
  
## Example  
 This example illustrates internal- and external-level declarations:  
  
```  
// extern_StorageClassSpecified.c  
#include <stdio.h>  
  
void other( void );  
  
int main()  
{  
    // Reference to i, defined below:   
    extern int i;  
  
    // Initial value is zero; a is visible only within main:   
    static int a;  
  
    // b is stored in a register, if possible:   
    register int b = 0;  
  
    // Default storage class is auto:   
    int c = 0;  
  
    // Values printed are 1, 0, 0, 0:   
    printf_s( "%d\n%d\n%d\n%d\n", i, a, b, c );  
    other();  
    return;  
}  
  
int i = 1;  
  
void other( void )  
{  
    // Address of global i assigned to pointer variable:  
    static int *external_i = &i;  
  
    // i is redefined; global i no longer visible:   
    int i = 16;  
  
    // This a is visible only within the other function:   
    static int a = 2;  
  
    a += 2;  
    // Values printed are 16, 4, and 1:  
    printf_s( "%d\n%d\n%d\n", i, a, *external_i );  
}  
```  
  
 In this example, the variable `i` is defined at the external level with initial value 1. An `extern` declaration in the `main` function is used to declare a reference to the external-level `i`. The **static** variable `a` is initialized to 0 by default, since the initializer is omitted. The call to `printf` prints the values 1, 0, 0, and 0.  
  
 In the `other` function, the address of the global variable `i` is used to initialize the **static** pointer variable `external_i`. This works because the global variable has **static** lifetime, meaning its address does not change during program execution. Next, the variable `i` is redefined as a local variable with initial value 16. This redefinition does not affect the value of the external-level `i`, which is hidden by the use of its name for the local variable. The value of the global `i` is now accessible only indirectly within this block, through the pointer `external_i`. Attempting to assign the address of the **auto** variable `i` to a pointer does not work, since it may be different each time the block is entered. The variable `a` is declared as a **static** variable and initialized to 2. This `a` does not conflict with the `a` in `main`, since **static** variables at the internal level are visible only within the block in which they are declared.  
  
 The variable `a` is increased by 2, giving 4 as the result. If the `other` function were called again in the same program, the initial value of `a` would be 4. Internal **static** variables keep their values when the program exits and then reenters the block in which they are declared.  
  
## See Also  
 [Storage-Class Specifiers for Internal-Level Declarations](../c-language/storage-class-specifiers-for-internal-level-declarations.md)