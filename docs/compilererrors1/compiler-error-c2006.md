---
title: "Compiler Error C2006"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C2006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2006"
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
caps.latest.revision: 8
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2006
'directive' expected a filename, found 'token'  
  
 Directives such as [#include](../c/sharpinclude-directive--c-c---.md) or [#import](../c/sharpimport-directive--c---.md) require a filename. To resolve the error, make sure *token* is a valid filename. Also, put the filename in double quotes or angle brackets.  
  
 The following sample generates C2006:  
  
```  
// C2006.cpp  
#include stdio.h   // C2006  
```  
  
 Possible resolution:  
  
```  
// C2006b.cpp  
// compile with: /c  
#include <stdio.h>  
```