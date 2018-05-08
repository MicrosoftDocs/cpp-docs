---
title: "NAME (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["name"]
dev_langs: ["C++"]
helpviewer_keywords: ["NAME .def file statement"]
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NAME (C/C++)
Specifies a name for the main output file.  
  
```  
NAME [application][BASE=address]  
```  
  
## Remarks  
 An equivalent way to specify an output file name is with the [/OUT](../../build/reference/out-output-file-name.md) linker option, and an equivalent way to set the base address is with the [/BASE](../../build/reference/base-base-address.md) linker option. If both are specified, /OUT overrides **NAME**.  
  
 If you build a DLL, NAME will only affect the DLL name.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)