---
title: "Setting Accelerator Properties"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Setting Accelerator Properties
In Visual C++ .NET, you can set accelerator properties in the [Properties window](../Topic/Properties%20Window.md) at any time. You can also use the Accelerator editor to modify the accelerator properties in the accelerator table. Changes made using the Properties window or the Accelerator editor have the same result: edits are immediately reflected in the accelerator table.  
  
 There are three properties for each accelerator "ID":  
  
-   The [Modifier property](../windows/accelerator-modifier-property.md) sets control key combinations for the accelerator.  
  
    > [!NOTE]
    >  In the Properties window, this property appears as three separate Boolean properties, all of which can be controlled independently: Alt, Ctrl, and Shift.  
  
-   The [Key property](../windows/accelerator-key-property.md) sets the actual key to use as the accelerator.  
  
-   The [Type property](../windows/accelerator-type-property.md) determines whether the key is interpreted as virtual (VIRTKEY) or ASCII/ANSI.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [Predefined Accelerator Keys](../windows/predefined-accelerator-keys.md)   
 [Resource Editors](../mfc/resource-editors.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)