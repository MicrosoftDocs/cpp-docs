---
title: "How to: Sink Windows Forms Events from Native C++ Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, managed/native interop"
  - "event handling, sinking .NET in C++"
  - "event handling, .NET/native interop"
  - "event handling, Windows Forms in C++"
ms.assetid: 6e30ddee-d058-4c8d-9956-2a43d86f19d5
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Sink Windows Forms Events from Native C++ Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Sink Windows Forms Events from Native C++ Classes](https://docs.microsoft.com/cpp/dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes).  
  
  
You can enable native C++ classes to receive callbacks from managed events raised from Windows Forms controls or other forms with the MFC macro map format. Sinking events in views and dialogs is similar to doing the same task for controls.  
  
 To do this, you need to:  
  
-   Attach an `OnClick` event handler to the control using [MAKE_DELEGATE](http://msdn.microsoft.com/library/acc07fd2-4ea7-4c56-8d2c-73175524caeb).  
  
-   Create a delegate map using [BEGIN_DELEGATE_MAP](http://msdn.microsoft.com/library/cdf4341f-1c71-40bb-abc8-fc2c35b8247d), [END_DELEGATE_MAP](http://msdn.microsoft.com/library/23992653-a52a-4c76-b1f8-8e67daae75da), and [EVENT_DELEGATE_ENTRY](http://msdn.microsoft.com/library/17539da5-bad7-43ff-8a54-6ea3dc564965).  
  
 This sample continues the work you did in [How to: Do DDX/DDV Data Binding with Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).  
  
 Now, you will associate your MFC control (`m_MyControl`) with a managed event handler delegate called `OnClick` for the managed <xref:System.Windows.Forms.Control.Click> event.  
  
### To attach the OnClick event handler:  
  
1.  Add the following code to the implementation of BOOL CMFC01Dlg::OnInitDialog:  
  
    ```  
    m_MyControl.GetControl()->button1->Click += MAKE_DELEGATE( System::EventHandler, OnClick );  
    ```  
  
2.  Add the following code to the public section in the declaration of class CMFC01Dlg : public CDialog.  
  
    ```  
    // delegate map  
    BEGIN_DELEGATE_MAP( CMFC01Dlg )  
    EVENT_DELEGATE_ENTRY( OnClick, System::Object^, System::EventArgs^ )  
    END_DELEGATE_MAP()  
  
    void OnClick( System::Object^ sender, System::EventArgs^ e );  
    ```  
  
3.  Finally, add the implementation for `OnClick` to CMFC01Dlg.cpp:  
  
    ```  
    void CMFC01Dlg::OnClick(System::Object^ sender, System::EventArgs^ e)  
    {  
        AfxMessageBox(_T("Button clicked"));  
    }  
    ```  
  
## See Also  
 [MAKE_DELEGATE](http://msdn.microsoft.com/library/acc07fd2-4ea7-4c56-8d2c-73175524caeb)   
 [BEGIN_DELEGATE_MAP](http://msdn.microsoft.com/library/cdf4341f-1c71-40bb-abc8-fc2c35b8247d)   
 [END_DELEGATE_MAP](http://msdn.microsoft.com/library/23992653-a52a-4c76-b1f8-8e67daae75da)   
 [EVENT_DELEGATE_ENTRY](http://msdn.microsoft.com/library/17539da5-bad7-43ff-8a54-6ea3dc564965)

