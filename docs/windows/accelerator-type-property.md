---
title: "Accelerator Type Property | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Type property", "VIRTKEY"]
ms.assetid: 8c349bc4-e6ad-43fa-959e-f29168af35b8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Accelerator Type Property

The accelerator **Type** property determines whether the shortcut key combination associated with the accelerator ID is a virtual key combination or an ASCII/ANSI key value:

- If the **Type** property is ASCII, the [Modifier](../windows/accelerator-modifier-property.md) may only be `None` or `Alt`, or it can have an accelerator which uses the **Ctrl** key (specified by preceding the key with a `^`).

- If the **Type** property is VIRTKEY, any combination of `Modifier` and `Key` values is valid.

   > [!NOTE]
   > If you want to enter a value into the accelerator table and have the value be treated as ASCII/ANSI, simply click the **Type** for the entry in the table and select ASCII from the drop down list. However, if you use the **Next Key Typed** command (**Edit** menu) to specify the `Key`, you must change the **Type** property from VIRTKEY to ASCII *before* entering the `Key` code.

## Requirements

Win32

## See Also

[Setting Accelerator Properties](../windows/setting-accelerator-properties.md)  
[Accelerator Editor](../windows/accelerator-editor.md)