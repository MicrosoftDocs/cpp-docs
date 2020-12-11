---
description: "Learn more about: How to: Manage Resources (C++)"
title: "How to: Manage Resources (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.resvw.resource.copying", "vs.resvw.resource.copying", "vc.resvw.resource.changing", "vb.xmldesigner.data", "vs.resvw.resource.importing", "vc.resvw.resource.importing"]
helpviewer_keywords: ["resources [C++], moving between files", "resources [C++], copying", "resource files [C++], copying or moving resources between", "resource files [C++], tiling", ".rc files [C++], copying resources between", "rc files [C++], copying resources between", "Language property [C++]", ".resx files [C++], editing", "resource files [C++], editing", "resx files [C++], editing", "resources [C++], exporting", "graphics [C++], exporting", "graphics [C++], importing", "resources [C++], importing", "bitmaps [C++], importing and exporting", "toolbars [C++], importing", "images [C++], importing", "toolbars [C++], exporting", "cursors [C++], importing and exporting", "images [C++], exporting"]
ms.assetid: 65f523e8-017f-4fc6-82d1-083c56d9131f
---
# How to: Manage Resources (C++)

## Copy and Edit Resources

You can copy resources from one file to another without changing them, or changing the language or condition of a resource while copying it.

You can easily copy resources from an existing resource or executable file to your current resource file. To copy resources, you open both files containing resources at the same time and drag items from one file to another or copy and paste between the two files. This method works for resource script (.rc) files and resource template (.rct) files, and as executable (.exe) files.

> [!NOTE]
> Visual C++ includes sample resource files that you can use in your own application. For more information, see [CLIPART: Common Resources](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/general).

You can't drag and drop, copy, cut, or paste between resource files in the project (**Resource View**) and stand-alone .rc files open in document windows. You could do this in previous versions of the product. Only use the drag-and-drop method between .rc files that are open outside of the project.

### To copy resources

1. Open both resource files stand-alone. (See [Use resource script files](how-to-create-a-resource-script-file.md#use-resource-script-files)). For example, open *Source1.rc* and *Source2.rc*.

1. Inside the first .rc file, either:

   - Use the drag-and-drop method

      1. Select the resource you wish to copy. For example, in *Source1.rc*, select **IDD_DIALOG1**.

      1. Hold down the **Ctrl** key and drag the resource to the second .rc file. For example, drag **IDD_DIALOG1** from *Source1.rc* to *Source2.rc*.

         > [!TIP]
         > Dragging the resource without holding down the **Ctrl** key moves the resource rather than copying it.

   - Use the copy and paste method

      1. Right-click the resource you with to copy (for example, *Source1.rc*) and choose **Copy**.

      1. Right-click the resource file into which you'd like to paste the resource (for example, *Source2.rc*) and choose **Paste**.

> [!NOTE]
> To avoid conflicts with symbol names or values in the existing file, Visual C++ may change the transferred resource's symbol value or symbol name and value when you copy it to the new file.

While copying in a resource, you can change its language property or condition property, or both.

- The language of a resource specifies the language used by [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcea) to help identify the resource for which you're looking. Resources can have differences for each language that aren't related to text, for example, accelerators that might only work on a Japanese keyboard or a bitmap that would only be appropriate for Chinese localized builds.

- The condition of a resource is a defined symbol that identifies a condition under which this particular copy of the resource is to be used.

The language and condition of a resource are shown in parentheses after the name of the resource in the **Workspace** window. Here the resource named `IDD_AboutBox` is using `Finnish` as its language and its condition is `XX33`:

```cpp
IDD_AboutBox (Finnish - XX33)
```

### To copy an existing resource and change its language or condition

In the *.rc* file or in the [Resource View](how-to-create-a-resource-script-file.md#create-resources) window, right-click the resource you want to copy and choose **Insert Copy**. Then set the following:

- For the **Language** list box, select the language.

- In the **Condition** box, type the condition.

### To edit resources

Managed resource (.resx) files are XML files. When you add a managed resource file to your project from the **Add New Item** dialog box, the **Managed Resources Editor** opens by default.

## Import and Export Resources

You can import graphical resources (bitmaps, icons, cursors, and toolbars), HTML files, and custom resources for use in Visual C++. You can export the same types of files from a Visual Studio C++ project to separate files that can be used outside the development environment.

> [!NOTE]
> Resource types such as accelerators, dialog boxes, and string tables can't be imported or exported because they're not stand-alone file types.

### To import a resource into the resource script file

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources) right-click the node of the resource script (.rc) file to which you want to add a resource and select **Import**.

1. Locate and choose the file name of the bitmap (.bmp), icon (.ico), cursor (.cur), html file (.htm), or other file to import.

1. Select **OK** to add the resource to the resource script file.

> [!NOTE]
> The import process works the same no matter which resource type you have selected. The imported resource is automatically added to the correct node of that resource type.

### To export a resource for use outside of Visual C++

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click the resource you want to export and select **Export**. You can accept the current file name or type a new one.

1. Navigate to the folder where you want to save the file and select **Export**.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[How to: Create Resources](../windows/how-to-create-a-resource-script-file.md)<br/>
[How to: Include Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md)
