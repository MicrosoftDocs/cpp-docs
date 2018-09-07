---
title: "Compiler Warning (level 1) C4174 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4174"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4174"]
ms.assetid: 63301e51-24bc-43c4-bb11-252f7d513e9e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4174
'name' : not available as a #pragma component  
  
## Example  
  
```  
// C4174.cpp  
// compile with: /W1  
#pragma component(info)  // C4174; unknown  
#pragma component(browser, off)  // turn off browse info  
int main()  
{  
}  
```