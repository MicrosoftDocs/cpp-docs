---
description: "Learn more about: COM+ 1.0, ATL COM+ 1.0 Component Wizard"
title: "COM+ 1.0, ATL COM+ 1.0 Component Wizard"
ms.date: "05/09/2019"
f1_keywords: ["vc.codewiz.class.atl.mts.options"]
ms.assetid: 2fbe259c-6be1-4d0e-9cfe-721c75c97cb1
---
# COM+ 1.0, ATL COM+ 1.0 Component Wizard

::: moniker range="msvc-160"

This wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

Use this page of the ATL COM+ 1.0 Component Wizard to specify interface type and additional interfaces to be supported.

For more information on ATL projects and ATL COM classes, see [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).

- **Interface**

   Indicates the type of interface the object supports. By default, the object supports a dual interface.

   |Option|Description|
   |------------|-----------------|
   |**Dual**|Specifies that the object supports a dual interface (its vtable has custom interface functions and late-binding `IDispatch` methods). Allows both COM clients and Automation controllers to access the object.|
   |**Custom**|Specifies that the object supports a custom interface (its vtable has custom interface functions). A custom interface can be faster than a dual interface, especially across process boundaries.<br /><br /> - **Automation compatible** Adds automation support to the custom interface. For attributed projects, sets the **oleautomation** attribute in the coclass.|

- **Queueable**

   Indicates that clients can call this component asynchronously using message queues. Adds the component attributed macro custom(TLBATTR_QUEUEABLE, 0) to the .h file (attributed projects) or to the .idl file (nonattributed projects).

- **Support**

   Indicates additional support for error handling and object control.

   |Option|Description|
   |------------|-----------------|
   |**ISupportErrorInfo**|Creates support for the [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interface so the object can return error information to the client.|
   |**IObjectControl**|Provides your object access to the three [IObjectControl](/windows/win32/api/comsvcs/nn-comsvcs-iobjectcontrol) methods: [Activate](/windows/win32/api/comsvcs/nf-comsvcs-iobjectcontrol-activate), [CanBePooled](/windows/win32/api/comsvcs/nf-comsvcs-iobjectcontrol-canbepooled), and [Deactivate](/windows/win32/api/comsvcs/nf-comsvcs-iobjectcontrol-deactivate).|
   |**IObjectConstruct**|Creates support for the [IObjectConstruct](/windows/win32/api/comsvcs/nn-comsvcs-iobjectconstruct) interface to manage passing in parameters from other methods or objects.|

- **Transaction**

   Indicates that the object supports transactions. Includes the file mtxattr.h in the .idl file (nonattributed projects).

   |Option|Description|
   |------------|-----------------|
   |**Supported**|Specifies that the object is never the root of a transaction stream by adding the component attribute macro custom(TLBATTR_TRANS_SUPPORTED,0) to the .h file (attributed projects) or to the .idl file (nonattributed projects).|
   |**Required**|Specifies that the object may or may not be the root of a transaction stream by adding the component attribute macro custom(TLBATTR_TRANS_REQUIRED,0) to the .h file (attributed projects) or to the .idl file (nonattributed projects).|
   |**Not supported**|Specifies that the object excludes transactions. Adds the component attribute macro custom(TLBATTR_TRANS_NOTSUPP,0) to the .h file (attributed projects) or to the .idl file (nonattributed projects).|
   |**Requires new**|Specifies that the object is always the root of a transaction stream by adding the component attribute macro custom(TLBATTR_TRANS_REQNEW,0) to the .h file (attributed projects) or to the .idl file (nonattributed projects).|

::: moniker-end

## See also

[ATL COM+ 1.0 Component Wizard](../../atl/reference/atl-com-plus-1-0-component-wizard.md)<br/>
[ATL COM+ 1.0 Component](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)
