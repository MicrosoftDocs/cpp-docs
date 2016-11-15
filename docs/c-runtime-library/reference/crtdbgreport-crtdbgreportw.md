---
title: "_CrtDbgReport, _CrtDbgReportW | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtDbgReport"
  - "_CrtDbgReportW"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CrtDbgReport"
  - "CrtDbgReportW"
  - "_CrtDbgReportW"
  - "_CrtDbgReport"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "debug reporting"
  - "_CrtDbgReport function"
  - "CrtDbgReport function"
  - "CrtDbgReportW function"
  - "_CrtDbgReportW function"
ms.assetid: 6e581fb6-f7fb-4716-9432-f0145d639ecc
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _CrtDbgReport, _CrtDbgReportW
Generates a report with a debugging message and sends the report to three possible destinations (debug version only).  
  
## Syntax  
  
```  
int _CrtDbgReport(   
   int reportType,  
   const char *filename,  
   int linenumber,  
   const char *moduleName,  
   const char *format [,  
   argument] ...   
);  
int _CrtDbgReportW(   
   int reportType,  
   const wchar_t *filename,  
   int linenumber,  
   const wchar_t *moduleName,  
   const wchar_t *format [,  
   argument] ...   
);  
```  
  
#### Parameters  
 `reportType`  
 Report type: `_CRT_WARN`, `_CRT_ERROR`, and `_CRT_ASSERT`.  
  
 `filename`  
 Pointer to name of source file where assert/report occurred or `NULL`.  
  
 `linenumber`  
 Line number in source file where assert/report occurred or `NULL`.  
  
 `moduleName`  
 Pointer to name of module (.exe or .dll) where assert or report occurred.  
  
 `format`  
 Pointer to format-control string used to create the user message.  
  
 `argument`  
 Optional substitution arguments used by `format`.  
  
## Return Value  
 For all report destinations, `_CrtDbgReport` and `_CrtDbgReportW` return –1 if an error occurs and 0 if no errors are encountered. However, when the report destination is a debug message window and the user clicks the **Retry** button, these functions return 1. If the user clicks the **Abort** button in the Debug Message window, these functions immediately abort and do not return a value.  
  
 The [_RPT, _RPTF](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) debug macros call `_CrtDbgReport` to generate their debug reports. The wide-character versions of these macros as well as [_ASSERT&#91;E&#93;](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), `_RPTW``n` and `_RPTFW``n`, use `_CrtDbgReportW` to generate their debug reports. When `_CrtDbgReport` or `_CrtDbgReportW` return 1, these macros start the debugger, provided that just-in-time (JIT) debugging is enabled.  
  
## Remarks  
 `_CrtDbgReport` and `_CrtDbgReportW` can send the debug report to three different destinations: a debug report file, a debug monitor (the [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] debugger), or a debug message window. Two configuration functions, [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) and [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md), are used to specify the destination or destinations for each report type. These functions allow the reporting destination or destinations for each report type to be separately controlled. For example, it is possible to specify that a `reportType` of `_CRT_WARN` only be sent to the debug monitor, while a `reportType` of `_CRT_ASSERT` be sent to a debug message window and a user-defined report file.  
  
 `_CrtDbgReportW` is the wide-character version of `_CrtDbgReport`. All its output and string parameters are in wide-character strings; otherwise it is identical to the single-byte character version.  
  
 `_CrtDbgReport` and `_CrtDbgReportW` create the user message for the debug report by substituting the `argument`[`n`] arguments into the `format` string, using the same rules defined by the `printf` or `wprintf` functions. These functions then generate the debug report and determine the destination or destinations, based on the current report modes and file defined for `reportType`. When the report is sent to a debug message window, the `filename`, `lineNumber`, and `moduleName` are included in the information displayed in the window.  
  
 The following table lists the available choices for the report mode or modes and file and the resulting behavior of `_CrtDbgReport` and `_CrtDbgReportW`. These options are defined as bit flags in \<crtdbg.h>.  
  
|Report mode|Report file|`_CrtDbgReport`, `_CrtDbgReportW` behavior|  
|-----------------|-----------------|------------------------------------------------|  
|`_CRTDBG_MODE_DEBUG`|Not applicable|Writes message by using Windows [OutputDebugString](http://msdn.microsoft.com/library/windows/desktop/aa363362.aspx) API.|  
|`_CRTDBG_MODE_WNDW`|Not applicable|Calls Windows [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) API to create message box to display the message along with **Abort**, **Retry**, and **Ignore** buttons. If a user clicks **Abort**, `_CrtDbgReport` or `_CrtDbgReport` immediately aborts. If a user clicks **Retry**, it returns 1. If a user clicks **Ignore**, execution continues and `_CrtDbgReport` and `_CrtDbgReportW` return 0. Note that clicking **Ignore** when an error condition exists often results in "undefined behavior."|  
|`_CRTDBG_MODE_FILE`|`__HFILE`|Writes message to user-supplied `HANDLE`, using the Windows [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747.aspx) API and does not verify validity of file handle; the application is responsible for opening the report file and passing a valid file handle.|  
|`_CRTDBG_MODE_FILE`|`_CRTDBG_FILE_STDERR`|Writes message to `stderr`.|  
|`_CRTDBG_MODE_FILE`|`_CRTDBG_FILE_STDOUT`|Writes message to `stdout`.|  
  
 The report can be sent to one, two, or three destinations or to no destination at all. For more information about specifying the report mode or modes and report file, see the [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) and [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md) functions. For more information about using the debug macros and reporting functions, see [Macros for Reporting](/visualstudio/debugger/macros-for-reporting).  
  
 If your application needs more flexibility than that provided by `_CrtDbgReport` and `_CrtDbgReportW`, you can write your own reporting function and hook it into the C run-time library reporting mechanism by using the [_CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md) function.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtDbgReport`|\<crtdbg.h>|  
|`_CrtDbgReportW`|\<crtdbg.h>|  
  
 `_CrtDbgReport` and `_CrtDbgReportW` are Microsoft extensions. For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## Example  
  
```  
// crt_crtdbgreport.c  
#include <crtdbg.h>  
  
int main(int argc, char *argv[]) {  
#ifdef _DEBUG  
   _CrtDbgReport(_CRT_ASSERT, __FILE__, __LINE__, argv[0], NULL);  
#endif  
}  
```  
  
 See [crt_dbg2](http://msdn.microsoft.com/en-us/21e1346a-6a17-4f57-b275-c76813089167) for an example of how to change the report function.  
  
## .NET Framework Equivalent  
  
-   [System::Diagnostics::Debug::Write](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.write.aspx)  
  
-   [System::Diagnostics::Debug::Writeline](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writeline.aspx)  
  
-   [System::Diagnostics::Debug::WriteIf](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writeif.aspx)  
  
-   [System::Diagnostics::Debug::WriteLineIf](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writelineif.aspx)  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)   
 [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md)   
 [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [_DEBUG](../../c-runtime-library/debug.md)