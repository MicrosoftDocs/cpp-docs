---
title: "Adding an MFC Class"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.classes.adding.mfc"]
helpviewer_keywords: ["classes [MFC], adding MFC", "MFC, adding classes"]
ms.assetid: 9a96b67f-40bf-43d4-8872-2f8dfc5404f1
---
# Adding an MFC Class

To add classes derived from Microsoft Foundation Class (MFC) library classes to your project, use the **Add Class** command available from [Class View](/visualstudio/ide/viewing-the-structure-of-code). Specify the name of the new class, select the base class, and select the ID of the dialog box with which it is associated (if any). The code wizard creates a header file and an implementation file and adds them to your project.

> [!NOTE]
>  You can add MFC classes to an ATL COM application if you initially [created the application with MFC support](../../atl/reference/mfc-support-in-atl-projects.md). You can also add MFC classes to Win32 projects that have MFC support.

### To add an MFC class to your project

1. From Class View, right-click the project name. Click **Add** and then click **Add Class** to open the [Add Class](../../ide/add-class-dialog-box.md) dialog box.

1. In the Templates pane, select **MFC Class** and press the **Add** button.

1. Define the settings for the new class in the [MFC Class Wizard](../../mfc/reference/mfc-add-class-wizard.md) dialog box.

1. Click **Finish** to close the wizard and view the new class in Class View. You can also view the files created by the wizard in **Solution Explorer**.

## See also

[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Class Overview](../../mfc/class-library-overview.md)
