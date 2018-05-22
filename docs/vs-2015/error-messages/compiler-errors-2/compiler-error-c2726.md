---
title: "Compiler Error C2726 | Microsoft Docs"
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
  - "C2726"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2726"
ms.assetid: f0191bb7-c175-450b-bf09-a3213db96d09
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2726
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2726](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2726).  
  
  
gcnew' may only be used to create an object with managed or WinRT type  
  
 You cannot create an instance of a native type on the garbage-collected heap.  
  
 The following sample generates C2726 and shows how to fix it:  
  
```  
// C2726.cpp  
// compile with: /clr  
using namespace System;  
class U {};  
ref class V {};  
value class W {};  
  
int main() {  
   U* pU = gcnew U;    // C2726  
   U* pU2 = new U;   // OK  
   V^ p2 = gcnew V;   // OK  
   W p3;   // OK  
  
}  
```  
  
 The following sample generates C2726 and shows how to fix it:  
  
```  
// C2726b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
class U {};  
__gc class V {};  
  
int main() {  
   U* pU = __gc new U;    // C2726  
   U* pU2 = new U;    // OK  
   V* p2 = __gc new V;  
}  
```

