---
title: "Internal Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3e2276aa-b02a-4781-97ba-ea074045e9e2
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Internal Classes
The following classes are used internally in MFC. For completeness, this section describes these internal classes, but they are not intended to be used directly in your code.  
  
## In This Section  
  
|Class|Description|  
|-----------|-----------------|  
|`CCommandManager Class`|The `CCommandManager` class manages commands and their association with images.|  
|`CDialogImpl Class (MFC)`|Provides implementation details to dialog box-based classes, such as `CDialogEx`.|  
|`CDocumentAdapter Class`|Implements IDocument interface required for Search and Organize handlers.|  
|`CFrameImpl Class`|The `CFrameImpl` class handles toolbar customization for the following frame window classes: [CFrameWndEx Class](../VS_visualcpp/CFrameWndEx-Class.md), [CMDIFrameWndEx Class](../VS_visualcpp/CMDIFrameWndEx-Class.md), and [COleIPFrameWndEx Class](../VS_visualcpp/COleIPFrameWndEx-Class.md).|  
|`CFullScreenImpl Class`|Implements full-screen functionality common to SDI and MDI applications.|  
|`CMDIClientAreaWnd Class`|The `CMDIClientAreaWnd` class is a helper class that simplifies implementation of MDI tabs and MDI tabbed groups.|  
|`CMemDC Class`|A helper class for a memory device context. The memory device context supports offscreen drawing.|  
|`CMenuHash Class`|Reads the state of `CMFCToolBar` objects from an archive or writes the state to an archive.|  
|`CMenuImages Class`|Provides the functionality to display predefined images such as close buttons, maximize buttons, radio buttons, and arrows.|  
|`CMFCCaptionButtonEx Class`|Holds the non-client area of system caption buttons.|  
|`CMFCCaptionMenuButton Class`|Represents a menu button that is located in the caption area of a task pane or toolbar.|  
|`CMFCColorPropertySheet Class`|Used by [CMFCColorDialog Class](../VS_visualcpp/CMFCColorDialog-Class.md) to provide a tabbed dialog box.|  
|`CMFCControlBarImpl Class`|Provides implementation details to control bar-based classes, such as `CMFCReBar` and `CMFCToolBar`.|  
|`CMFCControlRenderer Class`|A helper class that handles image rendering.|  
|`CMFCControlRendererInfo Class`|A helper class for passing parameters to `CMFCControlRenderer` class.|  
|`CMFCCustomizeButton Class`|Supports a menu command or a toolbar button that starts a customization dialog box.|  
|`CMFCCustomizeMenuButton Class`|Represents a single button on a customization menu.|  
|`CMFCDropDownListBox Class`|Provides drop-down list box functionality to ribbon combo boxes.|  
|`CMFCMousePropertyPage Class`|A property page that enables the user to customize mouse behavior.|  
|`CMFCOutlookBarPaneAdapter Class`||  
|`CMFCOutlookBarPaneButton Class`|Implements a button that the framework adds to a `CMFCOutlookBarPane` object.|  
|`CMFCOutlookBarPaneList Class`|Extends the `CMFCOutlookBarPane` class to provide the Outlook visual style.|  
|`CMFCOutlookBarScrollButton Class`|Provides scrolling functionality to the `CMFCOutlookBarTabCtrl` class.|  
|`CMFCOutlookBarToolBar Class`|Implements a toolbar that has the Outlook 2003 visual style.|  
|`CMFCPropertySheetCategoryInfo Class`|Represents a node in a tree control.|  
|`CMFCPropertySheetTabCtrl Class`|Extends the `CMFCTabCtrl` class to provide property sheet functionality.|  
|`CMFCProperySheetListBox Class`|Extends the `CListBox` class to provide property sheet functionality.|  
|`CMFCReBarState Class`||  
|`CMFCRibbonCaptionButton Class`|Implements a system caption button.|  
|`CMFCRibbonCmdUI Class`|Updates ribbon bar objects as needed when the application is idle.|  
|`CMFCRibbonCommandsListBox Class`||  
|`CMFCRibbonDefaultPanelButton Class`||  
|`CMFCRibbonGalleryIcon Class`|Represents an item in a `CMFCRibbonGallery` object.|  
|`CMFCRibbonKeyboardCustomizeDialog Class`|Implements a keyboard customization dialog box for applications that contain ribbon bars.|  
|`CMFCRibbonKeyTip Class`|Implements a pop-up window that displays a key tip for a ribbon bar.|  
|`CMFCRibbonPanelMenu Class`||  
|`CMFCRibbonPanelMenuBar Class`|Represents a pop-up menu bar in a ribbon bar.|  
|`CMFCRibbonQuickAccessToolBar Class`|Implements the Quick Access Toolbar for a ribbon element.|  
|`CMFCRibbonRichEditCtrl Class`|Implements an edit control that is located on a ribbon bar.|  
|`CMFCRibbonTab Class`|Represent a tab on a ribbon bar.|  
|`CMFCShadowRenderer Class`||  
|`CMFCShowAllButton Class`|Represents a button that is located at the bottom of a pop-up menu that expands to show hidden commands.|  
|`CMFCStatusBarPaneInfo Class`|Describes the content and appearance of a `CMFCStatusBar` pane.|  
|`CMFCTabButton Class`|Provides tab button functionality to tab controls.|  
|`CMFCTabInfo Class`|Provides information about a tab to tab controls.|  
|`CMFCTasksPaneFrameWnd Class`|Manages custom caption buttons of a tasks pane.|  
|`CMFCTasksPanePropertyPage Class`|Manages the relationship between a `CMFCTasksPane` object and its name.|  
|`CMFCTasksPaneToolBar Class`|Implements a navigation toolbar that is located at the top of a `CMFCTasksPane` object.|  
|`CMFCToolBarButtonsListButton Class`|Displays a list of images that the user can select during customization in the **Button Appearance** dialog box.|  
|`CMFCToolBarDateTimeCtrlImpl Class`|Implements a drop source for `CMFCToolBar` objects.|  
|`CMFCToolBarDropSource Class`|Implements a drop source for `CMFCToolBar` objects.|  
|`CMFCToolBarDropTarget Class`|Implements a drop target for `CMFCToolBar` objects.|  
|`CMFCToolBarEditCtrl Class`|Provides edit control functionality to `CMFCToolBarEditBoxButton` objects.|  
|`CMFCToolBarMenuButtonsButton Class`|Represents system caption buttons that are located to the right of a menu bar.|  
|`CMFCToolBarNameDialog Class`|Represents a dialog box that allows the user to specify a new toolbar caption.|  
|`CMFCToolBarsCommandsListBox Class`|Represents a list box that contains a list of toolbar commands.|  
|`CMFCToolBarsCommandsPropertyPage Class`|Implements commands customization on a property page.|  
|`CMFCToolBarsKeyboardPropertyPage Class`||  
|`CMFCToolBarsListCheckBox Class`|Displays a list of toolbars on the **Toolbars** page of a **Customize** dialog box.|  
|`CMFCToolBarsListPropertyPage Class`|Represents a property page that shows the list of toolbars in a **Customize** dialog box.|  
|`CMFCToolBarsMenuPropertyPage Class`|Represents a property page that contains menu customization options in a **Customize** dialog box.|  
|`CMFCToolBarsOptionsPropertyPage Class`|Represents the **Options** page in a **Customize** dialog box.|  
|`CMFCToolBarSpinEditBoxButton Class`|Represents a spin button that is located on an edit box.|  
|`CMFCToolBarsToolsPropertyPage Class`|Represents a property page that allows the user to customize user tools.|  
|`CMFCToolBarSystemMenuButton Class`|Implements a system caption button that the framework adds to the main menu bar when a user maximizes an MDI child window.|  
|`CMFCVisualManagerBitmapCache Class`|Manages `CMFCControlRenderer` objects to improve the performance of operations on bitmaps.|  
|`CMultiDocTemplateEx Class`|Extends the `CMultiDocTemplate` class to provide access to the menu resource ID.|  
|`COleCntrFrameWndEx Class`||  
|`COleDocIPFrameWndEx Class`|Provides OLE support.|  
|`COleServerDocEx Class`|Provides operations on OLE server documents.|  
|`CPaneContainerGC Class`||  
|`CPngImage Class`|Provides access to image resources that use the .png file format.|  
|`CPreviewViewEx Class`||  
|`CRecentPaneContainerInfo Class`|Holds the previous state of a docking pane.|  
|`CRibbonCategoryScroll Class`|Implements a scroll button that appears when not all elements fit in the area of a ribbon bar.|  
|`CSmartDockingGroupGuide Class`|Represents the central element of a smart-docking group.|  
|`CSmartDockingGroupGuidesManager Class`|Manages the smart-docking group guides.|  
|`CSmartDockingGroupGuidesWnd Class`|Implements a layered, non-rectangular window that the framework uses to display the central group of smart-docking guides.|  
|`CSmartDockingHighlighterWnd Class`|Implements a semi-transparent window that covers the area to be taken by the dockable pane object that is being docked.|  
|`CSmartDockingManager Class`|Provides smart-docking functionality to `CDockingManager` objects.|  
|`CSmartDockingStandaloneGuide Class`|Implements the smart-docking guide.|  
|`CSmartDockingStandaloneGuideWnd Class`|Implements a layered, non-rectangular window that the framework uses to display smart-docking guides.|  
|`CTagManager Class`|The `CTagManager` class is intended to read values that are stored in XML-like tagged format.|  
|`CVSListBoxBase Class`|Provides basic functionality to the `CVSListBox` class.|  
|`CVSListBoxEditCtrl Class`|Extends standard list box edit control by displaying a small button that opens a dialog box.|  
|`CVSToolsListBox Class`|Extends standard list box control by providing additional buttons to add, delete and move items in the list box.|  
  
## See Also  
 [MFC Desktop Applications](../VS_visualcpp/MFC-Desktop-Applications.md)