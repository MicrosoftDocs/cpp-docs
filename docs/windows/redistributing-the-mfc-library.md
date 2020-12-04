---
description: "Learn more about: Redistributing the MFC Library"
title: "Redistributing the MFC Library"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, redistributing", "redistributing MFC library"]
ms.assetid: 72714ce1-385e-4c1c-afa5-96b03e873866
---
# Redistributing the MFC Library

If you dynamically link your application to the MFC library, you must redistribute the matching MFC DLL. For example, if your MFC app is built by using the version of MFC that ships with Visual Studio 2015, you must redistribute mfc140.dll or mfc140u.dll, depending on whether your app is compiled for narrow characters or Unicode support.

> [!NOTE]
> The mfc140.dll files were omitted from the redistributable files directory in Visual Studio 2015 RTM. You can use the versions installed by Visual Studio 2015 in the Windows\system32 and Windows\syswow64 directories instead.

Because all MFC DLLs use the shared version of the C runtime library (CRT), You may also need to redistribute the CRT. The version of MFC that ships with Visual Studio 2015 uses the universal CRT library, which is distributed as part of Windows 10. To run an MFC application built by using Visual Studio 2015 on earlier versions of Windows, you must redistribute the Universal CRT. For information on how to redistribute the universal CRT as an operating system component or by using local deployment, see [Introducing the Universal CRT](https://devblogs.microsoft.com/cppblog/introducing-the-universal-crt/). To download the universal CRT for central deployment on supported versions of Windows, see [Windows 10 Universal C Runtime](https://www.microsoft.com/download/details.aspx?id=48234). Redistributable architecture-specific versions of ucrtbase.dll for local deployment are found in the Windows SDK. By default, Visual Studio installs these in C:\Program Files (x86)\Windows Kits\10\Redist\ucrt\DLLs\ in an architecture-specific sub-directory.

If your app is built by using an earlier version of the MFC library, you must redistribute the matching CRT DLL from the redistributable files directory. For example, if your MFC application is built by using the Visual Studio 2013 (vc120) toolset, you must redistribute the msvcr120.dll. You also have to redistribute the matching mfc`<version>`u.dll or mfc`<version>`.dll.

If you statically link your application to MFC (that is, if you specify **Use MFC in a Static Library** on the **General** tab in the **Property Pages** dialog box), you do not have to redistribute an MFC DLL. However, although static linking may work for testing and internal deployment of applications, we recommend that you do not use it to redistribute MFC. For more information about the recommended strategies for deploying Visual C++ libraries, see [Choosing a Deployment Method](choosing-a-deployment-method.md).

If your application uses the MFC classes that implement the WebBrowser control (for example, [CHtmlView Class](../mfc/reference/chtmlview-class.md) or [CHtmlEditView Class](../mfc/reference/chtmleditview-class.md)), we recommend that you also install the most current version of Microsoft Internet Explorer so that the target computer will have the most current common control files. (At a minimum, Internet Explorer 4.0 is required.) Information about how to install Internet Explorer components is available in "Article 185375: How To Create a Single EXE Install of Internet Explorer" on the Microsoft Support website.

If your application uses the MFC database classes (for example, [CRecordset Class](../mfc/reference/crecordset-class.md) and [CRecordView Class](../mfc/reference/crecordview-class.md)), you must redistribute ODBC and any ODBC drivers that your application uses.

If your MFC application uses Windows Forms controls, you must redistribute mfcmifc80.dll with your application. This DLL is a strong-name-signed .NET assembly that can be redistributed with an application in its application local folder or by deploying it to the Global Assembly Cache (GAC) by using the [Gacutil.exe (Global Assembly Cache Tool)](/dotnet/framework/tools/gacutil-exe-gac-tool).

If you redistribute an MFC DLL, make sure to redistribute the retail version and not the debug version. Debug versions of the DLLs are not redistributable. The names of debug versions of the MFC DLLs end with a "d", for example, Mfc140d.dll.

You can redistribute MFC by using either VCRedist_*architecture*.exe, merge modules that are installed with Visual Studio, or by deploying the MFC DLL to the same folder as your application. For more information about how to redistribute MFC, see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md).

## Installation of Localized MFC Components

If you decide to localize your application by installing an MFC localization DLL, you must use the redistributable merge files (.msm). For example, if you want to localize your application on an x86 computer, you must merge Microsoft_VC`<version>`_MFCLOC_x86.msm into the installation package for an x86 computer.

The redistributable .msm files contain the DLLs that are used for localization. There is one DLL for each supported language. The installation process installs these DLLs in the %windir%\system32\ folder on the target computer.

For more information about how to localize MFC applications, see [TN057: Localization of MFC Components](../mfc/tn057-localization-of-mfc-components.md).

You can redistribute MFC localization DLLs by deploying the MFC DLL in your application local folder. For more information about how to redistribute Visual C++ libraries, see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md).

## See also

[Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)
