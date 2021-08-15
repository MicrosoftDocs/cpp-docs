---
description: "Learn more about: Exported DLL Function Entry Points"
title: "Exported DLL Function Entry Points"
ms.date: "11/04/2016"
helpviewer_keywords: ["exporting DLLs [MFC], functions", "MFC, managing state data", "state management [MFC], exported DLLs"]
ms.assetid: 3268666e-d24b-44f2-80e8-7c80f73b93ca
---
# Exported DLL Function Entry Points

For exported functions of a DLL, use the [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) macro to maintain the proper global state when switching from the DLL module to the calling application's DLL.

When called, this macro sets `pModuleState`, a pointer to an `AFX_MODULE_STATE` structure containing global data for the module, as the effective module state for the remainder of the containing scope of the function. Upon leaving the scope containing the macro, the previous effective module state is automatically restored.

This switching is achieved by constructing an instance of an `AFX_MODULE_STATE` class on the stack. In its constructor, this class obtains a pointer to the current module state and stores it in a member variable, and then sets `pModuleState` as the new effective module state. In its destructor, this class restores the pointer stored in its member variable as the effective module state.

If you have an exported function, such as one that launches a dialog box in your DLL, you need to add the following code to the beginning of the function:

[!code-cpp[NVC_MFCConnectionPoints#6](codesnippet/cpp/exported-dll-function-entry-points_1.cpp)]

This swaps the current module state with the state returned from [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) until the end of the current scope.

Problems with resources in DLLs will occur if the `AFX_MANAGE_STATE` macro is not used. By default, MFC uses the resource handle of the main application to load the resource template. This template is actually stored in the DLL. The root cause is that MFC's module state information has not been switched by the `AFX_MANAGE_STATE` macro. The resource handle is recovered from MFC's module state. Not switching the module state causes the wrong resource handle to be used.

`AFX_MANAGE_STATE` does not need to be put into every function in the DLL. For example, `InitInstance` can be called by the MFC code in the application without `AFX_MANAGE_STATE` because MFC automatically shifts the module state before `InitInstance` and then switches it back after `InitInstance` returns. The same is true for all message-map handlers. Regular MFC DLLs actually have a special master window procedure that automatically switches the module state before routing any message.

## See also

[Managing the State Data of MFC Modules](managing-the-state-data-of-mfc-modules.md)
