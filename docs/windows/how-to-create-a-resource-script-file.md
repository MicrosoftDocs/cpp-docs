---
title: "How to: Create Resources (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.resource", "vc.resvw.add.MFC", "vs.resourceview.F1", "vc.editors.insertresource", "vc.editors.newcustomresource"]
helpviewer_keywords: ["rc files [C++], creating", ".rc files [C++], creating", "resource script files [C++], creating", "resources [C++], viewing", "rc files [C++], viewing resources", ".rc files [C++], viewing resources", "resource script files [C++], viewing resources", "resource script files [C++], opening in text format", ".rc files [C++], opening in text format", "rc files [C++], opening in text format", "rc files [C++], adding MFC support", ".rc files [C++], adding MFC support", "MFC, adding support to resource scripts files", "resource script files [C++], adding MFC support", "toolbars [C++], resources", "resource toolbars", "resources [C++], creating", "Resource View window", "resources [C++], adding", "Add Resource dialog box [C++]", "Custom Resource Type dialog box [C++]", "language-specific template files [C++]", "resource templates", "rct files [C++]", "templates, resource templates", "resources [C++], templates", ".rct files [C++]"]
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
---
# How to: Create Resources (C++)

> [!NOTE]
> The **Resource Editor** or **Resource View** is not available in Express editions.
>
> This information does not apply to resources in Windows desktop applications or Universal Windows Platform apps. Projects in .NET languages do not use resource script files. For information on adding resources to managed projects, see [Resource files](../windows/resource-files-visual-studio.md), [App resources and the resource management system](/windows/uwp/app-resources/), and [Resources in desktop apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

## Create a resource script file

To create a new resource script (.rc) file:

1. Put focus on your existing project folder in **Solution Explorer**, for example, `MyProject`.

   > [!NOTE]
   > Don't confuse the project folder with the Solution folder in **Solution Explorer**. If you put focus on the **Solution** folder, your choices in the **Add New Item** dialog box (in Step 3) will be different.

1. On the **Project** menu, select **Add New Item**.

1. In the **Add New Item** dialog box, select the **Visual C++** folder then choose **Resource File (.rc)** in the right pane.

1. Provide a name for your resource script file in the **Name** text box, then choose **Open**.

You can now create and add new resources to your .rc file.

> [!NOTE]
> You can only add a resource script (.rc file) to an existing project that is loaded into the Visual Studio IDE. You cannot create a standalone .rc file (one outside the project). Resource templates (.rct files) can be created anytime.

You can view resources in an .rc file without having a project open. The .rc file will open in a document window as opposed to opening in the [Resource View](../windows/resource-view-window.md) window (as it does when the file is open inside a project).

> [!NOTE]
> This is an important distinction because some commands are only available when the file is opened standalone (outside of a project). For example, you can only save a file in a different format or as a different file name when the file is opened outside of a project (the **Save As** command is unavailable when a file is opened inside a project).

To open a resource script file outside of a project:

1. From the **File** menu, choose **Open**, then select **File**.

1. In the **Open File** dialog box, navigate to the resource script file you want to view, highlight the file, and select **Open**.

   > [!NOTE]
   > If you open the project first (**File**, **Open**, **Project**), some commands will not be available to you. Opening a file "standalone" means opening it without first loading the project.

To open multiple resource script files outside a project:

1. Open both resource files stand-alone. For example, open `Source1.rc` and `Source2.rc`.

   1. From the **File** menu, choose **Open**, then select **File**.

   1. In the **Open File** dialog box, navigate to the first resource script file you want to open (`Source1.rc`), highlight the file, and choose **Open**.

   1. Repeat the previous step to open the second .rc file (`Source2.rc`).

       The .rc files are now open in separate documents windows.

1. When both .rc files are open, tile the windows so you can view them simultaneously:

   - From the **Window** menu, choose **New Horizontal Tab Group** or **New Vertical Tab Group**.

       \- or -

   - Right-click one of the .rc files and choose **New Horizontal Tab Group** or **New Vertical Tab Group** from the shortcut menu.

### To open a resource script file in text format

There may be times when you want to view the contents of your project's resource script (.rc) file without opening a resource, such as a dialog box, inside its specific resource editor. For example, you may want to search for a string across all dialog boxes in the resource file without having to open each one separately.

You can easily open the resource file in text format to view all the resources it contains and complete global operations supported by the text editor.

> [!NOTE]
> The resource editors do not directly read .rc or `resource.h` files. The resource compiler compiles them into .aps files, which are consumed by the resource editors. This file is a compile step and only stores symbolic data. As with a normal compile process, information that is not symbolic (for example, comments) is discarded during the compile process. Whenever the .aps file gets out of synch with the .rc file, the .rc file is regenerated (for example, when you Save, the resource editor overwrites the .rc file and the resource.h file). Any changes to the resources themselves will remain incorporated in the .rc file, but comments will always be lost once the .rc file is overwritten. For information on how to preserve comments, see [Including Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md).

To open a resource script file as text:

1. From the **File** menu choose **Open**, then choose **File**.

1. In the **Open File** dialog box, navigate to the resource script file you want to view in text format.

1. Highlight the file, then select the drop-down arrow on the **Open** button (located on the right side of the button).

1. Choose **Open With** from the drop-down menu.

1. In the **Open With** dialog box, select **Source Code (Text) Editor**.

1. From the **Open As** drop-down list, select **Text**.

   The resource opens in the **Source Code** editor.

\- or -

1. In **Solution Explorer**, right-click the .rc file.

1. From the shortcut menu, choose **Open with...**, then select **Source Code (Text) Editor**.

### To add MFC Support to resource script files

Normally, when you build an MFC application for Windows using the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md), the wizard generates a basic set of files (including a resource script (.rc) file) that contains the core features of the Microsoft Foundation classes (MFC). However, if you're editing an .rc file for a Windows application that isn't based on MFC, the following features specific to the MFC framework aren't available:

- MFC code wizards

- Menu prompt strings

- List contents for combo box controls

- ActiveX control hosting

However, you can add MFC support to existing .rc files that don't have it.

> [!NOTE]
> These steps require MFC.

To add MFC support to .rc files:

1. Open the resource script file.

1. In [Resource View](../windows/resource-view-window.md), highlight the resources folder (for example, MFC.rc).

1. In the [Properties window](/visualstudio/ide/reference/properties-window), set the **MFC Mode** property to **True**.

   > [!NOTE]
   > In addition to setting this flag, the .rc file must be part of an MFC project. For example, just setting **MFC Mode** to **True** on an .rc file in a Win32 project won't give you any of the MFC features.

## Create a resource

The **Resource View** window displays the resource files included in your projects. Expanding the top folder (for example, Project1.rc) shows the resource types within that .rc file. Expanding each resource type shows the individual resources of that type.

The **Resource View** window uses the **Add Resource** dialog box to add resources to a C++ Windows desktop application project. This dialog box has the following properties:

|Property|Description|
|---|---|
|**Resource Type**|Specifies the kind of resource you want to create.<br/><br/>You can expand the cursor and dialog box resource categories to reveal additional resources. These resources are located in ...\Microsoft Visual Studio `version`\VC\VCResourceTemplates\\<LCID\>\mfc.rct. If you add .rct files, you must put them in this directory or you must specify an [include path](../windows/how-to-specify-include-directories-for-resources.md) for them. The resources in those files then appear at the second level under the appropriate category. There's no preset limit to the number of .rct files you can add.<br/><br/>The resources shown at the top level in the tree control are the default resources that are provided by Visual Studio.|
|**New**|Creates a resource based on the type you've selected in the **Resource Type** box. The resource opens in the appropriate editor. For example, if you create a dialog resource, it opens in the [dialog editor](../windows/dialog-editor.md).|
|**Import**|Opens the **Import** dialog box in which you can navigate to a resource you'd want to import into your current project. You can import a bitmap, icon, cursor, HTML resource file, sound (.WAV) resource file, or custom resource file.|
|**Custom**|Opens the **New Custom Resource** dialog box in which you can create a custom resource. Custom resources can be edited in the Binary editor only.|

The **New Custom Resource** dialog box enables you to create a new custom resource in a C++ project. This dialog box has the following property:

|Property|Description|
|---|---|
|**Resource Type**|Provides a text box for you to enter the name of a custom resource type. Visual C++ automatically capitalizes the name when you exit the **New Custom Resource** dialog box.|

When you create a new resource, Visual C++ assigns a unique name to it, for example, `IDD_Dialog1`. You can customize this resource ID by editing the properties for the resource either in the associated resource editor or in the [Properties Window](/visualstudio/ide/reference/properties-window).

You can create a resource as a new default resource (a resource that isn't based on a template) or as a resource patterned after a [template](../windows/how-to-use-resource-templates.md).

> [!NOTE]
> Do not specify a resource name or ID that is reserved by Visual Studio. The reserved names are DESIGNINFO, HWB, and TEXTINCLUDE, and the reserved ID is 255.

To open the resource view window:

Select **Resource View** on the **View** menu.

   \- or -

Press **Ctrl** + **Shift** + **E**.

> [!TIP]
> You can right-click on the **Resource View** window to launch a shortcut menu of commands. You can also double-click on the title bar to dock or undock the window. Right-clicking on the title bar will give you additional commands that allow you to control the behavior of the window. For more information, see [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

To create a new resource in Resource View:

1. With focus on your .rc file in **Resource View**, select the **Edit** menu and choose **Add Resource** (or right-click the .rc file in **Resource View** and choose **Add Resource** from the shortcut menu).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

To create a new resource in Solution Explorer:

1. In **Solution Explorer**, right-click the project folder and select **Add**, then choose **Add Resource** on the shortcut menu.

   If you don't already have an .rc file in your project, this step will create one. You can then repeat this step to add specific resource types to the new .rc file.

1. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

To create a new resource in Class View:

1. In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click your class and choose **Add**, then select **Add Resource** from the shortcut menu.

1. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

To create a new resource from the Project menu:

From the **Project** menu, choose **Add Resource**.

## Use resource templates

A resource template is a customized resource that you have saved as an .rct file. A resource template can then serve as a starting point for creating other resources. Resource templates save time in developing additional resources or groups of resources that share features, such as standard controls and other repeated elements. For example, you might want to include a Help button and an icon of a company logo in several dialog boxes. To do so quickly, create a new dialog box template and customize it with the logo and the Help button.

Once you have customized the resource template, you must save your changes in the template folder (or any location specified in the include path) so that the new resource template will appear under its resource type in the [Add Resource dialog box](../windows/add-resource-dialog-box.md). You can then use the new resource template as often as needed.

> [!NOTE]
> You can place language-specific template files in subdirectories of the main template directory. For example, you can place English-only template files in \\<resource template directory\>\1033.

To create a template for resources:

1. In **Solution Explorer**, right-click your project.

1. From the shortcut menu, select **Add**, then choose **Add New Item**.

1. In the **Add New Item** dialog box, in the **Templates:** pane, select **Resource Template File (.rct)**.

1. Provide a name and location for your new .rct file and choose **Open**.

1. The new .rct file is added to your project and appears in **Solution Explorer** under the **Resources** folder.

   You can now double-click the .rct file to open it in a document window, then add resources to it (right-click the file in the document window and choose **Add Resource** from the shortcut menu). You can then customize those resources and save the .rct file.

   > [!NOTE]
   > When you create a new RCT file, Visual Studio searches for it in \Program Files\Microsoft Visual Studio 9.0\VC\VCResourceTemplates, in \Program Files\Microsoft Visual Studio 9.0\VC\VCResourceTemplates\\*LCID* (such as 1033 for English), *or* anywhere on the [include path](../windows/how-to-specify-include-directories-for-resources.md). If you prefer to store your RCT files in another file folder, for example \My Documents, you only need to add this folder to the include path and Visual Studio will find your RCT file.

To convert an existing .rc file to an .rct file:

1. Open the .rc file as a stand-alone file.

1. On the **File** menu, select **Save \<*your filename*> As**.

1. Specify a location and choose **OK**.

To create a new resource from a template:

1. In the [Resource View](../windows/resource-view-window.md) pane, right click the .rc file and choose **Add Resource** from the shortcut menu.

1. In the **Add Resource** dialog box, select the plus sign (**+**) next to a resource to expand the resource node and see all the templates available for that resource.

1. Double-click the template you want to use.

1. Modify the added resource as needed in its resource editor.

   The resource editor automatically provides a unique resource ID. You can revise the [resource properties](../windows/changing-the-properties-of-a-resource.md) as needed.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)<br/>
[Working with Resource Files](../windows/working-with-resource-files.md)<br/>