---
description: "Learn more about: Hosting a Windows Form User Control as an MFC Dialog Box"
title: "Hosting a Windows Form User Control as an MFC Dialog Box"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC [C++], Windows Forms support", "Windows Forms [C++], hosting as MFC Dialog", "hosting Windows Forms control [C++]"]
ms.assetid: 0434a9d7-8b14-48e6-ad69-9ba9a684677a
---
# Hosting a Windows Form User Control as an MFC Dialog Box

MFC provides the template class [CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md) so that you can host a Windows Forms user control (<xref:System.Windows.Forms.UserControl>) in a modal or modeless MFC dialog box. `CWinFormsDialog` is derived from the MFC class [CDialog](../mfc/reference/cdialog-class.md), so the dialog box can be launched as modal or modeless.

The process that `CWinFormsDialog` uses to host the user control is the similar to that described in [Hosting a Windows Form User Control in an MFC Dialog Box](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md). However, `CWinFormsDialog` manages the initialization and hosting of the user control so that it does not have to be programmed manually.

For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](https://www.microsoft.com/download/details.aspx?id=2113).

### To create the MFC host application

1. Create an MFC Application project.

   On the **File** menu, select **New**, and then click **Project**. In the **Visual C++** folder, select **MFC Application**.

   In the **Name** box, enter `MFC03` and change the Solution setting to **Add to Solution**.Click **OK**.

   In the **MFC Application Wizard**, accept all the defaults, and then click **Finish**. This creates an MFC application with a Multiple Document Interface.

1. Configure the project.

   In **Solution Explorer**, right-click the **MFC03** project node, and choose **Properties**. The **Property Pages** dialog box appears.

   In the **Property Pages** dialog box, in the **Configuration Properties** tree control, select **General**, then in the **Project Defaults** section, set **Common Language Runtime support** to **Common Language Runtime Support (/clr)**. Click **OK**.

1. Add a reference to the .NET control.

   In **Solution Explorer**, right-click the **MFC03** project node and choose **Add**, **References**. In the **Property Page**, click **Add New Reference**, select WindowsControlLibrary1 (under the **Projects** tab), and click **OK**. This adds a reference in the form of a [/FU](../build/reference/fu-name-forced-hash-using-file.md) compiler option so that the program will compile; it also copies WindowsControlLibrary1.dll into the `MFC03` project directory so that the program will run.

1. Add `#include <afxwinforms.h>` to *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier), at the end of the existing `#include` statements.

1. Add a new class that subclasses `CDialog`.

   Right click on project name and add an MFC class (called CHostForWinForm) that subclasses `CDialog`. Since you do not need the dialog box resource, you can delete the resource ID (select **Resource View**, expand the **Dialog** folder and delete `IDD_HOSTFORWINFORM` resource.  Then, remove any references to the ID in code.).

1. Replace `CDialog` in CHostForWinForm.h and CHostForWinForm.cpp files with `CWinFormsDialog<WindowsControlLibrary1::UserControl1>`.

1. Call DoModal on the CHostForWinForm class.

   In MFC03.cpp, add `#include "HostForWinForm.h"`.

   Before the return statement in the definition of CMFC03App::InitInstance, add:

    ```cpp
    CHostForWinForm m_HostForWinForm;
    m_HostForWinForm.DoModal();
    ```

1. Build and run the project.

   On the **Build** menu, click **Build Solution**.

   On the **Debug** menu, click **Start without debugging**.

   Next you will add code to monitor the state of a control on the Windows Forms from the MFC application.

1. Add a handler for OnInitDialog.

   Display the **Properties** window (F4). In **Class View**, select CHostForWinForm. In the **Properties** window, select overrides and in the row for OnInitDialog, click in the left hand column and select \< Add >. This adds the following line to CHostForWinForm.h:

    ```cpp
    virtual BOOL OnInitDialog();
    ```

1. Define OnInitDialog (in CHostForWinForm.cpp) as follows:

    ```cpp
    BOOL CHostForWinForm::OnInitDialog() {
       CWinFormsDialog<WindowsControlLibrary1::UserControl1>::OnInitDialog();
       GetControl()->button1->Click += MAKE_DELEGATE(System::EventHandler, OnButton1);
       return TRUE;
    }
    ```

1. Next add the OnButton1 handler. Add the following lines to the public section of the CHostForWinForm class in CHostForWinForm.h:

    ```cpp
    virtual void OnButton1( System::Object^ sender, System::EventArgs^ e );

    BEGIN_DELEGATE_MAP( CHostForWinForm )
       EVENT_DELEGATE_ENTRY( OnButton1, System::Object^, System::EventArgs^ );
    END_DELEGATE_MAP()
    ```

   In CHostForWinForm.cpp, add this definition:

    ```cpp
    void CHostForWinForm::OnButton1( System::Object^ sender, System::EventArgs^ e )
    {
       System::Windows::Forms::MessageBox::Show("test");
    }
    ```

1. Build and run the project. When you click the button, which is on the Windows Form, code in the MFC application will run.

    Next you will add code to display from the MFC code the value in the text box on the Windows Form.

1. In the public section of the CHostForWinForm class in CHostForWinForm.h, add the following declaration:

    ```cpp
    CString m_sEditBoxOnWinForm;
    ```

1. In the definition of DoDataExchange in CHostForWinForm.cpp, add the following three lines to the end of the function:

    ```cpp
    if (pDX->m_bSaveAndValidate)
       m_sEditBoxOnWinForm = CString( GetControl()->textBox1->Text);
    else
       GetControl()->textBox1->Text = gcnew System::String(m_sEditBoxOnWinForm);
    ```

1. In the definition of OnButton1 in CHostForWinForm.cpp, add the following three lines to the end of the function:

    ```cpp
    this->UpdateData(TRUE);
    System::String ^ z = gcnew System::String(m_sEditBoxOnWinForm);
    System::Windows::Forms::MessageBox::Show(z);
    ```

1. Build and run the project.

## See also

<xref:System.Windows.Forms.UserControl?displayProperty=fullName>
[Using a Windows Form User Control in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)
