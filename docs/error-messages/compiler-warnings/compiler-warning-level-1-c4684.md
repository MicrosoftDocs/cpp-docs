---
title: "Compiler Warning (level 1) C4684 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4684"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4684"]
ms.assetid: e95f1a83-2784-4b05-ae94-12148e056e26
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4684
'attribute' : WARNING!! attribute may cause invalid code generation: use with caution  
  
 You used an attribute that should not commonly be used.  
  
 The following sample generates C4684:  
  
```  
// C4684.cpp  
// compile with: /W1 /LD  
 [module(name="xx")]; // C4684 expected  
[no_injected_text];  
```