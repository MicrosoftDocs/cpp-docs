---
description: "Learn more about: Hosting a Windows Form User Control in an MFC Dialog Box"
title: "Hosting a Windows Form User Control in an MFC Dialog Box"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC [C++], Windows Forms support", "hosting Windows Forms control [C++]", "Windows Forms [C++], MFC support"]
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
---
# Hosting a Windows Form User Control in an MFC Dialog Box

MFC hosts a Windows Forms control as a special kind of ActiveX control and communicates with the control by using ActiveX interfaces, and properties and methods of the <xref:System.Windows.Forms.Control> class. We recommend that you use .NET Framework properties and methods to operate on the control.

For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](https://www.microsoft.com/download/details.aspx?id=2113).

> [!NOTE]
> In the current release, a `CDialogBar` object cannot host Windows Forms controls.

## In This Section

[How to: Create the User Control and Host in a Dialog Box](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)

[How to: Do DDX/DDV Data Binding with Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)

[How to: Sink Windows Forms Events from Native C++ Classes](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

## Reference

[CWinFormsControl Class](../mfc/reference/cwinformscontrol-class.md) &#124; [CDialog Class](../mfc/reference/cdialog-class.md) &#124; [CWnd Class](../mfc/reference/cwnd-class.md) &#124; <xref:System.Windows.Forms.Control>

## See also

[Using a Windows Form User Control in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Windows Forms/MFC Programming Differences](../dotnet/windows-forms-mfc-programming-differences.md)<br/>
[Hosting a Windows Forms User Control as an MFC View](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Hosting a Windows Form User Control as an MFC Dialog Box](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)
