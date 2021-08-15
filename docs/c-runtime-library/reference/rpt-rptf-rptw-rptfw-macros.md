---
description: "Learn more about: _RPT, _RPTF, _RPTW, _RPTFW Macros"
title: "_RPT, _RPTF, _RPTW, _RPTFW Macros"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["RPT3", "RPTF4", "_RPT4", "RPT1", "_RPTF0", "RPTF3", "_RPTF4", "RPTF1", "RPT4", "_RPT1", "_RPT0", "RPT0", "_RPTF2", "RPTF0", "_RPT3", "_RPT2", "_RPTF3", "RPT2", "_RPTF1"]
helpviewer_keywords: ["debugging [CRT], using macros", "_RPTW3 macro", "_RPT0 macro", "RPTW4 macro", "_RPTF3 macro", "_RPTW4 macro", "RPTF4 macro", "RPTFW2 macro", "RPTW macros", "RPT1 macro", "_RPTF macros", "RPTFW3 macro", "_RPTW0 macro", "_RPTF0 macro", "macros, debugging with", "_RPTW2 macro", "RPTF3 macro", "RPT3 macro", "RPT0 macro", "_RPT macros", "RPTW3 macro", "_RPTFW macros", "debug reporting macros", "RPTF macros", "RPT macros", "_RPTW macros", "RPTF2 macro", "_RPTF1 macro", "_RPT1 macro", "_RPT4 macro", "_RPTFW2 macro", "_RPTFW1 macro", "RPTF0 macro", "_RPT2 macro", "RPTFW macros", "_RPTW1 macro", "_RPTFW0 macro", "RPT4 macro", "_RPT3 macro", "_RPTFW3 macro", "_RPTF4 macro", "_RPTFW4 macro", "_RPTF2 macro", "RPTW0 macro", "RPTFW4 macro", "RPTFW0 macro", "RPTW2 macro", "RPTF1 macro", "RPT2 macro", "RPTFW1 macro", "RPTW1 macro"]
ms.assetid: a5bf8b30-57f7-4971-8030-e773b7a1ae13
---
# _RPT, _RPTF, _RPTW, _RPTFW Macros

Tracks an application's progress by generating a debug report (debug version only). Note that *n* specifies the number of arguments in *args* and can be 0, 1, 2, 3, 4, or 5.

## Syntax

```C
_RPT
      n
      (
   reportType,
   format,
...[args]
);
_RPTFn(
   reportType,
   format,
   [args]
);
_RPTWn(
   reportType,
   format
   [args]
);
_RPTFWn(
   reportType,
   format
   [args]
);
```

### Parameters

*reportType*<br/>
Report type: **_CRT_WARN**, **_CRT_ERROR**, or **_CRT_ASSERT**.

*format*<br/>
Format-control string used to create the user message.

*args*<br/>
Substitution arguments used by *format*.

## Remarks

All these macros take the *reportType* and *format* parameters. In addition, they might also take up to four additional arguments, signified by the number appended to the macro name. For example, **_RPT0** and **_RPTF0** take no additional arguments, **_RPT1** and **_RPTF1** take *arg1*, **_RPT2** and **_RPTF2** take *arg1* and **arg2**, and so on.

The **_RPT** and **_RPTF** macros are similar to the [printf](printf-printf-l-wprintf-wprintf-l.md) function, because they can be used to track an application's progress during the debugging process. However, these macros are more flexible than **printf** because they do not need to be enclosed in **#ifdef** statements to prevent them from being called in a retail build of an application. This flexibility is achieved by using the [_DEBUG](../../c-runtime-library/debug.md) macro; the **_RPT** and **_RPTF** macros are only available when the **_DEBUG** flag is defined. When **_DEBUG** is not defined, calls to these macros are removed during preprocessing.

The **_RPTW** and **_RPTFW** macros are wide-character versions of these macros. They are like **wprintf** and take wide-character strings as arguments.

The **_RPT** macros call the [_CrtDbgReport](crtdbgreport-crtdbgreportw.md) function to generate a debug report with a user message. The **_RPTW** macros call the **_CrtDbgReportW** function to generate the same report with wide characters. The **_RPTF** and **_RPTFW** macros create a debug report with the source file and line number where the report macro was called, in addition to the user message. The user message is created by substituting the **arg**[*n*] arguments into the *format* string, using the same rules defined by the [printf](printf-printf-l-wprintf-wprintf-l.md) function.

**_CrtDbgReport** or **_CrtDbgReportW** generates the debug report and determines its destinations based on the current report modes and file defined for *reportType*. The [_CrtSetReportMode](crtsetreportmode.md) and [_CrtSetReportFile](crtsetreportfile.md) functions are used to define the destinations for each report type.

If an **_RPT** macro is called and neither **_CrtSetReportMode** nor **_CrtSetReportFile** has been called, messages are displayed as follows.

|Report type|Output destination|
|-----------------|------------------------|
|**_CRT_WARN**|Warning text is not displayed.|
|**_CRT_ERROR**|A pop-up window. Same as if `_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_WNDW);` had been specified.|
|**_CRT_ASSERT**|Same as **_CRT_ERROR**.|

When the destination is a debug message window and the user chooses the **Retry** button, **_CrtDbgReport** or **_CrtDbgReportW** returns 1, causing these macros to start the debugger, provided that just-in-time (JIT) debugging is enabled. For more information about using these macros as a debugging error handling mechanism, see [Using Macros for Verification and Reporting](/visualstudio/debugger/macros-for-reporting).

Two other macros exist that generate a debug report. The [_ASSERT](assert-asserte-assert-expr-macros.md) macro generates a report, but only when its expression argument evaluates to FALSE. [_ASSERTE](assert-asserte-assert-expr-macros.md) is exactly like **_ASSERT**, but includes the failed expression in the generated report.

## Requirements

|Macro|Required header|
|-----------|---------------------|
|**_RPT** macros|\<crtdbg.h>|
|**_RPTF** macros|\<crtdbg.h>|
|**_RPTW** macros|\<crtdbg.h>|
|**_RPTFW** macros|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

Although these are macros and are obtained by including Crtdbg.h, the application must link with one of the debug libraries because these macros call other run-time functions.

## Example

See the example in the [_ASSERT](assert-asserte-assert-expr-macros.md) topic.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
