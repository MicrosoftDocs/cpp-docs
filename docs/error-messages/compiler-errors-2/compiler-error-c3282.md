---
title: "Compiler Error C3282 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3282"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3282"]
ms.assetid: bac2ac89-c360-4c24-bb81-c20c62ece9ba
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3282
generic parameter lists can only appear on managed or WinRTclasses, structs, or functions  
  
 A generic parameter list was used incorrectly.  For more information, see [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3282 and shows how to fix it.  
  
```  
// C3282.cpp  
// compile with: /clr /c  
generic <typename T> int x;   // C3282  
  
ref struct GC0 {  
   generic <typename T> int x;   // C3282  
};  
  
// OK  
generic <typename T>  
ref class M {};  
```