---
title: "Compiler Error C3099"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C3099
'keyword': use [System::AttributeUsageAttribute] for managed attributes; use [Windows::Foundation::Metadata::AttributeUsageAttribute] for WinRT attributes  
  
 Use <xref:System.AttributeUsageAttribute?qualifyHint=False> to declare **/clr** attributes. Use `Windows::Foundation::Metadata::AttributeUsageAttribute` to declare Windows Runtime attributes.  
  
 For more information about /CLR attributes, see [User-Defined Attributes](../VS_visualcpp/User-Defined-Attributes---C---Component-Extensions-.md). For supported attributes in Windows Runtime, see [Windows.Foundation.Metadata namespace](http://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.aspx)  
  
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