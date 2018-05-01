---
title: "Compiler Error C3106 | Microsoft Docs"
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
  - "C3106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3106"
ms.assetid: 39d97a32-0905-4702-87d3-7f8ce473fb93
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3106
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3106](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3106).  
  
  
attribute': unnamed arguments must precede named arguments  
  
 Unnamed arguments must be passed to an attribute before named arguments.  
  
 For more information, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3106.  
  
```  
// C3106.cpp  
// compile with: /c  
[module(name="MyLib", dll)];   // C3106  
[module(dll, name="MyLib")];   // OK  
```

