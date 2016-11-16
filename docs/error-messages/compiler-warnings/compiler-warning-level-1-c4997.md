---
title: "Compiler Warning (level 1) C4997 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4997"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4997"
ms.assetid: d39678fd-0c1a-4104-8a45-9e3f20de0407
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
# Compiler Warning (level 1) C4997
'class': coclass does not implement a COM interface or pseudo-interface  
  
 A class marked with the [coclass](../../windows/coclass.md) attribute did not implement an interface.  
  
 The following sample generates C4997:  
  
```  
// C4997.cpp  
// compile with: /WX  
// to resolve this C4997, uncomment all code  
#include <objbase.h>  
  
[ object ]  
__interface I {  
   HRESULT func();  
};  
  
[ coclass ]  
struct C /*: I*/ {  
   /*  
   HRESULT func() {  
      return S_OK;  
   }  
   */  
};   // C4997  
```