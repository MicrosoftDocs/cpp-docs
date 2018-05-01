---
title: "Compiler Error C2776 | Microsoft Docs"
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
  - "C2776"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2776"
ms.assetid: 9d80addc-62c7-40fc-a2cc-60303abb87df
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2776
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2776](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2776).  
  
  
only one 'get' method can be specified per property  
  
 You can only specify one `get` function in the [property](../../cpp/property-cpp.md) extended attribute. This error occurs when multiple `get` functions are specified.  
  
 The following sample generates C2776:  
  
```  
// C2776.cpp  
struct A {  
   __declspec(property(get=GetProp,get=GetPropToo))  
   // try the following line instead  
   // __declspec(property(get=GetProp))  
      int prop;   // C2776  
   int GetProp(void);  
   int GetPropToo(void);  
};  
```

