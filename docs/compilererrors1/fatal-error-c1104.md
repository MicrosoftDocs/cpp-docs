---
title: "Fatal Error C1104"
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
  - "C1104"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1104"
ms.assetid: 45bd85c4-77d3-4d3c-b167-49c563aefb4d
caps.latest.revision: 7
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
# Fatal Error C1104
fatal error importing libid: 'message'  
  
 The compiler detected a problem importing a type library.  For example, you cannot specify a type library with libid and also specify `no_registry`.  
  
 For more information, see [#import Directive](../c/sharpimport-directive--c---.md).  
  
 The following sample will generate C1104:  
  
```  
// C1104.cpp  
#import "libid:11111111.1111.1111.1111.111111111111" version("4.0") lcid("9") no_registry auto_search   // C1104  
```