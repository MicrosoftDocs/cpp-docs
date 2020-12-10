---
description: "Learn more about: Docking and Floating Toolbars"
title: "Docking and Floating Toolbars"
ms.date: "11/04/2016"
f1_keywords: ["CBRS_SIZE_DYNAMIC", "CBRS_SIZE_FIXED"]
helpviewer_keywords: ["size [MFC], toolbars", "size", "frame windows [MFC], toolbar docking", "CBRS_ALIGN_ANY constant [MFC]", "palettes, floating", "toolbars [MFC], docking", "CBRS_SIZE_DYNAMIC constant [MFC]", "floating toolbars", "toolbars [MFC], size", "toolbars [MFC], floating", "fixed-size toolbars", "CBRS_SIZE_FIXED constant [MFC]", "toolbar controls [MFC], wrapping", "toolbars [MFC], wrapping", "floating palettes"]
ms.assetid: b7f9f9d4-f629-47d2-a3c4-2b33fa6b51e4
---
# Docking and Floating Toolbars

The Microsoft Foundation Class Library supports dockable toolbars. A dockable toolbar can be attached, or docked, to any side of its parent window, or it can be detached, or floated, in its own mini-frame window. This article explains how to use dockable toolbars in your applications.

If you use the Application Wizard to generate the skeleton of your application, you are asked to choose whether you want dockable toolbars. By default, the Application Wizard generates the code that performs the three actions necessary to place a dockable toolbar in your application:

- [Enable docking in a frame window](#_core_enabling_docking_in_a_frame_window).

- [Enable docking for a toolbar](#_core_enabling_docking_for_a_toolbar).

- [Dock the toolbar (to the frame window)](#_core_docking_the_toolbar).

If any of these steps are missing, your application will display a standard toolbar. The last two steps must be performed for each dockable toolbar in your application.

Other topics covered in this article include:

- [Floating the toolbar](#_core_floating_the_toolbar)

- [Dynamically resizing the toolbar](#_core_dynamically_resizing_the_toolbar)

- [Setting wrap positions for a fixed-style toolbar](#_core_setting_wrap_positions_for_a_fixed_style_toolbar)

See the MFC General sample [DOCKTOOL](../overview/visual-cpp-samples.md) for examples.

## <a name="_core_enabling_docking_in_a_frame_window"></a> Enabling Docking in a Frame Window

To dock toolbars to a frame window, the frame window (or destination) must be enabled to allow docking. This is done using the [CFrameWnd::EnableDocking](reference/cframewnd-class.md#enabledocking) function, which takes one *DWORD* parameter that is a set of style bits indicating which side of the frame window accepts docking. If a toolbar is about to be docked and there are multiple sides that it could be docked to, the sides indicated in the parameter passed to `EnableDocking` are used in the following order: top, bottom, left, right. If you want to be able to dock control bars anywhere, pass **CBRS_ALIGN_ANY** to `EnableDocking`.

## <a name="_core_enabling_docking_for_a_toolbar"></a> Enabling Docking for a Toolbar

After you have prepared the destination for docking, you must prepare the toolbar (or source) in a similar fashion. Call [CControlBar::EnableDocking](reference/ccontrolbar-class.md#enabledocking) for each toolbar you want to dock, specifying the destination sides to which the toolbar should dock. If none of the sides specified in the call to `CControlBar::EnableDocking` match the sides enabled for docking in the frame window, the toolbar cannot dock — it will float. Once it has been floated, it remains a floating toolbar, unable to dock to the frame window.

If the effect you want is a permanently floating toolbar, call `EnableDocking` with a parameter of 0. Then call [CFrameWnd::FloatControlBar](reference/cframewnd-class.md#floatcontrolbar). The toolbar remains floating, permanently unable to dock anywhere.

## <a name="_core_docking_the_toolbar"></a> Docking the Toolbar

The framework calls [CFrameWnd::DockControlBar](reference/cframewnd-class.md#dockcontrolbar) when the user attempts to drop the toolbar on a side of the frame window that allows docking.

In addition, you can call this function at any time to dock control bars to the frame window. This is normally done during initialization. More than one toolbar can be docked to a particular side of the frame window.

## <a name="_core_floating_the_toolbar"></a> Floating the Toolbar

Detaching a dockable toolbar from the frame window is called floating the toolbar. Call [CFrameWnd::FloatControlBar](reference/cframewnd-class.md#floatcontrolbar) to do this. Specify the toolbar to be floated, the point where it should be placed, and an alignment style that determines whether the floating toolbar is horizontal or vertical.

The framework calls this function when a user drags a toolbar off its docked location and drops it in a location where docking is not enabled. This can be anywhere inside or outside the frame window. As with `DockControlBar`, you can also call this function during initialization.

The MFC implementation of dockable toolbars does not provide some of the extended features found in some applications that support dockable toolbars. Features such as customizable toolbars are not provided.

## <a name="_core_dynamically_resizing_the_toolbar"></a> Dynamically Resizing the Toolbar

As of Visual C++ version 4.0, you can make it possible for users of your application to resize floating toolbars dynamically. Typically, a toolbar has a long, linear shape, displayed horizontally. But you can change the toolbar's orientation and its shape. For example, when the user docks a toolbar against one of the vertical sides of the frame window, the shape changes to a vertical layout. It's also possible to reshape the toolbar into a rectangle with multiple rows of buttons.

You can:

- Specify dynamic sizing as a toolbar characteristic.

- Specify fixed sizing as a toolbar characteristic.

To provide this support, there are two new toolbar styles for use in your calls to the [CToolBar::Create](reference/ctoolbar-class.md#create) member function. They are:

- **CBRS_SIZE_DYNAMIC** Control bar is dynamic.

- **CBRS_SIZE_FIXED** Control bar is fixed.

The size dynamic style lets your user resize the toolbar while it is floating, but not while it is docked. The toolbar "wraps" where needed to change shape as the user drags its edges.

The size fixed style preserves the wrap states of a toolbar, fixing the position of the buttons in each column. Your application's user can't change the shape of the toolbar. The toolbar wraps at designated places, such as the locations of separators between the buttons. It maintains this shape whether the toolbar is docked or floating. The effect is a fixed palette with multiple columns of buttons.

You can also use [CToolBar::GetButtonStyle](reference/ctoolbar-class.md#getbuttonstyle) to return a state and style for buttons on your toolbars. A button's style determines how the button appears and how it responds to user input; the state tells whether the button is in a wrapped state.

## <a name="_core_setting_wrap_positions_for_a_fixed_style_toolbar"></a> Setting Wrap Positions for a Fixed-Style Toolbar

For a toolbar with the size fixed style, designate toolbar button indexes at which the toolbar will wrap. The following code shows how to do this in your main frame window's `OnCreate` override:

[!code-cpp[NVC_MFCDocViewSDI#10](codesnippet/cpp/docking-and-floating-toolbars_1.cpp)]

The MFC General sample [DOCKTOOL](../overview/visual-cpp-samples.md) shows how to use member functions of classes [CControlBar](reference/ccontrolbar-class.md) and [CToolBar](reference/ctoolbar-class.md) to manage dynamic layout of a toolbar. See the file EDITBAR.CPP in DOCKTOOL.

### What do you want to know more about

- [Toolbar fundamentals](toolbar-fundamentals.md)

- [Toolbar tool tips](toolbar-tool-tips.md)

- [Using your old toolbars](using-your-old-toolbars.md)

## See also

[MFC Toolbar Implementation](mfc-toolbar-implementation.md)
