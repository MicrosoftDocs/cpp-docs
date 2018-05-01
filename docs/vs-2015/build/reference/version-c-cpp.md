---
title: "VERSION (C-C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VERSION"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VERSION .def file statement"
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# VERSION (C/C++)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [VERSION (C/C++)](https://docs.microsoft.com/cpp/build/reference/version-c-cpp).  
  
  
Tells LINK to put a number in the header of the .exe file or DLL.  
  
```  
VERSION major[.minor]  
```  
  
## Remarks  
 The *major* and *minor* arguments are decimal numbers in the range 0 through 65,535. The default is version 0.0.  
  
 An equivalent way to specify a version number is with the [Version Information](../../build/reference/version-version-information.md) (/VERSION) option.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)

