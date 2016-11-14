---
title: "Compiler Error C2472 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2472"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2472"
ms.assetid: 3b36bcdc-2ba5-4357-ab88-7545ba0551cd
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C2472
'function' cannot be generated in managed code: 'message'; compile with /clr to generate a mixed image  
  
 This error will occur when types not supported by managed code are used within a pure common language runtime (CLR) environment. Compile with **/clr** to resolve the error.  
  
## Example  
 The following sample generates C2472.  
  
```  
// C2472.cpp  
// compile with: /clr:pure  
// C2472 expected  
  
#include <cstdlib>  
  
int main()  
{  
   int * __ptr32 p32;  
   int * __ptr64 p64;  
  
   p32 = (int * __ptr32)malloc(4);  
   p64 = p32;  
}  
```  
  
## See Also  
 [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)