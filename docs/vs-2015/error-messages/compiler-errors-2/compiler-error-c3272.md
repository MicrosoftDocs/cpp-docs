---
title: "Compiler Error C3272 | Microsoft Docs"
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
  - "C3272"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3272"
ms.assetid: 7cdf254d-f207-4116-a1bf-7386f3b82a6f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3272
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3272](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3272).  
  
  
symbol' : symbol requires FieldOffset, as it is a member of type typename defined with StructLayout(LayoutKind::Explicit)  
  
 When [StructLayout](frlrfSystemRuntimeInteropServicesStructLayoutAttributeClassTopic) `Explicit` is in effect, fields must be marked with [FieldOffset](frlrfSystemRuntimeInteropServicesFieldOffsetAttributeClassTopic).  
  
 The following sample generates C3272:  
  
```  
// C3272_2.cpp  
// compile with: /clr /c  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[StructLayout(LayoutKind::Explicit)]  
ref struct X  
{  
   int data_;   // C3272  
   // try the following line instead  
   // [FieldOffset(0)] int data_;  
};  
```  
  
 The following sample generates C3272:  
  
```  
// C3272.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[StructLayout(LayoutKind::Explicit)]  
__gc struct X  
{  
   int data_;   // C3272  
   // try the following line instead  
   // [FieldOffset(0)] int data_;  
};  
```
