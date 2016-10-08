---
title: "Compiler Error C2262"
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
ms.assetid: 727d1c6e-53e8-40e5-b7b8-6a7ac2011727
caps.latest.revision: 4
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
# Compiler Error C2262
'attribute_specifiers' : InternalsVisibleTo declarations cannot have a version, culture, or processor architecture specified  
  
 The <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute?qualifyHint=False> attribute was not specified correctly.  
  
## Example  
 The following sample generates C2262.  
  
```  
// C2262.cpp  
// compile with: /clr /c  
using namespace System::Runtime::CompilerServices;  
[assembly: InternalsVisibleTo("assembly_name, version=1.2.3.7")];   // C2262  
[assembly: InternalsVisibleTo("assembly_name ")];   // OK  
```