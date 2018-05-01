---
title: "Compiler Error C3623 | Microsoft Docs"
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
  - "C3623"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3623"
ms.assetid: a0341b45-062a-4f67-beb9-ba74201ed1ed
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3623
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3623](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3623).  
  
  
variable': bit fields are not supported in managed or WinRT types  
  
 The use of bit fields is not permitted on variables in a managed or WinRT class.  
  
 The following sample generates C3623:  
  
```  
// C3623.cpp  
// compile with: /clr  
using namespace System;  
ref class CMyClass {  
public:  
   int i : 1;   // C3623  
};  
  
int main() {  
   CMyClass^ pMyClass = gcnew CMyClass();  
   pMyClass->i = 3;  
   Console::Out->WriteLine(pMyClass->i);  
}  
```  
  
 The following sample generates C3623:  
  
```  
// C3623_2.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
__gc class CMyClass {  
   public:  
      int i : 1;   // C3623  
};  
  
int main() {  
   CMyClass *pMyClass = new CMyClass();  
   pMyClass->i = 3;  
   Console::Out->WriteLine(pMyClass->i);  
}  
```

