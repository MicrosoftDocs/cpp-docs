---
title: "Compiler Error C3288 | Microsoft Docs"
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
  - "C3288"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3288"
ms.assetid: ed08a540-9751-46e1-9cbe-c51d6a49ffab
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3288
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3288](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3288).  
  
  
type' : illegal dereference of a handle type  
  
 The compiler detected an illegal dereference of a handle type. You can dereference a handle type and assign it to a reference. For more information, see [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3288.  
  
```  
// C3288.cpp  
// compile with: /clr  
ref class R {};  
int main() {  
   *(System::Object^) nullptr;   // C3288  
  
// OK  
   (System::Object^) nullptr;   // OK  
   R^ r;  
   R% pr = *r;  
}  
```

