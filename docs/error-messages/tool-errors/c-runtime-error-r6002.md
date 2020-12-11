---
description: "Learn more about: C Runtime Error R6002"
title: "C Runtime Error R6002"
ms.date: "11/04/2016"
f1_keywords: ["R6002"]
helpviewer_keywords: ["R6002"]
ms.assetid: 8fbbe65a-9c43-459e-8342-e1f6d1cef7d0
---
# C Runtime Error R6002

floating-point support not loaded

The necessary floating-point library was not linked.

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it has an internal problem. There are several possible reasons for this error, but often it's caused by a defect in the app's code, or by attempting to run an app that was not built for your particular computer processor.
>
> You can try these steps to fix this error:
>
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

This error can occur in your app when the floating-point library was not linked. Check for one of these causes:

- A format string for a `printf_s` or `scanf_s` function contained a floating-point format specification and the program did not contain any floating-point values or variables. To fix this issue, use a floating-point argument to correspond to the floating-point format specification, or perform a floating-point assignment elsewhere in the program. This causes floating-point support to be loaded.

- The compiler minimizes a program's size by loading floating-point support only when necessary. The compiler cannot detect floating-point operations or floating-point format specifications in format strings, so it does not load the necessary floating-point routines. To fix this issue, use a floating-point format specification and supply a floating-point argument, or perform a floating-point assignment elsewhere in the program. This causes floating-point support to be loaded.

- In a mixed-language program, a C library was specified before a FORTRAN library when the program was linked. Relink and specify the C library last.
