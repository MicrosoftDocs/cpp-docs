---
title: "Compiler Warning (level 3) C4240 | Microsoft Docs"
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
  - "C4240"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4240"
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4240
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4240](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4240).  
  
  
nonstandard extension used : access to 'classname' now defined to be 'access specifier', previously it was defined to be 'access specifier'  
  
 Under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), you cannot change the access to a nested class. Under the default Microsoft extensions (/Ze), you can, with this warning.  
  
## Example  
  
```  
// C4240.cpp  
// compile with: /W3  
class X  
{  
private:  
   class N;  
public:  
   class N  
   {   // C4240  
   };  
};  
  
int main()  
{  
}  
```

