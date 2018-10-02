---
title: "Manifest Resources (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["manifest resources [C++]", "resources [C++], manifest"]
ms.assetid: 8615334c-22a0-44c0-93e0-5924528c9917
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Manifest Resources (C++)

In C++ desktop projects, manifest resources are XML files that describe the dependencies that an application uses. For example, in Visual Studio, the MFC wizard-generated manifest file defines which of the Windows common control DLLs the application should use, version 5.0 or 6.0:

```xml
<description>Your app description here</description>
<dependency>
    <dependentAssembly>
        <assemblyIdentity
            type="win32"
            name="Microsoft.Windows.Common-Controls"
            version="6.0.0.0"
            processorArchitecture="X86"
            publicKeyToken="6595b64144ccf1df"
            language="*"
        />
    </dependentAssembly>
</dependency>
```

For a Windows XP or Windows Vista application, the manifest resource not only specifies that the application use the most current version of the Windows common controls (v6.0, as seen above) but it also supports the [Syslink control](/windows/desktop/Controls/syslink-overview).

To view the version and type information contained in a manifest resource, you can open the file in an XML viewer or in the Visual Studio text editor. For more information, see [Opening a manifest resource in the Visual Studio Text Editor](../windows/how-to-open-a-manifest-resource.md).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

## Limitations

You can only have one manifest resource per module.

## Requirements

Win32

## See Also

[Controls](../mfc/controls-mfc.md)<br/>
[Working with Resource Files](../windows/working-with-resource-files.md)