---
description: "Learn more about: _CrtSetReportHook2, _CrtSetReportHookW2"
title: "_CrtSetReportHook2, _CrtSetReportHookW2"
ms.date: "11/04/2016"
api_name: ["_CrtSetReportHook2", "_CrtSetReportHookW2"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtSetReportHookW2", "CrtSetReportHook2", "_CrtSetReportHookW2", "_CrtSetReportHook2"]
helpviewer_keywords: ["CrtSetReportHook2 function", "_CrtSetReportHook2 function", "_CrtSetReportHookW2 function", "CrtSetReportHookW2 function"]
ms.assetid: 12e5f68d-c8a7-4b1a-9a75-72ba4a8592d0
---
# _CrtSetReportHook2, _CrtSetReportHookW2

Installs or uninstalls a client-defined reporting function by hooking it into the C run-time debug reporting process (debug version only).

## Syntax

```C
int _CrtSetReportHook2(
   int mode,
   _CRT_REPORT_HOOK pfnNewHook
);
int _CrtSetReportHookW2(
   int mode,
   _CRT_REPORT_HOOKW pfnNewHook
);
```

### Parameters

*mode*<br/>
The action to take: **_CRT_RPTHOOK_INSTALL** or **_CRT_RPTHOOK_REMOVE**.

*pfnNewHook*<br/>
Report hook to install or remove in the narrow-character or wide-character version of this function.

## Return Value

-1 if an error was encountered, with **EINVAL** or **ENOMEM** set; otherwise returns the reference count of *pfnNewHook* after the call.

## Remarks

**_CrtSetReportHook2** and **_CrtSetReportHookW2** let you hook or unhook a function, whereas [_CrtSetReportHook](crtsetreporthook.md) only lets you hook a function.

**_CrtSetReportHook2** or **_CrtSetReportHookW2** should be used instead of **_CrtSetReportHook** when the hook call is made in a DLL and when multiple DLLs might be loaded and setting their own hook functions. In such a situation, DLLs can be unloaded in a different order than they were loaded and the hook function can be left pointing at an unloaded DLL. Any debug output crashes the process if the hook functions were added with **_CrtSetReportHook**.

Any hook functions added with **_CrtSetReportHook** are called if there are no hook functions added with **_CrtSetReportHook2** or **_CrtSetReportHookW2** or if all hook functions added with **_CrtSetReportHook2** and **_CrtSetReportHookW2** return **FALSE**.

The wide-character version of this function is available. The report hook functions take a string whose type (wide or narrow characters) must match the version of this function used. Use the following function prototype for the report hooks used with the wide-character version of this function:

```C
int YourReportHook( int reportType, wchar_t *message, int *returnValue );
```

Use the following prototype for the narrow-character report hooks:

```C
int YourReportHook( int reportType, char *message, int *returnValue );
```

These functions validate their parameters. If *mode* or **pfnNewNook** is invalid, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return -1.

> [!NOTE]
> If your application is compiled with **/clr** and the reporting function is called after the application has exited main, the CLR will throw an exception if the reporting function calls any CRT functions.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_CrtSetReportHook2**|\<crtdbg.h>|\<errno.h>|
|**_CrtSetReportHookW2**|\<crtdbg.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

```C
// crt_setreporthook2.c
#include <windows.h>
#include <stdio.h>
#include <crtdbg.h>
#include <assert.h>

int __cdecl TestHook1(int nReportType, char* szMsg, int* pnRet)
{
   int nRet = FALSE;

   printf("CRT report hook 1.\n");
   printf("CRT report type is \"");
   switch (nReportType)
   {
      case _CRT_ASSERT:
      {
         printf("_CRT_ASSERT");
         // nRet = TRUE;   // Always stop for this type of report
         break;
      }

      case _CRT_WARN:
      {
         printf("_CRT_WARN");
         break;
      }

      case _CRT_ERROR:
      {
         printf("_CRT_ERROR");
         break;
      }

      default:
      {
         printf("???Unknown???");
         break;
      }
   }

   printf("\".\nCRT report message is:\n\t");
   printf(szMsg);

   if   (pnRet)
      *pnRet = 0;

   return   nRet;
}

int __cdecl   TestHook2(int nReportType, char* szMsg, int* pnRet)
{
   int   nRet = FALSE;

   printf("CRT report hook 2.\n");
   printf("CRT report type is \"");
   switch   (nReportType)
   {
      case _CRT_WARN:
      {
         printf("_CRT_WARN");
         break;
      }

      case _CRT_ERROR:
      {
         printf("_CRT_ERROR");
         break;
      }

      case _CRT_ASSERT:
      {
         printf("_CRT_ASSERT");
         nRet = TRUE;   // Always stop for this type of report
         break;
      }

      default:
      {
         printf("???Unknown???");
         break;
      }
   }

   printf("\".\nCRT report message is: \t");
   printf(szMsg);

   if   (pnRet)
      *pnRet = 0;
   // printf("CRT report code is %d.\n", *pnRet);
   return   nRet;
}

int   main(int argc, char* argv[])
{
   int   nRet = 0;

   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1)"
          " returned %d\n", nRet);

   _ASSERT(0);

   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2)"
          " returned %d\n", nRet);
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1);
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1)"
          " returned %d\n", nRet);

   return   nRet;
}
```

### Output

```Output
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2) returned 0
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1) returned 0
```

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
