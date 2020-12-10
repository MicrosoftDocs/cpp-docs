---
description: "Learn more about: Properties and Property Pages Classes"
title: "Properties and Property Pages Classes (ATL)"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["property pages, classes", "properties [ATL], classes", "properties [ATL]"]
ms.assetid: 31616f98-69f8-48b2-8d58-b8e7d1c2b2d8
---
# Properties and Property Pages Classes

The following classes support properties and property pages:

- [CComDispatchDriver](../atl/reference/atl-typedefs.md#ccomdispatchdriver) Retrieves or sets an object's properties through an `IDispatch` pointer.

- [CStockPropImpl](../atl/reference/cstockpropimpl-class.md) Implements the stock properties supported by ATL.

- [IPerPropertyBrowsingImpl](../atl/reference/iperpropertybrowsingimpl-class.md) Accesses the information in an object's property pages.

- [IPersistPropertyBagImpl](../atl/reference/ipersistpropertybagimpl-class.md) Stores an object's properties in a client-supplied property bag.

- [IPropertyPageImpl](../atl/reference/ipropertypageimpl-class.md) Manages a particular property page within a property sheet.

- [IPropertyPage2Impl](../atl/reference/ipropertypage2impl-class.md) Similar to `IPropertyPageImpl`, but also allows a client to select a specific property in a property page.

- [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md) Obtains the CLSIDs for the property pages supported by an object.

## Related Articles

[ATL Tutorial](../atl/active-template-library-atl-tutorial.md)

[ATL COM Property Pages](../atl/atl-com-property-pages.md)

## See also

[Class Overview](../atl/atl-class-overview.md)<br/>
[Property Map Macros](../atl/reference/property-map-macros.md)
