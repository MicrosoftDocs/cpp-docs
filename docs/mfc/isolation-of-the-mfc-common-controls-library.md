---
description: "Learn more about: Isolation of the MFC Common Controls Library"
title: "Isolation of the MFC Common Controls Library"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, Common Controls library"]
ms.assetid: 7471e6f0-49b0-47f7-86e7-8d6bc3541694
---
# Isolation of the MFC Common Controls Library

The Common Controls library is now isolated within MFC, allowing different modules (such as user DLLs) to use different versions of the Common Controls library by specifying the version in their manifests.

An MFC application (or user code called by MFC) makes calls to Common Controls library APIs through wrapper functions named `Afx`*FunctionName*, where *FunctionName* is the name of a Common Controls API. Those wrapper functions are defined in afxcomctl32.h and afxcomctl32.inl.

You can use the [AFX_COMCTL32_IF_EXISTS](reference/run-time-object-model-services.md#afx_comctl32_if_exists) and [AFX_COMCTL32_IF_EXISTS2](reference/run-time-object-model-services.md#afx_comctl32_if_exists2) macros (defined in afxcomctl32.h) to determine whether the Common Controls library implements a certain API instead of calling [GetProcAddress](../build/getprocaddress.md).

Technically, you make calls to Common Controls Library APIs through a wrapper class, `CComCtlWrapper` (defined in afxcomctl32.h). `CComCtlWrapper` is also responsible for the loading and unloading of comctl32.dll. The MFC Module State contains a pointer to an instance of `CComCtlWrapper`. You can access the wrapper class using the `afxComCtlWrapper` macro.

Note that calling Common Controls API directly (not using the MFC wrapper functions) from an MFC application or user DLL will work in most cases, because the MFC application or user DLL is bound to the Common Controls library it requested in its manifest). However, the MFC code itself has to use the wrappers, because MFC code might be called from user DLLs with different Common Controls library versions.
