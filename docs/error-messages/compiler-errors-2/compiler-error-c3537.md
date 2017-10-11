---
title: "Compiler Error C3537 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3537"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3537"]
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3537
'type': you cannot cast to a type that contains 'auto'  
  
 You cannot cast a variable to the indicated type because the type contains the `auto` keyword and the default [/Zc:auto](../../build/reference/zc-auto-deduce-variable-type.md) compiler option is in effect.  
  
## Example  
 The following code yields C3537 because the variables are cast to a type that contains the `auto` keyword.  
  
```  
// C3537.cpp  
// Compile with /Zc:auto  
int main()  
{  
   int value = 123;  
   auto(value);                        // C3537  
   (auto)value;                        // C3537  
   auto x1 = auto(value);              // C3537  
   auto x2 = (auto)value;              // C3537  
   auto x3 = static_cast<auto>(value); // C3537  
   return 0;  
}  
```  
  
## See Also  
 [auto Keyword](../../cpp/auto-keyword.md)