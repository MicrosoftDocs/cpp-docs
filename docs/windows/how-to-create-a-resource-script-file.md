---
description: "Learn more about: How to: Create Resources (C++)"
title: "How to: Create Resources (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.resvw.add.MFC", "vs.resourceview.F1", "vc.editors.insertresource", "vc.editors.newcustomresource"]
helpviewer_keywords: ["rc files [C++], creating", ".rc files [C++], creating", "resource script files [C++], creating", "resources [C++], viewing", "rc files [C++], viewing resources", ".rc files [C++], viewing resources", "resource script files [C++], viewing resources", "resource script files [C++], opening in text format", ".rc files [C++], opening in text format", "rc files [C++], opening in text format", "rc files [C++], adding MFC support", ".rc files [C++], adding MFC support", "MFC, adding support to resource scripts files", "resource script files [C++], adding MFC support", "toolbars [C++], resources", "resource toolbars", "resources [C++], creating", "Resource View window", "resources [C++], adding", "Add Resource dialog box [C++]", "Custom Resource Type dialog box [C++]", "language-specific template files [C++]", "resource templates", "rct files [C++]", "templates, resource templates", "resources [C++], templates", ".rct files [C++]"]
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
---
# How to: Create Resources (C++)

You can create resources for your project by:

- Using a resource script file.

   > [!NOTE]
   > This step is necessary before you add resources.

- Adding resources to your project and using the **Resource View**.

- Using a resource template to create customized resources.

## Use Resource Script Files

Before you create and add new resources to your project, you must first create a resource script (.rc) file.

> [!NOTE]
> You can only add a resource script file to an existing project loaded into the Visual Studio IDE. You can't create a standalone resource script outside the project, though resource template (.rct) files can be created anytime.

### To create a resource script file

1. Put focus on your existing project folder in **Solution Explorer**, for example, *MyProject*.

   > [!NOTE]
   > Don't confuse the project folder with the solution folder in **Solution Explorer**. If you put focus on the **Solution** folder, you won't have the same **Add New Item** choices.

1. In the menu, go to **Project** > **Add New Item**.

1. Select the **Visual C++** folder and choose **Resource File (.rc)** in the right pane.

1. Provide a name for your resource script file in the **Name** text box and select **Open**.

### To open a resource script file

You can view resources in a resource script file without having a project open. The script file opens in a document window as opposed to the **Resource View**.

> [!NOTE]
> Some commands are only available if the file is opened standalone, meaning outside of a project without first loading the project. For example, to use the **Save As** command and save a file with a different format or file name, the file must be opened standalone.

- To open a resource script file outside of a project, in the menu, go to **File** > **Open**, and choose **File**. Navigate to the resource script file, highlight the file, and choose **Open**.

    > [!NOTE]
    > There may be times when you want to view the contents of your project's resource script file without using the resource editors to open a resource. For example, you may want to search for a string across all dialog boxes in the resource file without having to open each one separately. You can easily open the resource file in text format to view all the resources it contains and complete global operations supported by the text editor.
    >
    > To open a resource script file in text format, use the drop-down arrow on the right side of the **Open** button in the above step and choose **Open With**. Select **Source Code (Text) Editor** and from the **Open As** drop-down list, select **Text** and the resource opens in the **Source Code** editor.

- To open multiple resource scripts follow the same step above for each file you want to open, for example, *Source1.rc* and *Source2.rc*. Then, when both .rc files are open in separate documents windows, either use the **Window** menu or right-click one of the files, and choose **New Horizontal Tab Group** or **New Vertical Tab Group**. The windows are now tiled so you can view them simultaneously.

> [!TIP]
> You can open resource script files by right-clicking the .rc file in **Solution Explorer**, selecting **Open with** and choosing **Source Code (Text) Editor**.

When you build a Microsoft Foundation Class (MFC) application for Windows using the [MFC application wizard](../mfc/reference/mfc-application-wizard.md), the wizard generates a basic set of files including a resource script (.rc) file) that contains the core features of the MFC. However, these MFC-specific features aren't available when editing an .rc file for Windows applications not based on MFC. This includes code wizards, menu prompt strings, list contents for combo box controls, and ActiveX control hosting.

- To add MFC support, with the resource script file open, in **Resource View**, highlight the resources folder (for example, *MFC.rc*). Then in the [Properties window](/visualstudio/ide/reference/properties-window), set **MFC Mode** to **True**.

  > [!NOTE]
  > In addition to setting **MFC Mode**, the .rc file must be part of an MFC project. Only setting **MFC Mode** to **True** on an .rc file in a Win32 project won't give you MFC features.

## Create Resources

You can create a resource as a new default resource meaning a resource that isn't based on a template, or as a resource patterned after a template.

Use the **Resource View** window to display resource files included in your projects. Expanding the top folder, for example, *Project1.rc*, shows the resource types within that file. Expand each resource type to show the individual resources of that type.

> [!TIP]
> To open the **Resource View** window, go to menu **View** > **Other Windows** > **Resource View** or press **Ctrl**+**Shift**+**E**.

You can also use right-click on the **Resource View** window to launch a shortcut menu of commands, or double-click the title bar to dock and undock the window. Right-click the title bar for commands that control the behavior of the window. For more information, see [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

The **Resource View** windows includes the **Add Resource** dialog box with the following properties to add resources to a C++ Windows desktop application project:

| Property | Description |
|---|---|
| **Resource Type** | Specify the kind of resource you want to create.<br/><br/>You can expand the cursor and dialog box resource categories to reveal additional resources, which are located in *..\Microsoft Visual Studio \<version\>\VC\VCResourceTemplates\\<LCID\>\mfc.rct*. If you need to add .rct files, either put them here or specify another [include path](./how-to-include-resources-at-compile-time.md). Resources shown at the top level in the tree control are the default resources provided by Visual Studio. Resources in .rct files appear at the second level under the appropriate category. There's no preset limit to the number of .rct files you can add.<br/><br/> |
| **New** | Create a resource based on the type selected in the **Resource Type** box and open the resource in the appropriate editor.<br/><br/>For example, if you create a dialog resource, it opens the resource in the [Dialog Editor](../windows/dialog-editor.md). |
| **Import** | Open the **Import** dialog box to navigate to the resource you want to import into your current project.<br/><br/>You can import a bitmap, icon, cursor, HTML, sound (.WAV), or custom resource file. |
| **Custom** | Open the **New Custom Resource** dialog box to create a custom resource.<br/><br/>Also includes a **Resource Type** property that provides a text box for you to enter the name of the custom resource type. Visual C++ automatically capitalizes the name when you exit. Custom resources are only edited in the [Binary Editor](../windows/binary-editor.md). |

When you create a new resource, Visual C++ assigns a unique name to it, for example, `IDD_Dialog1`. You can customize this resource ID by editing the resource properties either in the associated resource editor or in the [Properties window](/visualstudio/ide/reference/properties-window).

> [!NOTE]
> Don't specify a resource name or ID that is reserved by Visual Studio. Reserved names are `DESIGNINFO`, `HWB`, and `TEXTINCLUDE`, and the reserved ID is `255`.

### To create a resource

- In **Resource View**, select your .rc file, then use **Edit** > **Add Resource** and choose the type of resource to add to your project.

   > [!TIP]
   > You can also right-click the .rc file in **Resource View** and choose **Add Resource** from the shortcut menu.

- In **Solution Explorer**, right-click the project folder, select **Add** > **Add Resource** and choose the type of resource to add to your project.

   > [!NOTE]
   > If you don't already have an .rc file in your project, this step will create one. You can then repeat this step to add specific resource types to the new .rc file.

- In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the class, select **Add** > **Add Resource** and choose the type of resource to add to your project.

- Use the menu **Project** > **Add Resource**.

## Use Resource Templates

A resource template is a customized resource that you've saved as an .rct file. A resource template then serves as a starting point for creating resources. Resource templates save time in developing additional resources or groups of resources that share features, such as standard controls or repeated elements. For example, if you want to include a help button with a company logo icon in several dialog boxes, create a new dialog box template and customize it with the help button and the logo.

After customizing a resource template, save your changes in the template folder or the location specified in the include path, so that the new resource template will appear under its resource type in the **Add Resource** dialog box. You can now use the new resource template as often as needed.

> [!NOTE]
> The resource editor automatically provides a unique resource ID. You can revise the [resource properties](./resource-editors.md) as needed.

> [!NOTE]
> Place language-specific template files in subdirectories of the main template directory. For example, English-only template files go in *..\\<resource template directory\>\1033*.
>
> Visual Studio searches for new .rct files in *\Program Files\Microsoft Visual Studio \<version\>\VC\VCResourceTemplates*, *\Program Files\Microsoft Visual Studio \<version>\VC\VCResourceTemplates\\<LCID\>* (such as an LCID of 1033 for English), or anywhere on the [include path](./how-to-include-resources-at-compile-time.md). If you prefer to store your .rct files in another location, you must add the location to the include path.

### To create and use a resource template

1. In **Solution Explorer**, right-click your project and select **Add** > **Add New Item**.

1. In the **Templates:** pane, select **Resource Template File (.rct)**.

1. Provide a name and location for your new *.rct* file and choose **Open**.

   The new *.rct* file is added to your project and appears in **Solution Explorer** under the **Resources** folder.

1. Double-click the *.rct* file to open it in a document window. To add resources, right-click the file in the document window and choose **Add Resource**.

   You can customize your added resources and save the *.rct* file.

1. In the **Resource View** pane, right-click the *.rc* file and choose **Add Resource**.

1. Select the plus sign (**+**) next to a resource to expand the resource node and view the templates available for that resource.

1. Double-click the template you want to use.

   You can modify the added resource as needed in its resource editor.

### To convert an existing resource file to a template

With the resource script file open, in the menu, go to **File** > **Save \<*filename*> As**. Specify a location and choose **OK**.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[How to: Manage Resources](../windows/how-to-copy-resources.md)<br/>
[How to: Include Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md)<br/>
