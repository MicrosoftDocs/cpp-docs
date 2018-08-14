---
title: "Creating a New Custom or Data Resource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.binary"]
dev_langs: ["C++"]
helpviewer_keywords: ["custom resources [C++]", "data resources [C++]", "resources [Visual Studio], creating"]
ms.assetid: 9918bf96-38fa-43a1-a384-572f95d84950
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Creating a New Custom or Data Resource
You can create a new custom or data resource by placing the resource in a separate file using normal resource script (.rc) file syntax, and then including that file by right-clicking your project in **Solution Explorer** and clicking **Resource Includes** on the shortcut menu.  
  
### To create a new custom or data resource  
  
1. [Create a .rc file](../windows/how-to-create-a-resource-script-file.md) that contains the custom or data resource.  
  
     You can type custom data in a .rc file as null-terminated quoted strings, or as integers in decimal, hexadecimal, or octal format.  
  
2.  In **Solution Explorer**, right-click your project's .rc file, then click **Resource Includes** on the shortcut menu.  
  
3.  In the **Compile-Time Directives** box, type a `#include` statement that gives the name of the file containing your custom resource. For example:  
  
 ```cpp  
    #include mydata.rc  
 ```  
  
     Make sure the syntax and spelling of what you type are correct. The contents of the **Compile-Time Directives** box are inserted into the resource script file exactly as you typed them.  
  
4.  Click **OK** to record your changes.  
  
 Another way to create a custom resource is to import an external file as the custom resource. For more information, see [Importing and Exporting Resources](../windows/how-to-import-and-export-resources.md).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [Binary Editor](binary-editor.md)