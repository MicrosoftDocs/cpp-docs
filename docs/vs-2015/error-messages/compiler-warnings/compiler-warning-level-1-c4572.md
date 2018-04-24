---
title: "Compiler Warning (level 1) C4572 | Microsoft Docs"
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
  - "C4572"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4572"
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4572
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4572](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4572).  
  
  
ParamArray] attribute is deprecated under /clr, use '...' instead  
  
 An obsolete style for specifying a variable argument list was used. When compiling for the CLR, use ellipsis syntax instead of <xref:System.ParamArrayAttribute>. For more information, see [Variable Argument Lists (...) (C++/CLI)](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).  
  
## Example  
 The following sample generates C4572.  
  
```  
// C4572.cpp  
// compile with: /clr /W1  
void Func([System::ParamArray] array<int> ^);   // C4572  
void Func2(... array<int> ^){}   // OK  
  
int main() {  
   Func2(1, 2, 3);  
}  
```

