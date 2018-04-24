---
title: "Compiler Error C2541 | Microsoft Docs"
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
  - "C2541"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2541"
ms.assetid: ed95180f-00df-4e62-a8e9-1b6dab8281bf
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2541
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2541](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2541).  
  
  
delete' : delete : cannot delete objects that are not pointers  
  
 The [delete](../../cpp/delete-operator-cpp.md) operator was used on an object that is not a pointer.  
  
 The following sample generates C2541:  
  
```  
// C2541.cpp  
int main() {  
   int i;  
   delete i;   // C2541 i not a pointer  
  
   // OK  
   int *ip = new int;  
   delete ip;  
}  
```

