---
title: "Compiler Error C2344 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2344"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2344"
ms.assetid: a84c7b37-c84e-4345-8691-c23abb2dc193
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
# Compiler Error C2344
align(#) : alignment must be power of two  
  
 When using the [align](../../cpp/align-cpp.md) keyword, the value you pass must be a power of two.  
  
 For example, the following code generates C2344 because 3 is not a power of two:  
  
```  
// C2344.cpp  
// compile with: /c  
__declspec(align(3)) int a;   // C2344  
__declspec(align(4)) int b;   // OK  
```