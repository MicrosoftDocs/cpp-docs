---
description: "Learn more about: Control Bar Classes"
title: "Control Bar Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["control bars [MFC], classes"]
ms.assetid: 11009103-cad8-4309-85ce-3d2e858e1818
---
# Control Bar Classes

Control bars are attached to a frame window. They contain buttons, status panes, or a dialog template. Free-floating control bars, also called tool palettes, are implemented by attaching them to a [CMiniFrameWnd](reference/cminiframewnd-class.md) object.

## Framework Control Bars

These control bars are an integral part of the MFC framework. They are easier to use and more powerful than the Windows control bars because they are integrated with the framework. Most MFC applications use these control bars rather than the Windows control bars.

[CControlBar](reference/ccontrolbar-class.md)<br/>
The base class for MFC control bars listed in this section. A control bar is a window aligned to the edge of a frame window. The control bar contains either `HWND`-based child controls or controls not based on an `HWND`, such as toolbar buttons.

[CDialogBar](reference/cdialogbar-class.md)<br/>
A control bar that is based on a dialog box template.

[CReBar](reference/crebar-class.md)<br/>
Supports a toolbar that can contain additional child windows in the form of controls.

[CToolBar](reference/ctoolbar-class.md)<br/>
Toolbar control windows that contain bitmap command buttons not based on an `HWND`. Most MFC applications use this class rather than `CToolBarCtrl`.

[CStatusBar](reference/cstatusbar-class.md)<br/>
The base class for status-bar control windows. Most MFC applications use this class rather than `CStatusBarCtrl`.

## Windows Control Bars

These control bars are thin wrappers for the corresponding Windows controls. Because they are not integrated with the framework, they are harder to use than the control bars previously listed. Most MFC applications use the control bars previously listed.

[CRebarCtrl](reference/crebarctrl-class.md)<br/>
Implements the internal control of the `CRebar` object.

[CStatusBarCtrl](reference/cstatusbarctrl-class.md)<br/>
A horizontal window, usually divided into panes, in which an application can display status information.

[CToolBarCtrl](reference/ctoolbarctrl-class.md)<br/>
Provides the functionality of the Windows toolbar common control.

## Related Classes

[CToolTipCtrl](reference/ctooltipctrl-class.md)<br/>
A small pop-up window that displays a single line of text describing the purpose of a tool in an application.

[CDockState](reference/cdockstate-class.md)<br/>
Handles persistent storage of docking state data for control bars.

## See also

[Class Overview](class-library-overview.md)
