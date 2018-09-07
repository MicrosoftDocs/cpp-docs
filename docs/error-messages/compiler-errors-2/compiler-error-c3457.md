---
title: "Compiler Error C3457 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3457"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3457"]
ms.assetid: 5c1e366a-fa75-4cca-b9a3-86d4ebe4090e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3457
'attribute': attribute does not support unnamed arguments  
  
 Source annotation attributes, unlike CLR custom attribute or compiler attributes, only support named arguments.  
  
## Example  
 The following sample generates C3457.  
  
```  
#include "SourceAnnotations.h"  
[vc_attributes::Post( 1 )] int f();   // C3457  
[vc_attributes::Post( Valid=vc_attributes::Yes )] int f2();   // OK  
```