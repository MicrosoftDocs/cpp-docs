---
title: "Specifying the Dominant Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["dominant controls", "Dialog Editor [C++], dominant control", "controls [C++], dominant"]
ms.assetid: 42b523a7-192a-417b-9512-d4af795e002f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Specifying the Dominant Control

The control selected first is the dominant control.

### To specify the dominant control

1. Hold down the **Ctrl** key and click the control you want to use to influence the size or location of other controls *first*.

   **Note** The sizing handles of the dominant control are solid while the handles of subordinate controls are hollow. All further resizing or alignment is based on the dominant control.

### To change the dominant control

1. Clear the current selection by clicking outside all the currently selected controls.

2. Repeat the previous procedure, selecting a different control first.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Selecting Multiple Controls](../windows/selecting-multiple-controls.md)  
[Selecting Controls](../windows/selecting-controls.md)  
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)