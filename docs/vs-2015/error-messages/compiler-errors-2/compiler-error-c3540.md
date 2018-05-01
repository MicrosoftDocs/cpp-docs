---
title: "Compiler Error C3540 | Microsoft Docs"
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
  - "C3540"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3540"
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3540
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3540](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3540).  
  
  
type': sizeof cannot be applied to a type that contains 'auto'  
  
 The [sizeof](../../cpp/sizeof-operator.md) operator cannot be applied to the indicated type because it contains the `auto` specifier.  
  
## Example  
 The following example yields C3540.  
  
```  
// C3540.cpp  
// Compile with /Zc:auto  
int main() {  
    auto x = 123;  
    sizeof(x);    // OK  
    sizeof(auto); // C3540  
    return 0;  
}  
```  
  
## See Also  
 [auto Keyword](../../cpp/auto-keyword.md)   
 [/Zc:auto (Deduce Variable Type)](../../build/reference/zc-auto-deduce-variable-type.md)   
 [sizeof Operator](../../cpp/sizeof-operator.md)

