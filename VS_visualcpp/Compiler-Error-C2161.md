---
title: "Compiler Error C2161"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d6798821-13bb-4e60-924f-85f7bf955387
caps.latest.revision: 8
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C2161
'##' cannot occur at the end of a macro definition  
  
 A macro definition ended with a token-pasting operator (##).  
  
 The following sample generates C2161:  
  
```  
// C2161.cpp  
// compile with: /c  
#define mac(a,b) a   // OK  
#define mac(a,b) a##   // C2161  
```