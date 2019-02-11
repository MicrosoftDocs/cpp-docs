---
title: "How to: Create Resources (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.resource", "vc.resvw.add.MFC", "vs.resourceview.F1", "vc.editors.insertresource", "vc.editors.newcustomresource"]
helpviewer_keywords: ["rc files [C++], creating", ".rc files [C++], creating", "resource script files [C++], creating", "resources [C++], viewing", "rc files [C++], viewing resources", ".rc files [C++], viewing resources", "resource script files [C++], viewing resources", "resource script files [C++], opening in text format", ".rc files [C++], opening in text format", "rc files [C++], opening in text format", "rc files [C++], adding MFC support", ".rc files [C++], adding MFC support", "MFC, adding support to resource scripts files", "resource script files [C++], adding MFC support", "toolbars [C++], resources", "resource toolbars", "resources [C++], creating", "Resource View window", "resources [C++], adding", "Add Resource dialog box [C++]", "Custom Resource Type dialog box [C++]", "language-specific template files [C++]", "resource templates", "rct files [C++]", "templates, resource templates", "resources [C++], templates", ".rct files [C++]"]
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
---
# How to: Create Resources (C++)

> [!NOTE]
> The **Resource Editor** or **Resource View** isn't available in Express editions.
>
> This information doesn't apply to resources in Windows desktop applications or Universal Windows Platform apps. Projects in .NET languages don't use resource script files. For information on adding resources to managed projects, see [Resource files](../windows/resource-files-visual-studio.md), [App resources and the resource management system](/windows/uwp/app-resources/), and [Resources in desktop apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

## Create a resource script

Before you create and add new resources to your project, you must first create a resource script (.rc file).

### To create a resource script

1. Put focus on your existing project folder in **Solution Explorer**, for example, *MyProject*.

   > [!NOTE]
   > Don't confuse the project folder with the solution folder in **Solution Explorer**. If you put focus on the **Solution** folder, your choices in the **Add New Item** dialog box will be different.

1. On the **Project** menu, select **Add New Item**.

1. In the **Add New Item** dialog box, select the **Visual C++** folder then choose **Resource File (.rc)** in the right pane.

1. Provide a name for your resource script in the **Name** text box, then select **Open**.

### To open a resource script

> [!NOTE]
> You can only add a resource script (.rc file) to an existing project that is loaded into the Visual Studio IDE. You cannot create a standalone resource script (outside the project). Resource templates (.rct files) can be created anytime.

You can view resources in a resource script without having a project open. The script file will open in a document window as opposed to opening in the [Resource View](../windows/resource-view-window.md) window (as it does when the file is open inside a project).

> [!NOTE]
> Some commands are only available when the file is opened standalone (outside of a project). For example, you can save a file in a different format or as a different file name only when the file is opened standalone (the **Save As** command is unavailable for the file inside a project).

To open a resource script outside of a project:

1. From the **File** menu, select **Open**, then choose **File**.

1. In the **Open File** dialog box, navigate to the resource script file, highlight the file, and choose **Open**.

   > [!NOTE]
   > If you open the project first (**File** > **Open** > **Project**), some commands are not available. Opening a file standalone means opening it without first loading the project.

To open multiple resource scripts outside of a project:

1. Open both resource files stand-alone. For example, open *Source1.rc* and *Source2.rc*.

   1. From the **File** menu, choose **Open**, then select **File**.

   1. In the **Open File** dialog box, navigate to the first resource script file you want to open (*Source1.rc*), highlight the file, and choose **Open**.

   1. Repeat the previous step to open the second .rc file (*Source2.rc*).

       The .rc files are now open in separate documents windows.

1. When both .rc files are open, tile the windows so you can view them simultaneously:

   - Open the **Window** menu (or right-click one of the .rc files) and choose **New Horizontal Tab Group** or **New Vertical Tab Group**.

There may be times when you want to view the contents of your project's resource script (.rc) file without opening a resource, such as a dialog box, inside its specific resource editor. For example, you may want to search for a string across all dialog boxes in the resource file without having to open each one separately.

You can easily open the resource file in text format to view all the resources it contains and complete global operations supported by the text editor.

> [!NOTE]
> The resource editors do not directly read .rc or `resource.h` files. The resource compiler compiles them into .aps files, which are consumed by the resource editors. This file is a compile step and only stores symbolic data. As with a normal compile process, information that is not symbolic (for example, comments) is discarded during the compile process. Whenever the .aps file gets out of synch with the .rc file, the .rc file is regenerated (for example, when you save, the resource editor overwrites the .rc file and the `resource.h` file). Any changes to the resources themselves will remain incorporated in the .rc file, but comments will always be lost once the .rc file is overwritten. For information on how to preserve comments, see [Include resources at compile time](../windows/how-to-include-resources-at-compile-time.md).

To open a resource script file in text format:

1. From the **File** menu select **Open**, then choose **File**.

1. In the **Open File** dialog box, navigate to the resource script file you want to view in text format.

1. Highlight the file, then select the drop-down arrow on the **Open** button (on the right side of the button).

1. Choose **Open With** from the drop-down menu.

1. In the **Open With** dialog box, select **Source Code (Text) Editor**.

1. From the **Open As** drop-down list, select **Text**.

   The resource opens in the **Source Code** editor.

> [!TIP]
> A shortcut is to right-click the .rc file in **Solution Explorer**, choose **Open with...** and select **Source Code (Text) Editor**.

### To add MFC support

Normally, if you build a Microsoft Foundation Class (MFC) application for Windows using the [MFC application wizard](../mfc/reference/mfc-application-wizard.md), the wizard generates a basic set of files (including a resource script (.rc) file) that contains core features of the MFC. However, when editing an .rc file for a Windows application not based on MFC, the following MFC features aren't available:

Some features specific to MFC include MFC code wizards, menu prompt strings, list contents for combo box controls, and ActiveX control hosting.

To add MFC support to a resource script file:

1. Open the resource script file.

1. In [Resource View](../windows/resource-view-window.md), highlight the resources folder (for example, *MFC.rc*).

1. In the [Properties window](/visualstudio/ide/reference/properties-window), set the **MFC Mode** property to **True**.

   > [!NOTE]
   > In addition to setting this property, the .rc file must be part of an MFC project. For example, just setting **MFC Mode** to **True** on an .rc file in a Win32 project won't give you MFC features.

## Create a resource

You can create a resource as a new default resource (a resource that isn't based on a template) or as a resource patterned after a template.

When you create a new resource, Visual C++ assigns a unique name to it, for example, `IDD_Dialog1`. You can customize this resource ID by editing the properties for the resource either in the associated resource editor or in the [Properties Window](/visualstudio/ide/reference/properties-window).

> [!NOTE]
> Don't specify a resource name or ID that is reserved by Visual Studio. Reserved names are DESIGNINFO, HWB, and TEXTINCLUDE, and the reserved ID is 255.

The **Resource View** window displays resource files included in your projects. Expanding the top folder (for example, *Project1.rc*) shows the resource types within that file and expanding each resource type shows the individual resources of that type.

To open the resource view window, select **Resource View** on the **View** menu (or use **Ctrl** + **Shift** + **E**).

> [!TIP]
> Use right-click on the **Resource View** window to launch a shortcut menu of commands or double-click on the title bar to dock or undock the window. Right-clicking the title bar gives additional commands that allow you to control the behavior of the window. For more information, see [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Use the **Add Resource** dialog box to add resources to a C++ Windows desktop application project. This dialog box has the following properties:

|Property|Description|
|--------|-----------|
|**Resource Type**|Specifies the kind of resource you want to create.<br/><br/>You can expand the cursor and dialog box resource categories to reveal additional resources. These resources are located in ...\Microsoft Visual Studio \<version\>\VC\VCResourceTemplates\\<LCID\>\mfc.rct. If you add .rct files, either put them in this directory or specify another [include path](../windows/how-to-specify-include-directories-for-resources.md). The resources in those files then appear at the second level under the appropriate category. There's no preset limit to the number of .rct files you can add.<br/><br/>The resources shown at the top level in the tree control are the default resources that are provided by Visual Studio.|
|**New**|Creates a resource based on the type selected in the **Resource Type** box and opens the resource in the appropriate editor. For example, if you create a dialog resource, it opens in the [dialog editor](../windows/dialog-editor.md).|
|**Import**|Opens the **Import** dialog box where you can navigate to the resource you want to import into your current project. You can import a bitmap, icon, cursor, HTML, sound (.WAV), or custom resource file.|
|**Custom**|Opens the **New Custom Resource** dialog box where you can create a custom resource. Custom resources are only edited in the binary editor.|

Use the **New Custom Resource** dialog box to create a new custom resource in a C++ project. This dialog box has the following property:

|Property|Description|
|--------|-----------|
|**Resource Type**|Provides a text box to enter the name of a custom resource type. Visual C++ automatically capitalizes the name when you exit the **New Custom Resource** dialog box.|

### To create a new resource

There are many ways to create a new resource:

- To create a new resource in **Resource View**, select your .rc file, then select the **Edit** menu and choose **Add Resource**. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

   > [!TIP]
   > You can also right-click the .rc file in **Resource View** and choose **Add Resource** from the shortcut menu.

- To create a new resource in **Solution Explorer**, right-click the project folder and select **Add**, then choose **Add Resource** on the shortcut menu. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

   > [!NOTE]
   > If you don't already have an .rc file in your project, this step will create one. You can then repeat this step to add specific resource types to the new .rc file.

- To create a new resource in [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click your class and choose **Add**. Select **Add Resource** from the shortcut menu and choose the type of resource you'd like to add to your project.

- To create a new resource from the **Project** menu, choose **Add Resource**.

## Use resource templates

A resource template is a customized resource that you've saved as an .rct file. A resource template then serves as a starting point for creating resources. Resource templates save time in developing additional resources or groups of resources that share features, such as standard controls or repeated elements. For example, if you want to include a help button with a company logo icon in several dialog boxes, create a new dialog box template and customize it with the help button and the logo.

After customizing the resource template, save your changes in the template folder (or the location specified in the include path) so that the new resource template will appear under its resource type in the **Add Resource** dialog box. You can now use the new resource template as often as needed.

> [!NOTE]
> The resource editor automatically provides a unique resource ID. You can revise the [resource properties](../windows/changing-the-properties-of-a-resource.md) as needed.

> [!NOTE]
> Place language-specific template files in subdirectories of the main template directory. For example, you can place English-only template files in ..\\<resource template directory\>\1033. Visual Studio searches for new RCT files in \Program Files\Microsoft Visual Studio \<version\>\VC\VCResourceTemplates, in \Program Files\Microsoft Visual Studio \<version>\VC\VCResourceTemplates\\<LCID\> (such as 1033 for English), *or* anywhere on the [include path](../windows/how-to-specify-include-directories-for-resources.md). If you prefer to store your RCT files in another location, for example My Documents, you only need to add this folder to the include path and Visual Studio will find your RCT file.

### To create a resource template

1. In **Solution Explorer**, right-click your project.

1. From the shortcut menu, select **Add**, then choose **Add New Item**.

1. In the **Add New Item** dialog box, in the **Templates:** pane, select **Resource Template File (.rct)**.

1. Provide a name and location for your new .rct file and choose **Open**.

   The new .rct file is added to your project and appears in **Solution Explorer** under the **Resources** folder.

1. Double-click the .rct file to open it in a document window. To add resources, right-click the file in the document window and choose **Add Resource**.

   You can customize these resources and save the .rct file.

### To convert an existing resource file to a template

1. Open the .rc file as a stand-alone file.

1. On the **File** menu, select **Save \<*filename*> As**.

1. Specify a location and choose **OK**.

### To create a new resource from a template

1. In the **Resource View** pane, right-click the .rc file and choose **Add Resource** from the shortcut menu.

1. In the **Add Resource** dialog box, select the plus sign (**+**) next to a resource to expand the resource node and view all templates available for that resource.

1. Double-click the template you want to use.

1. Modify the added resource as needed in its resource editor.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)<br/>
[Working with Resource Files](../windows/working-with-resource-files.md)<br/>