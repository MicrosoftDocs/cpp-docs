---
title: "Compiler Error C2751 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2751"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2751"]
ms.assetid: 44a3abdf-8a87-4a09-b34b-532c220c310a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2751
'parameter' : the name of a function parameter cannot be qualified  
  
 You cannot use a qualified name as a function parameter.  
  
 The following sample generates C2751:  
  
```  
// C2751.cpp  
namespace std {  
   template<typename T>  
   class list {};  
}  
  
#define list std::list  
void f(int &list){}   // C2751  
```