---
title: "Compiler Error C3246 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3246"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3246"]
ms.assetid: ad85224a-e540-479b-a5eb-a3bc3964c30b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3246
'class' : cannot inherit from 'type' as it has been declared as 'sealed'  
  
A class that is marked as [sealed](../../windows/sealed-cpp-component-extensions.md) cannot be the base class for any other classes.  
  
The following sample generates C3246:  
  
```  
// C3246_2.cpp  
// compile with: /clr /LD  
ref class X sealed {};  
  
ref class Y : public X {}; // C3246  
```  
