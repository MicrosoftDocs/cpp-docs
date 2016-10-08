---
title: "OLE Control Classes"
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
ms.assetid: 96495ec3-319e-4163-b839-1af0428ed9dd
caps.latest.revision: 7
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
# OLE Control Classes
These are the primary classes you use when writing OLE controls. The `COleControlModule` class in an OLE control module is like the [CWinApp](../VS_visualcpp/CWinApp-Class.md) class in an application. Each module implements one or more OLE controls; these controls are represented by `COleControl` objects. These controls communicate with their containers using `CConnectionPoint` objects.  
  
 The `CPictureHolder` and `CFontHolder` classes encapsulate COM interfaces for pictures and fonts, while the `COlePropertyPage` and `CPropExchange` classes help you implement property pages and property persistence for your control.  
  
 [COleControlModule](../VS_visualcpp/COleControlModule-Class.md)  
 Replaces the `CWinApp` class for your OLE control module. Derive from the `COleControlModule` class to develop an OLE control module object. It provides member functions for initializing your OLE control's module.  
  
 [COleControl](../VS_visualcpp/COleControl-Class.md)  
 Derive from the `COleControl` class to develop an OLE control. Derived from `CWnd`, this class inherits all the functionality of a Windows window object plus additional OLE-specific functionality, such as event firing and the ability to support methods and properties.  
  
 [CConnectionPoint](../VS_visualcpp/CConnectionPoint-Class.md)  
 The `CConnectionPoint` class defines a special type of interface used to communicate with other OLE objects, called a connection point. A connection point implements an outgoing interface that is able to initiate actions on other objects, such as firing events and change notifications.  
  
 [CPictureHolder](../VS_visualcpp/CPictureHolder-Class.md)  
 Encapsulates the functionality of a Windows picture object and the `IPicture` COM interface; used to implement the custom Picture property of an OLE control.  
  
 [CFontHolder](../VS_visualcpp/CFontHolder-Class.md)  
 Encapsulates the functionality of a Windows font object and the `IFont` COM interface; used to implement the stock Font property of an OLE control.  
  
 [COlePropertyPage](../VS_visualcpp/COlePropertyPage-Class.md)  
 Displays the properties of an OLE control in a graphical interface, similar to a dialog box.  
  
 [CPropExchange](../VS_visualcpp/CPropExchange-Class.md)  
 Supports the implementation of property persistence for your OLE controls. Analogous to [CDataExchange](../VS_visualcpp/CDataExchange-Class.md) for dialog boxes.  
  
 [CMonikerFile](../VS_visualcpp/CMonikerFile-Class.md)  
 Takes a moniker, or a string representation that it can make into a moniker, and binds it synchronously to the stream for which the moniker is a name.  
  
 [CAsyncMonikerFile](../VS_visualcpp/CAsyncMonikerFile-Class.md)  
 Works similarly to `CMonikerFile`; however, it binds the moniker asynchronously to the stream for which the moniker is a name.  
  
 [CDataPathProperty](../VS_visualcpp/CDataPathProperty-Class.md)  
 Implements an OLE control property that can be loaded asynchronously.  
  
 [CCachedDataPathProperty](../VS_visualcpp/CCachedDataPathProperty-Class.md)  
 Implements an OLE control property transferred asynchronously and cached in a memory file.  
  
 [COleCmdUI](../VS_visualcpp/COleCmdUI-Class.md)  
 Allows an Active document to receive commands that originate in its container's user interface (such as FileNew, Open, Print, and so on), and allows a container to receive commands that originate in the Active document's user interface.  
  
 [COleSafeArray](../VS_visualcpp/COleSafeArray-Class.md)  
 Works with arrays of arbitrary type and dimension.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)