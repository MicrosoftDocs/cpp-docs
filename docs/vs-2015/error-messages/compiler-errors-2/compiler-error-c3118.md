---
title: "Compiler Error C3118 | Microsoft Docs"
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
  - "C3118"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3118"
ms.assetid: 40fbe681-8868-4cb2-a2b2-4db4449319a7
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3118
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3118](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3118).  
  
  
interface' : interfaces do not support virtual inheritance  
  
 You tried to virtually inherit from an interface. For example,  
  
```  
// C3118.cpp  
__interface I1 {  
};  
  
__interface I2 : virtual I1 {   // C3118  
};  
```  
  
 generates this error.

