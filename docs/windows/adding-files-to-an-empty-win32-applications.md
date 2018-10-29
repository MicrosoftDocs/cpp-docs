---
title: "Adding Files to an Empty Win32 Applications"
ms.date: "11/04/2016"
helpviewer_keywords: ["empty projects [C++], adding files", "projects [C++], adding items", "blank projects", "files [C++], adding to projects"]
ms.assetid: 070098e8-0396-49fe-a697-3daa2f1be6de
---
# Adding Files to an Empty Win32 Applications

### To add your files to an empty Windows desktop application

1. Select the directory in **Solution Explorer**.

2. Right-click the directory name, click **Add** from the shortcut menu, and then click **Existing Item**.

3. In the **Add Existing Item dialog**, navigate to the files you want to add to your project.

4. Click **OK**.

To add files that are neither source, header, or resource files to your project, right-click the **Solution** node in **Solution Explorer** and add the files to the project in the same manner. A **Miscellaneous** folder will be created to hold the other files in your project.

> [!NOTE]
> Before building your project, you will need to specify build options for these files so that they are included correctly in your finished application. For more information, see [Specifying Project Settings with Property Pages](../ide/property-pages-visual-cpp.md) and [Building a C/C++ Program](../build/building-c-cpp-programs.md).

## See Also

[Creating an Empty Windows Desktop Application](../windows/creating-an-empty-windows-desktop-application.md)
