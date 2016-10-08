---
title: "ATL Connection Points"
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
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
caps.latest.revision: 10
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
# ATL Connection Points
A connectable object is one that supports outgoing interfaces. An outgoing interface allows the object to communicate with a client. For each outgoing interface, the connectable object exposes a connection point. Each outgoing interface is implemented by a client on an object called a sink.  
  
 ![Connection points](../VS_visualcpp/media/vc2ZW31.gif "vc2ZW31")  
  
 Each connection point supports the [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318) interface. The connectable object exposes its connection points to the client through the [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857) interface.  
  
## In This Section  
 [ATL Connection Point Classes](../VS_visualcpp/ATL-Connection-Point-Classes.md)  
 Briefly describes the ATL classes that support connection points.  
  
 [Adding Connection Points to an Object](../VS_visualcpp/Adding-Connection-Points-to-an-Object.md)  
 Outlines the steps used to add connection points to an object.  
  
 [ATL Connection Point Example](../VS_visualcpp/ATL-Connection-Point-Example.md)  
 Provides an example of declaring a connection point.  
  
## Related Sections  
 [ATL](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)  
 Provides links to conceptual topics on how to program using the Active Template Library.  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)