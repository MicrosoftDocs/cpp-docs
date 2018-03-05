---
title: "Compiler Error C3279 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3279"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3279"]
ms.assetid: 639afc20-984c-4a95-be35-8bf9409f02d5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3279
partial and explicit specializations as well as explicit instantiations of class templates declared in the cli namespace are disallowed  
  
 The `cli` namespace is defined by Microsoft and contains pseudo-templates. The Visual C++ compiler does not allow user-defined, partial and explicit specializations, and explicit instantiations of class templates in this namespace.  
  
 The following sample generates C3279:  
  
```  
// C3279.cpp  
// compile with: /clr  
namespace cli {  
   template <> ref class array<int> {};   // C3279  
   template <typename T> ref class array<T, 2> {};   // C3279  
}  
```