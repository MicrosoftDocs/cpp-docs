---
title: "Compiler Error C3271 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3271"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3271"
ms.assetid: 16d8bd1d-2e30-4c6a-a07f-0c4f3342fab5
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3271
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3271](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3271).  
  
  
member': invalid value 'value' for the FieldOffset attribute  
  
 A negative number was passed to the [FieldOffset](frlrfSystemRuntimeInteropServicesFieldOffsetAttributeClassTopic) attribute.  
  
 The following sample generates C3271:  
  
```  
// C3271.cpp  
// compile with: /clr /c  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[StructLayout(LayoutKind::Explicit)]  
value class MyStruct1 {  
   public: [FieldOffset(0)] int a;  
   public: [FieldOffset(-1)] long b;   // C3271  
};  
```  
  
 The following sample generates C3271:  
  
```  
// C3271_2.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[StructLayout(LayoutKind::Explicit)]  
__value class MyStruct1 {  
   public: [FieldOffset(0)] int a;  
   public: [FieldOffset(-1)] long b;   // C3271  
};  
  
static int main() {  
   MyStruct1* a = __nogc new MyStruct1();  
};  
```
