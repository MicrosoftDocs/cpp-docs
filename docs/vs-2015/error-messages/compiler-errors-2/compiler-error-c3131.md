---
title: "Compiler Error C3131 | Microsoft Docs"
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
  - "C3131"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3131"
ms.assetid: 38f20fac-83c9-4cd9-b7b5-74ca8f650ea6
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3131
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3131](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3131).  
  
  
project must have a 'module' attribute with a 'name' property  
  
 The [module](../../windows/module-cpp.md) attribute must have a name parameter.  
  
 The following sample generates C3131:  
  
```  
// C3131.cpp  
[emitidl];  
[module];   // C3131  
// try the following line instead  
// [module (name="MyLib")];  
  
[public]  
typedef long int LongInt;  
```

