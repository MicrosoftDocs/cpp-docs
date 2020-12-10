---
description: "Learn more about: Walkthrough: Updating the MFC Scribble Application (Part 1)"
title: "Walkthrough: Updating the MFC Scribble Application (Part 1)"
ms.date: "09/09/2019"
helpviewer_keywords: ["examples [MFC], update existing application", "ribbon UI, porting to", "Office Fluent UI, porting to", "samples [MFC], update existing application", "MFC Feature Pack, update existing application", "walkthroughs [MFC], update existing application"]
ms.assetid: aa6330d3-6cfc-4c79-8fcb-0282263025f7
---
# Walkthrough: Updating the MFC Scribble Application (Part 1)

This walkthrough demonstrates how to modify an existing MFC application to use the Ribbon user interface. Visual Studio supports both the Office 2007 Ribbon and the Windows 7 Scenic Ribbon. For more information about the Ribbon user interface, see [Ribbons](/windows/win32/uxguide/cmd-ribbons).

This walkthrough modifies the classic Scribble 1.0 MFC sample that lets you use the mouse to create line drawings. This part of the walkthrough shows how to modify the Scribble sample so that it displays a ribbon bar. [Part 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md) adds more buttons to the ribbon bar.

## Prerequisites

The [Scribble 1.0 MFC sample](https://github.com/microsoft/VCSamples/tree/master/VC2010Samples/MFC/general/Scribble). For help on converting to Visual Studio 2017 or later, see [Porting Guide: MFC Scribble](../porting/porting-guide-mfc-scribble.md).

## <a name="top"></a> Sections

This part of the walkthrough has the following sections:

- [Replacing the Base Classes](#replaceclass)

- [Adding Bitmaps to the Project](#addbitmap)

- [Adding a Ribbon Resource to the Project](#addribbon)

- [Creating an Instance of the Ribbon Bar](#createinstance)

- [Adding a Ribbon Category](#addcategory)

- [Setting the Look of the Application](#setlook)

## <a name="replaceclass"></a> Replacing the Base Classes

To convert an application that supports a menu to an application that supports a ribbon, you must derive the application, frame window, and toolbar classes from updated base classes. (We suggest that you don't modify the original Scribble sample. Instead, clean the Scribble project, copy it to another directory, and then modify the copy.)

### To replace the base classes in the Scribble application

1. In scribble.cpp, verify that `CScribbleApp::InitInstance` includes a call to [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).

1. Add the following code to the *pch.h* file (*stdafx.h* in Visual Studio 2017 and earlier):

    ```cpp
    #include <afxcontrolbars.h>
    ```

1. In scribble.h, modify the definition for the `CScribbleApp` class so that it's derived from [CWinAppEx Class](../mfc/reference/cwinappex-class.md).

    ```cpp
    class CScribbleApp: public CWinAppEx
    ```

1. Scribble 1.0 was written when Windows applications used an initialization (.ini) file to save user preference data. Instead of an initialization file, modify Scribble to store user preferences in the registry. To set the registry key and base, type the following code in `CScribbleApp::InitInstance` after the `LoadStdProfileSettings()` statement.

    ```cpp
    SetRegistryKey(_T("MFCNext\\Samples\\Scribble2"));
    SetRegistryBase(_T("Settings"));
    ```

1. The main frame for a multiple document interface (MDI) application is no longer derived from the `CMDIFrameWnd` class. Instead, it's derived from the [CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md) class.

    In the mainfrm.h and mainfrm.cpp files, replace all references to `CMDIFrameWnd` with `CMDIFrameWndEx`.

1. In the childfrm.h and childfrm.cpp files, replace `CMDIChildWnd` with `CMDIChildWndEx`.

    In the childfrm. h file, replace `CSplitterWnd` with `CSplitterWndEx`.

1. Modify toolbars and status bars to use the new MFC classes.

    In the mainfrm.h file:

    1. Replace `CToolBar` with `CMFCToolBar`.

    1. Replace `CStatusBar` with `CMFCStatusBar`.

1. In the mainfrm.cpp file:

    1. Replace `m_wndToolBar.SetBarStyle` with `m_wndToolBar.SetPaneStyle`

    1. Replace `m_wndToolBar.GetBarStyle` with `m_wndToolBar.GetPaneStyle`

    1. Replace `DockControlBar(&m_wndToolBar)` with `DockPane(&m_wndToolBar)`

1. In the ipframe.cpp file, comment out the following three lines of code.

    ```cpp
    m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
    pWndFrame->EnableDocking(CBRS_ALIGN_ANY);
    pWndFrame->DockPane(&m_wndToolBar);
    ```

1. Save the changes and then build and run the application.

## <a name="addbitmap"></a> Adding Bitmaps to the Project

The next four steps of this walkthrough require bitmap resources. You can get the appropriate bitmaps in various ways:

- Use the [Resource Editors](../windows/resource-editors.md) to invent your own bitmaps. Or use the resource editors to assemble bitmaps from the portable network graphics (.png) images that are included with Visual Studio and can be downloaded from the [Visual Studio image library](/visualstudio/designers/the-visual-studio-image-library).

    However, the **Ribbon** user interface requires that certain bitmaps support transparent images. Transparent bitmaps use 32-bit pixels, where 24 bits specify the red, green, and blue components of the color, and 8 bits define an *alpha channel* that specifies the transparency of the color. The current resource editors can view, but not modify bitmaps with 32-bit pixels. Consequently, use an external image editor instead of the resource editors to manipulate transparent bitmaps.

- Copy an appropriate resource file from another application to your project and then import bitmaps from that file.

This walkthrough copies resource files from the example created in [Walkthrough: Creating a Ribbon Application By Using MFC](../mfc/walkthrough-creating-a-ribbon-application-by-using-mfc.md).

### To add bitmaps to the Project

1. Use File Explorer to copy the following .bmp files from the resources directory (`res`) of the Ribbon example to the resource directory (`res`) of the Scribble project:

   1. Copy main.bmp to your Scribble project.

   1. Copy filesmall.bmp and filelarge.bmp to your Scribble project.

   1. Make new copies of the filelarge.bmp and filesmall.bmp files, but save the copies in the Ribbon example. Rename the copies homesmall.bmp and homelarge.bmp and then move the copies to your Scribble project.

   1. Make a copy of the toolbar.bmp file, but save the copy in the Ribbon example. Rename the copy panelicons.bmp and then move the copy to your Scribble project.

1. Import the bitmap for an MFC application. In **Resource View**, double-click the **scribble.rc** node, double-click the **Bitmap** node, and then click **Add resource**. On the dialog box that appears, click **Import**. Browse to the `res` directory, select the main.bmp file, and then click **Open**.

   The main.bmp bitmap contains a 26x26 image. Change the ID of the bitmap to `IDB_RIBBON_MAIN`.

1. Import the bitmaps for the file menu that is attached to the **Application** button.

   1. Import the filesmall.bmp file, which contains eleven 16x16 (16x176) images. Change the ID of the bitmap to `IDB_RIBBON_FILESMALL`.

   > [!NOTE]
   > Because we need only the first eight 16x16 images (16x128), you may optionally crop the right-side width of this bitmap from 176 to 128.

   1. Import the filelarge.bmp, which contains nine 32x32 (32x288) images. Change the ID of the bitmap to `IDB_RIBBON_FILELARGE`.

1. Import the bitmaps for the ribbon categories and panels. Each tab on the ribbon bar is a category, and consists of a text label and an optional image.

   1. Import the homesmall.bmp bitmap, which contains eleven 16x16 images for small button bitmaps. Change the ID of the bitmap to `IDB_RIBBON_HOMESMALL`.

   1. Import the homelarge.bmp bitmap, which contains nine 32x32 images for large button bitmaps. Change the ID of the bitmap to `IDB_RIBBON_HOMELARGE`.

1. Import bitmaps for the resized ribbon panels. These bitmaps, or panel icons, are used after a resize operation if the ribbon is too small to display the entire panel.

   1. Import the panelicons.bmp bitmap, which contains eight 16x16 images. In the **Properties** window of the **Bitmap Editor**, adjust the width of the bitmap to 64 (16x64). Change the ID of the bitmap to `IDB_PANEL_ICONS`.

   > [!NOTE]
   > Because we need only the first four 16x16 images (16x64), you may optionally crop the right-side width of this bitmap from 128 to 64.

## <a name="addribbon"></a> Adding a Ribbon Resource to the Project

When you convert an application that uses menus to an application that uses a ribbon, you don't have to remove or disable the existing menus. Just create a ribbon resource, add ribbon buttons, and then associate the new buttons with the existing menu items. Although the menus are no longer visible, messages from the ribbon bar are routed through the menus and menu shortcuts continue to work.

A ribbon consists of the **Application** button, which is the large button on the upper-left side of the ribbon, and one or more category tabs. Each category tab contains one or more panels that act as containers for ribbon buttons and controls. The following procedure shows how to create a ribbon resource and then customize the **Application** button.

### To add a ribbon resource to the project

1. With the Scribble project selected in **Solution Explorer**, in the **Project** menu, click **Add Resource**.

1. In the **Add Resource** dialog box, select **Ribbon** and then click **New**.

   Visual Studio creates a ribbon resource and opens it in the design view. The ribbon resource ID is `IDR_RIBBON1`, which is displayed in **Resource View**. The ribbon contains one category and one panel.

1. You can customize the **Application** button by modifying its properties. The message IDs that are used in this code are already defined in the menu for Scribble 1.0.

1. In the design view, click the **Application** button to display its properties. Change property values as follows: **Image** to `IDB_RIBBON_MAIN`, **Prompt** to `File`, **Keys** to `f`, **Large Images** to `IDB_RIBBON_FILELARGE`, and **Small Images** to `IDB_RIBBON_FILESMALL`.

1. The following modifications create the menu that appears when the user clicks the **Application** button. Click the ellipsis (**...**) next to **Main Items** to open the **Items Editor**.

   1. With the **Item** type **Button** selected, click **Add** to add a button. Change **Caption** to `&New`, **ID** to `ID_FILE_NEW`, **Image** to `0`, **Image Large** to `0`.

   1. Click **Add** to add a button. Change **Caption** to `&Save`, **ID** to `ID_FILE_SAVE`, **Image** to `2`, and **Image Large** to `2`.

   1. Click **Add** to add a button. Change **Caption** to `Save &As`, **ID** to `ID_FILE_SAVE_AS`, **Image** to `3`, and **Image Large** to `3`.

   1. Click **Add** to add a button. Change **Caption** to `&Print`, **ID** to `ID_FILE_PRINT`, **Image** to `4`, and **Image Large** to `4`.

   1. Change the **Item** type to **Separator** and then click **Add**.

   1. Change the **Item** type to **Button**. Click **Add** to add a fifth button. Change **Caption** to `&Close`, **ID** to `ID_FILE_CLOSE`, **Image** to `5`, and **Image Large** to `5`.

1. The following modifications create a submenu under the **Print** button that you created in the previous step.

   1. Click the **Print** button, change the **Item** type to **Label**, and then click **Insert**. Change **Caption** to `Preview and print the document`.

   1. Click the **Print** button, change the **Item** type to **Button**, and click **Insert**. Change **Caption** to `&Print`, **ID** to `ID_FILE_PRINT`, **Image** to `4`, and **Image Large** to `4`.

   1. Click the **Print** button and then click **Insert** to add a button. Change **Caption** to `&Quick Print`, **ID** to `ID_FILE_PRINT_DIRECT`, **Image** to `7`, and **Image Large** to `7`.

   1. Click the **Print** button and then click **Insert** to add another button. Change **Caption** to `Print Pre&view`, **ID** to `ID_FILE_PRINT_PREVIEW`, **Image** to `6`, and **Image Large** to `6`.

   1. You've now modified the **Main Items**. Click **Close** to exit the **Items Editor**.

1. The following modification creates an exit button that appears at the bottom of the **Application** button menu.

   1. Choose the **Resource View** tab in **Solution Explorer**.
   1. In the **Properties** window, click the ellipsis (**...**) next to **Button** to open the **Items Editor**.

   1. With the **Item** type **Button** selected, click **Add** to add a button. Change **Caption** to `E&xit`, **ID** to `ID_APP_EXIT`, **Image** to `8`.

   1. You've modified the **Buttons**. Click **Close** to exit the **Items Editor**.

## <a name="createinstance"></a> Creating an Instance of the Ribbon Bar

The following steps show how to create an instance of the ribbon bar when your application starts. To add a ribbon bar to an application, declare the ribbon bar in the mainfrm.h file. Then, in the mainfrm.cpp file, write code to load the ribbon resource.

### To create an instance of the ribbon bar

1. In the mainfrm.h file, add a data member to the protected section of `CMainFrame`, the class definition for the main frame. This member is for the ribbon bar.

    ```cpp
    // Ribbon bar for the application
    CMFCRibbonBar m_wndRibbonBar;
    ```

2. In the mainfrm.cpp file, add the following code before the final **`return`** statement at the end of the `CMainFrame::OnCreate` function. It creates an instance of the ribbon bar.

    ```cpp
    // Create the ribbon bar
    if (!m_wndRibbonBar.Create(this))
    {
        return -1;   //Failed to create ribbon bar
    }
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);
    ```

## <a name="addcategory"></a> Customizing the Ribbon Resource

Now that you've created the **Application** button, you can add elements to the ribbon.

> [!NOTE]
> This walkthrough uses the same panel icon for all panels. However, you can use other image list indexes to display other icons.

### To add a Home category and Edit panel

1. The Scribble program requires only one category. In the design view, in the **Toolbox**, double-click **Category** to add one and display its properties. Change property values as follows: **Caption** to `&Home`, **Large Images** to `IDB_RIBBON_HOMELARGE`, **Small Images** to `IDB_RIBBON_HOMESMALL`.

1. Each ribbon category is organized into named panels. Each panel contains a set of controls that complete related operations. This category has one panel. Click **Panel**, and then change **Caption** to `Edit`.

1. To the **Edit** panel, add a button responsible for clearing the contents of the document. The message ID for this button has already been defined in the `IDR_SCRIBBTYPE` menu resource. Specify `Clear All` as the button text and the index of the bitmap that decorates the button. Open the **Toolbox**, and then drag a **Button** to the **Edit** panel. Click the button and then change **Caption** to `Clear All`, **ID** to `ID_EDIT_CLEAR_ALL`, **Image Index** to `0`, **Large Image Index** to `0`.

1. Save the changes, and then build and run the application. The Scribble application should be displayed, and it should have a ribbon bar at the top of the window instead of a menu bar. The ribbon bar should have one category, **Home**, and **Home** should have one panel, **Edit**. The ribbon buttons that you added should be associated with the existing event handlers, and the **Open**, **Close**, **Save**, **Print**, and **Clear All** buttons should work as expected.

## <a name="setlook"></a> Setting the Look of the Application

A *visual manager* is a global object that controls all drawing for an application. Because the original Scribble application uses the Office 2000 user interface (UI) style, the application may look old-fashioned. You can reset the application to use the Office 2007 visual manager so that it resembles an Office 2007 application.

### To set the look of the application

1. In the `CMainFrame::OnCreate` function, type the following code before the `return 0;` statement to change the default visual manager and style.

    ```cpp
    // Set the default manager to Office 2007
    CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2007));
    CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_LunaBlue);
    ```

1. Save the changes, and then build and run the application. The application UI should resemble the Office 2007 UI.

## Next Steps

You've modified the classic Scribble 1.0 MFC sample to use the **Ribbon Designer**. Now go to [Part 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md).

## See also

[Walkthroughs](../mfc/walkthroughs-mfc.md)<br/>
[Walkthrough: Updating the MFC Scribble Application (Part 2)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md)
