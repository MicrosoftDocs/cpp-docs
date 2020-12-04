---
description: "Learn more about: How to: Sink Windows Forms Events from Native C++ Classes"
title: "How to: Sink Windows Forms Events from Native C++ Classes"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["event handling, managed/native interop", "event handling, sinking .NET in C++", "event handling, .NET/native interop", "event handling, Windows Forms in C++"]
ms.assetid: 6e30ddee-d058-4c8d-9956-2a43d86f19d5
---
# How to: Sink Windows Forms Events from Native C++ Classes

You can enable native C++ classes to receive callbacks from managed events raised from Windows Forms controls or other forms with the MFC macro map format. Sinking events in views and dialogs is similar to doing the same task for controls.

To do this, you need to:

- Attach an `OnClick` event handler to the control using [MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate).

- Create a delegate map using [BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map), [END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map), and [EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry).

This sample continues the work you did in [How to: Do DDX/DDV Data Binding with Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).

Now, you will associate your MFC control (`m_MyControl`) with a managed event handler delegate called `OnClick` for the managed <xref:System.Windows.Forms.Control.Click> event.

### To attach the OnClick event handler:

1. Add the following code to the implementation of BOOL CMFC01Dlg::OnInitDialog:

    ```
    m_MyControl.GetControl()->button1->Click += MAKE_DELEGATE( System::EventHandler, OnClick );
    ```

1. Add the following code to the public section in the declaration of class CMFC01Dlg : public CDialog.

    ```
    // delegate map
    BEGIN_DELEGATE_MAP( CMFC01Dlg )
    EVENT_DELEGATE_ENTRY( OnClick, System::Object^, System::EventArgs^ )
    END_DELEGATE_MAP()

    void OnClick( System::Object^ sender, System::EventArgs^ e );
    ```

1. Finally, add the implementation for `OnClick` to CMFC01Dlg.cpp:

    ```
    void CMFC01Dlg::OnClick(System::Object^ sender, System::EventArgs^ e)
    {
        AfxMessageBox(_T("Button clicked"));
    }
    ```

## See also

[MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate)<br/>
[BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map)<br/>
[END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map)<br/>
[EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry)
