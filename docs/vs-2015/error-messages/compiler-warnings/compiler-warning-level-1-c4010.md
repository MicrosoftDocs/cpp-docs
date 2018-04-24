---
title: "Compiler Warning (level 1) C4010 | Microsoft Docs"
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
  - "C4010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4010"
ms.assetid: d607a9ff-8f8f-45c0-b07b-3b2f439e5485
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4010
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4010](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4010).  
  
  
single-line comment contains line-continuation character  
  
 A single-line comment, which is introduced by //, contains a backslash (\\) that serves as a line-continuation character. The compiler considers the next line to be a continuation and treats it as a comment.  
  
 Some syntax-directed editors do not indicate the line following the continuation character as a comment. Ignore syntax coloring on any lines that cause this warning.  
  
 The following sample generates C4010:  
  
```  
// C4010.cpp  
// compile with: /WX  
int main() {  
   // the next line is also a comment because of the backslash \  
   int a = 3; // C4010  
   a++;  
}  
```

