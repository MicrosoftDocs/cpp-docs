---
description: "Learn more about: Options, ATL Control Wizard"
title: "Options, ATL Control Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.class.atl.control.options"]
helpviewer_keywords: ["ATL Control Wizard, options"]
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
---
# Options, ATL Control Wizard

Use this page of the wizard to define the type of control you are creating and the level of interface support it contains.

## UIElement List

### Control type

The kind of control you want to create.

- **Standard control**: An ActiveX control.

- **Composite control**: An ActiveX control that can contain (similar to a dialog box) other ActiveX controls or Windows controls. A composite control includes the following:

  - A template for the dialog box that implements the composite control.

  - A custom resource, REGISTRY, which automatically registers the composite control when invoked.

  - A C++ class that implements the composite control.

  - A COM interface, exposed by the composite control.

  - An HTML test page containing the composite control.

    By default, this control sets [CComControlBase::m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) to true, to indicate that this is a windowed control. It implements a sink map. For more information, see [Support for DHTML Control](../../atl/atl-support-for-dhtml-controls.md).

- **DHTML control**: An ATL DHTML control specifies the user interface, using HTML. The DHTML UI class contains a COM map. By default, this control sets [CComControlBase::m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) to true, to indicate that this is a windowed control.

   For more information, see [Identifying the Elements of the DHTML Control Project](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).

### Minimal control

Supports only the interfaces that are absolutely needed by most containers. You can set **Minimal control** for any of the control types: you can create a minimal standard control, a minimal composite control, or a minimal DHTML control.

### Aggregation

Adds aggregation support for the control you are creating. For more information, see [Aggregation](../../atl/aggregation.md).

- **Yes**: Create a control that can be aggregated.

- **No**: Create a control that cannot be aggregated.

- **Only**: Create a control that can only be instantiated through aggregation.

### Threading model

Specifies that the threading model used by the control.

- **Single**: The control will run only in the primary COM thread.

- **Apartment**: The control can be created in any single thread apartment. The default.

### Interface

The type of interface this control exposes to the container.

- **Dual**: Creates an interface that exposes properties and methods through `IDispatch` and directly through the VTBL.

- **Custom**: Creates an interface that exposes methods directly through a VTBL.

   If you select **Custom**, then you can specify that the control is **Automation compatible**. If you select **Automation compatible**, then the wizard adds the [oleautomation](../../windows/attributes/oleautomation.md) attribute to the interface in the IDL, and the interface can be marshaled by the universal marshaler in oleaut32.dll. See [Marshaling Details](/windows/win32/com/marshaling-details) in the Windows SDK for more information.

   Additionally, if you select **Automation compatible**, then all parameters for all methods in the control must be VARIANT compatible.

### Support

Sets additional miscellaneous support for the control.

- **Connection points**: Enables connection points for your object by making your object's class derive from [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) and allowing it to expose a source interface.

- **Licensed**: Adds support to the control for [licensing](/windows/win32/com/licensing). Licensed controls can only be hosted if the client machine has the correct license.

## See also

[ATL Control Wizard](../../atl/reference/atl-control-wizard.md)
