---
title: "Manifest Resources | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["manifest resources", "resources [Visual Studio], manifest"]
ms.assetid: 8615334c-22a0-44c0-93e0-5924528c9917
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Manifest Resources
Manifest resources are XML files that describe the dependencies that an application uses. For example, in Visual Studio, the MFC wizard-generated manifest file defines which of the Windows common control DLLs the application should use, version 5.0 or 6.0:  
  
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
  
 For a Windows XP or Windows Vista application, the manifest resource not only specifies that the application use the most current version of the Windows common controls (v6.0, as seen above) but it also supports the [Syslink control](http://msdn.microsoft.com/library/windows/desktop/bb760706).  
  
 To view the version and type information contained in a manifest resource, you can open the file in an XML viewer or in the Visual Studio [Text Editor](http://msdn.microsoft.com/508e1f18-99d5-48ad-b5ad-d011b21c6ab1). For more information, see [Opening a manifest resource in the Visual Studio Text Editor](../windows/how-to-open-a-manifest-resource.md).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see  [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Limitations  
 You can only have one manifest resource per module.  
  
## Requirements  
 Win32  
  
## See Also  
 [Controls](../mfc/controls-mfc.md)   
 [Working with Resource Files](../windows/working-with-resource-files.md)