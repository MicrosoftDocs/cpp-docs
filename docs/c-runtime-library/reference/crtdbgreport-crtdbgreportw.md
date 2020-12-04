---
description: "Learn more about: _CrtDbgReport, _CrtDbgReportW"
title: "_CrtDbgReport, _CrtDbgReportW"
ms.date: "11/04/2016"
api_name: ["_CrtDbgReport", "_CrtDbgReportW"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtDbgReport", "CrtDbgReportW", "_CrtDbgReportW", "_CrtDbgReport"]
helpviewer_keywords: ["debug reporting", "_CrtDbgReport function", "CrtDbgReport function", "CrtDbgReportW function", "_CrtDbgReportW function"]
ms.assetid: 6e581fb6-f7fb-4716-9432-f0145d639ecc
---
# _CrtDbgReport, _CrtDbgReportW

Generates a report with a debugging message and sends the report to three possible destinations (debug version only).

## Syntax

```C
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

### Parameters

*reportType*<br/>
Report type: **_CRT_WARN**, **_CRT_ERROR**, and **_CRT_ASSERT**.

*filename*<br/>
Pointer to name of source file where assert/report occurred or **NULL**.

*linenumber*<br/>
Line number in source file where assert/report occurred or **NULL**.

*moduleName*<br/>
Pointer to name of module (.exe or .dll) where assert or report occurred.

*format*<br/>
Pointer to format-control string used to create the user message.

*argument*<br/>
Optional substitution arguments used by *format*.

## Return Value

For all report destinations, **_CrtDbgReport** and **_CrtDbgReportW** return -1 if an error occurs and 0 if no errors are encountered. However, when the report destination is a debug message window and the user clicks the **Retry** button, these functions return 1. If the user clicks the **Abort** button in the Debug Message window, these functions immediately abort and do not return a value.

The [_RPT, _RPTF](rpt-rptf-rptw-rptfw-macros.md) debug macros call **_CrtDbgReport** to generate their debug reports. The wide-character versions of these macros as well as [_ASSERT, _ASSERTE](assert-asserte-assert-expr-macros.md), [_RPTW](rpt-rptf-rptw-rptfw-macros.md)
and [_RPTFW](rpt-rptf-rptw-rptfw-macros.md), use **_CrtDbgReportW** to generate their debug reports. When **_CrtDbgReport** or **_CrtDbgReportW** return 1, these macros start the debugger, provided that just-in-time (JIT) debugging is enabled.

## Remarks

**_CrtDbgReport** and **_CrtDbgReportW** can send the debug report to three different destinations: a debug report file, a debug monitor (the Visual Studio debugger), or a debug message window. Two configuration functions, [_CrtSetReportMode](crtsetreportmode.md) and [_CrtSetReportFile](crtsetreportfile.md), are used to specify the destination or destinations for each report type. These functions allow the reporting destination or destinations for each report type to be separately controlled. For example, it is possible to specify that a *reportType* of **_CRT_WARN** only be sent to the debug monitor, while a *reportType* of **_CRT_ASSERT** be sent to a debug message window and a user-defined report file.

**_CrtDbgReportW** is the wide-character version of **_CrtDbgReport**. All its output and string parameters are in wide-character strings; otherwise it is identical to the single-byte character version.

**_CrtDbgReport** and **_CrtDbgReportW** create the user message for the debug report by substituting the *argument*[**n**] arguments into the *format* string, using the same rules defined by the **printf** or **wprintf** functions. These functions then generate the debug report and determine the destination or destinations, based on the current report modes and file defined for *reportType*. When the report is sent to a debug message window, the *filename*, **lineNumber**, and *moduleName* are included in the information displayed in the window.

The following table lists the available choices for the report mode or modes and file and the resulting behavior of **_CrtDbgReport** and **_CrtDbgReportW**. These options are defined as bit flags in \<crtdbg.h>.

|Report mode|Report file|**_CrtDbgReport**, **_CrtDbgReportW** behavior|
|-----------------|-----------------|------------------------------------------------|
|**_CRTDBG_MODE_DEBUG**|Not applicable|Writes message by using Windows [OutputDebugString](/windows/win32/api/debugapi/nf-debugapi-outputdebugstringw) API.|
|**_CRTDBG_MODE_WNDW**|Not applicable|Calls Windows [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) API to create message box to display the message along with **Abort**, **Retry**, and **Ignore** buttons. If a user clicks **Abort**, **_CrtDbgReport** or **_CrtDbgReport** immediately aborts. If a user clicks **Retry**, it returns 1. If a user clicks **Ignore**, execution continues and **_CrtDbgReport** and **_CrtDbgReportW** return 0. Note that clicking **Ignore** when an error condition exists often results in "undefined behavior."|
|**_CRTDBG_MODE_FILE**|**__HFILE**|Writes message to user-supplied **HANDLE**, using the Windows [WriteFile](/windows/win32/api/fileapi/nf-fileapi-writefile) API and does not verify validity of file handle; the application is responsible for opening the report file and passing a valid file handle.|
|**_CRTDBG_MODE_FILE**|**_CRTDBG_FILE_STDERR**|Writes message to **stderr**.|
|**_CRTDBG_MODE_FILE**|**_CRTDBG_FILE_STDOUT**|Writes message to **stdout**.|

The report can be sent to one, two, or three destinations or to no destination at all. For more information about specifying the report mode or modes and report file, see the [_CrtSetReportMode](crtsetreportmode.md) and [_CrtSetReportFile](crtsetreportfile.md) functions. For more information about using the debug macros and reporting functions, see [Macros for Reporting](/visualstudio/debugger/macros-for-reporting).

If your application needs more flexibility than that provided by **_CrtDbgReport** and **_CrtDbgReportW**, you can write your own reporting function and hook it into the C run-time library reporting mechanism by using the [_CrtSetReportHook](crtsetreporthook.md) function.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtDbgReport**|\<crtdbg.h>|
|**_CrtDbgReportW**|\<crtdbg.h>|

**_CrtDbgReport** and **_CrtDbgReportW** are Microsoft extensions. For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

```C
// crt_crtdbgreport.c
#include <crtdbg.h>

int main(int argc, char *argv[]) {
#ifdef _DEBUG
   _CrtDbgReport(_CRT_ASSERT, __FILE__, __LINE__, argv[0], NULL);
#endif
}
```

See [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2) for an example of how to change the report function.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetReportMode](crtsetreportmode.md)<br/>
[_CrtSetReportFile](crtsetreportfile.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
