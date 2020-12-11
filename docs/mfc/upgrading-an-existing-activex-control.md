---
description: "Learn more about: Upgrading an Existing ActiveX Control"
title: "Upgrading an Existing ActiveX Control"
ms.date: "09/12/2018"
helpviewer_keywords: ["ActiveX controls [MFC], Internet", "LPK files for Internet controls", "safe for scripting and initialization (controls)", "OLE controls [MFC], upgrading to ActiveX", "CAB files, for ActiveX controls", "Internet applications [MFC], ActiveX controls", "Internet applications [MFC], packaging code for download", "upgrading ActiveX controls", "licensing ActiveX controls"]
ms.assetid: 4d12ddfa-b491-4f9f-a0b7-b51458e05651
---
# Upgrading an Existing ActiveX Control

Existing ActiveX controls (formerly OLE controls) can be used on the Internet without modification. However, you may want to modify controls to improve their performance.

> [!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

When using your control on a Web page, there are additional considerations. The .ocx file and all supporting files must be on the target machine or be downloaded across the Internet. This makes code size and download time an important consideration. Downloads can be packaged in a signed .cab file. You can mark your control as safe for scripting, and as safe for initializing.

This article discusses the following topics:

- [Packaging Code for Downloading](#_core_packaging_code_for_downloading)

- [Marking a Control Safe for Scripting and Initializing](#_core_marking_a_control_safe_for_scripting_and_initializing)

- [Licensing Issues](#_core_licensing_issues)

- [Signing Code](#_core_signing_code)

- [Managing the Palette](#_core_managing_the_palette)

- [Internet Explorer Browser Safety Levels and Control Behavior](#_core_internet_explorer_browser_safety_levels_and_control_behavior)

You can also add optimizations, as described in [ActiveX Controls: Optimization](../mfc/mfc-activex-controls-optimization.md). Monikers can be used to download properties and large BLOBs asynchronously, as described in [ActiveX Controls on the Internet](../mfc/activex-controls-on-the-internet.md).

## <a name="_core_packaging_code_for_downloading"></a> Packaging Code for Downloading

For more information on this subject, see [Packaging ActiveX Controls](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa751974%28v%3dvs.85%29).

### The CODEBASE Tag

ActiveX controls are embedded in Web pages using the `<OBJECT>` tag. The `CODEBASE` parameter of the `<OBJECT>` tag specifies the location from which to download the control. `CODEBASE` can point at a number of different file types successfully.

### Using the CODEBASE Tag with an OCX File

```
CODEBASE="http://example.microsoft.com/mycontrol.ocx#version=4,
    70,
    0,
    1086"
```

This solution downloads only the control's .ocx file, and requires any supporting DLLs to already be installed on the client machine. This will work for Internet Explorer and MFC ActiveX controls built with Visual C++, because Internet Explorer ships with the supporting DLLs for Visual C++ controls. If another Internet browser that is ActiveX control-capable is used to view this control, this solution will not work.

### Using the CODEBASE Tag with an INF File

```
CODEBASE="http://example.microsoft.com/trustme.inf"
```

An .inf file will control the installation of an .ocx and its supporting files. This method is not recommended because it is not possible to sign an .inf file (see [Signing Code](#_core_signing_code) for pointers on code signing).

### Using the CODEBASE Tag with a CAB File

```
CODEBASE="http://example.microsoft.com/acontrol.cab#version=1,
    2,
    0,
    0"
```

Cabinet files are the recommended way to package ActiveX controls that use MFC. Packaging an MFC ActiveX control in a cabinet file allows an .inf file to be included to control installation of the ActiveX control and any dependent DLLs (such as the MFC DLLs). Using a CAB file automatically compresses the code for quicker download. If you are using a .cab file for component download, it is faster to sign the entire .cab file than each individual component.

### Creating CAB Files

Tools to create cabinet files are now part of the [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk).

The cabinet file pointed to by `CODEBASE` should contain the .ocx file for your ActiveX control and an .inf file to control its installation. You create the cabinet file by specifying the name of your control file and an .inf file. Do not include dependent DLLs that may already exist on the system in this cabinet file. For example, the MFC DLLs are packaged in a separate cabinet file and referred to by the controlling .inf file.

For details on how to create a CAB file, see [Creating a CAB File](/windows/win32/devnotes/cabinet-api-functions).

### The INF File

The following example, spindial.inf, lists the supporting files and the version information needed for the MFC Spindial control. Notice the location for the MFC DLLs is a Microsoft Web site. The mfc42.cab is provided and signed by Microsoft.

```
Contents of spindial.inf:
[mfc42installer]
file-win32-x86=http://activex.microsoft.com/controls/vc/mfc42.cab
[Olepro32.dll] - FileVersion=5,
    0,
    4261,
    0
[Mfc42.dll] - FileVersion=6,
    0,
    8168,
    0
[Msvcrt.dll] - FileVersion=6,
    0,
    8168,
    0
```

### The \<OBJECT> Tag

The following example illustrates using the `<OBJECT>` tag to package the MFC Spindial sample control.

```
<OBJECT ID="Spindial1" WIDTH=100 HEIGHT=51
    CLASSID="CLSID:06889605-B8D0-101A-91F1-00608CEAD5B3"
    CODEBASE="http://example.microsoft.com/spindial.cab#Version=1,0,0,001">
<PARAM NAME="_Version" VALUE="65536">
<PARAM NAME="_ExtentX" VALUE="2646">
<PARAM NAME="_ExtentY" VALUE="1323">
<PARAM NAME="_StockProps" VALUE="0">
<PARAM NAME="NeedlePosition" VALUE="2">
</OBJECT>
```

In this case, spindial.cab will contain two files, spindial.ocx and spindial.inf. The following command will build the cabinet file:

```
C:\CabDevKit\cabarc.exe -s 6144 N spindial.cab spindial.ocx spindial.inf
```

The `-s 6144` parameter reserves space in the cabinet for code signing.

### The Version Tag

Note here that the `#Version` information specified with a CAB file applies to the control specified by the *CLASSID* parameter of the `<OBJECT>` tag.

Depending on the version specified, you can force download of your control. For complete specifications of the `OBJECT` tag including the *CODEBASE* parameter, see the W3C reference.

## <a name="_core_marking_a_control_safe_for_scripting_and_initializing"></a> Marking a Control Safe for Scripting and Initializing

ActiveX controls used in Web pages should be marked as safe for scripting and safe for initializing if they are in fact safe. A safe control will not perform disk IO or access the memory or registers of a machine directly.

Controls can be marked as safe for scripting and safe for initializing via the registry. Modify `DllRegisterServer` to add entries similar to the following to mark the control as safe for scripting and persistence in the registry. An alternative method is to implement `IObjectSafety`.

You will define GUIDs (Globally Unique Identifiers) for your control to mark it safe for scripting and for persistence. Controls that can be safely scripted will contain a registry entry similar to the following:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
```

Controls that can be safely initialized from persistent data are marked safe for persistence with a registry entry similar to:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

Add entries similar to the following (substituting your control's class ID in place of `{06889605-B8D0-101A-91F1-00608CEAD5B3}`) to associate your keys with the following class ID:

```
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

## <a name="_core_licensing_issues"></a> Licensing Issues

If you want to use a licensed control on a Web page, you must verify that the license agreement allows its use on the Internet and create a license package file (LPK) for it.

A licensed ActiveX control will not load properly in an HTML page if the computer running Internet Explorer is not licensed to use the control. For example, if a licensed control was built using Visual C++, the HTML page using the control will load properly on the computer where the control was built, but it will not load on a different computer unless licensing information is included.

To use a licensed ActiveX control in Internet Explorer, you must check the vendor's license agreement to verify that the license for the control permits:

- Redistribution

- Use of the control on the Internet

- Use of the Codebase parameter

To use a licensed control in an HTML page on a nonlicensed machine, you must generate a license package file (LPK). The LPK file contains run-time licenses for licensed controls in the HTML page. This file is generated via LPK_TOOL.EXE which comes with the ActiveX SDK.

#### To create an LPK file

1. Run LPK_TOOL.EXE on a computer that is licensed to use the control.

1. In the **License Package Authoring Tool** dialog box, in the **Available Controls** list box, select each licensed ActiveX control that will be used on the HTML page and click **Add**.

1. Click **Save & Exit** and type a name for the LPK file. This will create the LPK file and close the application.

#### To embed a licensed control on an HTML page

1. Edit your HTML page. In the HTML page, insert an \<OBJECT> tag for the License Manager object before any other \<OBJECT> tags. The License Manager is an ActiveX control that is installed with Internet Explorer. Its class ID is shown below. Set the LPKPath property of the License Manager object to the path and name of the LPK file. You can have only one LPK file per HTML page.

```
<OBJECT CLASSID = "clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="relative URL to .LPK file">
</OBJECT>
```

1. Insert the \<OBJECT> tag for your licensed control after the License Manager tag.

   For example, an HTML page that displays the Microsoft Masked Edit control is shown below. The first class ID is for the License Manager control, the second class ID is for the Masked Edit control. Change the tags to point to the relative path of the .lpk file you created earlier, and add an object tag including the class ID for your control.

1. Insert the \<EMBED> attribute for your LPK file, if using the NCompass ActiveX plug-in.

   If your control may be viewed on other Active enabled browsers — for example, Netscape using the NCompass ActiveX plug-in — you must add the \<EMBED> syntax as shown below.

```
<OBJECT CLASSID="clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="maskedit.lpk">

<EMBED SRC = "maskedit.LPK">

</OBJECT>
<OBJECT CLASSID="clsid:C932BA85-4374-101B-A56C-00AA003668DC" WIDTH=100 HEIGHT=25>
</OBJECT>
```

For more information about control licensing, see [ActiveX Controls: Licensing an ActiveX Control](../mfc/mfc-activex-controls-licensing-an-activex-control.md).

## <a name="_core_signing_code"></a> Signing Code

Code signing is designed to identify the source of code, and to guarantee that the code has not changed since it was signed. Depending on browser safety settings, users may be warned before the code is downloaded. Users may choose to trust certain certificate owners or companies, in which case code signed by those trusted will be downloaded without warning. Code is digitally signed to avoid tampering.

Make sure your final code is signed so that your control can be automatically downloaded without displaying trust warning messages. For details on how to sign code, check the documentation on Authenticode in the ActiveX SDK and see [Signing a CAB File](/windows/win32/devnotes/cabinet-api-functions).

Depending on trust and browser safety level settings, a certificate may be displayed to identify the signing person or company. If the safety level is none, or if the signed control's certificate owner is trusted, a certificate will not be displayed. See [Internet Explorer Browser Safety Levels and Control Behavior](#_core_internet_explorer_browser_safety_levels_and_control_behavior) for details on how the browser safety setting will determine whether your control is downloaded and a certificate displayed.

Digital signing guarantees code has not changed since it's been signed. A hash of the code is taken and embedded in the certificate. This hash is later compared with a hash of the code taken after the code is downloaded but before it runs. Companies such as Verisign can supply private and public keys needed to sign code. The ActiveX SDK ships with MakeCert, a utility for creating test certificates.

## <a name="_core_managing_the_palette"></a> Managing the Palette

Containers determine the palette and make it available as an ambient property, **DISPID_AMBIENT_PALETTE**. A container (for example, Internet Explorer) chooses a palette that is used by all ActiveX controls on a page to determine their own palette. This prevents display flickering and presents a consistent appearance.

A control can override `OnAmbientPropertyChange` to handle notification of changes to the palette.

A control can override `OnGetColorSet` to return a color set to draw the palette. Containers use the return value to determine if a control is palette-aware.

Under OCX 96 guidelines, a control must always realize its palette in the background.

Older containers that do not use the ambient palette property will send WM_QUERYNEWPALETTE and WM_PALETTECHANGED messages. A control can override `OnQueryNewPalette` and `OnPaletteChanged` to handle these messages.

## <a name="_core_internet_explorer_browser_safety_levels_and_control_behavior"></a> Internet Explorer Browser Safety Levels and Control Behavior

A browser has options for safety level, configurable by the user. Because Web pages can contain active content that might potentially harm a user's computer, browsers allow the user to select options for safety level. Depending on the way a browser implements safety levels, a control may not be downloaded at all, or will display a certificate or a warning message to allow the user to choose at run time whether or not to download the control. The behavior of ActiveX controls under high, medium, and low safety levels on Internet Explorer is listed below.

### High Safety Mode

- Unsigned controls will not be downloaded.

- Signed controls will display a certificate if untrusted (a user can choose an option to always trust code from this certificate owner from now on).

- Only controls marked as safe will have persistent data and/or be scriptable.

### Medium Safety Mode

- Unsigned controls will display a warning before downloading.

- Signed controls will display a certificate if untrusted.

- Controls not marked as safe will display a warning.

### Low Safety Mode

- Controls are downloaded without warning.

- Scripting and persistence occur without warning.

## See also

[MFC Internet Programming Tasks](../mfc/mfc-internet-programming-tasks.md)<br/>
[MFC Internet Programming Basics](../mfc/mfc-internet-programming-basics.md)<br/>
[MFC ActiveX Controls: Licensing an ActiveX Control](../mfc/mfc-activex-controls-licensing-an-activex-control.md)
