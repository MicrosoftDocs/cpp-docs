---
title: "Adding Version Information for Another Language | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.version"]
dev_langs: ["C++"]
helpviewer_keywords: ["languages, version information", "New Version Info Block", "blocks, adding", "resources [Visual Studio], adding version information", "version information, adding for languages"]
ms.assetid: 17f6273c-e1cc-441a-a3d8-f564341cbf20
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Adding Version Information for Another Language
### To add version information for another language (new info block)  
  
1.  Open a version information resource by double-clicking it in [Resource View](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Right-click within the version information table and choose **New Version Info Block** from the shortcut menu.  
  
     This command adds an additional information block to the current version information resource and opens its corresponding properties in the [Properties window](/visualstudio/ide/reference/properties-window).  
  
3.  In the **Properties** window, choose the appropriate language and character set for your new block.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Version Information Editor](../windows/version-information-editor.md)   
 [Version Information (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)

