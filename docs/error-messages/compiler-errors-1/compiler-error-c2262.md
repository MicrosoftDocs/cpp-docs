---
title: "Compiler Error C2262 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2262"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2262"]
ms.assetid: 727d1c6e-53e8-40e5-b7b8-6a7ac2011727
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2262
'attribute_specifiers' : InternalsVisibleTo declarations cannot have a version, culture, or processor architecture specified  
  
 The <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> attribute was not specified correctly.  
  
## Example  
 The following sample generates C2262.  
  
```  
// C2262.cpp  
// compile with: /clr /c  
using namespace System::Runtime::CompilerServices;  
[assembly: InternalsVisibleTo("assembly_name, version=1.2.3.7")];   // C2262  
[assembly: InternalsVisibleTo("assembly_name ")];   // OK  
```