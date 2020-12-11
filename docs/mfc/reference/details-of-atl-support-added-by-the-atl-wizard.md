---
description: "Learn more about: Details of ATL Support Added by the ATL Wizard"
title: "Details of ATL Support Added by the ATL Wizard"
ms.date: "08/20/2019"
f1_keywords: ["vc.codewiz.atl.support"]
helpviewer_keywords: ["MFC, ATL support", "ATL, MFC projects"]
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
---
# Details of ATL Support Added by the ATL Wizard

::: moniker range=">=msvc-160"

When you [add ATL support to an existing MFC executable or DLL](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), Visual Studio adds a header file called *framework.h* by default, which contains `#include` and `#define` preprocessor directives to enable the use of ATL in your project. No additional files or classes are added, as was done in previous versions of Visual Studio.

::: moniker-end

::: moniker range="<=msvc-150"

When you [add ATL support to an existing MFC executable or DLL](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), Visual Studio makes the following modifications to the existing MFC project (in this example, the project is called `MFCEXE`):

- Two new files (an .idl file and an .rgs file, used to register the server) are added.

- In the main application header and implementation files (Mfcexe.h and Mfcexe.cpp), a new class (derived from `CAtlMFCModule`) is added. In addition to the new class, code is added to `InitInstance` for registration. Code is also added to the `ExitInstance` function for revoking the class object. In the header file, Finally, two new header files (Initguid.h and Mfcexe_i.c) are included in the implementation file, declaring and initializing the new GUIDs for the `CAtlMFCModule`-derived class.

- To register the server properly, an entry for the new .rgs file is added to the project's resource file.

::: moniker-end

## Notes for DLL Projects

When you add ATL support to an MFC DLL project, you will see some differences. Code is added to the `DLLRegisterServer` and `DLLUnregisterServer` functions for registering and unregistering the DLL. Code is also added to [DllCanUnloadNow](../../atl/reference/catldllmodulet-class.md#dllcanunloadnow) and [DllGetClassObject](../../atl/reference/catldllmodulet-class.md#dllgetclassobject).

## See also

[ATL Support in an MFC Project](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Navigating the Class Structure](../../ide/navigate-code-cpp.md)
