---
title: "UI Support Classes"
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
ms.assetid: 313dfc95-308a-4118-b919-5a3c3673b865
caps.latest.revision: 8
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
# UI Support Classes
The following classes provide general UI support:  
  
-   [IDocHostUIHandlerDispatch](../VS_visualcpp/IDocHostUIHandlerDispatch-Interface.md) An interface to the Microsoft HTML parsing and rendering engine.  
  
-   [IOleObjectImpl](../VS_visualcpp/IOleObjectImpl-Class.md) Provides the principal methods through which a container communicates with a control. Manages the activation and deactivation of in-place controls.  
  
-   [IOleInPlaceObjectWindowlessImpl](../VS_visualcpp/IOleInPlaceObjectWindowlessImpl-Class.md) Manages the reactivation of in-place controls. Enables a windowless control to receive messages, as well as to participate in drag-and-drop operations.  
  
-   [IOleInPlaceActiveObjectImpl](../VS_visualcpp/IOleInPlaceActiveObjectImpl-Class.md) Assists communication between an in-place control and its container.  
  
-   [IViewObjectExImpl](../VS_visualcpp/IViewObjectExImpl-Class.md) Enables a control to display itself directly and to notify the container of changes in its display. Provides support for flicker-free drawing, non-rectangular and transparent controls, and hit testing.  
  
## Related Articles  
 [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md)  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)