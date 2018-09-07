---
title: "STUB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["STUB"]
dev_langs: ["C++"]
helpviewer_keywords: ["STUB .def file statement"]
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# STUB
When used in a module definition file that builds a virtual device driver (VxD), allows you to specify a file name that contains an IMAGE_DOS_HEADER structure (defined in WINNT.H) to be used in the virtual device driver (VxD), rather than the default header.  
  
```  
STUB:filename  
```  
  
## Remarks  
 An equivalent way to specify *filename* is with the [/STUB](../../build/reference/stub-ms-dos-stub-file-name.md) linker option.  
  
 STUB is valid in a module definition file only when building a VxD.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)