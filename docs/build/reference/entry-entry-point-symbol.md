---
description: "Learn more about: /ENTRY (Entry-Point Symbol)"
title: "/ENTRY (Entry-Point Symbol)"
ms.date: "11/04/2016"
f1_keywords: ["/entry", "VC.Project.VCLinkerTool.EntryPointSymbol"]
helpviewer_keywords: ["starting address", "-ENTRY linker option", "/ENTRY linker option", "ENTRY linker option"]
ms.assetid: 26c62ba2-4f52-4882-a7bd-7046a0abf445
---
# /ENTRY (Entry-Point Symbol)

```
/ENTRY:function
```

## Arguments

*function*<br/>
A function that specifies a user-defined starting address for an .exe file or DLL.

## Remarks

The /ENTRY option specifies an entry point function as the starting address for an .exe file or DLL.

The function must be defined to use the **`__stdcall`** calling convention. The parameters and return value depend on if the program is a console application, a windows application or a DLL. It is recommended that you let the linker set the entry point so that the C run-time library is initialized correctly, and C++ constructors for static objects are executed.

By default, the starting address is a function name from the C run-time library. The linker selects it according to the attributes of the program, as shown in the following table.

|Function name|Default for|
|-------------------|-----------------|
|**mainCRTStartup** (or **wmainCRTStartup**)|An application that uses /SUBSYSTEM:CONSOLE; calls `main` (or `wmain`)|
|**WinMainCRTStartup** (or **wWinMainCRTStartup**)|An application that uses /SUBSYSTEM:**WINDOWS**; calls `WinMain` (or `wWinMain`), which must be defined to use **`__stdcall`**|
|**_DllMainCRTStartup**|A DLL; calls `DllMain` if it exists, which must be defined to use **`__stdcall`**|

If the [/DLL](dll-build-a-dll.md) or [/SUBSYSTEM](subsystem-specify-subsystem.md) option is not specified, the linker selects a subsystem and entry point depending on whether `main` or `WinMain` is defined.

The functions `main`, `WinMain`, and `DllMain` are the three forms of the user-defined entry point.

When creating a managed image, the function specified to /ENTRY must have a signature of (LPVOID *var1*, DWORD *var2*, LPVOID *var3*).

For information on how to define your own `DllMain` entry point, see [DLLs and Visual C++ run-time library behavior](../run-time-library-behavior.md) .

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Advanced** property page.

1. Modify the **Entry Point** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EntryPointSymbol%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
