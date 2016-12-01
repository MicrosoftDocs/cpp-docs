---
title: "Interface Elements | Microsoft Docs"
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
  - "architecture [C++], MFC Feature Pack"
  - "MFC Feature Pack, architecture"
ms.assetid: eead6827-9602-40a3-8038-8986e8207385
caps.latest.revision: 28
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
# Interface Elements
This document describes interface elements that were introduced in [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] SP1, and also describes differences with the earlier version of the library.  
  
 The following illustration shows an application that was built by using the new interface elements.  
  
 ![MFC Feature Pack example application](../mfc/media/mfc_featurepack.png "mfc_featurepack")  
  
## Window Docking  
 Window docking functionality resembles the window docking that the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] graphical user interface uses.  
  
## Control Bars are Now Panes  
 Control bars are now known as panes and are derived from [CBasePane Class](../mfc/reference/cbasepane-class.md). In earlier versions of MFC, the base class of control bars was `CControlBar`.  
  
 The application main frame window is usually represented by the [CFrameWndEx Class](../mfc/reference/cframewndex-class.md) or the [CMDIFrameWndEx Class](../mfc/reference/cmdiframewndex-class.md). The main frame is called the *dock site*. Panes can have one of three types of parents: a dock site, a dock bar, or a mini-frame window.  
  
 There are two types of panes: non-resizable and resizable. Resizable panes, such as status bars and toolbars, can be resized by using splitters or sliders. Resizable panes can form containers (one pane can be docked to another pane, creating a splitter between them). However, resizable panes cannot be attached (docked) to dock bars.  
  
 If your application uses non-resizable panes, derive them from [CPane Class](../mfc/reference/cpane-class.md).  If your application uses resizable panes, derive them from [CDockablePane Class](../mfc/reference/cdockablepane-class.md)  
  
## Dock Site  
 The dock site (or main frame window) owns all panes and mini-frame windows in an application. The dock site contains a [CDockingManager](../mfc/reference/cdockingmanager-class.md) member. This member maintains a list of all panes that belong to the dock site. The list is ordered so that the panes created at the outer edges of the dock site are positioned at the start of the list. When the framework redraws the dock site, it loops over this list and adjusts the layout of each pane to include the current bounding rectangle of the dock site. You can call `AdjustDockingLayout` or `RecalcLayout` when you have to adjust the docking layout, and the framework redirects this call to the docking manager.  
  
## Dock Bars  
 Each main frame window can position *dock bars* along its borders. A dock bar is a pane that belongs to a [CDockSite Class](../mfc/reference/cdocksite-class.md). Dock bars can accept objects derived from [CPane](../mfc/reference/cpane-class.md), such as toolbars. To create dock bars when the main frame window is initialized, call `EnableDocking`. To enable auto hide bars, call `EnableAutoHideBars`. `EnableAutoHideBars` creates [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md) objects, and positions them next to each dock bar.  
  
 Each dock bar is divided into dock rows. Dock rows are represented by the [CDockingPanesRow Class](../mfc/reference/cdockingpanesrow-class.md). Each dock row contains a list of toolbars. If a user docks a toolbar or moves the toolbar from one row to another within the same dock bar, the framework either creates a new row and resizes the dock bar accordingly, or it positions the toolbar on an existing row.  
  
## Mini-frame Windows  
 A floating pane resides in a mini-frame window. Mini-frame windows are represented by two classes: [CMDITabInfo Class](../mfc/reference/cmditabinfo-class.md) (which can contain only one pane) and [CMultiPaneFrameWnd Class](../mfc/reference/cmultipaneframewnd-class.md) (which can contain several panes). To float a pane in your code, call [CBasePane::FloatPane](../mfc/reference/cbasepane-class.md#cbasepane__floatpane). After a pane floats, the framework automatically creates a mini-frame window and that mini-frame window becomes the floating pane's parent. When the floating pane docks, the framework resets its parent, and the floating pane becomes a dock bar (for toolbars) or a dock site (for resizable panes).  
  
## Pane Dividers  
 Pane dividers (also named sliders or splitters) are represented by the [CPaneDivider Class](../mfc/reference/cpanedivider-class.md). When a user docks a pane, the framework creates pane dividers, regardless of whether the pane is docked at the dock site or at another pane. When a pane docks to the dock site, the pane divider is called the *default pane divider*. The default pane divider is responsible for the layout of all the docking panes in the dock site. The dock manager maintains a list of default pane dividers, and a list of panes. Dock managers are responsible for the layout of all the docking panes.  
  
## Containers  
 All resizable panes, when docked to each other, are maintained in containers. Containers are represented by the [CPaneContainer Class](../mfc/reference/cpanecontainer-class.md). Each container has pointers to its left pane, right pane, left sub-container, right sub-container, and the splitter between the left and right parts. (*Left* and *right* do not refer to physical sides but rather identify the branches of a tree structure.) In this manner we can build a tree of panes and splitters and therefore achieve complex layouts of panes that can be resized together. The `CPaneContainer` class maintains the tree of containers; it also maintains two lists of panes and sliders that reside in this tree. Pane container managers are usually embedded into default sliders and mini-frame windows that carry multiple panes.  
  
## Auto-hide Control Bars  
 By default, each `CDockablePane` supports the auto-hide feature. When a user clicks the pin button on the caption of the `CDockablePane`, the framework switches the pane to auto-hide mode. To handle the click, the framework creates a [CMFCAutoHideBar Class](../mfc/reference/cmfcautohidebar-class.md) and a [CMFCAutoHideButton Class](../mfc/reference/cmfcautohidebutton-class.md) associated with the `CMFCAutoHideBar` object. The framework puts the new `CMFCAutoHideBar` on the [CAutoHideDockSite](../mfc/reference/cautohidedocksite-class.md). The framework also attaches the `CMFCAutoHideButton` to the toolbar. The [CDockingManager Class](../mfc/reference/cdockingmanager-class.md) maintains the `CDockablePane`.  
  
## Tabbed Control Bars and Outlook Bars  
 The [CMFCBaseTabCtrl Class](../mfc/reference/cmfcbasetabctrl-class.md) implements the base functionality of a tabbed window with detachable tabs. To use a `CMFCBaseTabCtrl` object, initialize a [CBaseTabbedPane Class](../mfc/reference/cbasetabbedpane-class.md) in your application. `CBaseTabbedPane` is derived from `CDockablePane` and maintains a pointer to a `CMFCBaseTabCtrl` object. The `CBaseTabbedPane` enables users to dock and resize tabbed control bars. Use [CDockablePane::AttachToTabWnd](../mfc/reference/cdockablepane-class.md#cdockablepane__attachtotabwnd) to dynamically create control bars that are docked and tabbed.  
  
 The Outlook bar control is also based on tabbed bars. The [CMFCOutlookBar Class](../mfc/reference/cmfcoutlookbar-class.md) is derived from `CBaseTabbedPane`. For more information about how to use Outlook bar, see [CMFCOutlookBar Class](../mfc/reference/cmfcoutlookbar-class.md).  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)

