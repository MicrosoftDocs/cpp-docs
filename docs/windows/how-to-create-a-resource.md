---
title: "How to: Create a Resource (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vs.resourceview.F1", "vc.editors.insertresource", "vc.editors.newcustomresource"]
helpviewer_keywords: ["toolbars [C++], resources", "resource toolbars", "resources [C++], creating", "resources [C++], viewing", "Resource View window", "resources [C++], adding", "Add Resource dialog box [C++]", "Custom Resource Type dialog box [C++]"]
ms.assetid: aad44914-9145-45a3-a7d8-9de89b366716
---
# How to: Create a Resource (C++)

The **Resource View** window displays the resource files included in your projects. Expanding the top folder (for example, Project1.rc) shows the resource types within that .rc file. Expanding each resource type shows the individual resources of that type.

> [!NOTE]
> This information does not apply to resources in Universal Windows Platform apps. For more information about that, see [App resources and the Resource Management System](/windows/uwp/app-resources/).

> [!NOTE]
> **Resource View** is not supported in Express editions.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

> [!NOTE]
> If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

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

## To open the resource view window

Select **Resource View** on the **View** menu.

   \- or -

Press **Ctrl** + **Shift** + **E**.

> [!TIP]
> You can right-click on the **Resource View** window to launch a shortcut menu of commands. You can also double-click on the title bar to dock or undock the window. Right-clicking on the title bar will give you additional commands that allow you to control the behavior of the window. For more information, see [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

## To create a new resource in Resource View

1. With focus on your .rc file in **Resource View**, select the **Edit** menu and choose **Add Resource** (or right-click the .rc file in **Resource View** and choose **Add Resource** from the shortcut menu).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

## To create a new resource in Solution Explorer

1. In **Solution Explorer**, right-click the project folder and choose **Add**, then click **Add Resource** on the shortcut menu.

   If you don't already have an .rc file in your project, this step will create one. You can then repeat this step to add specific resource types to the new .rc file.

2. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

## To create a new resource in Class View

1. In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click your class and choose **Add**, then select **Add Resource** from the shortcut menu.

2. In the **Add Resource** dialog box, choose the type of resource you'd like to add to your project.

## To create a new resource from the Project menu

From the **Project** menu, choose **Add Resource**.

## Requirements

Win32

## See also

- [Working with Resource Files](../windows/working-with-resource-files.md)
- [Resource Files](../windows/resource-files-visual-studio.md)
- [Resource Editors](../windows/resource-editors.md)
