---
description: "Learn more about: Fundamentals of ATL COM Objects"
title: "Fundamentals of ATL COM Objects"
ms.date: "11/19/2018"
helpviewer_keywords: ["COM, and ATL", "ATL, COM", "ATL COM objects", "COM objects, ATL"]
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
---
# Fundamentals of ATL COM Objects

The following illustration depicts the relationship among the classes and interfaces that are used to define an ATL COM object.

![ATL structure](../atl/media/vc307y1.gif "ATL structure")

> [!NOTE]
> This diagram shows that `CComObject` is derived from `CYourClass` whereas `CComAggObject` and `CComPolyObject` include `CYourClass` as a member variable.

There are three ways to define an ATL COM object. The standard option is to use the `CComObject` class which is derived from `CYourClass`. The second option is to create an aggregated object by using the `CComAggObject` class. The third option is to use the `CComPolyObject` class. `CComPolyObject` acts as a hybrid: it can function as a `CComObject` class or as a `CComAggObject` class, depending on how it is first created. For more information about how to use the `CComPolyObject` class, see [CComPolyObject Class](../atl/reference/ccompolyobject-class.md).

When you use standard ATL COM, you use two objects: an outer object and an inner object. External clients access the functionality of the inner object through the wrapper functions that are defined in the outer object. The outer object is of type `CComObject`.

When you use an aggregated object, the outer object does not provide wrappers for the functionality of the inner object. Instead, the outer object provides a pointer that is directly accessed by external clients. In this scenario, the outer object is of type `CComAggObject`. The inner object is a member variable of the outer object, and it is of type `CYourClass`.

Because the client does not have to go through the outer object to interact with the inner object, aggregated objects are usually more efficient. Also, the outer object does not have to know the functionality of the aggregated object, given that the interface of the aggregated object is directly available to the client. However, not all objects can be aggregated. For an object to be aggregated, it needs to be designed with aggregation in mind.

ATL implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) in two phases:

- [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md), or [CComPolyObject](../atl/reference/ccompolyobject-class.md) implements the `IUnknown` methods.

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) manages the reference count and outer pointers of `IUnknown`.

Other aspects of your ATL COM object are handled by other classes:

- [CComCoClass](../atl/reference/ccomcoclass-class.md) defines the object's default class factory and aggregation model.

- [IDispatchImpl](../atl/reference/idispatchimpl-class.md) provides a default implementation of the `IDispatch Interface` portion of any dual interfaces on the object.

- [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) implements the `ISupportErrorInfo` interface that ensures error information can be propagated up the call chain correctly.

## In This Section

[Implementing CComObjectRootEx](../atl/implementing-ccomobjectrootex.md)<br/>
Show example COM map entries for implementing `CComObjectRootEx`.

[Implementing CComObject, CComAggObject, and CComPolyObject](../atl/implementing-ccomobject-ccomaggobject-and-ccompolyobject.md)<br/>
Discusses how the **DECLARE_\*_AGGREGATABLE** macros affect the use of `CComObject`, `CComAggObject`, and `CComPolyObject`.

[Supporting IDispatch and IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md)<br/>
Lists the ATL implementation classes to use for supporting the `IDispatch` and `IErrorInfo` interfaces.

[Supporting IDispEventImpl](../atl/supporting-idispeventimpl.md)<br/>
Discusses the steps to implement a connection point for your class.

[Changing the Default Class Factory and Aggregation Model](../atl/changing-the-default-class-factory-and-aggregation-model.md)<br/>
Show what macros to use to change the default class factory and aggregation model.

[Creating an Aggregated Object](../atl/creating-an-aggregated-object.md)<br/>
Lists the steps for creating an aggregated object.

## Related Sections

[Creating an ATL Project](../atl/reference/creating-an-atl-project.md)<br/>
Provides information about creating an ATL COM object.

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Provides links to conceptual topics on how to program using the Active Template Library.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)
