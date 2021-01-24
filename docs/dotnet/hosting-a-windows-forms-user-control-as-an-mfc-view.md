---
description: "Learn more about: Hosting a Windows Forms User Control as an MFC View"
title: "Hosting a Windows Forms User Control as an MFC View"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC [C++], Windows Forms support", "Windows Forms controls [C++], hosting as an MFC view", "hosting Windows Forms control [C++]"]
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
---
# Hosting a Windows Forms User Control as an MFC View

MFC uses the CWinFormsView class to host a Windows Forms user control in an MFC view. MFC Windows Forms views are ActiveX controls. The user control is hosted as a child of the native view and occupies the entire client area of the native view.

The end result resembles the model used by the [CFormView Class](../mfc/reference/cformview-class.md). This lets you take advantage of the Windows Forms designer and runtime to create rich form-based views.

Because MFC Windows Forms views are ActiveX controls, they do not have the same `hwnd` as MFC views. Also they cannot be passed as a pointer to a [CView](../mfc/reference/cview-class.md) view. In general, use .NET Framework methods to work with Windows Forms views and rely less on Win32.

For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](https://www.microsoft.com/download/details.aspx?id=2113).

## In This Section

[How to: Create the User Control and Host MDI View](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)

[How to: Add Command Routing to the Windows Forms Control](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

[How to: Call Properties and Methods of the Windows Forms Control](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)

## See also

[Using a Windows Form User Control in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[How to: Author Composite Controls](/dotnet/framework/winforms/controls/how-to-author-composite-controls)
