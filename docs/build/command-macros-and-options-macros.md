---
title: "Command Macros and Options Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["options macros", "command macros in NMAKE", "macros, options macros", "macros, command macros"]
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Command Macros and Options Macros
Command macros are predefined for Microsoft products. Options macros represent options to these products and are undefined by default. Both are used in predefined inference rules and can be used in description blocks or user-defined inference rules. Command macros can be redefined to represent part or all of a command line, including options. Options macros generate a null string if left undefined.  
  
|Microsoft product|Command macro|Defined as|Options macro|  
|-----------------------|-------------------|----------------|-------------------|  
|Macro Assembler|**AS**|ml|**AFLAGS**|  
|Basic Compiler|**BC**|bc|**BFLAGS**|  
|C Compiler|**CC**|cl|**CFLAGS**|  
|C++ Compiler|**CPP**|cl|**CPPFLAGS**|  
|C++ Compiler|**CXX**|cl|**CXXFLAGS**|  
|Resource Compiler|**RC**|rc|**RFLAGS**|  
  
## See Also  
 [Special NMAKE Macros](../build/special-nmake-macros.md)