---
title: "Setting Accelerator Properties | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator properties"
  - "properties [C++], accelerator properties"
  - "Type property"
  - "Key property"
  - "Modifier property"
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Setting Accelerator Properties
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Setting Accelerator Properties](https://docs.microsoft.com/cpp/windows/setting-accelerator-properties).  
  
  
In Visual C++ .NET, you can set accelerator properties in the [Properties window](http://msdn.microsoft.com/library/e6e0fa4f-75c4-4a52-af15-281cd61876ca) at any time. You can also use the Accelerator editor to modify the accelerator properties in the accelerator table. Changes made using the Properties window or the Accelerator editor have the same result: edits are immediately reflected in the accelerator table.  
  
 There are three properties for each accelerator [ID](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/3487f185-de96-4b1d-87db-034a52223160/locales/en-US):  
  
-   The [Modifier property](../windows/accelerator-modifier-property.md) sets control key combinations for the accelerator.  
  
    > [!NOTE]
    >  In the Properties window, this property appears as three separate Boolean properties, all of which can be controlled independently: Alt, Ctrl, and Shift.  
  
-   The [Key property](../windows/accelerator-key-property.md) sets the actual key to use as the accelerator.  
  
-   The [Type property](../windows/accelerator-type-property.md) determines whether the key is interpreted as virtual (VIRTKEY) or ASCII/ANSI.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32  
  
## See Also  
 [Predefined Accelerator Keys](../windows/predefined-accelerator-keys.md)   
 [Resource Editors](../mfc/resource-editors.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)

