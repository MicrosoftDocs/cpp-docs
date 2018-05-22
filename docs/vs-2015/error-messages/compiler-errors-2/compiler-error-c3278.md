---
title: "Compiler Error C3278 | Microsoft Docs"
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
  - "C3278"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3278"
ms.assetid: 56f818f5-85a6-4792-843b-54fe16327658
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3278
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3278](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3278).  
  
  
direct call of interface or pure method 'method' will fail at runtime  
  
 A call was made to an interface method or a pure method, which is not allowed.  
  
 The following sample generates C3278:  
  
```  
// C3278_2.cpp  
// compile with: /clr  
using namespace System;  
interface class I  
{  
   void vmf();  
};  
  
public ref class C: public I  
{  
public:  
   void vmf()  
   {  
      Console::WriteLine( "In C::vmf()" );  
      I::vmf(); // C3278  
   }  
  
};  
  
int main()  
{  
   C^ pC = gcnew C;  
   pC->vmf();  
}  
```

