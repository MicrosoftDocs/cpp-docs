---
title: "Walkthrough: Using the New MFC Shell Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shell controls (MFC)"
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Walkthrough: Using the New MFC Shell Controls
In this walkthrough, you will create an application that resembles File Explorer. You will create a window that contains two panes. The left pane will contain a [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) object that displays your Desktop in a hierarchical view. The right pane will contain a [CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) that shows the files in the folder that is selected in the left pane.  
  
## Prerequisites  
 This walkthrough assumes that you have set up [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] to use **General Development Settings**. If you are using a different development setting, some [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] windows that we use in this walkthrough might not be displayed by default.  
  
### To create a new MFC application by using the MFC Application Wizard  
  
1.  Use the **MFC Application Wizard** to create a new MFC application. To run the wizard, from the **File** menu select **New**, and then select **Project**. The **New Project** dialog box will be displayed.  
  
2.  In the **New Project** dialog box, expand the **Visual C++** node in the **Project types** pane and select **MFC**. Then, in the **Templates** pane, select **MFC Application**. Type a name for the project, such as `MFCShellControls` and click **OK**. The **MFC Application Wizard** will be displayed.  
  
3.  In the **MFC Application Wizard** dialog box, click **Next**. The **Application Type** pane will be displayed.  
  
4.  On the **Application Type** pane, under **Application type**, clear the **Tabbed documents** option. Next, select **Single document** and select **Document/View architecture support**. Under **Project style**, select **Visual Studio**, and from the **Visual style and colors** drop down list select **Office 2007 (Blue theme)**. Leave all other options as they are. Click **Next** to display the **Compound Document Support** pane.  
  
5.  On the **Compound Document Support** pane, select **None**. Click **Next** to display the **Document Template Strings** pane.  
  
6.  Do not make any changes to the **Document Template Strings** pane. Click **Next** to display the **Database Support** pane.  
  
7.  On the **Database Support** pane, select **None** because this application does not use a database. Click **Next** to display the **User Interface Features** pane.  
  
8.  On the **User Interface Features** pane, make sure that the **Use a menu bar and toolbar** option is selected. Leave all other options as they are. Click **Next** to display the **Advanced Features** pane.  
  
9. On the **Advanced Features** pane, under **Advanced features**, select only **ActiveX controls** and **Common Control Manifest**. Under **Advanced frame panes**, select only the **Navigation pane** option. This will cause the wizard to create the pane to the left of the window with a `CMFCShellTreeCtrl` already embedded. Click **Next** to display the **Generated Classes** pane.  
  
10. We are not going to make any changes to the **Generated Classes** pane. Therefore, click **Finish** to create your new MFC project.  
  
11. Verify that the application was created successfully by building and running it. To build the application, from the **Build** menu select **Build Solution**. If the application builds successfully, run the application by selecting **Start Debugging** from the **Debug** menu.  
  
     The wizard automatically creates an application that has a standard menu bar, a standard toolbar, a standard status bar, and an Outlook bar to the left of the window with a **Folders** view and a **Calendar** view.  
  
### To add the shell list control to the document view  
  
1.  In this section, you will add an instance of `CMFCShellListCtrl` to the view that the wizard created. Open the view header file by double-clicking MFCShellControlsView.h in the **Solution Explorer**.  
  
     Locate the `#pragma once` directive near the top of the header file. Immediately underneath it add this code to include the header file for `CMFCShellListCtrl`:  
  
 ```  
    #include <afxShellListCtrl.h>  
 ```  
  
     Now add a member variable of type `CMFCShellListCtrl`. First, locate the following comment in the header file:  
  
 ``` *// Generated message map functions  
 ```  
  
     Immediately above that comment add this code:  
  
 ```  
    private: 
    CMFCShellListCtrl m_wndList;  
 ```  
  
2.  The **MFC Application Wizard** already created a `CMFCShellTreeCtrl` object in the `CMainFrame` class, but it is a protected member. We will access this object later. Therefore, create an accessor for it now. Open the MainFrm.h header file by double-clicking it in the **Solution Explorer**. Locate the following comment:  
  
 ``` *// Attributes  
 ```  
  
     Immediately under it, add the following method declaration:  
  
 ```  
    public: 
    CMFCShellTreeCtrl& GetShellTreeCtrl();

 ```  
  
     Next, open the MainFrm.cpp source file by double-clicking it in the **Solution Explorer**. At the bottom of that file, add the following method definition:  
  
 ```  
    CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()  
 {  
    return m_wndTree;  
 }  
 ```  
  
3.  Now we update the `CMFCShellControlsView` class to handle the **WM_CREATE** windows message. Open the MFCShellControlsView.h header file and click on this line of code:  
  
 ```  
    class CMFCShellControlsView : public CView  
 ```  
  
     Next, in the **Properties** window, click the **Messages** icon. Scroll down until you find the **WM_CREATE** message. From the drop down list next to **WM_CREATE**, select **\<Add> OnCreate**. This creates a message handler for us and automatically updates the MFC message map.  
  
     In the `OnCreate` method we will now create our `CMFCShellListCtrl` object. Find the `OnCreate` method definition in the MFCShellControlsView.cpp source file, and replace its implementation with the following code:  
  
 ```  
    int CMFCShellControlsView::OnCreate(LPCREATESTRUCT lpCreateStruct)  
 {  
    if (CView::OnCreate(lpCreateStruct) == -1)  
    return -1;  
 
    CRect rectDummy (0,
    0,
    0,
    0);

    m_wndList.Create(WS_CHILD | WS_VISIBLE | LVS_REPORT,  
    rectDummy,
    this,
    1);

 
    return 0;  
 }  
 ```  
  
4.  Repeat the previous step but for the **WM_SIZE** message. This will cause your applications view to be redrawn whenever a user changes the size of the application window. Replace the definition for the `OnSize` method with the following code:  
  
 ```  
    void CMFCShellControlsView::OnSize(UINT nType,
    int cx,
    int cy)  
 {  
    CView::OnSize(nType,
    cx,
    cy);

    m_wndList.SetWindowPos(NULL, -1, -1,
    cx,
    cy,  
    SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);

 }  
 ```  
  
5.  The last step is to connect the `CMFCShellTreeCtrl` and `CMFCShellListCtrl` objects by using the [CMFCShellTreeCtrl::SetRelatedList](../mfc/reference/cmfcshelltreectrl-class.md#cmfcshelltreectrl__setrelatedlist) method. After you call this method, the `CMFCShellListCtrl` will automatically display the contents of the item selected in the `CMFCShellTreeCtrl`. We will do this in the `OnActivateView` method, which is overridden from [CView::OnActivateView](../mfc/reference/cview-class.md#cview__onactivateview).  
  
     In the MFCShellControlsView.h header file, inside the `CMFCShellControlsView` class declaration, add the following method declaration:  
  
 ```  
    protected: 
    virtual void OnActivateView(BOOL bActivate,  
    CView* pActivateView,  
    CView* pDeactiveView);

 ```  
  
     Next, add the definition for this method to the MFCShellControlsView.cpp source file:  
  
 ```  
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
  
     Because we are calling methods from the `CMainFrame` class, we must add an `#include` directive at the top of the MFCShellControlsView.cpp source file:  
  
 ```  
    #include "MainFrm.h"  
 ```  
  
6.  Verify that the application was created successfully by building and running it. To build the application, from the **Build** menu select **Build Solution**. If the application builds successfully, run it by selecting **Start Debugging** from the **Debug** menu.  
  
     You should now see the details for the item selected in the `CMFCShellTreeCtrl` in the view pane. When you click a node in the `CMFCShellTreeCtrl`, the `CMFCShellListCtrl` will be automatically updated. Likewise, if you double-click a folder in the `CMFCShellListCtrl`, the `CMFCShellTreeCtrl` should be automatically updated.  
  
     Right click any item in the tree control or in the list control. Note that you get the same context menu as if you were using the real File Explorer.  
  
## Next Steps  
  
-   The wizard created an Outlook bar with both a **Folders** pane and a **Calendar** pane. It probably does not make sense to have a **Calendar** pane in an Explorer window. Therefore, remove that pane now.  
  
-   The `CMFCShellListCtrl` supports viewing files in different modes, such as **Large Icons**, **Small Icons**, **List**, and **Details**. Update your application to implement this functionality. Hint: see [Visual C++ Samples](../visual-cpp-samples.md).  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)

