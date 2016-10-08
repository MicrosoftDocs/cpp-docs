---
title: "Compiler Error C2160"
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
ms.assetid: a1f694a7-fb16-4437-b7f5-a1af6da94bc5
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
# Compiler Error C2160
'##' cannot occur at the beginning of a macro definition  
  
 A macro definition began with a token-pasting operator (##).  
  
 The following sample generates C2160:  
  
```  
// C2160.cpp  
// compile with: /c  
#define mac(a,b) #a   // OK  
#define mac(a,b) ##a   // C2160  
```