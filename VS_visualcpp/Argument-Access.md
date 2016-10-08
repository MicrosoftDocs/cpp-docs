---
title: "Argument Access"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7046ae34-a0ec-44f0-815d-3209492a3e19
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Argument Access
The `va_arg`, `va_end`, and `va_start` macros provide access to function arguments when the number of arguments is variable. These macros are defined in STDARG.H for ANSI C compatibility and in VARARGS.H for compatibility with UNIX System V.  
  
### Argument-Access Macros  
  
|Macro|Use|.NET Framework equivalent|  
|-----------|---------|-------------------------------|  
|[va_arg](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md)|Retrieve argument from list|[System::ParamArrayAttribute Class](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)|  
|[va_end](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md)|Reset pointer|[System::ParamArrayAttribute Class](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)|  
|[va_start](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md)|Set pointer to beginning of argument list|[System::ParamArrayAttribute Class](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)