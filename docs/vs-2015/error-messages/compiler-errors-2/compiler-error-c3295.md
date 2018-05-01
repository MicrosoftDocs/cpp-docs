---
title: "Compiler Error C3295 | Microsoft Docs"
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
  - "C3295"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3295"
ms.assetid: 83f0aa4d-0e0a-4905-9f66-fcf9991fc07a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3295
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3295](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3295).  
  
  
pragma pragma' can only be used at global or namespace scope  
  
 Some pragmas cannot be used in a function.  See [Pragma Directives and the __Pragma Keyword](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) for more information.  
  
## Example  
 The following sample generates C3295.  
  
```  
// C3295.cpp  
int main() {  
   #pragma managed   // C3295  
}  
```

