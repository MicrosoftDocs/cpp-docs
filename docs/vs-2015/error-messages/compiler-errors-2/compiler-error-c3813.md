---
title: "Compiler Error C3813 | Microsoft Docs"
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
  - "C3813"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3813"
ms.assetid: ffdbc489-71bf-4cd6-988c-f824c9ab3ceb
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3813
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3813](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3813).  
  
  
a property declaration can only appear within the definition of a managed or WinRTtype  
  
 A [property](../../misc/property.md) can only be declared within a managed or Windows Runtime type. Native types do not support the `property` keyword.  
  
 The following sample generates C3813 and shows how to fix it:  
  
```  
// C3813.cpp  
// compile by using: cl /c /clr C3813.cpp  
class A  
{  
   property int Int; // C3813  
};  
  
ref class B  
{  
   property int Int; // OK - declared within managed type  
};  
```

