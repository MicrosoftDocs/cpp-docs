---
description: "Learn more about: Options, ATL Simple Object Wizard"
title: "Options, ATL Simple Object Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.class.atl.simple.options"]
helpviewer_keywords: ["ATL Simple Object Wizard, options"]
ms.assetid: 125fe179-942d-4181-8b82-33e92e1fd779
---
# Options, ATL Simple Object Wizard

Use this page of the ATL Simple Object Wizard to design for increased efficiency and error support for the object.

For more information on ATL projects and ATL COM classes, see [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).

- **Threading model**

   Indicates the method for managing threads. By default, the project uses **Apartment** threading.

   See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for more information.

   |Option|Description|
   |------------|-----------------|
   |**Single**|Specifies that the object always runs in the primary COM thread. See [Single-Threaded Apartments](/windows/win32/com/single-threaded-apartments) and [InprocServer32](/windows/win32/com/inprocserver32) for more information.|
   |**Apartment**|Specifies that the object uses apartment threading. Equivalent to single thread apartment. Each object of an apartment-threaded component is assigned an apartment for its thread, for the life of the object; however, multiple threads can be used for multiple objects. Each apartment is tied to a specific thread and has a Windows message pump (default).<br /><br /> See [Single-Threaded Apartments](/windows/win32/com/single-threaded-apartments) for more information.|
   |**Both**|Specifies that the object can use either apartment or free threading, depending from which kind of a thread it is created.|
   |**Free**|Specifies that the object uses free threading. Free threading is equivalent to a multithread apartment model. See [Multithreaded Apartments](/windows/win32/com/multithreaded-apartments) for more information.|
   |**Neutral**|Specifies that the object follows the guidelines for multithreaded apartments, but it can execute on any kind of thread.|

- **Aggregation**

   Indicates whether the object uses [aggregation](/windows/win32/com/aggregation). The aggregate object chooses which interfaces to expose to clients, and the interfaces are exposed as if the aggregate object implemented them. Clients of the aggregate object communicate only with the aggregate object.

   |Option|Description|
   |------------|-----------------|
   |**Yes**|Specifies that the object can be aggregated. The default.|
   |**No**|Specifies that the object is not aggregated.|
   |**Only**|Specifies that the object must be aggregated.|

- **Interface**

   Indicates the type of interface the object supports. By default, the object supports a dual interface.

   |Option|Description|
   |------------|-----------------|
   |**Dual**|Specifies that the object supports a dual interface (its vtable has custom interface functions plus late-binding `IDispatch` methods). Allows both COM clients and [Automation controllers](../../mfc/automation-clients.md) to access the object. The default.|
   |**Custom**|Specifies that the object supports a custom interface (its vtable has custom interface functions). A custom interface can be faster than a dual interface, especially across process boundaries.<br /><br /> - **Automation compatible** Allows Automation controllers to access an object that has the custom interface support.|

- **Support**

   Indicates additional support for the object.

   |Option|Description|
   |------------|-----------------|
   |**ISupportErrorInfo**|Creates support for the [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interface so the object can return error information to the client.|
   |**Connection points**|Enables connection points for your object by making your object's class derive from [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|
   |**Free-threaded marshaler**|Creates a free-threaded marshaler object to marshal interface pointers efficiently between threads in the same process. Available to object specifying **Both** as the threading model.|
   |**IObjectWithSite** (IE object support)|Implements [IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md), which provides a simple way to support communication between an object and its site in a container.|

## See also

[ATL Simple Object Wizard](../../atl/reference/atl-simple-object-wizard.md)<br/>
[ATL Simple Object](../../atl/reference/adding-an-atl-simple-object.md)<br/>
[In-Process Server Threading Issues](/windows/win32/com/in-process-server-threading-issues)
