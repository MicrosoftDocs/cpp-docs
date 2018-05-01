---
title: "Compiler Warning (level 4) C4032 | Microsoft Docs"
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
  - "C4032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4032"
ms.assetid: 70dd0c85-0239-43f9-bb06-507f6a57d206
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4032
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4032](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4032).  
  
  
formal parameter 'number' has different type when promoted  
  
 The parameter type is not compatible, through default promotions, with the type in a previous declaration.  
  
 This is an error in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning under Microsoft extensions (/Ze).  
  
## Example  
  
```  
// C4032.c  
// compile with: /W4  
void func();  
void func(char);   // C4032, char promotes to int  
  
int main()  
{  
}  
```

