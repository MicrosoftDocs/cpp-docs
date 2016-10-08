---
title: "Options, ATL Simple Object Wizard"
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
ms.topic: reference
ms.assetid: 125fe179-942d-4181-8b82-33e92e1fd779
caps.latest.revision: 12
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
# Options, ATL Simple Object Wizard
Use this page of the ATL Simple Object Wizard to design for increased efficiency and error support for the object.  
  
 For more information on ATL projects and ATL COM classes, see [ATL COM Desktop Components](../VS_visualcpp/ATL-COM-Desktop-Components.md).  
  
 **Threading model**  
 Indicates the method for managing threads. By default, the project uses **Apartment** threading.  
  
 See [Specifying the Project's Threading Model](../VS_visualcpp/Specifying-the-Threading-Model-for-a-Project--ATL-.md) for more information.  
  
|Option|Description|  
|------------|-----------------|  
|`Single`|Specifies that the object always runs in the primary COM thread. See [Single-Threaded Apartments](http://msdn.microsoft.com/library/windows/desktop/ms680112) and [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) for more information.|  
|**Apartment**|Specifies that the object uses apartment threading. Equivalent to single thread apartment. Each object of an apartment-threaded component is assigned an apartment for its thread, for the life of the object; however, multiple threads can be used for multiple objects. Each apartment is tied to a specific thread and has a Windows message pump (default).<br /><br /> See [Single-Threaded Apartments](http://msdn.microsoft.com/library/windows/desktop/ms680112) for more information.|  
|**Both**|Specifies that the object can use either apartment or free threading, depending from which kind of a thread it is created.|  
|**Free**|Specifies that the object uses free threading. Free threading is equivalent to a multithread apartment model. See [Multithreaded Apartments](http://msdn.microsoft.com/library/windows/desktop/ms693421) for more information.|  
|**Neutral** (Windows 2000 only)|Specifies that the object follows the guidelines for multithreaded apartments, but it can execute on any kind of thread.|  
  
 **Aggregation**  
 Indicates whether the object uses [aggregation](http://msdn.microsoft.com/library/windows/desktop/ms686558). The aggregate object chooses which interfaces to expose to clients, and the interfaces are exposed as if the aggregate object implemented them. Clients of the aggregate object communicate only with the aggregate object.  
  
|Option|Description|  
|------------|-----------------|  
|Yes|Specifies that the object can be aggregated. The default.|  
|No|Specifies that the object is not aggregated.|  
|Only|Specifies that the object must be aggregated.|  
  
 **Interface**  
 Indicates the type of interface the object supports. By default, the object supports a dual interface.  
  
|Option|Description|  
|------------|-----------------|  
|**Dual**|Specifies that the object supports a dual interface (its vtable has custom interface functions plus late-binding `IDispatch` methods). Allows both COM clients and [Automation controllers](../VS_visualcpp/Automation-Clients.md) to access the object. The default.|  
|**Custom**|Specifies that the object supports a custom interface (its vtable has custom interface functions). A custom interface can be faster than a dual interface, especially across process boundaries.<br /><br /> -   **Automation compatible** Allows Automation controllers to access an object that has the custom interface support.|  
  
 **Support**  
 Indicates additional support for the object.  
  
|Option|Description|  
|------------|-----------------|  
|**ISupportErrorInfo**|Creates support for the [ISupportErrorInfo](../VS_visualcpp/ISupportErrorInfoImpl-Class.md) interface so the object can return error information to the client.|  
|**Connection points**|Enables connection points for your object by making your object's class derive from [IConnectionPointContainerImpl](../VS_visualcpp/IConnectionPointContainerImpl-Class.md).|  
|**Free-threaded marshaler**|Creates a free-threaded marshaler object to marshal interface pointers efficiently between threads in the same process. Available to object specifying **Both** as the threading model.|  
|**IObjectWithSite (IE object support)**|Implements [IObjectWithSiteImpl](../VS_visualcpp/IObjectWithSiteImpl-Class.md), which provides a simple way to support communication between an object and its site in a container.|  
  
## See Also  
 [ATL Simple Object Wizard](../VS_visualcpp/ATL-Simple-Object-Wizard.md)   
 [ATL Simple Object](../VS_visualcpp/Adding-an-ATL-Simple-Object.md)   
 [In-Process Server Threading Issues](http://msdn.microsoft.com/library/windows/desktop/ms687205)