---
title: "Compiler Warning (level 2) C4094 | Microsoft Docs"
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
  - "C4094"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4094"
ms.assetid: e68929fb-3a1c-4be7-920b-d5f79f534f99
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4094
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4094](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4094).  
  
  
untagged 'token' declared no symbols  
  
 The compiler detected an empty declaration using an untagged structure, union, or class. The declaration is ignored.  
  
## Example  
  
```  
// C4094.cpp  
// compile with: /W2  
struct  
{  
};   // C4094  
  
int main()  
{  
}  
```  
  
 This condition generates an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

