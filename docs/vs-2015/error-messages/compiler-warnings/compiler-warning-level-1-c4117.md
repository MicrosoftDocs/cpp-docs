---
title: "Compiler Warning (level 1) C4117 | Microsoft Docs"
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
  - "C4117"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4117"
ms.assetid: c45aa281-4cc1-4dfd-bd32-bd7a60ddd577
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4117
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4117](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4117).  
  
  
macro name 'name' is reserved; 'Command' ignored  
  
### To fix by checking the following possible causes  
  
1.  Trying to define or undefine a predefined macro.  
  
2.  Trying to define or undefine the preprocessor operator **defined**.  
  
 The following sample generates C4117:  
  
```  
// C4117.cpp  
// compile with: /W1  
#define __FILE__ test         // C4117. __FILE__ is a predefined macro  
#define ValidMacroName test   // ok  
  
int main() {  
}  
```

