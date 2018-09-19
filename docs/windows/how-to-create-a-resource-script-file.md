---
title: "How to: Create a Resource Script File (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["rc files [C++], creating", ".rc files [C++], creating", "resource script files [C++], creating"]
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Create a Resource Script File (C++)

> [!NOTE]
> The **Resource Editor** is not available in Express editions.
>
> This material applies to Windows desktop applications. Projects in .NET languages do not use resource script files. See [Resource Files](../windows/resource-files-visual-studio.md), for more information.

### To create a new resource script (.rc) file

1. Put focus on your existing project folder in **Solution Explorer**, for example, `MyProject`.

   > [!NOTE]
   > Don't confuse the project folder with the Solution folder in **Solution Explorer**. If you put focus on the **Solution** folder, your choices in the **Add New Item** dialog box (in Step 3) will be different.

2. On the **Project** menu, click **Add New Item**.

3. In the **Add New Item** dialog box, click the **Visual C++** folder then choose **Resource File (.rc)** in the right pane.

4. Provide a name for your resource script file in the **Name** text box, then click **Open**.

You can now [create](../windows/how-to-create-a-resource.md) and add new resources to your .rc file.

> [!NOTE]
> You can only add a resource script (.rc file) to an existing project that is loaded into the Visual Studio IDE. You cannot create a standalone .rc file (one outside the project). [Resource templates](../windows/how-to-use-resource-templates.md) (.rct files) can be created anytime.

## Requirements

Win32

## See Also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)