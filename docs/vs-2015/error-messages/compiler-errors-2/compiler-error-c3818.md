---
title: "Compiler Error C3818 | Microsoft Docs"
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
  - "C3818"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3818"
ms.assetid: f9502f6a-0690-4135-ab88-cc97cf490f5c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3818
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3818](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3818).  
  
  
array property declaration 'property1' shall not overload an index property 'property2'  
  
 An overload is not possible for properties when one is an indexer and the other is an array property. See [__property](../../misc/property.md) for more information.  
  
 C3818 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3818:  
  
```  
// C3818.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc class X {  
public:  
   __property int get_Int(int index) {  
      Console::WriteLine(S"Called indexed property");  
      return m_value;  
   }  
  
   __property int get_Int() __gc[] {   // C3818, rename a property  
      Console::WriteLine(S"Called array property");  
      return m_arr;  
   }  
  
   int m_arr __gc[];  
   int m_value;  
};  
  
int main() {  
   X* x = new X;  
   x->m_arr = new int __gc[3];  
   x->m_value = 3;  
  
   x->Int[0];  
}  
```

