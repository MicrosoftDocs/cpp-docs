---
title: "Compiler Warning (level 4) C4918 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4918"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4918"
ms.assetid: 1bcf6d35-3467-4aa8-b2ef-cb33f4e70238
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4918
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4918](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4918).  
  
  
character' : invalid character in pragma optimization list  
  
 An unknown character was found in the optimization list of an [optimize](../../preprocessor/optimize.md) pragma statement.  
  
 For example, the following statement generates C4918:  
  
```  
// C4918.cpp  
// compile with: /W4  
#pragma optimize("X", on) // C4918 expected  
int main()  
{  
}  
```

