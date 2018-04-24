---
title: "Compiler Error C3155 | Microsoft Docs"
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
  - "C3155"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3155"
ms.assetid: b04a42e1-64e7-40f8-81fe-c7945348b2cf
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3155
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3155](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3155).  
  
  
attributes are not allowed in a property indexer  
  
 An indexed property was declared incorrectly. For more information, see [How to: Use Indexed Properties](../../misc/how-to-use-indexed-properties.md).  
  
## Example  
 The following sample generates C3155.  
  
```  
// C3155.cpp  
// compile with: /clr /c  
using namespace System;  
ref struct R {  
   property int F[[ParamArray] int] {   // C3155  
   // try the following line instead  
   // property int F[ int] {   // OK  
      int get(int i) {   
         return 0;   
      }  
   }  
};  
```

