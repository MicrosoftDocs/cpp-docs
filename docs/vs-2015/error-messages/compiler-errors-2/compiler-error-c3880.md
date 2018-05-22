---
title: "Compiler Error C3880 | Microsoft Docs"
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
  - "C3880"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3880"
ms.assetid: b0e05d1e-32d0-4034-9246-f37d23573ea9
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3880
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3880](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3880).  
  
  
var' : cannot be a literal data member  
  
 The type of a [literal](../../windows/literal-cpp-component-extensions.md) attribute must be, or compile-time convertible to, one of the following types:  
  
-   integral type  
  
-   string  
  
-   enum with an integral or underlying type  
  
 The following sample generates C3880:  
  
```  
// C3880.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal System::Decimal staticConst1 = 10;   // C3880  
   literal int staticConst2 = 10;   // OK  
};  
```

