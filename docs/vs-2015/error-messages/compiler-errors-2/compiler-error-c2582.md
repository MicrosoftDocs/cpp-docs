---
title: "Compiler Error C2582 | Microsoft Docs"
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
  - "C2582"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2582"
ms.assetid: ee1b9378-8bcd-4792-b87e-6d7a466d29ed
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2582
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2582](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2582).  
  
  
function' function is unavailable in 'type'  
  
 An attempt was made to assign to an object that does not have an assignment operator.  
  
 The following sample generates C2582:  
  
```  
// C2582.cpp  
// compile with: /clr  
using namespace System;  
  
struct N {};  
ref struct O {};  
ref struct R {  
   property O prop;   // C2582  
   property O ^ prop2;   // OK  
};  
  
int main() {  
   String ^ st1 = gcnew String("");  
   ^st1 = gcnew String("");   // C2582  
   st1 = "xxx";   // OK  
}  
```

