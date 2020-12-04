---
description: "Learn more about: ATL Control Containment FAQ"
title: "ATL Control Containment FAQ"
ms.date: "11/04/2016"
helpviewer_keywords: ["hosting controls using ATL", "ActiveX control containers [C++], ATL control hosting", "ATL, hosting ActiveX controls", "ActiveX controls [C++], hosting", "controls [ATL]"]
ms.assetid: d4bdfbe0-82ca-4f2f-bb95-cb89bdcc9b53
---
# ATL Control Containment FAQ

## Which ATL Classes Facilitate ActiveX Control Containment?

ATL's control-hosting code doesn't require you to use any ATL classes; you can simply create an **"AtlAxWin80"** window and use the control-hosting API if necessary (for more information, see **What Is the ATL Control-Hosting API**. However, the following classes make the containment features easier to use.

|Class|Description|
|-----------|-----------------|
|[CAxWindow](../atl/reference/caxwindow-class.md)|Wraps an **"AtlAxWin80"** window, providing methods for creating the window, creating a control and/or attaching a control to the window, and retrieving interface pointers on the host object.|
|[CAxWindow2T](../atl/reference/caxwindow2t-class.md)|Wraps an **"AtlAxWinLic80"** window, providing methods for creating the window, creating a control and/or attaching a licensed control to the window, and retrieving interface pointers on the host object.|
|[CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md)|Acts as a base class for ActiveX control classes based on a dialog resource. Such controls can contain other ActiveX controls.|
|[CAxDialogImpl](../atl/reference/caxdialogimpl-class.md)|Acts as a base class for dialog classes based on a dialog resource. Such dialogs can contain ActiveX controls.|
|[CWindow](../atl/reference/cwindow-class.md)|Provides a method, [GetDlgControl](../atl/reference/cwindow-class.md#getdlgcontrol), that will return an interface pointer on a control, given the ID of its host window. In addition, the Windows API wrappers exposed by `CWindow` generally make window management easier.|

## What Is the ATL Control-Hosting API?

ATL's control-hosting API is the set of functions that allows any window to act as an ActiveX control container. These functions can be statically or dynamically linked into your project since they are available as source code and exposed by ATL90.dll. The control-hosting functions are listed in the table below.

|Function|Description|
|--------------|-----------------|
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Creates a host object, connects it to the supplied window, then attaches an existing control.|
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Creates a host object, connects it to the supplied window, then loads a control.|
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Creates a host object, connects it to the supplied window, then loads a control (also allows event sinks to be set up).|
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Creates a modeless dialog box from a dialog resource and returns the window handle.|
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Creates a modal dialog box from a dialog resource.|
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Returns the **IUnknown** interface pointer of the control hosted in a window.|
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Returns the **IUnknown** interface pointer of the host object connected to a window.|
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Initializes the control-hosting code.|
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Uninitializes the control-hosting code.|

The `HWND` parameters in the first three functions must be an existing window of (almost) any type. If you call any of these three functions explicitly (typically, you won't have to), do not pass a handle to a window that's already acting as a host (if you do, the existing host object won't be freed).

The first seven functions call [AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) implicitly.

> [!NOTE]
> The control-hosting API forms the foundation of ATL's support for ActiveX control containment. However, there is usually little need to call these functions directly if you take advantage of or make full use of ATL's wrapper classes. For more information, see [Which ATL Classes Facilitate ActiveX Control Containment](#which-atl-classes-facilitate-activex-control-containment).

## What Is AtlAxWin100?

`AtlAxWin100` is the name of a window class that helps provide ATL's control-hosting functionality. When you create an instance of this class, the window procedure will automatically use the control-hosting API to create a host object associated with the window and load it with the control that you specify as the title of the window.

## When Do I Need to Call AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registers the **"AtlAxWin80"** window class (plus a couple of custom window messages) so this function must be called before you try to create a host window. However, you don't always need to call this function explicitly, since the hosting APIs (and the classes that use them) often call this function for you. There is no harm in calling this function more than once.

## What Is a Host Object?

A host object is a COM object that represents the ActiveX control container supplied by ATL for a particular window. The host object subclasses the container window so that it can reflect messages to the control, it provides the necessary container interfaces to be used by the control, and it exposes the [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) and [IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) interfaces to allow you to configure the environment of the control.

You can use the host object to set the ambient properties of the container.

## Can I Host More Than One Control in a Single Window?

It is not possible to host more than one control in a single ATL host window. Each host window is designed to hold exactly one control at a time (this allows for a simple mechanism for handling message reflection and per-control ambient properties). However, if you need the user to see multiple controls in a single window, it's a simple matter to create multiple host windows as children of that window.

## Can I Reuse a Host Window?

It is not recommended that you reuse host windows. To ensure the robustness of your code, you should tie the lifetime of your host window to the lifetime of a single control.

## When Do I Need to Call AtlAxWinTerm?

[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) unregisters the **"AtlAxWin80"** window class. You should call this function (if you no longer need to create host windows) after all existing host windows have been destroyed. If you don't call this function, the window class will be unregistered automatically when the process terminates.

## Hosting ActiveX Controls Using ATL AXHost

The sample in this section shows how to create AXHost and how to host an ActiveX control using various ATL functions. It also shows how to access the control and sink events (using [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) from the control that is hosted. The sample hosts the Calendar control in a main window or in a child window.

Notice the definition of the `USE_METHOD` symbol. You can change the value of this symbol to vary between 1 and 8. The value of the symbol determines how the control will be created:

- For even-numbered values of `USE_METHOD`, the call to create the host subclasses a window and converts it into a control host. For odd-numbered values, the code creates a child window that acts as a host.

- For values of `USE_METHOD` between 1 and 4, access to the control and sinking of events are accomplished in the call that also creates the host. Values between 5 and 8 query the host for interfaces and hook the sink.

Here's a summary:

|USE_METHOD|Host|Control access and event sinking|Function demonstrated|
|-----------------|----------|--------------------------------------|---------------------------|
|1|Child window|One step|CreateControlLicEx|
|2|Main window|One step|AtlAxCreateControlLicEx|
|3|Child window|One step|CreateControlEx|
|4|Main window|One step|AtlAxCreateControlEx|
|5|Child window|Multiple steps|CreateControlLic|
|6|Main window|Multiple steps|AtlAxCreateControlLic|
|7|Child window|Multiple steps|CreateControl|
|8|Main window|Multiple steps|AtlAxCreateControl|

[!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/cpp/hosting-activex-controls-using-atl-axhost_1.cpp)]

## See also

[Control Containment FAQ](../atl/atl-control-containment-faq.md)<br/>
[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)<br/>
[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)<br/>
[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[CAxWindow2T Class](../atl/reference/caxwindow2t-class.md)<br/>
[IAxWinHostWindowLic Interface](../atl/reference/iaxwinhostwindowlic-interface.md)
