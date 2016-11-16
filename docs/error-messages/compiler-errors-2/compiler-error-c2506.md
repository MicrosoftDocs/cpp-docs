---
title: "Compiler Error C2506 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2506"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2506"
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
caps.latest.revision: 5
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
# Compiler Error C2506
'member' : '__declspec(modifier)' cannot be applied to this symbol  
  
 You cannot declare per-process or per-appdomain for static members of a managed class.  
  
 See [appdomain](../../cpp/appdomain.md) for more information.  
  
## Example  
 The following sample generates C2506.  
  
```  
// C2506.cpp  
// compile with: /clr /c  
ref struct R {  
   __declspec(process) static int n;   // C2506  
   int o;   // OK  
};  
```