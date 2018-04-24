---
title: "Compiler Error C3628 | Microsoft Docs"
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
  - "C3628"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3628"
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3628
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3628](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3628).  
  
  
base class' : managed or WinRTclasses only support public inheritance  
  
 An attempt was made to use a managed or WinRT class as a [private](../../cpp/private-cpp.md) or [protected](../../cpp/protected-cpp.md) base class. A managed or WinRT class can only be used as a base class with [public](../../cpp/public-cpp.md) access.  
  
 The following sample generates C3628 and shows how to fix it:  
  
```  
// C3628a.cpp  
// compile with: /clr  
ref class B {  
};  
  
ref class D : private B {   // C3628  
  
// The following line resolves the error.  
// ref class D : public B {  
};  
  
int main() {  
}  
```  
  
 The following sample generates C3628 and shows how to fix it:  
  
```  
// C3628b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__gc class B {  
};  
  
__gc class D : B {   // C3628, private is the default access level  
  
// The following line resolves the error.  
// __gc class D : public B {  
};  
  
int main() {  
}  
```

