---
title: "Compiler Error C3914 | Microsoft Docs"
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
  - "C3914"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3914"
ms.assetid: 8f3190e6-ee50-4916-9ecc-3b8748b2e1e7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3914
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3914](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3914).  
  
  
a default property cannot be static  
  
 A default property was declared incorrectly.  For more information, see [How to: Use Indexed Properties](../../misc/how-to-use-indexed-properties.md).  
  
## Example  
 The following sample generates C3914.  
  
```  
// C3914.cpp  
// compile with: /clr /c  
ref struct X {  
   static property int default[int] {   // C3914  
   // try the following line instead  
   // property int default[int] {  
      int get(int) { return 0; }  
      void set(int, int) {}  
   }  
};  
```

