---
title: "VERSION (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VERSION"]
dev_langs: ["C++"]
helpviewer_keywords: ["VERSION .def file statement"]
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# VERSION (C/C++)
Tells LINK to put a number in the header of the .exe file or DLL.  
  
```  
VERSION major[.minor]  
```  
  
## Remarks  
 The *major* and *minor* arguments are decimal numbers in the range 0 through 65,535. The default is version 0.0.  
  
 An equivalent way to specify a version number is with the [Version Information](../../build/reference/version-version-information.md) (/VERSION) option.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)