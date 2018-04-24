---
title: "Compiler Error C2874 | Microsoft Docs"
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
  - "C2874"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2874"
ms.assetid: b54fa9d8-8df5-40d9-9b3b-aa3e9dd6a3be
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2874
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2874](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2874).  
  
  
using-declaration causes a multiple declaration of 'symbol'  
  
 The declaration causes the same item to be defined twice.  
  
 The following sample generates C2874:  
  
```  
// C2874.cpp  
namespace Z {  
   int i;  
}  
  
int main() {  
   int i;  
   using Z::i;   // C2874, i already declared  
}  
```

