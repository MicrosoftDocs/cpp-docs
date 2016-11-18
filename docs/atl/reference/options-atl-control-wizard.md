---
title: "Options, ATL Control Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.control.options"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL Control Wizard, options"
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
caps.latest.revision: 14
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
# Options, ATL Control Wizard
Insert "Search Results" summary here.  
  
 Use this page of the wizard to define the type of control you are creating and the level of interface support it contains.  
  
## UIElement List  
 **Control type**  
 The kind of control you want to create.  
  
-   **Standard control: An ActiveX control.**  
  
-   **Composite control**: An ActiveX control that can contain (similar to a dialog box) other ActiveX controls or Windows controls. A composite control includes the following:  
  
    -   A template for the dialog box that implements the composite control.  
  
    -   A custom resource, REGISTRY, which automatically registers the composite control when invoked.  
  
    -   A C++ class that implements the composite control.  
  
    -   A COM interface, exposed by the composite control.  
  
    -   An HTML test page containing the composite control.  
  
     By default, this control sets [CComControlBase::m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_bwindowonly) to true, to indicate that this is a windowed control. It implements a sink map. For more information, see [Support for DHTML Control](../../atl/atl-support-for-dhtml-controls.md).  
  
-   **DHTML control**: An ATL DHTML control specifies the user interface, using HTML. The DHTML UI class contains a COM map. By default, this control sets [CComControlBase::m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_bwindowonly) to true, to indicate that this is a windowed control.  
  
     For more information, see [Identifying the Elements of the DHTML Control Project](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).  
  
 **Minimal control**  
 Supports only the interfaces that are absolutely needed by most containers. You can set **Minimal control** for any of the control types: you can create a minimal standard control, a minimal composite control, or a minimal DHTML control.  
  
 **Aggregation**  
 Adds aggregation support for the control you are creating. For more information, see [Aggregation](../../atl/aggregation.md).  
  
-   **Yes**: Create a control that can be aggregated.  
  
-   **No**: Create a control that cannot be aggregated.  
  
-   **Only**: Create a control that can only be instantiated through aggregation.  
  
 **Threading model**  
 Specifies that the threading model used by the control.  
  
-   **Single**: The control will run only in the primary COM thread.  
  
-   **Apartment**: The control can be created in any single thread apartment. The default.  
  
 **Interface**  
 The type of interface this control exposes to the container.  
  
-   **Dual**: Creates an interface that exposes properties and methods through `IDispatch` and directly through the VTBL.  
  
-   **Custom**: Creates an interface that exposes methods directly through a VTBL.  
  
     If you select **Custom**, then you can specify that the control is **Automation compatible**. If you select **Automation compatible**, then the wizard adds the [oleautomation](../../windows/oleautomation.md) attribute to the interface in the IDL, and the interface can be marshaled by the universal marshaler in oleaut32.dll. See [Marshaling Details](http://msdn.microsoft.com/library/windows/desktop/ms692621) in the [!INCLUDE[winsdkshort](../../atl-mfc-shared/reference/includes/winsdkshort_md.md)] for more information.  
  
     Additionally, if you select **Automation compatible**, then all parameters for all methods in the control must be **VARIANT** compatible.  
  
 **Support**  
 Sets additional miscellaneous support for the control.  
  
-   **Connection points**: Enables connection points for your object by making your object's class derive from [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) and allowing it to expose a source interface.  
  
-   **Licensed**: Adds support to the control for [licensing](http://msdn.microsoft.com/library/windows/desktop/ms690543). Licensed controls can only be hosted if the client machine has the correct license.  
  
## See Also  
 [ATL Control Wizard](../../atl/reference/atl-control-wizard.md)

