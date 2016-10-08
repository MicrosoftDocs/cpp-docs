---
title: "Fundamentals of ATL COM Objects"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
caps.latest.revision: 23
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Fundamentals of ATL COM Objects
The following illustration depicts the relationship among the classes and interfaces that are used to define an ATL COM object.  
  
 ![ATL structure](../VS_visualcpp/media/vc307Y1.gif "vc307Y1")  
  
> [!NOTE]
>  This diagram shows that `CComObject` is derived from `CYourClass` whereas `CComAggObject` and `CComPolyObject` include `CYourClass` as a member variable.  
  
 There are three ways to define an ATL COM object. The standard option is to use the `CComObject` class which is derived from `CYourClass`. The second option is to create an aggregated object by using the `CComAggObject` class. The third option is to use the `CComPolyObject` class. `CComPolyObject` acts as a hybrid: it can function as a `CComObject` class or as a `CComAggObject` class, depending on how it is first created. For more information about how to use the `CComPolyObject` class, see [CComPolyObject Class](../VS_visualcpp/CComPolyObject-Class.md).  
  
 When you use standard ATL COM, you use two objects: an outer object and an inner object. External clients access the functionality of the inner object through the wrapper functions that are defined in the outer object. The outer object is of type `CComObject`.  
  
 When you use an aggregated object, the outer object does not provide wrappers for the functionality of the inner object. Instead, the outer object provides a pointer that is directly accessed by external clients. In this scenario, the outer object is of type `CComAggObject`. The inner object is a member variable of the outer object, and it is of type `CYourClass`.  
  
 Because the client does not have to go through the outer object to interact with the inner object, aggregated objects are usually more efficient. Also, the outer object does not have to know the functionality of the aggregated object, given that the interface of the aggregated object is directly available to the client. However, not all objects can be aggregated. For an object to be aggregated, it needs to be designed with aggregation in mind.  
  
 ATL implements [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) in two phases:  
  
-   [CComObject](../VS_visualcpp/CComObject-Class.md), [CComAggObject](../VS_visualcpp/CComAggObject-Class.md), or [CComPolyObject](../VS_visualcpp/CComPolyObject-Class.md) implements the **IUnknown** methods.  
  
-   [CComObjectRoot](../VS_visualcpp/CComObjectRoot-Class.md) or [CComObjectRootEx](../VS_visualcpp/CComObjectRootEx-Class.md) manages the reference count and outer pointers of **IUnknown**.  
  
 Other aspects of your ATL COM object are handled by other classes:  
  
-   [CComCoClass](../VS_visualcpp/CComCoClass-Class.md) defines the object's default class factory and aggregation model.  
  
-   [IDispatchImpl](../VS_visualcpp/IDispatchImpl-Class.md) provides a default implementation of the `IDispatch Interface` portion of any dual interfaces on the object.  
  
-   [ISupportErrorInfoImpl](../VS_visualcpp/ISupportErrorInfoImpl-Class.md) implements the **ISupportErrorInfo** interface that ensures error information can be propagated up the call chain correctly.  
  
## In This Section  
 [Implementing CComObjectRootEx](../VS_visualcpp/Implementing-CComObjectRootEx.md)  
 Show example COM map entries for implementing `CComObjectRootEx`.  
  
 [Implementing CComObject, CComAggObject, and CComPolyObject](../VS_visualcpp/Implementing-CComObject--CComAggObject--and-CComPolyObject.md)  
 Discusses how the **DECLARE_\*_AGGREGATABLE** macros affect the use of `CComObject`, `CComAggObject`, and `CComPolyObject`.  
  
 [Supporting IDispatch and IErrorInfo](../VS_visualcpp/Supporting-IDispatch-and-IErrorInfo.md)  
 Lists the ATL implementation classes to use for supporting the `IDispatch` and **IErrorInfo** interfaces.  
  
 [Supporting IDispEventImpl](../VS_visualcpp/Supporting-IDispEventImpl.md)  
 Discusses the steps to implement a connection point for your class.  
  
 [Changing the Default Class Factory and Aggregation Model](../VS_visualcpp/Changing-the-Default-Class-Factory-and-Aggregation-Model.md)  
 Show what macros to use to change the default class factory and aggregation model.  
  
 [Creating an Aggregated Object](../VS_visualcpp/Creating-an-Aggregated-Object.md)  
 Lists the steps for creating an aggregated object.  
  
## Related Sections  
 [Creating an ATL Project](../VS_visualcpp/Creating-an-ATL-Project.md)  
 Provides information about creating an ATL COM object.  
  
 [ATL](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)  
 Provides links to conceptual topics on how to program using the Active Template Library.  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)