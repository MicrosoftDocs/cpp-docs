---
title: "Compiler Error C2725 | Microsoft Docs"
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
  - "C2725"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2725"
ms.assetid: 13cd5b1b-e906-4cd8-9b2b-510d587c665a
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2725
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2725](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2725).  
  
  
exception' : unable to throw or catch a managed or WinRT object by value or reference  
  
 The type of a managed or WinRT exception was not correct.  
  
## Example  
 The following sample generates C2725 and shows how to fix it.  
  
```  
// C2725.cpp  
// compile with: /clr  
ref class R {  
public:  
   int i;  
};  
  
int main() {  
   R % r1 = *gcnew R;  
   throw r1;   // C2725  
  
   R ^ r2 = gcnew R;  
   throw r2;   // OK     
}  
```  
  
## Example  
 The following sample generates C2725 and shows how to fix it.  
  
```  
// C2725b.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   try {}  
   catch( System::Exception%) {}   // C2725  
   // try the following line instead  
   // catch( System::Exception ^e) {}  
}  
```  
  
## Example  
 The following sample generates C2725 and shows how to fix it.  
  
```  
// C2725c.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
int main() {  
   try {}  
   catch( System::Exception&) {}   // C2725  
   // try the following line instead  
   // catch( System::Exception *e) {}  
}  
```

