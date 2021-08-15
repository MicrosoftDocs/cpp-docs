---
description: "Learn more about: MFC Library Versions"
title: "MFC Library Versions"
ms.date: "05/08/2019"
helpviewer_keywords: ["class libraries [MFC], building versions", "version information [MFC], MFC library", "MFC class library", "MFC class library, building", "MFC libraries", "MFC, library versions", "libraries [MFC], versions"]
---
# MFC Library Versions

The MFC Library is available in versions that support ANSI single-byte and multibyte character set (MBCS) code, as well as versions that support Unicode (encoded as UTF-16LE, the Windows-native character set). Each MFC version is available as a static library or as a shared DLL. There is also a smaller MFC static library version that leaves out MFC controls for dialogs, for applications that are very sensitive to size and don't need those controls. The MFC libraries are available in both debug and release versions for supported architectures that include x86, x64, and ARM processors. You can create both applications (.exe files) and DLLs with any version of the MFC libraries. There is also a set of MFC libraries compiled for interfacing with managed code. The MFC shared DLLs include a version number to indicate library binary compatibility.

## Automatic linking of MFC library versions

The MFC header files automatically determine the correct version of the MFC library to link, based on values defined in your build environment. The MFC header files add compiler directives instructing the linker to link in a specific version of the MFC library.

For example, the AFX.H header file instructs the linker to link in the full static, limited static, or shared DLL version of MFC; ANSI/MBCS or Unicode version; and debug or retail version, depending on your build configuration:

```cpp
#ifndef _AFXDLL
    #ifdef _AFX_NO_MFC_CONTROLS_IN_DIALOGS
        #ifdef _DEBUG
            #pragma comment(lib, "afxnmcdd.lib")
        #else
            #pragma comment(lib, "afxnmcd.lib")
        #endif
        #pragma comment(linker, "/include:__afxNoMFCControlSupportInDialogs")
        #pragma comment(linker, "/include:__afxNoMFCControlContainerInDialogs")
    #endif
    #ifndef _UNICODE
        #ifdef _DEBUG
            #pragma comment(lib, "nafxcwd.lib")
        #else
            #pragma comment(lib, "nafxcw.lib")
        #endif
    #else
        #ifdef _DEBUG
            #pragma comment(lib, "uafxcwd.lib")
        #else
            #pragma comment(lib, "uafxcw.lib")
        #endif
    #endif
#else
    #ifndef _UNICODE
        #ifdef _DEBUG
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER "d.lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER "d.lib")
        #else
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER ".lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER ".lib")
        #endif
    #else
        #ifdef _DEBUG
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER "ud.lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER "ud.lib")
        #else
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER "u.lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER "u.lib")
        #endif
    #endif
#endif
```

MFC header files also include directives to link in all required libraries, including MFC libraries, Win32 libraries, OLE libraries, OLE libraries built from samples, ODBC libraries, and so on.

## ANSI, MBCS, and Unicode

The MFC ANSI/MBCS library versions support both single-byte character sets such as ASCII, and multibyte character sets such as Shift-JIS. The MFC Unicode library versions support Unicode in its UTF-16LE wide-character encoded form. Use the ANSI/MBCS library versions of MFC for UTF-8 encoded Unicode support.

To set your project configuration to use single-byte, multibyte, or wide-character Unicode string and character support in the IDE, use the **Project Properties** dialog. In the **Configuration Properties** > **General** page, set the **Character Set** property to **Not Set** to use a single-byte character set. Set the property to **Use Multi-Byte Character Set** to use a multibyte character set, or to **Use Unicode Character Set** to use Unicode encoded as UTF-16.

MFC projects use the preprocessor symbol \_UNICODE to indicate UTF-16 wide-character Unicode support, and \_MBCS to indicate MBCS support. These options are mutually exclusive in a project.

## MFC static library naming conventions

Static libraries for MFC use the following naming conventions. The library names have the form

> <em>u</em>AFX<em>cd</em>.LIB

where the letters shown in italic lowercase are placeholders for specifiers whose meanings are shown in the following table:

|Specifier|Values and meanings|
|---------------|-------------------------|
|*u*|ANSI/MBCS (N) or Unicode (U); omit for version without MFC controls in dialogs|
|*c*|Version with MFC controls in dialogs (CW) or without (NMCD)|
|*d*|Debug or Release: D=Debug; omit specifier for Release|

All libraries listed in the following table are included prebuilt in the \atlmfc\lib directory for supported build architectures.

|Library|Description|
|-------------|-----------------|
|NAFXCW.LIB|MFC Static-Link Library, Release version|
|NAFXCWD.LIB|MFC Static-Link Library, Debug version|
|UAFXCW.LIB|MFC Static-Link Library with Unicode support, Release version|
|UAFXCWD.LIB|MFC Static-Link Library with Unicode support, Debug version|
|AFXNMCD.LIB|MFC Static-Link Library without MFC dialog controls, Release version|
|AFXNMCDD.LIB|MFC Static-Link Library without MFC dialog controls, Debug version|

Debugger files that have the same base name and a .pdb extension are also available for each of the static libraries.

## MFC shared DLL naming conventions

The MFC shared DLLs also follow a structured naming convention. This makes it easier to know which DLL or library you should be using for which purpose.

The MFC DLLs have *version* numbers that indicate binary compatibility. Use MFC DLLs that have the same version as your other libraries and compiler toolset to guarantee compatibility within a project.

|DLL|Description|
|---------|-----------------|
|MFC*version*.DLL|MFC DLL, ANSI or MBCS Release version|
|MFC*version*U.DLL|MFC DLL, Unicode Release version|
|MFC*version*D.DLL|MFC DLL, ANSI or MBCS Debug version|
|MFC*version*UD.DLL|MFC DLL, Unicode Debug version|
|MFCM*version*.DLL|MFC DLL with Windows Forms controls, ANSI or MBCS Release version|
|MFCM*version*U.DLL|MFC DLL with Windows Forms controls, Unicode Release version|
|MFCM*version*D.DLL|MFC DLL with Windows Forms controls, ANSI or MBCS Debug version|
|MFCM*version*UD.DLL|MFC DLL with Windows Forms controls, Unicode Debug version|

The import libraries needed to build applications or MFC extension DLLs that use these shared DLLs have the same base name as the DLL but have a .lib file name extension. When you use the shared DLLs, a small static library must still be linked with your code; this library is named MFCS*version*{U}{D}.lib.

If you are dynamically linking to the shared DLL version of MFC, whether it is from an application or from an MFC extension DLL, you must include the matching MFC*version*.DLL or MFC*version*U.DLL when you deploy your product.

For a list of Visual C++ DLLs that can be distributed with your applications, see [Distributable Code for Microsoft Visual Studio 2017 and Microsoft Visual Studio 2017 SDK (Includes Utilities and BuildServer Files)](/visualstudio/productinfo/2017-redistribution-vs) or [Distributable Code for Visual Studio 2019](/visualstudio/releases/2019/redistribution).

For more information on MBCS and Unicode support in MFC, see [Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## Dynamic-link library support

You can use either the static or shared dynamic MFC libraries to create DLLs that can be used by both MFC and non-MFC executables. These are called "regular DLLs" or "regular MFC DLLs", to distinguish them from MFC extension DLLs that can only be used by MFC apps and MFC DLLs. A DLL built by using the MFC static libraries is sometimes called a USRDLL in older references, because MFC DLL projects define the preprocessor symbol **\_USRDLL**. A DLL that uses the MFC shared DLLs is sometimes called an AFXDLL in older references, because it defines the preprocessor symbol **\_AFXDLL**.

When you create your DLL project by linking to the MFC static libraries, your DLL can be deployed without the MFC shared DLLs. When your DLL project links to the import libraries MFC*version*.LIB or MFC*version*U.LIB, you must deploy the matching MFC shared DLL MFC*version*.DLL or MFC*version*U.DLL together with your DLL. For more information, see [DLLs](../build/dlls-in-visual-cpp.md).

## See also

[General MFC Topics](general-mfc-topics.md)
