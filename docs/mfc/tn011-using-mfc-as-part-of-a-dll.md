---
description: "Learn more about: TN011: Using MFC as Part of a DLL"
title: "TN011: Using MFC as Part of a DLL"
ms.date: "11/04/2016"
helpviewer_keywords: ["_USRDLL symbol", "USRDLLs, compiler switches", "TN011", "DLLs [MFC], linking", "MFC DLLs [MFC], linking regular MFC DLLs to MFC"]
ms.assetid: 76753e9c-59dc-40f6-b6a7-f6bb9a7c4190
---
# TN011: Using MFC as Part of a DLL

This note describes regular MFC DLLs, which allow you to use the MFC library as part of a Windows dynamic-link library (DLL). It assumes that you are familiar with Windows DLLs and how to build them. For information about MFC extension DLLs, with which you can create extensions to the MFC library, see [DLL Version of MFC](../mfc/tn033-dll-version-of-mfc.md).

## DLL Interfaces

regular MFC DLLs assume interfaces between the application and the DLL are specified in C-like functions or explicitly exported classes. MFC class interfaces cannot be exported.

If both a DLL and an application want to use MFC, both have a choice to either use the shared version of the MFC libraries or to statically link to a copy of the libraries. The application and DLL may both use one of the standard versions of the MFC library.

regular MFC DLLs have several advantages:

- The application that uses the DLL does not have to use MFC and does not have to be a Visual C++ application.

- With regular MFC DLLs that statically link to MFC, the size of the DLL depends only on the MFC and C runtime routines that are used and linked.

- With regular MFC DLLs that dynamically link to MFC, the savings in memory from using the shared version of MFC can be significant. However, you must distribute the shared DLLs, Mfc\<*version*>.dll and Msvvcrt\<*version*>.dll, with your DLL.

- The DLL design is independent of how classes are implemented. Your DLL design exports only to the APIs you want. As a result, if the implementation changes, regular MFC DLLs are still valid.

- With regular MFC DLLs that statically link to MFC, if both DLL and application use MFC, there are no problems with the application that wants a different version of MFC than the DLL or vice versa. Because the MFC library is statically linked into each DLL or EXE, there is no question about which version you have.

## API Limitations

Some MFC functionality does not apply to the DLL version, either because of technical limitations or because those services are usually provided by the application. With the current version of MFC, the only function that is not applicable is `CWinApp::SetDialogBkColor`.

## Building Your DLL

When compiling regular MFC DLLs that statically link to MFC, the symbols `_USRDLL` and `_WINDLL` must be defined. Your DLL code must also be compiled with the following compiler switches:

- **/D_WINDLL** signifies the compilation is for a DLL

- **/D_USRDLL** specifies you are building a regular MFC DLL

You must also define these symbols and use these compiler switches when you compile regular MFC DLLs that dynamically link to MFC. Additionally, the symbol `_AFXDLL` must be defined and your DLL code must be compiled with:

- **/D_AFXDLL** specifies that you are building a regular MFC DLL that dynamically links to MFC

The interfaces (APIs) between the application and the DLL must be explicitly exported. We recommend that you define your interfaces to be low bandwidth, and use only C interfaces if you can. Direct C interfaces are easier to maintain than more complex C++ classes.

Place your APIs in a separate header that can be included by both C and C++ files. See the header ScreenCap.h in the MFC Advanced Concepts sample [DLLScreenCap](../overview/visual-cpp-samples.md) for an example. To export your functions, enter them in the `EXPORTS` section of your module definition file (.DEF) or include `__declspec(dllexport)` on your function definitions. Use `__declspec(dllimport)` to import these functions into the client executable.

You must add the AFX_MANAGE_STATE macro at the beginning of all the exported functions in regular MFC DLLs that dynamically link to MFC. This macro sets the current module state to the one for the DLL. To use this macro, add the following line of code to the beginning of functions exported from the DLL:

`AFX_MANAGE_STATE(AfxGetStaticModuleState( ))`

## WinMain -> DllMain

The MFC library defines the standard Win32 `DllMain` entry point that initializes your [CWinApp](../mfc/reference/cwinapp-class.md) derived object as in a typical MFC application. Place all DLL-specific initialization in the [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) method as in a typical MFC application.

Note that the [CWinApp::Run](../mfc/reference/cwinapp-class.md#run) mechanism does not apply to a DLL, because the application owns the main message pump. If your DLL displays modeless dialogs or has a main frame window of its own, your application's main message pump must call a DLL-exported routine that calls [CWinApp::PreTranslateMessage](../mfc/reference/cwinapp-class.md#pretranslatemessage).

See the DLLScreenCap sample for use of this function.

The `DllMain` function that MFC provides will call the [CWinApp::ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) method of your class that is derived from `CWinApp` before the DLL is unloaded.

## Linking Your DLL

With regular MFC DLLs that statically link to MFC, you must link your DLL with Nafxcwd.lib or Nafxcw.lib and with the version of the C runtimes named Libcmt.lib. These libraries are pre-built and may be installed by specifying them when you run Visual C++ setup.

## Sample Code

See the MFC Advanced Concepts sample program DLLScreenCap for a complete sample. Several interesting things to note in this sample are as follows:

- The compiler flags of the DLL and those of the application are different.

- The link lines and .DEF files for the DLL and those for the application are different.

- The application that uses the DLL does not have to be in C++.

- The interface between the application and the DLL is an API that is usable by C or C++ and is exported with DLLScreenCap.def.

The following example illustrates an API that is defined in a regular MFC DLL that statically links to MFC. In this example, the declaration is enclosed in an `extern "C" { }` block for C++ users. This has several advantages. First, it makes your DLL APIs usable by non-C++ client applications. Second, it reduces DLL overhead because C++ name mangling will not be applied to the exported name. Lastly, it makes it easier to explicitly add to a .DEF file (for exporting by ordinal) without having to worry about name mangling.

```cpp
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

struct TracerData
{
    BOOL bEnabled;
    UINT flags;
};

BOOL PromptTraceFlags(TracerData FAR* lpData);

#ifdef __cplusplus
}
#endif
```

The structures used by the API are not derived from MFC classes and are defined in the API header. This reduces the complexity of the interface between the DLL and the application and makes the DLL usable by C programs.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
