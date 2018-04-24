---
title: "Compiler Error C2195 | Microsoft Docs"
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
  - "C2195"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2195"
ms.assetid: 9f9f035c-9c51-4173-a8ea-c6f907fc5c63
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2195
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2195](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2195).  
  
  
identifier' : is a data segment  
  
 The `code_seg` pragma uses a segment name used with the `data_seg` pragma.  
  
 The following sample generates C2195:  
  
```  
// C2195.cpp  
#pragma data_seg("MYDATA")  
#pragma code_seg("MYDATA")   // C2195  
#pragma code_seg("MYDATA2")   // OK  
```

