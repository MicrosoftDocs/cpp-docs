---
title: "Argument Access | Microsoft Docs"
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
  - "c.arguments"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "argument access macros [C++]"
  - "variable-length argument lists"
ms.assetid: 7046ae34-a0ec-44f0-815d-3209492a3e19
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Argument Access
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Argument Access](https://docs.microsoft.com/cpp/c-runtime-library/argument-access).  
  
The `va_arg`, `va_end`, and `va_start` macros provide access to function arguments when the number of arguments is variable. These macros are defined in STDARG.H for ANSI C compatibility and in VARARGS.H for compatibility with UNIX System V.  
  
### Argument-Access Macros  
  
|Macro|Use|.NET Framework equivalent|  
|-----------|---------|-------------------------------|  
|[va_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Retrieve argument from list|[System::ParamArrayAttribute Class](https://msdn.microsoft.com/library/system.paramarrayattribute.aspx)|  
|[va_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Reset pointer|[System::ParamArrayAttribute Class](https://msdn.microsoft.com/library/system.paramarrayattribute.aspx)|  
|[va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Set pointer to beginning of argument list|[System::ParamArrayAttribute Class](https://msdn.microsoft.com/library/system.paramarrayattribute.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)





