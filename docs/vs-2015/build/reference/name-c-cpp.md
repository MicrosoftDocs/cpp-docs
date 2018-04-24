---
title: "NAME (C-C++) | Microsoft Docs"
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
  - "name"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NAME .def file statement"
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NAME (C/C++)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NAME (C/C++)](https://docs.microsoft.com/cpp/build/reference/name-c-cpp).  
  
  
Specifies a name for the main output file.  
  
```  
NAME [application][BASE=address]  
```  
  
## Remarks  
 An equivalent way to specify an output file name is with the [/OUT](../../build/reference/out-output-file-name.md) linker option, and an equivalent way to set the base address is with the [/BASE](../../build/reference/base-base-address.md) linker option. If both are specified, /OUT overrides **NAME**.  
  
 If you build a DLL, NAME will only affect the DLL name.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)

