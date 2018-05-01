---
title: "Compiler Error C3632 | Microsoft Docs"
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
  - "C3632"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3632"
ms.assetid: a04e3217-f5a1-4461-a1db-d69fd096d468
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3632
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3632](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3632).  
  
  
event': illegal style of event for construct  
  
 [__event](../../cpp/event.md) declarations are not valid in all constructs.  
  
 C3632 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3632:  
  
```  
// C3632.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
public __gc __interface I  
{  
   __event void sna();   // C3632  
};  
  
// use the following as an example  
__delegate void MyDel();  
public __gc __interface I2  
{  
   __event MyDel* sna;  
};  
  
int main()  
{  
}  
```

