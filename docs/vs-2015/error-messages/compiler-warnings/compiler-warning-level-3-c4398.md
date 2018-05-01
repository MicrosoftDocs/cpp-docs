---
title: "Compiler Warning (level 3) C4398 | Microsoft Docs"
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
  - "C4398"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4398"
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4398
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4398](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4398).  
  
  
variable' : per-process global object might not work correctly with multiple appdomains; consider using __declspec(appdomain)  
  
 A virtual function with [__clrcall](../../cpp/clrcall.md) calling convention in a native type causes the creation of a per application domain vtable. Such a variable may not correct correctly when used in multiple application domains.  
  
 You can resolve this warning by compiling with **/clr:pure**, which makes global variables per appdomain by default, or by explicitly marking the variable `__declspec(appdomain)`.  
  
 For more information, see [appdomain](../../cpp/appdomain.md) and [Application Domains and Visual C++](../../dotnet/application-domains-and-visual-cpp.md).  
  
## Example  
 The following sample generates C4398.  
  
```  
// C4398.cpp  
// compile with: /clr /W3 /c  
struct S {  
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall  
};  
  
S glob_s;   // C4398  
__declspec(appdomain) S glob_s2;   // OK  
```

