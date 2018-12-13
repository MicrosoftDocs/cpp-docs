---
title: "How to: Build Registration-Free COM Components (C++) - Visual Studio"
ms.date: "12/14/2018"
helpviewer_keywords: ["COM components, registration-free"]
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
---
# How to: Build Registration-Free COM Components

Registration-free COM components are COM components that have manifests built into the DLLs.

### To build manifests into COM components

1. Open the project property pages for the COM component.

1. Expand the **Configuration Properties** node, and then expand the **Manifest Tool** node.

1. Select the **Input and Output** property page, and then set the **Embed Manifest** property equal to **Yes**.

1. Click **OK**.

1. Build the solution.

## See Also

[Isolated Applications](/windows/desktop/SbsCs/isolated-applications)<br/>
[About Side-by-Side Assemblies](/windows/desktop/SbsCs/about-side-by-side-assemblies-)<br/>
[How to: Build Isolated Applications to Consume COM Components](how-to-build-isolated-applications-to-consume-com-components.md)