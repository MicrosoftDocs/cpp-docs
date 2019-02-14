---
title: "How to: Manage Resources (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.resvw.resource.copying", "vs.resvw.resource.copying", "vc.resvw.resource.changing", "vb.xmldesigner.data", "vs.resvw.resource.importing", "vc.resvw.resource.importing"]
helpviewer_keywords: ["resources [C++], moving between files", "resources [C++], copying", "resource files [C++], copying or moving resources between", "resource files [C++], tiling", ".rc files [C++], copying resources between", "rc files [C++], copying resources between", "Language property [C++]", ".resx files [C++], editing", "resource files [C++], editing", "resx files [C++], editing", "resources [C++], exporting", "graphics [C++], exporting", "graphics [C++], importing", "resources [C++], importing", "bitmaps [C++], importing and exporting", "toolbars [C++], importing", "images [C++], importing", "toolbars [C++], exporting", "cursors [C++], importing and exporting", "images [C++], exporting"]
ms.assetid: 65f523e8-017f-4fc6-82d1-083c56d9131f
---
# How to: Manage Resources (C++)

## To copy resources

You can copy resources from one file to another without changing them or you can change the language or condition of a resource while copying it.

You can easily copy resources from an existing resource or executable file to your current resource file. To copy resources, you open both files containing resources at the same time and drag items from one file to another or copy and paste between the two files. This method works for resource script (.rc) files and resource template (.rct) files, and as executable (.exe) files.

> [!NOTE]
> Visual C++ includes sample resource files that you can use in your own application. For more information, see [CLIPART: Common Resources](https://github.com/Microsoft/VCSamples).

You can use the drag-and-drop method between .rc files that are open [outside of the project](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

### To copy resources between files using the drag-and-drop method

1. Open both resource files stand-alone (for more information, see [view resources in an .rc file outside of a project](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). For example, open *Source1.rc* and *Source2.rc*.

1. Inside the first .rc file, select the resource you wish to copy. For example, in *Source1.rc*, select **IDD_DIALOG1**.

1. Hold down the **Ctrl** key and drag the resource to the second .rc file. For example, drag **IDD_DIALOG1** from *Source1.rc* to *Source2.rc*.

   > [!NOTE]
   > Dragging the resource without holding down the **Ctrl** key moves the resource rather than copying it.

### To copy resources using copy and paste

1. Open both resource files stand-alone (for more information, see [view resources in an .rc file outside of a project](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). For example, *Source1.rc* and *Source2.rc*.

1. In the source file from which you wish to copy a resource (for example, *Source1.rc*), right-click a resource and choose **Copy** from the shortcut menu.

1. Right-click the resource file into which you'd like to paste the resource (for example, *Source2.rc*). Choose **Paste** from the shortcut menu.

   > [!NOTE]
   > You cannot drag and drop, copy, cut, or paste between resource files in the project (**Resource View**) and stand-alone .rc files (those open in document windows). You could do this in previous versions of the product.

   > [!NOTE]
   > To avoid conflicts with symbol names or values in the existing file, Visual C++ may change the transferred resource's symbol value or symbol name and value when you copy it to the new file.

### To change the language or condition of a resource while copying

While copying in a resource, you can change its language property or condition property, or both.

- The language of the resource identifies just that, the language for the resource. The language is used by [FindResource](/windows/desktop/api/winbase/nf-winbase-findresourcea) to help identify the resource for which you're looking. (However, resources can have differences for each language that aren't related to text, for example, accelerators that might only work on a Japanese keyboard or a bitmap that would only be appropriate for Chinese localized builds.)

- The condition of a resource is a defined symbol that identifies a condition under which this particular copy of the resource is to be used.

The language and condition of a resource are shown in parentheses after the name of the resource in the **Workspace** window. In this example, the resource named `IDD_AboutBox` is using `Finnish` as its language and its condition is `XX33`.

```cpp
IDD_AboutBox (Finnish - XX33)
```

To copy an existing resource and change its language or condition:

1. In the .rc file or in the [Resource View](../windows/resource-view-window.md) window, right-click the resource you want to copy.

1. Choose **Insert Copy** from the shortcut menu and set the following:

   - For the **Language** list box, select the language.

   - In the **Condition** box, type the condition.

## To edit managed resource files

Managed resource files (.resx) are XML files. When you add a managed resource file to your project from the **Add New Item** dialog box, the **Managed Resources Editor** opens by default.

## To import and export resources

You can import graphical resources (bitmaps, icons, cursors, and toolbars), HTML files, and custom resources for use in Visual C++. You can export the same types of files from a Visual C++ project to separate files that can be used outside the development environment.

> [!NOTE]
> Resource types such as accelerators, dialog boxes, and string tables cannot be imported or exported because they are not stand-alone file types.

### To import an individual resource into your current resource file

1. In [Resource View](../windows/resource-view-window.md), right-click the node for the resource script (*.rc) file to which you want to add a resource.

1. Select **Import** on the shortcut menu.

1. Locate and select the file name of the bitmap (.bmp), icon (.ico), cursor (.cur), Html file (.htm), or other file that you want to import.

1. Choose **OK** to add the resource to the selected file in **Resource** view.

   > [!NOTE]
   > The import process works the same way no matter which particular resource type you have selected. The imported resource is automatically added to the correct node for that resource type.

### To export a bitmap, icon, or cursor as a separate file (for use outside of Visual C++)

1. In **Resource** view, right-click the resource you want to export.

1. Select **Export** on the shortcut menu and accept the current file name or type a new one.

1. Navigate to the folder where you want to save the file and choose **Export**.

## Requirements

Win32

## See Also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Create Resources](../windows/how-to-create-a-resource-script-file.md)<br/>
[Include Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md)<br/>