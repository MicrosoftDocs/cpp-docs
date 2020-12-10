---
description: "Learn more about: Walkthrough: Using the New MFC Shell Controls"
title: "Walkthrough: Using the New MFC Shell Controls"
ms.date: "04/25/2019"
helpviewer_keywords: ["shell controls (MFC)"]
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
---
# Walkthrough: Using the New MFC Shell Controls

In this walkthrough, you'll create an application that resembles File Explorer. You'll create a window that has two panes. The left pane will hold a [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) object that displays your Desktop in a hierarchical view. The right pane will hold a [CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) that shows the files in the folder that is selected in the left pane.

## Prerequisites

- In Visual Studio 2017 and later, MFC support is an optional component. To install it, open the Visual Studio Installer from the Windows Start menu. Find the version of Visual Studio you are using and choose the **Modify** button. Make sure the **Desktop Development with C++** tile is checked. Under **Optional Components**, check the **MFC Support** button.

- This walkthrough assumes that you have set up Visual Studio to use **General Development Settings**. If you're using a different development setting, some Visual Studio windows that we use in this walkthrough might not be displayed by default.

## To create a new MFC application by using the MFC Application Wizard

These steps vary depending on which version of Visual Studio you are using. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker range="msvc-160"

### To create an MFC project in Visual Studio 2019

1. From the main menu, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. In the search box at the top, type **MFC** and then choose **MFC App** from the results list.

1. Click **Next**. In the next page, enter a name for the project, and specify the project location if desired.

1. Choose the **Create** button to create the project.

   After **MFC Application Wizard** displays, use the following options:

   1. Choose **Application Type** on the left. Then select **Single document** and select **Document/View architecture support**. Under **Project style**, select **Visual Studio**, and from the **Visual style and colors** drop down list select **Office 2007 (Blue theme)**.

   1. On the **Compound Document Support** pane, select **None**.

   1. Don't make any changes to the **Document Template Properties** pane.

   1. On the **User Interface Features** pane, make sure the **Use a menu bar and toolbar** option is selected. Leave all other options as they are.

   1. On the **Advanced Features** pane, select **ActiveX controls**, **Common Control Manifest**, and **Navigation pane** option. Leave everything else as it is. The **Navigation Pane** option will cause the wizard to create the pane to the left of the window with a `CMFCShellTreeCtrl` already embedded.

   1. We aren't going to make any changes to the **Generated Classes** pane, so click **Finish** to create your new MFC project.

::: moniker-end

::: moniker range="<=msvc-150"

### To create an MFC project in Visual Studio 2017 or earlier

1. Use the **MFC Application Wizard** to create a new MFC application. To run the wizard, from the **File** menu select **New**, and then select **Project**. The **New Project** dialog box will be displayed.

1. In the **New Project** dialog box, expand the **Visual C++** node in the **Project types** pane and select **MFC**. Then, in the **Templates** pane, select **MFC Application**. Type a name for the project, such as `MFCShellControls` and click **OK**.

   After **MFC Application Wizard** displays, use the following options:

   1. On the **Application Type** pane, under **Application type**, clear the **Tabbed documents** option. Next, select **Single document** and select **Document/View architecture support**. Under **Project style**, select **Visual Studio**, and from the **Visual style and colors** drop down list select **Office 2007 (Blue theme)**.

   1. On the **Compound Document Support** pane, select **None**.

   1. Don't make any changes to the **Document Template Strings** pane.

   1. On the **Database Support** pane (Visual Studio 2015 and older), select **None** because the application doesn't use a database.

   1. On the **User Interface Features** pane, make sure the **Use a menu bar and toolbar** option is selected. Leave all other options as they are.

   1. On the **Advanced Features** pane, under **Advanced features**, select only **ActiveX controls** and **Common Control Manifest**. Under **Advanced frame panes**, select only the **Navigation pane** option. It will cause the wizard to create the pane to the left of the window with a `CMFCShellTreeCtrl` already embedded.

   1. We aren't going to make any changes to the **Generated Classes** pane, so click **Finish** to create your new MFC project.

::: moniker-end

Verify that the application was created successfully by building and running it. To build the application, from the **Build** menu select **Build Solution**. If the application builds successfully, run the application by selecting **Start Debugging** from the **Debug** menu.

The wizard automatically creates an application that has a standard menu bar, a standard toolbar, a standard status bar, and an Outlook bar to the left of the window with a **Folders** view and a **Calendar** view.

### To add the shell list control to the document view

1. In this section, you'll add an instance of `CMFCShellListCtrl` to the view that the wizard created. Open the view header file by double-clicking **MFCShellControlsView.h** in the **Solution Explorer**.

   Locate the `#pragma once` directive near the top of the header file. Immediately underneath it add this code to include the header file for `CMFCShellListCtrl`:

   ```cpp
   #include <afxShellListCtrl.h>
   ```

   Now add a member variable of type `CMFCShellListCtrl`. First, locate the following comment in the header file:

   ```cpp
   // Generated message map functions
   ```

   Immediately above that comment, add this code:

   ```cpp
   private:
   CMFCShellListCtrl m_wndList;
   ```

1. The **MFC Application Wizard** already created a `CMFCShellTreeCtrl` object in the `CMainFrame` class, but it's a protected member. We'll access the object later, so create an accessor for it now. Open the MainFrm.h header file by double-clicking it in the **Solution Explorer**. Locate the following comment:

   ```cpp
   // Attributes
   ```

   Immediately under it, add the following method declaration:

   ```cpp
   public:
       CMFCShellTreeCtrl& GetShellTreeCtrl();
   ```

   Next, open the MainFrm.cpp source file by double-clicking it in the **Solution Explorer**. At the bottom of that file, add the following method definition:

   ```cpp
   CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()
   {
        return m_wndTree;
   }
   ```

1. Now we update the `CMFCShellControlsView` class to handle the `WM_CREATE` windows message. Open the **Class View** window and select the `CMFCShellControlsView` class. Right-click and select **Properties**.

   Next, in [Class Wizard](reference/mfc-class-wizard.md), click the **Messages** tab. Scroll down until you find the `WM_CREATE` message. From the drop-down list next to `WM_CREATE`, select **\<Add> OnCreate**. The command creates a message handler for us and automatically updates the MFC message map.

   In the `OnCreate` method, we'll now create our `CMFCShellListCtrl` object. Find the `OnCreate` method definition in the MFCShellControlsView.cpp source file, and replace its implementation with the following code:

    ```cpp
    int CMFCShellControlsView::OnCreate(LPCREATESTRUCT lpCreateStruct)
    {
        if (CView::OnCreate(lpCreateStruct) == -1)
            return -1;

        CRect rectDummy (0, 0, 0, 0);

        m_wndList.Create(WS_CHILD | WS_VISIBLE | LVS_REPORT,
            rectDummy, this, 1);

        return 0;
    }
    ```

1. Repeat the previous step but for the `WM_SIZE` message. It will cause your applications view to be redrawn whenever a user changes the size of the application window. Replace the definition for the `OnSize` method with the following code:

    ```cpp
    void CMFCShellControlsView::OnSize(UINT nType, int cx, int cy)
    {
        CView::OnSize(nType, cx, cy);

        m_wndList.SetWindowPos(NULL, -1, -1, cx, cy,
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }
    ```

1. The last step is to connect the `CMFCShellTreeCtrl` and `CMFCShellListCtrl` objects by using the [CMFCShellTreeCtrl::SetRelatedList](../mfc/reference/cmfcshelltreectrl-class.md#setrelatedlist) method. After you call `CMFCShellTreeCtrl::SetRelatedList`, the `CMFCShellListCtrl` will automatically display the contents of the item selected in the `CMFCShellTreeCtrl`. We connect the objects in the `OnActivateView` method, which is overridden from [CView::OnActivateView](../mfc/reference/cview-class.md#onactivateview).

   In the MFCShellControlsView.h header file, inside the `CMFCShellControlsView` class declaration, add the following method declaration:

    ```cpp
    protected:
    virtual void OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView);
    ```

   Next, add the definition for the method to the MFCShellControlsView.cpp source file:

    ```cpp
    void CMFCShellControlsView::OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView)
    {
        if (bActivate&& AfxGetMainWnd() != NULL)
        {
            ((CMainFrame*)AfxGetMainWnd())->GetShellTreeCtrl().SetRelatedList(&m_wndList);
        }

        CView::OnActivateView(bActivate,
            pActivateView,
            pDeactiveView);
    }
    ```

   Because we're calling methods from the `CMainFrame` class, we must add an `#include` directive at the top of the MFCShellControlsView.cpp source file:

    ```cpp
    #include "MainFrm.h"
    ```

1. Verify that the application was created successfully by building and running it. To build the application, from the **Build** menu select **Build Solution**. If the application builds successfully, run it by selecting **Start Debugging** from the **Debug** menu.

   You should now see the details for the item selected in the `CMFCShellTreeCtrl` in the view pane. When you click a node in the `CMFCShellTreeCtrl`, the `CMFCShellListCtrl` will be automatically updated. Likewise, if you double-click a folder in the `CMFCShellListCtrl`, the `CMFCShellTreeCtrl` should be automatically updated.

   Right-click any item in the tree control or in the list control. You get the same context menu as if you were using the real **File Explorer**.

## Next steps

- The wizard created an Outlook bar with both a **Folders** pane and a **Calendar** pane. It probably doesn't make sense to have a **Calendar** pane in an **Explorer** window, so remove that pane now.

- The `CMFCShellListCtrl` supports viewing files in different modes, such as **Large Icons**, **Small Icons**, **List**, and **Details**. Update your application to implement this functionality. Hint: see [Visual C++ Samples](../overview/visual-cpp-samples.md).

## See also

[Walkthroughs](../mfc/walkthroughs-mfc.md)
