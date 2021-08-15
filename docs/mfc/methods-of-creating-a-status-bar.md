---
description: "Learn more about: Methods of Creating a Status Bar"
title: "Methods of Creating a Status Bar"
ms.date: "11/04/2016"
helpviewer_keywords: ["CStatusBar class [MFC], vs. CStatusBarCtrl", "methods [MFC], creating status bars", "CStatusBarCtrl class [MFC], vs. CStatusBar", "CStatusBarCtrl class [MFC], creating", "methods [MFC]", "status bars [MFC], creating"]
ms.assetid: 9aeaf290-7099-4762-a5ba-9c26705333c9
---
# Methods of Creating a Status Bar

MFC provides two classes to create status bars: [CStatusBar](reference/cstatusbar-class.md) and [CStatusBarCtrl](reference/cstatusbarctrl-class.md) (which wraps the Windows common control API). `CStatusBar` provides all of the functionality of the status bar common control, it automatically interacts with menus and toolbars, and it handles many of the required common control settings and structures for you; however, your resulting executable usually will be larger than that created by using `CStatusBarCtrl`.

`CStatusBarCtrl` usually results in a smaller executable, and you may prefer to use `CStatusBarCtrl` if you do not intend to integrate the status bar into the MFC architecture. If you plan to use `CStatusBarCtrl` and integrate the status bar into the MFC architecture, you must take additional care to communicate status bar control manipulations to MFC. This communication is not difficult; however, it is additional work that is unneeded when you use `CStatusBar`.

Visual C++ provides two ways to take advantage of the status bar common control.

- Create the status bar using `CStatusBar`, and then call [CStatusBar::GetStatusBarCtrl](reference/cstatusbar-class.md#getstatusbarctrl) to get access to the `CStatusBarCtrl` member functions.

- Create the status bar using [CStatusBarCtrl](reference/cstatusbarctrl-class.md)'s constructor.

Either method will give you access to the member functions of the status bar control. When you call `CStatusBar::GetStatusBarCtrl`, it returns a reference to a `CStatusBarCtrl` object so you can use either set of member functions. See [CStatusBar](reference/cstatusbar-class.md) for information on constructing and creating a status bar using `CStatusBar`.

## See also

[Using CStatusBarCtrl](using-cstatusbarctrl.md)<br/>
[Controls](controls-mfc.md)
