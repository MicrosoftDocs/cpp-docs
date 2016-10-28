---
title: "Compiler Warning (level 1) C4167"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C4167"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4167"
ms.assetid: 74a420bd-9371-4167-b1ee-74dd8680f97b
caps.latest.revision: 6
ms.author: "corob"
manager: "douge"
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
# Compiler Warning (level 1) C4167
function : only available as an intrinsic function  
  
 The **#pragma function** tries to force the compiler to use a conventional call to a function that must be used in intrinsic form. The pragma is ignored.  
  
 To avoid this warning, remove the **#pragma function**.  
  
## Example  
  
```  
// C4167.cpp  
// compile with: /W1  
#include <malloc.h>  
#pragma function(_alloca )   // C4167: _alloca() is intrinsic only  
int main(){}  
```