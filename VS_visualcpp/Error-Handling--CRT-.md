---
title: "Error Handling (CRT)"
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
ms.assetid: 125ac697-9eb0-4152-a440-b7842f23d97f
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
# Error Handling (CRT)
Use these routines to handle program errors.  
  
### Error-Handling Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[assert](../VS_visualcpp/assert-Macro--_assert--_wassert.md) macro|Test for programming logic errors; available in both the release and debug versions of the run-time library|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[_ASSERT, _ASSERTE](../VS_visualcpp/_ASSERT--_ASSERTE--_ASSERT_EXPR-Macros.md) macros|Similar to `assert`, but only available in the debug versions of the run-time library|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[clearerr](../VS_visualcpp/clearerr.md)|Reset error indicator. Calling `rewind` or closing a stream also resets the error indicator.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_eof](../VS_visualcpp/_eof.md)|Check for end of file in low-level I/O|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[feof](../VS_visualcpp/feof.md)|Test for end of file. End of file is also indicated when `_read` returns 0.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[ferror](../VS_visualcpp/ferror.md)|Test for stream I/O errors|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_RPT, _RPTF](../VS_visualcpp/_RPT--_RPTF--_RPTW--_RPTFW-Macros.md) macros|Generate a report similar to `printf`, but only available in the debug versions of the run-time library|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_set_error_mode](../VS_visualcpp/_set_error_mode.md)|Modifies `__error_mode` to determine a non-default location where the C run time writes an error message for an error that will possibly end the program.||  
|[_set_purecall_handler](../VS_visualcpp/_get_purecall_handler--_set_purecall_handler.md)|Sets the handler for a pure virtual function call.||  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)