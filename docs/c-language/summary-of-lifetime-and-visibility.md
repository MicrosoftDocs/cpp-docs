---
title: "Summary of Lifetime and Visibility | Microsoft Docs"
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
  - "lifetime, and visibility"
  - "visibility, identifiers"
ms.assetid: ea05a253-7658-482c-9a6b-abd71169c42d
caps.latest.revision: 8
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
# Summary of Lifetime and Visibility
The following table is a summary of lifetime and visibility characteristics for most identifiers. The first three columns give the attributes that define lifetime and visibility. An identifier with the attributes given by the first three columns has the lifetime and visibility shown in the fourth and fifth columns. However, the table does not cover all possible cases. Refer to [Storage Classes](../c-language/c-storage-classes.md) for more information.  
  
### Summary of Lifetime and Visibility  
  
|Attributes:<br /><br /> Level|Item|Storage-Class<br /><br /> Specifier|Result:<br /><br /> Lifetime|Visibility|  
|---------------------------|----------|----------------------------------|--------------------------|----------------|  
|File scope|Variable definition|**static**|Global|Remainder of source file in which it occurs|  
||Variable declaration|`extern`|Global|Remainder of source file in which it occurs|  
||Function prototype or definition|**static**|Global|Single source file|  
||Function prototype|`extern`|Global|Remainder of source file|  
|Block scope|Variable declaration|`extern`|Global|Block|  
||Variable definition|**static**|Global|Block|  
||Variable definition|**auto** or **register**|Local|Block|  
  
## Example  
  
### Description  
 The following example illustrates blocks, nesting, and visibility of variables:  
  
### Code  
  
```  
// Lifetime_and_Visibility.c  
  
#include <stdio.h>  
  
int i = 1;  // i defined at external level  
  
int main()  // main function defined at external level  
{  
    printf_s( "%d\n", i ); // Prints 1 (value of external level i)  
    {                                 // Begin first nested block  
        int i = 2, j = 3;          // i and j defined at internal level  
        printf_s( "%d %d\n", i, j );  // Prints 2, 3  
        {                             // Begin second nested block  
            int i = 0;                // i is redefined  
            printf_s( "%d %d\n", i, j ); // Prints 0, 3  
        }                             // End of second nested block  
        printf_s( "%d\n", i );        // Prints 2 (outer definition  
                                      //  restored)  
    }                                 // End of first nested block  
    printf_s( "%d\n", i );            // Prints 1 (external level  
                                      // definition restored)  
    return 0;  
}   
```  
  
### Comments  
 In this example, there are four levels of visibility: the external level and three block levels. The values are printed to the screen as noted in the comments following each statement.  
  
## See Also  
 [Lifetime, Scope, Visibility, and Linkage](../c-language/lifetime-scope-visibility-and-linkage.md)