---
description: "Learn more about: C Runtime Error R6019"
title: "C Runtime Error R6019"
ms.date: "11/04/2016"
f1_keywords: ["R6019"]
helpviewer_keywords: ["R6019"]
ms.assetid: 8129923e-7db2-40ee-9602-def9365f8d28
---
# C Runtime Error R6019

unable to open console device

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it attempted to access the console, but it didn't have sufficient permission. There are several possible reasons for this error, but it's usually because the program must be run as an administrator, or there is a bug in the program.
>
> You can try these steps to fix this error:
>
> - Run the program as an administrator.
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

This error occurs because the app called a console function, but the operating system did not grant access to the console. Except in debugging mode, console functions are generally not allowed in Microsoft Store apps. If your app requires administrator privileges to run, make sure it is installed to run as administrator by default.
