---
title: "Compiler Warning (level 1) C4606 | Microsoft Docs"
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
  - "C4606"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4606"
ms.assetid: c1b45fb6-672b-42eb-9e1c-c67b3e4150d3
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4606
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4606](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4606).  
  
  
pragma warning : 'warning_number' ignored; Code Analysis warnings are not associated with warning levels  
  
 For Code Analysis warnings, only `error`, `once`, and `default` are supported with the [warning](../../preprocessor/warning.md) pragma.  
  
## Example  
 The following sample generates C4606.  
  
```  
// C4606.cpp  
// compile with: /c /W1  
#pragma warning(1: 6001)   // C4606  
#pragma warning(once: 6001)   // OK  
```

