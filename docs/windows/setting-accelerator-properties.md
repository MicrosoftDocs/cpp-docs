---
title: "Setting Accelerator Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["accelerator properties", "properties [C++], accelerator properties", "Type property", "Key property", "Modifier property"]
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Setting Accelerator Properties
You can set accelerator properties in the [Properties window](/visualstudio/ide/reference/properties-window) at any time. You can also use the **Accelerator** editor to modify the accelerator properties in the accelerator table. Changes made using the **Properties** window or the **Accelerator** editor have the same result: edits are immediately reflected in the accelerator table.  
  
 There are three properties for each accelerator [ID](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/3487f185-de96-4b1d-87db-034a52223160/locales/en-US):  
  
-   The [Modifier property](../windows/accelerator-modifier-property.md) sets control key combinations for the accelerator.  
  
    > [!NOTE]
    >  In the **Properties** window, this property appears as three separate Boolean properties, all of which can be controlled independently: **Alt**, **Ctrl**, and **Shift**.  
  
-   The [Key property](../windows/accelerator-key-property.md) sets the actual key to use as the accelerator.  
  
-   The [Type property](../windows/accelerator-type-property.md) determines whether the key is interpreted as virtual (VIRTKEY) or ASCII/ANSI.  
  
## Requirements  
 Win32  
  
## See Also  
 [Predefined Accelerator Keys](../windows/predefined-accelerator-keys.md)   
 [Resource Editors](../windows/resource-editors.md)   
 [Accelerator Editor](../windows/accelerator-editor.md)