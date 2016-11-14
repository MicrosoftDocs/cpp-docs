---
title: "Boxing (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: f4ee27a8-6a34-432d-b9ec-39285d513b23
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Boxing (C++/CLI)
Boxing is the process of converting a value type to the type `object` or to any interface type that's implemented by the value type. When the common language runtime (CLR) boxes a value type, it wraps the value in a `System.Object` and stores it on the managed heap. Unboxing extracts the value type from the object. Boxing is implicit; unboxing is explicit.  
  
## Related Articles  
  
|Title|Description|  
|-----------|-----------------|  
|[How to: Explicitly Request Boxing](../dotnet/how-to-explicitly-request-boxing.md)|Describes how to explicitly request boxing on a variable.|  
|[How to: Use gcnew to Create Value Types and Use Implicit Boxing](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)|Shows how to use `gcnew` to create a boxed value type that can be placed on the managed, garbage-collected heap.|  
|[How to: Unbox](../dotnet/how-to-unbox.md)|Shows how to unbox and modify a value.|  
|[Standard Conversions and Implicit Boxing](../dotnet/standard-conversions-and-implicit-boxing.md)|Shows that a standard conversion is chosen by the compiler over a conversion that requires boxing.|  
|[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|The top-level article for .NET programming in the Visual C++ documentation.|