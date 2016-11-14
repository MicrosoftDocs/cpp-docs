---
title: "Linker Tools Error LNK1313 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1313"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1313"
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
caps.latest.revision: 7
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
# Linker Tools Error LNK1313
ijw/native module detected; cannot link with pure modules  
  
 The current version of Visual C++ does not support linking native or mixed managed/native .obj files with .obj files compiled with **/clr:pure**.  
  
## Example  
  
```  
// LNK1313.cpp  
// compile with: /c /clr:pure  
// a pure module  
int main() {}  
```  
  
## Example  
  
```  
// LNK1313_b.cpp  
// compile with: /c /clr  
// an IJW module  
void test(){}  
```  
  
## Example  
 The following sample will generate LNK1313.  
  
```  
// LNK1313_c.cpp  
// compile with: /link LNK1313.obj LNK1313_b.obj  
// LNK1313 warning expected  
```