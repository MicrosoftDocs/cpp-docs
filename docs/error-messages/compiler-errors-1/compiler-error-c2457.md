---
title: "Compiler Error C2457 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2457"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2457"]
ms.assetid: 347e169d-23ad-434f-8836-5b09b53980ff
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2457
'macro': predefined macro cannot appear outside of a function body  
  
 You attempted to use a predefined macro, such as [__FUNCTION\_\_](../../preprocessor/predefined-macros.md), in a global space.  
  
## Example  
 The following sample generates C2457:  
  
```  
// C2457.cpp  
#include <stdio.h>  
  
__FUNCTION__;   // C2457, cannot be global  
  
int main()   
{  
    printf_s("\n%s",__FUNCTION__);   // OK  
}  
```