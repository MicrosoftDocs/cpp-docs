---
title: "Compiler Error C3292"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ead485cc-5471-4e10-b361-300589ff5b70
caps.latest.revision: 5
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C3292
the cli namespace cannot be reopened  
  
 The cli namespace cannot be declared in your code.  For more information, see [Platform, default, and cli Namespaces](../VS_visualcpp/Platform--default--and-cli-Namespaces---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3292.  
  
```  
// C3292.cpp  
// compile with: /clr /c  
namespace cli {};   // C3292  
```