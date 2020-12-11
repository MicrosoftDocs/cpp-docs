---
description: "Learn more about: C Runtime Error R6033"
title: "C Runtime Error R6033"
ms.date: "11/04/2016"
f1_keywords: ["R6033"]
helpviewer_keywords: ["R6033"]
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
---
# C Runtime Error R6033

Attempt to use MSIL code from this assembly during native code initialization. This indicates a bug in your application. It is most likely the result of calling an MSIL-compiled (/clr) function from a native constructor or from DllMain.

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it has an internal problem. This error can be caused by a bug in the app, or by a bug in an add-in or extension that it uses.
>
> You can try these steps to fix this error:
>
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to remove, repair or reinstall any extensions or add-ins.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

This diagnostic indicates that MSIL instructions were executing during loader lock. This can occur if you have compiled native C++ by using the /clr flag. Only use the /clr flag on modules that contain managed code. For more information, see [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).
