---
description: "Learn more about: TN023: Standard MFC Resources"
title: "TN023: Standard MFC Resources"
ms.date: "11/04/2016"
helpviewer_keywords: ["resources [MFC]", "TN023", "standard resources"]
ms.assetid: 60af8415-c576-4c2f-a711-ca5da0b9a1f2
---
# TN023: Standard MFC Resources

This note describes the standard resources provided with and needed by the MFC library.

## Standard Resources

MFC offers two categories of predefined resources that you can use in your application: clip-art resources and standard framework resources.

Clip-art resources are additional resources that the framework does not depend on, but which you might want to add to your application's user interface. The following clip-art resources are contained in the MFC General sample [CLIPART](../overview/visual-cpp-samples.md):

- Common.rc: A single file of resources that contains:

  - A large collection of icons that represent a variety of business and data-processing tasks.

  - Several common cursors (see also Afxres.rc).

  - A toolbar bitmap that contains several toolbar buttons.

  - The bitmap and icon resources that are used by Commdlg.dll.

- Indicate.rc: Contains string resources for the status-bar key-state indicators, such as "CAP" for Caps Lock.

- Prompts.rc: Contains menu-prompt string resources for each predefined command, such as "Create a new document" for ID_FILE_NEW.

- Commdlg.rc: A Visual C++ compatible .rc file that contains the standard COMMDLG dialog templates.

Standard framework resources are resources with AFX-defined IDs that the framework depends on for internal implementations. You will rarely need to change these AFX-defined resources. If you do, you should follow the procedure outlined later in this topic.

The following framework resources are contained in the MFC\INCLUDE directory:

- Afxres.rc: Common resources used by the framework.

- Afxprint.rc: Resources specific to printing.

- Afxolecl.rc: Resources specific to OLE client applications.

- Afxolev.rc: Resources specific to full OLE server applications.

## Using Clip-Art Resources

#### To use a clip-art binary resource

1. Open your application's resource file in Visual C++.

1. Open Common.rc. This file contains all the binary clip-art resources. This may take some time because the Common.rc file is compiled.

1. Hold down CTRL while you drag the resources that you want to use from Common.rc to your application's resource file.

To use other clip-art resources, follow the same steps. The only difference is that you will open the appropriate .rc file instead of Common.rc.

> [!NOTE]
> Be careful not to unintentionally move resources out of Common.rc permanently. If you hold the CTRL key while you drag resources, you will create a copy. If you do not hold CTRL down while you drag, the resources will be moved. If you are concerned that you might have accidentally made changes to the Common.rc file, click "No" when you are asked whether to save the changes to Common.rc.

> [!NOTE]
> The .rc resource files have a special TEXTINCLUDE resource in them that will prevent you from accidentally saving on top of the standard .rc files.

### Customizing Standard Framework Resources

Standard framework resources are usually included in an application by using the #include command in an application's resource file. AppWizard will generate a resource file. This file includes the appropriate standard framework resources, depending on which AppWizard options you select. You can review, add, or remove which resources are included by changing the compile-time directives. To do this, open the **Resource** menu and select **Set Includes**. Look at the "Compile-Time Directives" edit item. For example:

```
#include "afxres.rc"
#include "afxprint.rc"
```

The most common case of customizing standard framework resources is adding or removing additional includes for printing, OLE Client, and OLE Server support.

In some rare cases you might want to customize the contents of the standard framework resources for your particular application, not just add and remove the entire file. The followings steps show how you can limit the resources that are included:

##### To customize the contents of a standard resource file

1. Open the resource file in Visual C++.

1. Using the Resource Set Includes command, remove the `#include` for the standard .rc file that you want to customize. For example, to customize the print-preview toolbar, remove the `#include "afxprint.rc"` line.

1. Open the appropriate standard resources files in MFC\INCLUDE. Following the example earlier in this topic, the appropriate file is MFC\Include\Aafxprint.rc

1. Copy all the resources from the standard .rc file to your application resource file.

1. Modify the copy of the standard resources in your application resource file.

> [!NOTE]
> Do not modify the resources directly in the standard .rc files. Doing so will modify the resources available in every application, not just in the one you are currently working on.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
