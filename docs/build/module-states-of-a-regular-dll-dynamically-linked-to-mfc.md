---
description: "Learn more about: Module States of a Regular MFC DLL Dynamically Linked to MFC"
title: "Module States of a Regular MFC DLL Dynamically Linked to MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["regular MFC DLLs [C++], dynamically linked to MFC", "module states [C++]", "MFC DLLs [C++], regular MFC DLLs", "module states [C++], regular MFC DLLs dynamically linked to", "DLLs [C++], module states"]
ms.assetid: b4493e79-d25e-4b7f-a565-60de5b32c723
---
# Module States of a Regular MFC DLL Dynamically Linked to MFC

The ability to dynamically link a regular MFC DLL to the MFC DLL allows some configurations that are very complicated. For example, a regular MFC DLL and the executable that uses it can both dynamically link to the MFC DLL and to any MFC extension DLLs.

This configuration poses a problem with regard to the MFC global data, such as the pointer to the current `CWinApp` object and handle maps.

Before MFC version 4.0, this global data resided in the MFC DLL itself and was shared by all the modules in the process. Because each process using a Win32 DLL gets its own copy of the DLL's data, this scheme provided an easy way to track per-process data. Also, because the AFXDLL model presumed that there would be only one `CWinApp` object and only one set of handle maps in the process, these items could be tracked in the MFC DLL itself.

But with the ability to dynamically link a regular MFC DLL to the MFC DLL, it is now possible to have two or more `CWinApp` objects in a process — and also two or more sets of handle maps. How does MFC keep track of which ones it should be using?

The solution is to give each module (application or regular MFC DLL) its own copy of this global state information. Thus, a call to **AfxGetApp** in the regular MFC DLL returns a pointer to the `CWinApp` object in the DLL, not the one in the executable. This per-module copy of the MFC global data is known as a module state and is described in [MFC Tech Note 58](../mfc/tn058-mfc-module-state-implementation.md).

The MFC common window procedure automatically switches to the correct module state, so you do not need to worry about it in any message handlers implemented in your regular MFC DLL. But when your executable calls into the regular MFC DLL, you do need to explicitly set the current module state to the one for the DLL. To do this, use the **AFX_MANAGE_STATE** macro in every function exported from the DLL. This is done by adding the following line of code to the beginning of functions exported from the DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

## What do you want to know more about?

- [Managing the state data of MFC modules](../mfc/managing-the-state-data-of-mfc-modules.md)

- [Regular MFC DLLs dynamically linked to MFC](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC extension DLLs](extension-dlls-overview.md)

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
