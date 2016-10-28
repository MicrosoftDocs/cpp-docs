---
title: "Compiler Warning (level 4) C4681"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C4681"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4681"
ms.assetid: a4e6d85f-3e21-4b45-a551-c23d3c554d3f
caps.latest.revision: 8
ms.author: "corob"
manager: "douge"
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
# Compiler Warning (level 4) C4681
'class' : coclass does not specify a default interface that is an event source  
  
 A [source](../windows/source--c---.md) interface was not specified for a class.  
  
 The following sample generates C4681:  
  
```  
// C4681.cpp  
// compile with: /W4 /c  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
  
[module(name="test")];  
  
[dual, uuid("00000000-0000-0000-0000-000000000000")]  
__interface IEvent { [id(3)] HRESULT myEvent(); };  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface ISource { HRESULT Fire(); };  
  
[ coclass,   
  source(IEvent),   
  default(ISource),  
  // Uncomment the following line to resolve.  
  // default(IEvent),   
  uuid("00000000-0000-0000-0000-000000000002")   
]  
struct CSource : ISource {   // C4681  
   HRESULT Fire() { return 0; }  
};  
```