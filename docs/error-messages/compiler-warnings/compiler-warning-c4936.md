---
title: "Compiler Warning C4936 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4936"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4936"
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
caps.latest.revision: 12
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
# Compiler Warning C4936
this __declspec is supported only when compiled with /clr or /clr:pure  
  
 A `__declspec` modifier was used but that `__declspec` modifier is only valid when compiled with one of the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) options.  
  
 For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).  
  
 C4936 is always issued as an error.  You can disable C4936 with the [warning](../../preprocessor/warning.md) pragma.  
  
 The following sample generates C4936:  
  
```  
// C4936.cpp  
// compile with: /c  
// #pragma warning (disable : 4936)  
__declspec(process) int i;   // C4936  
__declspec(appdomain) int j;   // C4936  
```