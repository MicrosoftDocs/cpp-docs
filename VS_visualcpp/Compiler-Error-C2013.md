---
title: "Compiler Error C2013"
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
ms.assetid: 6b5c955c-53da-48ee-8533-64ef5b905173
caps.latest.revision: 7
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
# Compiler Error C2013
missing '>'  
  
 An `#include` directive lacks a closing angle bracket. Add the closing bracket to resolve the error.  
  
 The following sample generates C2013:  
  
```  
// C2013.cpp  
#include <stdio.h    // C2013  
```  
  
 Possible resolution:  
  
```  
// C2013b.cpp  
// compile with: /c  
#include <stdio.h>  
```