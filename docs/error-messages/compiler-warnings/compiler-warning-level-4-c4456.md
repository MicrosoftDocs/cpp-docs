---
title: "Compiler Warning (level 4) C4456 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4456"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4456"
ms.assetid: 5ab39fc1-0e19-461b-842b-4da80560b044
caps.latest.revision: 0
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
# Compiler Warning (level 4) C4456
  
> declaration of '*identifier*' hides previous local declaration
  
The declaration of *identifier* in the local scope hides the declaration of the previous local declaration of the same name. This warning lets you know that references to *identifier* in the local scope resolve to the locally declared version, not the previous local, which may or may not be your intent. To fix this issue, we recommend you give local variables names that do not conflict with other local names.  
    
## Example
  
The following sample generates C4456 because the loop control variable `int x` and the local variable `double x` in `member_fn` have the same names. To fix this issue, use different names for the local variables.  
  
```cpp  
// C4456_hide.cpp
// compile with: cl /W4 /c C4456_hide.cpp

struct S {
    void member_fn(unsigned u) {
        double x = 0;
        for (int x = 0; x < 10; ++x) {  // C4456
            u += x; // uses local int x
        } 
        x += u; // uses local double x
    }
} s;
```  
