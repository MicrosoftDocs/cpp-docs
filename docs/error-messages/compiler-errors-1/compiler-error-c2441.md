---
title: "Compiler Error C2441 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2441"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2441"
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
caps.latest.revision: 6
author: "corob-msft"
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
# Compiler Error C2441
'variable' : a symbol declared with __declspec(process) must be const in /clr:pure mode  
  
 By default, variables are per application domain under **/clr:pure**. A variable marked `__declspec(process)` under **/clr:pure** is prone to errors if modified in one application domain and read in another.  
  
 Therefore, the compiler enforces per process variables be `const` under **/clr:pure**, making them read only in all application domains.  
  
 For more information, see [process](../../cpp/process.md) and [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Example  
 The following sample generates C2441.  
  
```  
// C2441.cpp  
// compile with: /clr:pure /c  
__declspec(process) int i;   // C2441  
__declspec(process) const int j = 0;   // OK  
```