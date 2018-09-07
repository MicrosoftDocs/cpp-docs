---
title: "Compiler Error C3099 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3099"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3099"]
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3099
'keyword': use [System::AttributeUsageAttribute] for managed attributes; use [Windows::Foundation::Metadata::AttributeUsageAttribute] for WinRT attributes  
  
 Use <xref:System.AttributeUsageAttribute> to declare **/clr** attributes. Use `Windows::Foundation::Metadata::AttributeUsageAttribute` to declare Windows Runtime attributes.  
  
 For more information about /CLR attributes, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md). For supported attributes in Windows Runtime, see [Windows.Foundation.Metadata namespace](https://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.aspx)  
  
## Example  
 The following sample generates C3099 and shows how to fix it.  
  
```  
// C3099.cpp  
// compile with: /clr /c  
using namespace System;  
[usage(10)]   // C3099  
// try the following line instead  
// [AttributeUsageAttribute(AttributeTargets::All)]  
ref class A : Attribute {};  
```