---
description: "Learn more about: Support for Activation Contexts in the MFC Module State"
title: "Support for Activation Contexts in the MFC Module State"
ms.date: "11/04/2016"
helpviewer_keywords: ["activation contexts [MFC]", "activation contexts [MFC], MFC support"]
ms.assetid: 1e49eea9-3620-46dd-bc5f-d664749567c7
---
# Support for Activation Contexts in the MFC Module State

MFC creates an activation context using a manifest resource provided by the user module. For more information on how activation contexts are created, see the following topics:

- [Activation Contexts](/windows/win32/SbsCs/activation-contexts)

- [Application Manifests](/windows/win32/SbsCs/application-manifests)

- [Assembly Manifests](/windows/win32/SbsCs/assembly-manifests)

## Remarks

When reading these Windows SDK topics, note that the MFC activation context mechanism resembles the Windows SDK activation context except that MFC does not use the Windows SDK Activation Context API.

Activation context works in MFC applications, user DLLs, and MFC extension DLLs in the following ways:

- MFC applications use resource ID 1 for their manifest resource. In this case, the MFC does not create its own activation context, but uses the default application context.

- MFC user DLLs use resource ID 2 for their manifest resource. Here, MFC creates an activation context for each User DLL, so different user DLLs can use different versions of the same libraries (for example, the Common Controls library).

- MFC extension DLLs rely on their hosting applications or user DLLs to establish their activation context.

Although the activation context state can be modified using the processes described under [Using the Activation Context API](/windows/win32/SbsCs/using-the-activation-context-api), using the MFC activation context mechanism can be useful when developing DLL-based plug-in architectures where it is not easy (or not possible) to manually switch activation state before and after individual calls to external plug-ins.

The activation context is created in [AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit). It is destroyed in the `AFX_MODULE_STATE` destructor. An activation context handle is kept in `AFX_MODULE_STATE`. (`AFX_MODULE_STATE` is described in [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate).)

The [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) macro activates and deactivates the activation context. `AFX_MANAGE_STATE` is enabled for static MFC libraries, as well as MFC DLLs, to allow MFC code to execute in the proper activation context selected by the User DLL.

## See also

[Activation Contexts](/windows/win32/SbsCs/activation-contexts)<br/>
[Application Manifests](/windows/win32/SbsCs/application-manifests)<br/>
[Assembly Manifests](/windows/win32/SbsCs/assembly-manifests)<br/>
[AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit)<br/>
[AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate)<br/>
[AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state)
