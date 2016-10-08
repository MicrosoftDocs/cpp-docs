---
title: "ATL Archetypes"
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
ms.assetid: 809fb0af-c0f4-4cc0-b5bc-afe3de5d9722
caps.latest.revision: 6
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
# ATL Archetypes
In this context, an *archetype* is a theoretical class that supplies a collection of methods, data members, static functions, typedefs, or other features. The archetype also includes a description of the semantics necessary to create or use the class to represent a particular concept. Classes that mimic the archetype by providing the same features embody the same concept and can be used wherever the archetype can be used.  
  
 Archetypes are useful in C++ for describing the features of valid values for template parameters. The designer of the template has a clear idea of the necessary and sufficient features of the template parameter, and the compiler will enforce the syntactic requirements at build time, but the user of a template needs documentation to describe the semantics and to allow the relationships between archetypes and classes to be clearly spelled out.  
  
 Examples of archetypes in the Standard C++ Library are the different types of iterator and container. These archetypes are described in the topics [Iterator Conventions](../VS_visualcpp/Iterators.md) and [STL Containers](../VS_visualcpp/STL-Containers.md).  
  
 ATL Server defines the following archetypes:  
  
|Name|Description|  
|----------|-----------------|  
|[Worker Archetype](../VS_visualcpp/Worker-Archetype.md)|Classes that conform to the *worker* archetype provide the code to process work items queued on a thread pool.|  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)   
 [ATL COM Desktop Components](../VS_visualcpp/ATL-COM-Desktop-Components.md)