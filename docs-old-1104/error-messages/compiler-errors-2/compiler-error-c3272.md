---
title: "Compiler Error C3272 | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
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
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3272
'symbol' : symbol requires FieldOffset, as it is a member of type typename defined with StructLayout(LayoutKind::Explicit)  
  
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