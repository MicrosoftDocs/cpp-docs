---
title: "Resource Editors (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vs.editors.resource", "vc.resvw.resource.editors", "vs.resvw.resource.editors"]
dev_langs: ["C++"]
helpviewer_keywords: ["editors [C++], resource", "editors [C++]", "resource editors", "Windows [C++], application resource editing"]
ms.assetid: e20a29ec-d6fb-4ead-98f3-431a0e23aaaf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Resource Editors

A **Resource** editor is a specialized environment for creating or modifying resources that are included in a Visual Studio project. The Visual Studio resource editors share techniques and interfaces to help you create and modify application resources quickly and easily. Resource editors enable you to [view and edit resources in the appropriate editor](../windows/viewing-and-editing-resources-in-a-resource-editor.md) and [preview resources](../windows/previewing-resources.md).

The appropriate editor opens automatically when you create or open a resource.

**Note** Because managed projects do not use resource script files, you must open your resources from **Solution Explorer**. You can use the [Image editor](../windows/image-editor-for-icons.md) and the [Binary editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

|Use the...|To edit...|
|----------------|----------------|
|[Accelerator Editor](../windows/accelerator-editor.md)|Accelerator tables in Visual C++ projects.|
|[Binary Editor](binary-editor.md)|Binary data information and custom resources in Visual C++, Visual Basic, or Visual C# projects.|
|[Dialog Editor](../windows/dialog-editor.md)|Dialog boxes in Visual C++ projects.|
|[Image Editor](../windows/image-editor-for-icons.md)|Bitmaps, icons, cursors, and other image files in Visual C++, Visual Basic, or Visual C# projects.|
|[Menu Editor](../windows/menu-editor.md)|Menu resources in Visual C++ projects.|
|[Ribbon Editor](../mfc/ribbon-designer-mfc.md)|Ribbon resources in MFC projects.|
|[String Editor](../windows/string-editor.md)|String tables in Visual C++ projects.|
|[Toolbar Editor](../windows/toolbar-editor.md)|Toolbar resources in Visual C++ projects. The Toolbar editor is part of the Image editor.|
|[Version Information Editor](../windows/version-information-editor.md)|Version information in Visual C++ projects.|

## Requirements

None

## See Also

[Working with Resource Files](../windows/working-with-resource-files.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)<br/>
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)