---
title: "Compiler Error C3913 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3913"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3913"
ms.assetid: a678bfce-9524-470d-9f23-7d08ecb972c8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3913
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3913](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3913).  
  
  
default property must be indexed  
  
 A default property was defined incorrectly.  
  
 For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
 The following sample generates C3913:  
  
```  
// C3913.cpp  
// compile with: /clr /c  
ref struct X {  
   property int default {   // C3913  
   // try the following line instead  
   // property int default[int] {  
      int get(int) { return 0; }  
      void set(int, int) {}  
   }  
};  
```

