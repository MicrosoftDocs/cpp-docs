---
title: "Compiler Error C3748 | Microsoft Docs"
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
  - "C3748"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3748"
ms.assetid: 6fe71a0a-dd93-4ce6-9729-b9616360cf34
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3748
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3748](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3748).  
  
  
interface': managed interfaces may not fire events  
  
 The [__event](../../cpp/event.md) keyword cannot appear inside an interface.  
  
 The following sample generates C3748:  
  
```  
// C3748.cpp  
__interface I {  
// try the following line instead  
// struct I {  
   __event void f();   // C3748  
};  
  
int main() {  
}  
```

