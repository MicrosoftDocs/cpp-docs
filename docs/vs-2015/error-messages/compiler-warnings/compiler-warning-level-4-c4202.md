---
title: "Compiler Warning (level 4) C4202 | Microsoft Docs"
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
  - "C4202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4202"
ms.assetid: 253293aa-97a3-4878-a2e8-c6cc9e20b1cb
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4202
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4202](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4202).  
  
  
nonstandard extension used : '...': prototype parameter in name list illegal  
  
 An old-style function definition contains variable arguments. These definitions generate an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## Example  
  
```  
// C4202.c  
// compile with: /W4  
void func( a, b, ...)   // C4202  
int a, b;  
{}  
  
int main()  
{  
}  
```

