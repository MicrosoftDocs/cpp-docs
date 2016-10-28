---
title: "Compiler Error C3320"
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
  - "C3320"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3320"
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
caps.latest.revision: 9
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
# Compiler Error C3320
'type': type cannot have the same name as the module 'name' property  
  
 An exported user-defined type (UDT), which could be a struct, class, enum, union or [__value](../notintoc/__value.md), cannot have the same name as the parameter passed to the [module](../windows/module--c---.md) attribute's name property.  
  
 The following sample generates C3320:  
  
```  
// C3320.cpp  
#include "unknwn.h"  
[module(name="xx")];  
  
[export] struct xx {   // C3320  
// Try the following line instead  
// [export] struct yy {  
   int i;  
};  
```