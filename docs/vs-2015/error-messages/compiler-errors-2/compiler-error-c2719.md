---
title: "Compiler Error C2719 | Microsoft Docs"
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
  - "C2719"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2719"
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2719
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2719](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2719).  
  
  
parameter': formal parameter with __declspec(align('#')) won't be aligned  
  
 The [align](../../cpp/align-cpp.md) `__declspec` modifier is not permitted on function parameters. Function parameter alignment is controlled by the calling convention used. For more information, see [Calling Conventions](../../cpp/calling-conventions.md).  
  
 The following sample generates C2719 and shows how to fix it:  
  
```  
// C2719.cpp  
void func(int __declspec(align(32)) i);   // C2719  
// try the following line instead  
// void func(int i);  
```

