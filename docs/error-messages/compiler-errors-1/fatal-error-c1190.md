---
title: "Fatal Error C1190 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1190"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1190"
ms.assetid: dee2266d-6c40-4f6e-91db-f01e65f8d2bc
caps.latest.revision: 15
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
# Fatal Error C1190
managed targeted code requires a '/clr' option  
  
 You are using CLR constructs but you did not specify **/clr**.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 The following sample generates C1190:  
  
```  
// C1190.cpp  
// compile with: /c  
__gc class A {};   // C1190  
ref class A {};  
```