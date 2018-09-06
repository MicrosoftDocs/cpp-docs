---
title: "Resizing an Entire Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["[""Image editor [C++], resizing images"", ""size [C++], images"", ""images [C++], resizing"", ""resizing images""]"]
ms.assetid: 10782937-7eb4-4340-bdec-618ee7d7904b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Resizing an Entire Image (Image Editor for Icons)

### To resize an entire image using the properties window

1. Open the image whose properties you want to change.

2. In the **Width** and **Height** boxes in the [Properties window](/visualstudio/ide/reference/properties-window), type the dimensions that you want.

   If you are increasing the size of the image, the **Image** editor extends the image to the right, downward, or both, and fills the new region with the current background color. The image is not stretched.

   If you are decreasing the size of the image, the **Image** editor crops the image on the right or bottom edge, or both.

   > [!NOTE]
   > You can use the **Width** and **Height** properties to resize only the entire image, not to resize a partial selection.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

None

## See Also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)  
[Resizing an Image](../windows/resizing-an-image-image-editor-for-icons.md)