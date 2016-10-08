---
title: "Fatal Error C1020"
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
ms.assetid: 42f429e2-5e3b-4086-a10d-b99e032e51c5
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
# Fatal Error C1020
unexpected #endif  
  
 The `#endif` directive has no matching `#if`, `#ifdef`, or `#ifndef` directive. Be sure each `#endif` has a matching directive.  
  
 The following sample generates C1020:  
  
```  
// C1020.cpp  
#endif     // C1020  
```  
  
 Possible resolution:  
  
```  
// C1020b.cpp  
// compile with: /c  
#if 1  
#endif  
```