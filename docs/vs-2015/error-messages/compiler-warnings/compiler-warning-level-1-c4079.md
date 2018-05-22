---
title: "Compiler Warning (level 1) C4079 | Microsoft Docs"
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
  - "C4079"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4079"
ms.assetid: 549759f0-e168-47e9-8c9a-de93ac843689
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4079
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4079](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4079).  
  
  
unexpected token 'token'  
  
 An unexpected separator token occurs in a pragma argument list. The remainder of the pragma was ignored.  
  
 The following sample generates C4079:  
  
```  
// C4079.cpp  
// compile with: /W1  
#pragma warning(disable : 4081)  
#pragma pack(c,16)   // C4079  
  
int main() {  
}  
```

