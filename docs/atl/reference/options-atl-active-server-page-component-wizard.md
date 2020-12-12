---
description: "Learn more about: Options, ATL Active Server Page Component Wizard"
title: "Options, ATL Active Server Page Component Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.class.atl.asp.options"]
helpviewer_keywords: ["ATL Active Server Page Component Wizard, options"]
ms.assetid: 54f34e26-53c7-4456-9675-cb86e356bde0
---
# Options, ATL Active Server Page Component Wizard

Use this page of the ATL Active Server Page Component Wizard to design for increased efficiency and error support for the object.

For more information on ATL projects and ATL COM classes, see [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).

- **Threading model**

   Indicates the method for managing threads. By default, the project uses **Apartment** threading.

   See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for more information.

   |Option|Description|
   |------------|-----------------|
   |**Single**|Specifies that the object uses the single threading model. In the single threading model, an object always runs in the primary COM thread. See [Single-Threaded Apartments](/windows/win32/com/single-threaded-apartments) and [InprocServer32](/windows/win32/com/inprocserver32) for more information.|
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

- **Support**

   Additional support options:

   |Option|Description|
   |------------|-----------------|
   |**ISupportErrorInfo**|Creates support for the [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interface so the object can return error information to the client.|
   |**Connection points**|Enables connection points for your object by making your object's class derive from [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|
   |**Free-threaded marshaler**|Creates a free-threaded marshaler object to marshal interface pointers efficiently between threads in the same process. Available to object specifying either **Both** or **Free** as the threading model.|

## See also

[ATL Active Server Page Component Wizard](../../atl/reference/atl-active-server-page-component-wizard.md)<br/>
[ATL Active Server Page Component](../../atl/reference/adding-an-atl-active-server-page-component.md)
