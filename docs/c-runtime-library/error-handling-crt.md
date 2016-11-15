---
title: "Error Handling (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.errors"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "error handling, C routines for"
  - "logic errors"
  - "error handling, library routines"
  - "testing, for program errors"
ms.assetid: 125ac697-9eb0-4152-a440-b7842f23d97f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Error Handling (CRT)
Use these routines to handle program errors.  
  
### Error-Handling Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[assert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro|Test for programming logic errors; available in both the release and debug versions of the run-time library|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[_ASSERT, _ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macros|Similar to `assert`, but only available in the debug versions of the run-time library|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[clearerr](../c-runtime-library/reference/clearerr.md)|Reset error indicator. Calling `rewind` or closing a stream also resets the error indicator.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_eof](../c-runtime-library/reference/eof.md)|Check for end of file in low-level I/O|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[feof](../c-runtime-library/reference/feof.md)|Test for end of file. End of file is also indicated when `_read` returns 0.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[ferror](../c-runtime-library/reference/ferror.md)|Test for stream I/O errors|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_RPT, _RPTF](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) macros|Generate a report similar to `printf`, but only available in the debug versions of the run-time library|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_set_error_mode](../c-runtime-library/reference/set-error-mode.md)|Modifies `__error_mode` to determine a non-default location where the C run time writes an error message for an error that will possibly end the program.||  
|[_set_purecall_handler](../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md)|Sets the handler for a pure virtual function call.||  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)