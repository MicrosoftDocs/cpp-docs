---
title: "Implementing a Dual Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispatchImpl class, implementing dual interfaces"
  - "dual interfaces, implementing"
ms.assetid: d1da3633-b445-4dcd-8a0a-3efdafada3ea
caps.latest.revision: 12
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
# Implementing a Dual Interface
You can implement a dual interface using the [IDispatchImpl](../atl/reference/idispatchimpl-class.md) class, which provides a default implementation of the `IDispatch` methods in a dual interface. For more information, see [Implementing the IDispatch Interface](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
 To use this class:  
  
-   Define your dual interface in a type library.  
  
-   Derive your class from a specialization of `IDispatchImpl` (pass information about the interface and type library as the template arguments).  
  
-   Add an entry (or entries) to the COM map to expose the dual interface through `QueryInterface`.  
  
-   Implement the vtable part of the interface in your class.  
  
-   Ensure that the type library containing the interface definition is available to your objects at run time.  
  
## ATL Simple Object Wizard  
 If you want to create a new interface and a new class to implement it, you can use the [ATL Add Class dialog box](../ide/add-class-dialog-box.md), and then the [ATL Simple Object Wizard](../atl/reference/atl-simple-object-wizard.md).  
  
## Implement Interface Wizard  
 If you have an existing interface, you can use the [Implement Interface Wizard](../atl/reference/adding-a-new-interface-in-an-atl-project.md) to add the necessary base class, COM map entries, and skeleton method implementations to an existing class.  
  
> [!NOTE]
>  You may need to adjust the generated base class so that the major and minor version numbers of the type library are passed as template arguments to your `IDispatchImpl` base class. The Implement Interface Wizard doesn't check the type library version number for you.  
  
## Implementing IDispatch  
 You can use an `IDispatchImpl` base class to provide an implementation of a dispinterface just by specifying the appropriate entry in the COM map (using the [COM_INTERFACE_ENTRY2](http://msdn.microsoft.com/library/3d48c53b-827b-42cc-9e22-594f7ea2bf0b) or [COM_INTERFACE_ENTRY_IID](http://msdn.microsoft.com/library/1bb69549-2099-4e20-ad5e-4c5a32f44e4b) macro) as long as you have a type library describing a corresponding dual interface. It is quite common to implement the `IDispatch` interface this way, for example. The ATL Simple Object Wizard and Implement Interface Wizard both assume that you intend to implement `IDispatch` in this way, so they will add the appropriate entry to the map.  
  
> [!NOTE]
>  ATL offers the [IDispEventImpl](../atl/reference/idispeventimpl-class.md) and [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) classes to help you implement dispinterfaces without requiring a type library containing the definition of a compatible dual interface.  
  
## See Also  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)

