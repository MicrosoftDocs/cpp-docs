---
title: "IPropertyNotifySinkCP Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 1b41445e-bc88-4fa6-bb62-d68aacec2bd5
caps.latest.revision: 15
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
# IPropertyNotifySinkCP Class
This class exposes [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interface as an outgoing interface on a connectable object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template< class T,class CDV = CComDynamicUnkArray >  
    class IPropertyNotifySinkCP :   
    public IConnectionPointImpl< T,&IID_IPropertyNotifySink, CDV>  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IPropertyNotifySinkCP`.  
  
 `CDV`  
 A class that manages the connections between a connection point and its sinks. The default value is [CComDynamicUnkArray](../VS_visualcpp/CComDynamicUnkArray-Class.md), which allows unlimited connections. You can also use [CComUnkArray](../VS_visualcpp/CComUnkArray-Class.md), which specifies a fixed number of connections.  
  
## Remarks  
 `IPropertyNotifySinkCP` inherits all methods through its base class, [IConnectionPointImpl](../VS_visualcpp/IConnectionPointImpl-Class.md).  
  
 The [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interface allows a sink object to receive notifications about property changes. Class `IPropertyNotifySinkCP` exposes this interface as an outgoing interface on a connectable object. The client must implement the `IPropertyNotifySink` methods on the sink.  
  
 Derive your class from `IPropertyNotifySinkCP` when you want to create a connection point that represents the `IPropertyNotifySink` interface.  
  
 For more information about using connection points in ATL, see the article [Connection Points](../VS_visualcpp/ATL-Connection-Points.md).  
  
## Requirements  
 **Header:** atlctl.h  
  
## See Also  
 [IConnectionPointImpl Class](../VS_visualcpp/IConnectionPointImpl-Class.md)   
 [IConnectionPointContainerImpl Class](../VS_visualcpp/IConnectionPointContainerImpl-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)