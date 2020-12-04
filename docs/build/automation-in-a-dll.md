---
description: "Learn more about: Automation in a DLL"
title: "Automation in a DLL"
ms.date: "11/04/2016"
helpviewer_keywords: ["DLLs [C++], Automation", "Automation [C++], DLLs"]
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
---
# Automation in a DLL

When you choose the Automation option in the MFC DLL Wizard, the wizard provides you with the following:

- A starter object description language (.ODL) file

- An include directive in the STDAFX.h file for Afxole.h

- An implementation of the `DllGetClassObject` function, which calls the **AfxDllGetClassObject** function

- An implementation of the `DllCanUnloadNow` function, which calls the **AfxDllCanUnloadNow** function

- An implementation of the `DllRegisterServer` function, which calls the [COleObjectFactory::UpdateRegistryAll](../mfc/reference/coleobjectfactory-class.md#updateregistryall) function

## What do you want to know more about?

- [Automation Servers](../mfc/automation-servers.md)

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
