---
title: "Compiler Error C2042 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2042"
ms.assetid: e111788f-41ce-405a-9824-a4c1c26059e6
caps.latest.revision: 8
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
# Compiler Error C2042
signed/unsigned keywords mutually exclusive  
  
 The keywords `signed` and `unsigned` are used in a single declaration.  
  
 The following sample generates C2042:  
  
```  
// C2042.cpp  
unsigned signed int i;   // C2042  
```  
  
 Possible resolution:  
  
```  
// C2042b.cpp  
// compile with: /c  
unsigned int i;  
signed int ii;  
```