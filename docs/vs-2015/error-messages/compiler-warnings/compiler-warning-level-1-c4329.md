---
title: "Compiler Warning (level 1) C4329 | Microsoft Docs"
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
  - "C4329"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4329"
ms.assetid: 4316f51a-2c56-4b3f-831e-65d24b83b65c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4329
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4329](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4329).  
  
  
__declspec(align()) is ignored on enum  
  
 Use of the [align](../../cpp/align-cpp.md) keyword of the [__declspec](../../cpp/declspec.md) modifier is not allowed on an `enum`. The following sample generates C4329:  
  
```  
// C4329.cpp  
// compile with: /W1 /LD  
enum __declspec(align(256)) TestEnum {   // C4329  
   TESTVAL1,  
   TESTVAL2,  
   TESTVAL3  
};  
__declspec(align(256)) enum TestEnum1;  
```

