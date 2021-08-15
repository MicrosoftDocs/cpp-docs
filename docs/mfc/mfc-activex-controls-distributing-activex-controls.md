---
description: "Learn more about: MFC ActiveX Controls: Distributing ActiveX Controls"
title: "MFC ActiveX Controls: Distributing ActiveX Controls"
ms.date: "09/12/2018"
f1_keywords: ["GetWindowsDirectory", "GetSystemDirectory"]
helpviewer_keywords: ["MFC ActiveX controls [MFC], ANSI or Unicode versions", "RegSvr32.exe", "MFC ActiveX controls [MFC], distributing", "distributing MFC ActiveX controls", "redistributable files, MFC ActiveX controls", "GetSystemDirectory method [MFC]", "registering ActiveX controls", "MSVCRT40.dll", "registry [MFC], registering controls", "LoadLibrary method, registering ActiveX controls", "MFC40U.DLL", "MFC40.DLL", "GetWindowsDirectory method [MFC]", "installing ActiveX controls", "GetProcAddress method, registering ActiveX controls", "MFC ActiveX controls [MFC], installing", "MFC ActiveX controls [MFC], registering", "registering controls", "OLEPRO32.DLL"]
ms.assetid: cd70ac9b-f613-4879-9e81-6381fdfda2a1
---
# MFC ActiveX Controls: Distributing ActiveX Controls

This article discusses several issues related to redistributing ActiveX controls:

- [ANSI or Unicode Control Versions](#_core_ansi_or_unicode_control_versions)

- [Installing ActiveX Controls and Redistributable DLLs](#_core_installing_activex_controls_and_redistributable_dlls)

- [Registering Controls](#_core_registering_controls)

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

## <a name="_core_ansi_or_unicode_control_versions"></a> ANSI or Unicode Control Versions

You must decide whether to ship an ANSI or Unicode version of the control, or both. This decision is based on portability factors inherent in ANSI and Unicode character sets.

ANSI controls, which work on all Win32 operating systems, allow for maximum portability between the various Win32 operating systems. Unicode controls work on only Windows NT (version 3.51 or later), but not on Windows 95 or Windows 98. If portability is your primary concern, ship ANSI controls. If your controls will run only on Windows NT, you can ship Unicode controls. You could also choose to ship both and have your application install the version most appropriate for the user's operating system.

## <a name="_core_installing_activex_controls_and_redistributable_dlls"></a> Installing ActiveX Controls and Redistributable DLLs

The setup program you provide with your ActiveX controls should create a special subdirectory of the Windows directory and install the controls' .OCX files in it.

> [!NOTE]
> Use the Windows `GetWindowsDirectory` API in your setup program to obtain the name of the Windows directory. You may want to derive the subdirectory name from the name of your company or product.

The setup program must install the necessary redistributable DLL files in the Windows system directory. If any of the DLLs are already present on the user's machine, the setup program should compare their versions with the versions you are installing. Reinstall a file only if its version number is higher than the file already installed.

Because ActiveX controls can be used only in OLE container applications, there is no need to distribute the full set of OLE DLLs with your controls. You can assume that the containing application (or the operating system itself) has the standard OLE DLLs installed.

## <a name="_core_registering_controls"></a> Registering Controls

Before a control can be used, appropriate entries must be created for it in the Windows registration database. Some ActiveX control containers provide a menu item for users to register new controls, but this feature may not be available in all containers. Therefore, you may want your setup program to register the controls when they are installed.

If you prefer, you can write your setup program to register the control directly instead.

Use the `LoadLibrary` Windows API to load the control DLL. Next, use `GetProcAddress` to obtain the address of the "DllRegisterServer" function. Finally, call the `DllRegisterServer` function. The following code sample demonstrates one possible method, where `hLib` stores the handle of the control library, and `lpDllEntryPoint` stores the address of the "DllRegisterServer" function.

[!code-cpp[NVC_MFC_AxCont#16](codesnippet/cpp/mfc-activex-controls-distributing-activex-controls_1.cpp)]

The advantage of registering the control directly is that you do not need to invoke and load a separate process (namely, REGSVR32), reducing installation time. In addition, because registration is an internal process, the setup program can handle errors and unforeseen situations better than an external process can.

> [!NOTE]
> Before your setup program installs an ActiveX control, it should call `OleInitialize`. When your setup program is finished, call `OleUnitialize`. This ensures that the OLE system DLLs are in the proper state for registering an ActiveX control.

You should register MFCx0.DLL.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
