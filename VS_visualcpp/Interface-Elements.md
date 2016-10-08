---
title: "Interface Elements"
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
ms.assetid: eead6827-9602-40a3-8038-8986e8207385
caps.latest.revision: 26
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
# Interface Elements
This document describes interface elements that were introduced in Visual Studio 2008 SP1, and also describes differences with the earlier version of the library.  
  
 The following illustration shows an application that was built by using the new interface elements.  
  
 ![MFC Feature Pack example application](../VS_visualcpp/media/MFC_FeaturePack.png "MFC_FeaturePack")  
  
## Window Docking  
 Window docking functionality resembles the window docking that the Visual Studio graphical user interface uses.  
  
## Control Bars are Now Panes  
 Control bars are now known as panes and are derived from [CBasePane Class](../VS_visualcpp/CBasePane-Class.md). In earlier versions of MFC, the base class of control bars was `CControlBar`.  
  
 The application main frame window is usually represented by the [CFrameWndEx Class](../VS_visualcpp/CFrameWndEx-Class.md) or the [CMDIFrameWndEx Class](../VS_visualcpp/CMDIFrameWndEx-Class.md). The main frame is called the *dock site*. Panes can have one of three types of parents: a dock site, a dock bar, or a mini-frame window.  
  
 There are two types of panes: non-resizable and resizable. Resizable panes, such as status bars and toolbars, can be resized by using splitters or sliders. Resizable panes can form containers (one pane can be docked to another pane, creating a splitter between them). However, resizable panes cannot be attached (docked) to dock bars.  
  
 If your application uses non-resizable panes, derive them from [CPane Class](../VS_visualcpp/CPane-Class.md).  If your application uses resizable panes, derive them from [CDockablePane Class](../VS_visualcpp/CDockablePane-Class.md)  
  
## Dock Site  
 The dock site (or main frame window) owns all panes and mini-frame windows in an application. The dock site contains a [CDockingManager](../VS_visualcpp/CDockingManager-Class.md) member. This member maintains a list of all panes that belong to the dock site. The list is ordered so that the panes created at the outer edges of the dock site are positioned at the start of the list. When the framework redraws the dock site, it loops over this list and adjusts the layout of each pane to include the current bounding rectangle of the dock site. You can call `AdjustDockingLayout` or `RecalcLayout` when you have to adjust the docking layout, and the framework redirects this call to the docking manager.  
  
## Dock Bars  
 Each main frame window can position *dock bars* along its borders. A dock bar is a pane that belongs to a [CDockSite Class](../VS_visualcpp/CDockSite-Class.md). Dock bars can accept objects derived from [CPane](../VS_visualcpp/CPane-Class.md), such as toolbars. To create dock bars when the main frame window is initialized, call `EnableDocking`. To enable auto hide bars, call `EnableAutoHideBars`. `EnableAutoHideBars` creates [CAutoHideDockSite](../VS_visualcpp/CAutoHideDockSite-Class.md) objects, and positions them next to each dock bar.  
  
 Each dock bar is divided into dock rows. Dock rows are represented by the [CDockingPanesRow Class](../VS_visualcpp/CDockingPanesRow-Class.md). Each dock row contains a list of toolbars. If a user docks a toolbar or moves the toolbar from one row to another within the same dock bar, the framework either creates a new row and resizes the dock bar accordingly, or it positions the toolbar on an existing row.  
  
## Mini-frame Windows  
 A floating pane resides in a mini-frame window. Mini-frame windows are represented by two classes: [CMDITabInfo Class](../VS_visualcpp/CMDITabInfo-Class.md) (which can contain only one pane) and [CMultiPaneFrameWnd Class](../VS_visualcpp/CMultiPaneFrameWnd-Class.md) (which can contain several panes). To float a pane in your code, call [CBasePane::FloatPane](../Topic/CBasePane::FloatPane.md). After a pane floats, the framework automatically creates a mini-frame window and that mini-frame window becomes the floating pane's parent. When the floating pane docks, the framework resets its parent, and the floating pane becomes a dock bar (for toolbars) or a dock site (for resizable panes).  
  
## Pane Dividers  
 Pane dividers (also named sliders or splitters) are represented by the [CPaneDivider Class](../VS_visualcpp/CPaneDivider-Class.md). When a user docks a pane, the framework creates pane dividers, regardless of whether the pane is docked at the dock site or at another pane. When a pane docks to the dock site, the pane divider is called the *default pane divider*. The default pane divider is responsible for the layout of all the docking panes in the dock site. The dock manager maintains a list of default pane dividers, and a list of panes. Dock managers are responsible for the layout of all the docking panes.  
  
## Containers  
 All resizable panes, when docked to each other, are maintained in containers. Containers are represented by the [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md). Each container has pointers to its left pane, right pane, left sub-container, right sub-container, and the splitter between the left and right parts. (*Left* and *right* do not refer to physical sides but rather identify the branches of a tree structure.) In this manner we can build a tree of panes and splitters and therefore achieve complex layouts of panes that can be resized together. The `CPaneContainer` class maintains the tree of containers; it also maintains two lists of panes and sliders that reside in this tree. Pane container managers are usually embedded into default sliders and mini-frame windows that carry multiple panes.  
  
## Auto-hide Control Bars  
 By default, each `CDockablePane` supports the auto-hide feature. When a user clicks the pin button on the caption of the `CDockablePane`, the framework switches the pane to auto-hide mode. To handle the click, the framework creates a [CMFCAutoHideBar Class](../VS_visualcpp/CMFCAutoHideBar-Class.md) and a [CMFCAutoHideButton Class](../VS_visualcpp/CMFCAutoHideButton-Class.md) associated with the `CMFCAutoHideBar` object. The framework puts the new `CMFCAutoHideBar` on the [CAutoHideDockSite](../VS_visualcpp/CAutoHideDockSite-Class.md). The framework also attaches the `CMFCAutoHideButton` to the toolbar. The [CDockingManager Class](../VS_visualcpp/CDockingManager-Class.md) maintains the `CDockablePane`.  
  
## Tabbed Control Bars and Outlook Bars  
 The [CMFCBaseTabCtrl Class](../VS_visualcpp/CMFCBaseTabCtrl-Class.md) implements the base functionality of a tabbed window with detachable tabs. To use a `CMFCBaseTabCtrl` object, initialize a [CBaseTabbedPane Class](../VS_visualcpp/CBaseTabbedPane-Class.md) in your application. `CBaseTabbedPane` is derived from `CDockablePane` and maintains a pointer to a `CMFCBaseTabCtrl` object. The `CBaseTabbedPane` enables users to dock and resize tabbed control bars. Use [CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md) to dynamically create control bars that are docked and tabbed.  
  
 The Outlook bar control is also based on tabbed bars. The [CMFCOutlookBar Class](../VS_visualcpp/CMFCOutlookBar-Class.md) is derived from `CBaseTabbedPane`. For more information about how to use Outlook bar, see [CMFCOutlookBar Class](../VS_visualcpp/CMFCOutlookBar-Class.md).  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)