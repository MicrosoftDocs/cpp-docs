---
title: "Compiler Error C3734 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3734"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3734"]
ms.assetid: 4e2afdcc-7da9-45a1-9c96-85f25e2986e8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3734
'class': a managed or WinRT class cannot be a coclass  
  
 The [coclass](../../windows/coclass.md) attribute cannot be used with managed or WinRT classes.  
  
 The following sample generates C3734 and shows how to fix it:  
  
```  
// C3734.cpp  
// compile with: /clr /c  
[module(name="x")];  
  
[coclass]  
ref class CMyClass {   // C3734 remove the ref keyword to resolve  
};  
```  
