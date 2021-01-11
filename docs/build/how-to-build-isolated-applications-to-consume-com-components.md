---
description: "Learn more about: How to: Build Isolated Applications to Consume COM Components"
title: "How to: Build Isolated Applications to Consume COM Components"
ms.date: "11/04/2016"
helpviewer_keywords: ["isolated applications [C++]"]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
---
# How to: Build Isolated Applications to Consume COM Components

Isolated applications are applications that have manifests built into the program. You can create isolated applications to consume COM components.

### To add COM references to manifests of isolated applications

1. Open the project property pages for the isolated application.

1. Expand the **Configuration Properties** node, and then expand the **Manifest Tool** node.

1. Select the **Isolated COM** property page, and then set the **Component File Name** property to the name of the COM component that you want the isolated application to consume.

1. Click **OK**.

### To build manifests into isolated applications

1. Open the project property pages for the isolated application.

1. Expand the **Configuration Properties** node, and then expand the **Manifest Tool** node.

1. Select the **Input and Output** property page, and then set the **Embed Manifest** property equal to **Yes**.

1. Click **OK**.

1. Build the solution.

## See also

[Isolated Applications](/windows/win32/SbsCs/isolated-applications)<br/>
[About Side-by-Side Assemblies](/windows/win32/SbsCs/about-side-by-side-assemblies-)
