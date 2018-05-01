---
title: "Fatal Error C1071 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1071"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1071"
ms.assetid: 489f1786-370e-4ecd-af67-538fe6e5bd4e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1071
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1071](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1071).  
  
  
unexpected end of file found in comment  
  
 The compiler reached the end of the file while scanning a comment.  
  
### To fix by checking the following possible causes  
  
1.  Missing comment terminator (*/).  
  
2.  Missing newline character after a comment on the last line of a source file.  
  
 The following sample generates C1071:  
  
```  
// C1071.cpp  
int main() {  
}  
  
/* this comment is fine */  
/* forgot the closing tag        // C1071  
```

