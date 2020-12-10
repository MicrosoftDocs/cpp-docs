---
description: "Learn more about: Redistributing Visual C++ ActiveX Controls"
title: "Redistributing Visual C++ ActiveX Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["controls [C++], redistributing", "controls [C++], distributing"]
ms.assetid: eefbb7e4-d28c-4c35-98bf-d9540cfaae83
---
# Redistributing Visual C++ ActiveX Controls

Visual C++ 6.0 supplies ActiveX controls you can use in applications that you then redistribute. These controls are no longer included in Visual C++. Per the licensing agreements for Visual C++ 6.0, you can redistribute these controls with applications developed in Visual C++.

> [!NOTE]
> Visual C++ 6.0 is no longer supported by Microsoft.

For a list of the redistributable Visual C++ 6.0 ActiveX controls, see Common\Redist\Redist.txt on Disc 1 of the Visual C++ 6.0 product CD.

When distributing applications, you must install and register the .ocx for the ActiveX control (using Regsvr32.exe). In addition, you should make sure the target computer has current versions of the following system files (an asterisk indicates the file needs to be registered):

- Asycfilt.dll

- Comcat.dll \*

- Oleaut32.dll \*

- Olepro32.dll \*

- Stdole2.tlb

If these DLLs are not available on the target system, you need to get them updated using the prescribed mechanism for updating the corresponding operating system. You can download the latest service packs for Windows operating systems from [http://windowsupdate.microsoft.com](https://windowsupdate.microsoft.com).

When using an ActiveX control that connects to a database, you also need to replicate the data source name on the target computer. You can do this programmatically with functions such as `ConfigDSN`.

Some redistributable ActiveX controls have additional dependencies. For each .ocx file in the Os\System folder on the Visual C++ 6.0 product CD, there is also a .dep file. For each .ocx file that you want to redistribute, look for one or more USES entries in the corresponding .dep file. If a file is listed, you must ensure that the file is on the target computer. Any DLLs directly supporting an .ocx file need to be registered. (For Regsvr32.exe to succeed, the target computer must first contain all of the DLLs the control statically loads.) Furthermore, if a DLL that is listed as a dependency also has a .dep file in the Os\System folder on the Visual C++ 6.0 CD, you must also investigate that .dep file for USES entries.

## See also

[Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)
