---
title: "Compiler Error C2378 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2378"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2378"
ms.assetid: 507a91c6-ca72-48df-b3a4-2cf931c86806
caps.latest.revision: 9
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
# Compiler Error C2378
'identifier' : redefinition; symbol cannot be overloaded with a typedef  
  
 The identifier was redefined as a `typedef`.  
  
 The following sample generates C2378:  
  
```  
// C2378.cpp  
// compile with: /c  
int i;  
typedef int i;   // C2378  
typedef int b;   // OK  
```