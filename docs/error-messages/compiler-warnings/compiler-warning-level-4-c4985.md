---
title: "Compiler Warning (level 4) C4985 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["C4985"]
ms.assetid: 832f001c-afe7-403d-a8b4-02334724c79e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4985
'symbol name': attributes not present on previous declaration.  
  
 The Microsoft source code annotation language (SAL) annotations on the current method declaration or definition differ from the annotations on an earlier declaration. The same SAL annotations must be used in the definition and declarations of a method.  
  
 The SAL provides a set of annotations that you can use to describe how a function uses its parameters, the assumptions it makes about them, and the guarantees it makes on finishing. The annotations are defined in the sal.h header file.  
  
 Notice that the SAL macros will not expand unless the project has the [/analyze](../../build/reference/analyze-code-analysis.md) flag specified. When you specify **/analyze**, the compiler can throw C4985, even if no warnings or errors appeared without **/analyze**.  
  
### To correct this error  
  
1.  Use the same SAL annotations on the definition of a method and all its declarations.  
  
## See Also  
 [SAL Annotations](../../c-runtime-library/sal-annotations.md)