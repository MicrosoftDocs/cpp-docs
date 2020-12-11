---
description: "Learn more about: C Runtime Error R6032"
title: "C Runtime Error R6032"
ms.date: "11/04/2016"
f1_keywords: ["R6032"]
helpviewer_keywords: ["R6032"]
ms.assetid: 52092a63-cc51-444a-bfc3-fad965a3558e
---
# C Runtime Error R6032

Not enough space for locale information

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it has an internal memory problem. There are several possible reasons for this error, but often it's caused by an extremely low memory condition, or by a bug in the program.
>
> You can try these steps to fix this error:
>
> - Close other running applications or restart your computer to free up memory.
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

The runtime maintains information about the locale on each thread so that it can process calls to locale-sensitive functions. If the allocation of the memory for this information fails, the runtime is unable to proceed because too many of its basic facilities depend on it.
