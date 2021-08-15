---
description: "Learn more about: How to: Create the User Control and Host MDI View"
title: "How to: Create the User Control and Host MDI View"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC [C++], Windows Forms Controls", "Windows Forms [C++], MFC support"]
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
---
# How to: Create the User Control and Host MDI View

The following steps show how to create a .NET Framework user control, author the user control in a control class library (specifically, a Windows Control Library project), and then compile the project into an assembly. The control can then be consumed from an MFC application that uses classes derived from [CView Class](../mfc/reference/cview-class.md) and [CWinFormsView Class](../mfc/reference/cwinformsview-class.md).

For information about how to create a Windows Forms user control and author a control class library, see [How to: Author User Controls](/dotnet/framework/winforms/controls/how-to-author-composite-controls).

> [!NOTE]
> In some cases, Windows Forms controls, such as a third-party Grid control, might not behave reliably when hosted in an MFC application. A recommended workaround is to place a Windows Forms User Control in the MFC application and place the third-party Grid control inside the User control.

This procedure assumes that you created a Windows Forms Controls Library project named WindowsFormsControlLibrary1, as per the procedure in [How to: Create the User Control and Host in a Dialog Box](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

### To create the MFC host application

1. Create an MFC Application project.

   On the **File** menu, select **New**, and then click **Project**. In the **Visual C++** folder, select **MFC Application**.

   In the **Name** box, enter `MFC02` and change the **Solution** setting to **Add to Solution**. Click **OK**.

   In the **MFC Application Wizard**, accept all the defaults, and then click **Finish**. This creates an MFC application with a Multiple Document Interface.

1. Configure the project for Common Language Runtime (CLR) support.

   In **Solution Explorer**, right-click the `MFC01` project node, and select **Properties** from the context menu. The **Property Pages** dialog box appears.

   Under **Configuration Properties**, select **General**. Under the **Project Defaults** section, set **Common Language Runtime support** to **Common Language Runtime Support (/clr)**.

   Under **Configuration Properties**, expand **C/C++** and click the **General** node. Set **Debug Information Format** to **Program Database (/Zi)**.

   Click the **Code Generation** node. Set **Enable Minimal Rebuild** to **No (/Gm-)**. Also set **Basic Runtime Checks** to **Default**.

   Click **OK** to apply your changes.

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier), add the following line:

    ```
    #using <System.Windows.Forms.dll>
    ```

1. Add a reference to the .NET control.

   In **Solution Explorer**, right-click the `MFC02` project node and select **Add**, **References**. In the **Property Page**, click **Add New Reference**, select WindowsFormsControlLibrary1 (under the **Projects** tab), and click **OK**. This adds a reference in the form of a [/FU](../build/reference/fu-name-forced-hash-using-file.md) compiler option so that the program will compile; it also copies WindowsFormsControlLibrary1.dll into the `MFC02` project directory so that the program will run.

1. In stdafx.h, find this line:

    ```
    #endif // _AFX_NO_AFXCMN_SUPPORT
    ```

   Add these lines above it:

    ```
    #include <afxwinforms.h>   // MFC Windows Forms support
    ```

1. Modify the view class so that it inherits from [CWinFormsView](../mfc/reference/cwinformsview-class.md).

   In MFC02View.h, replace [CView](../mfc/reference/cview-class.md) with [CWinFormsView](../mfc/reference/cwinformsview-class.md) so that the code appears as follows:

    ```
    class CMFC02View : public CWinFormsView
    {
    };
    ```

   If you want add additional views to your MDI application, you will need to call [CWinApp::AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate) for each view you create.

1. Modify the MFC02View.cpp file to change CView to CWinFormsView in the IMPLEMENT_DYNCREATE macro and message map and replace the existing empty constructor with the constructor shown below:

    ```
    IMPLEMENT_DYNCREATE(CMFC02View, CWinFormsView)

    CMFC02View::CMFC02View(): CWinFormsView(WindowsFormsControlLibrary1::UserControl1::typeid)
    {
    }
    BEGIN_MESSAGE_MAP(CMFC02View, CWinFormsView)
    //leave existing body as is
    END_MESSAGE_MAP()
    ```

1. Build and run the project.

   In **Solution Explorer**, right-click MFC02 and select **Set as StartUp Project**.

   On the **Build** menu, click **Build Solution**.

   On the **Debug** menu, click **Start without debugging**.

## See also

[Hosting a Windows Forms User Control as an MFC View](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)
