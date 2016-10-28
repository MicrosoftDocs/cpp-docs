---
title: "Compiler Warning (level 3) C4287"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4287"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4287"
ms.assetid: 1bf3bff8-6402-4d06-95ba-431678a790a7
caps.latest.revision: 8
ms.author: "corob"
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
# Compiler Warning (level 3) C4287
'operator' : unsigned/negative constant mismatch  
  
 An unsigned variable was used in an operation with a negative number.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../c/compiler-warnings-that-are-off-by-default.md) for more information.  
  
## Example  
 The following sample generates C4287:  
  
```  
// C4287.cpp  
// compile with: /W3  
#pragma warning(default : 4287)  
#include <stdio.h>  
  
int main()  
{  
    unsigned int u = 1;  
    if (u < -1)   // C4287  
        printf_s("u LT -1");  
    else  
        printf_s("u !LT -1");  
    return 0;  
}  
```