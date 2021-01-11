---
description: "Learn more about: C Runtime Error R6025"
title: "C Runtime Error R6025"
ms.date: "11/04/2016"
f1_keywords: ["R6025"]
helpviewer_keywords: ["R6025"]
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
---
# C Runtime Error R6025

pure virtual function call

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it has an internal problem. The most common reason for this error is a bug in the app, or a corrupted installation.
>
> You can try these steps to fix this error:
>
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

No object has been instantiated to handle the pure virtual function call.

This error is caused by calling a virtual function in an abstract base class through a pointer which is created by a cast to the type of the derived class, but is actually a pointer to the base class. This can occur when casting from a **`void`**<strong>\*</strong> to a pointer to a class when the **`void`**<strong>\*</strong> was created during the construction of the base class.
