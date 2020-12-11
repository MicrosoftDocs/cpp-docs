---
description: "Learn more about: How to: Call Properties and Methods of the Windows Forms Control"
title: "How to: Call Properties and Methods of the Windows Forms Control"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["method calls, Windows Forms", "calling methods, Windows Forms control", "calling properties, Windows Forms control", "Windows Forms controls [C++], methods", "calling properties", "Windows Forms controls [C++], properties"]
ms.assetid: 6e647d8a-fdaa-4aa1-b3fe-04f15cff8eb3
---
# How to: Call Properties and Methods of the Windows Forms Control

Because [CWinFormsView::GetControl](../mfc/reference/cwinformsview-class.md#getcontrol) returns a pointer to <xref:System.Windows.Forms.Control?displayProperty=fullName>, and not a pointer to `WindowsControlLibrary1::UserControl1`, it is advisable to add a member of the user control type and initialize it in [IView::OnInitialUpdate](../mfc/reference/iview-interface.md#oninitialupdate). Now you can call methods and properties using `m_ViewControl`.

This topic assumes you have previously completed [How to: Create the User Control and Host in a Dialog Box](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) and [How to: Create the User Control and Host MDI View](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

### To create the MFC host application

1. Open the MFC application you created in [How to: Create the User Control and Host MDI View](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

1. Add the following line to the public overrides section of the `CMFC02View` class declaration in MFC02View.h.

   `gcroot<WindowsFormsControlLibrary1::UserControl1 ^> m_ViewControl;`

1. Add an override for OnInitialupdate.

   Display the **Properties** window (F4). In **Class View** (CTRL+SHIFT+C), select CMFC02View class. In the **Properties** window, select the icon for Overrides. Scoll down the list to OnInitialUpdate. Click on the drop down list and select \<Add>. In MFC02View.cpp. make sure the body of the OnInitialUpdate function is as follows:

    ```
    CWinFormsView::OnInitialUpdate();
    m_ViewControl = safe_cast<WindowsFormsControlLibrary1::UserControl1 ^>(this->GetControl());
    m_ViewControl->textBox1->Text = gcnew System::String("hi");
    ```

1. Build and run the project.

   On the **Build** menu, click **Build Solution**.

   On the **Debug** menu, click **Start without debugging**.

   Notice that the text box is now initialized.

## See also

[Hosting a Windows Forms User Control as an MFC View](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)
