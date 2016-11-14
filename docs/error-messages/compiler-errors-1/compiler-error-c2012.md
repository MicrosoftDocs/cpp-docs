---
title: "Compiler Error C2012 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2012"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2012"
ms.assetid: 9f0d8162-c0b3-4234-a41f-836fdb75c84e
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
# Compiler Error C2012
missing name following '<'  
  
 An `#include` directive lacks the required filename.  
  
 The following sample generates C2012:  
  
```  
// C2012.cpp  
#include <   // C2012 include the filename to resolve  
```  
  
 Possible resolution:  
  
```  
// C2012b.cpp  
// compile with: /c  
#include <stdio.h>  
```