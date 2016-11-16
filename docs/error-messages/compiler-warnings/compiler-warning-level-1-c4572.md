---
title: "Compiler Warning (level 1) C4572 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 1) C4572
[ParamArray] attribute is deprecated under /clr, use '...' instead  
  
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