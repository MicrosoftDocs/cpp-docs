---
title: "Compiler Warning (level 1 and level 4) C4949 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4949"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4949"
ms.assetid: 34f45a05-c115-49cb-9f67-0bd4f0735d9b
caps.latest.revision: 8
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
# Compiler Warning (level 1 and level 4) C4949
pragmas 'managed' and 'unmanaged' are meaningful only when compiled with '/clr[:option]'  
  
 The compiler ignores the [managed](../../preprocessor/managed-unmanaged.md) and unmanaged pragmas if the source code is not compiled with [/clr](../../build/reference/clr-common-language-runtime-compilation.md). This warning is informational.  
  
 The following sample generates C4949:  
  
```  
// C4949.cpp  
// compile with: /LD /W1  
#pragma managed   // C4949  
```  
  
 When **#pragma unmanaged** is used without **/clr**, C4949 is a level 4 warning.  
  
 The following sample generates C4949:  
  
```  
// C4949b.cpp  
// compile with: /LD /W4  
#pragma unmanaged   // C4949  
```