---
description: "Learn more about: Changing the Styles of a Window Created by MFC"
title: "Changing the Styles of a Window Created by MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["window styles [MFC]", "WS_OVERLAPPEDWINDOW macro [MFC]", "single document interface (SDI), changing window attributes", "MDI [MFC], window styles", "windows [MFC], MFC", "child windows [MFC], styles", "MFC, windows", "CFrameWnd class [MFC], window styles", "CREATESTRUCT macro [MFC]", "CMDIChildWnd class [MFC], changing window styles", "multidocument interface style", "PreCreateWindow method [MFC], window styles", "single document interface (SDI), style", "default window style", "defaults [MFC], window style", "PreCreateWindow method [MFC], changing window styles", "CMainFrame class [MFC]", "styles [MFC], windows"]
ms.assetid: 77fa4f03-96b4-4687-9ade-41e46f7e4b0a
---
# Changing the Styles of a Window Created by MFC

In its version of the `WinMain` function, MFC registers several standard window classes for you. Because you don't normally edit MFC's `WinMain`, that function gives you no opportunity to change the MFC default window styles. This article explains how you can change the styles of such a preregistered window class in an existing application.

## <a name="_core_changing_styles_in_a_new_mfc_application"></a> Changing Styles in a New MFC Application

If you're using Visual C++ 2.0 or later, you can change the default window styles in the Application Wizard when you create your application. In the Application Wizard's User Interface Features page, you can change styles for your main frame window and MDI child windows. For either window type, you can specify its frame thickness (thick or thin) and any of the following:

- Whether the window has Minimize or Maximize controls.

- Whether the window appears initially minimized, maximized, or neither.

For main frame windows, you can also specify whether the window has a System Menu. For MDI child windows, you can specify whether the window supports splitter panes.

## <a name="_core_changing_styles_in_an_existing_application"></a> Changing Styles in an Existing Application

If you're changing window attributes in an existing application, follow the instructions in the rest of this article instead.

To change the default window attributes used by a framework application created with the Application Wizard, override the window's [PreCreateWindow](reference/cwnd-class.md#precreatewindow) virtual member function. `PreCreateWindow` allows an application to access the creation process normally managed internally by the [CDocTemplate](reference/cdoctemplate-class.md) class. The framework calls `PreCreateWindow` just prior to creating the window. By modifying the [CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) structure passed to `PreCreateWindow`, your application can change the attributes used to create the window. For example, to ensure that a window does not use a caption, use the following bitwise operation:

[!code-cpp[NVC_MFCDocView#15](codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_1.cpp)]

The [CTRLBARS](../overview/visual-cpp-samples.md) sample application demonstrates this technique for changing window attributes. Depending on what your application changes in `PreCreateWindow`, it may be necessary to call the base class implementation of the function.

The following discussion covers the SDI case and the [MDI case](#_core_the_mdi_case).

## <a name="_core_the_sdi_case"></a> The SDI Case

In a single document interface (SDI) application, the default window style in the framework is a combination of the **WS_OVERLAPPEDWINDOW** and **FWS_ADDTOTITLE** styles. **FWS_ADDTOTITLE** is an MFC-specific style that instructs the framework to add the document title to the window's caption. To change the window attributes in an SDI application, override the `PreCreateWindow` function in your class derived from `CFrameWnd` (which the Application Wizard names `CMainFrame`). For example:

[!code-cpp[NVC_MFCDocViewSDI#11](codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_2.cpp)]

This code creates a main frame window without Minimize and Maximize buttons and without a sizable border. The window is initially centered on the screen.

## <a name="_core_the_mdi_case"></a> The MDI Case

A little more work is required to change the window style of a child window in a multiple document interface (MDI) application. By default, an MDI application created with the Application Wizard uses the default [CMDIChildWnd](reference/cmdichildwnd-class.md) class defined in MFC. To change the window style of an MDI child window, you must derive a new class from `CMDIChildWnd` and replace all references to `CMDIChildWnd` in your project with references to the new class. Most likely, the only reference to `CMDIChildWnd` in the application is located in your application's `InitInstance` member function.

The default window style used in an MDI application is a combination of the **WS_CHILD**, **WS_OVERLAPPEDWINDOW**, and **FWS_ADDTOTITLE** styles. To change the window attributes of an MDI application's child windows, override the [PreCreateWindow](reference/cwnd-class.md#precreatewindow) function in your class derived from `CMDIChildWnd`. For example:

[!code-cpp[NVC_MFCDocView#16](codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_3.cpp)]

This code creates MDI child windows without a Maximize button.

### What do you want to know more about

- [Windows styles](reference/styles-used-by-mfc.md#window-styles)

- [Frame-window styles](frame-window-styles-cpp.md)

- [Window styles](/windows/win32/winmsg/window-styles)

## See also

[Frame-Window Styles](frame-window-styles-cpp.md)
