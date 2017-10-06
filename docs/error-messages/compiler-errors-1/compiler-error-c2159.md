---
title: "Compiler Error C2159 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2159"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2159"]
ms.assetid: 925a2cbd-43c9-45ee-a373-84004350b380
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2159
more than one storage class specified  
  
 A declaration contains more than one storage class.  
  
 The following sample generates C2159:  
  
```  
// C2159.cpp  
// compile with: /c  
static int i;   // OK  
extern static int i;   // C2159  
```