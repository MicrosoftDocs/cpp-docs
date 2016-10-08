---
title: "Using CObject"
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
ms.assetid: d0cd19bb-2856-4b41-abbc-620fd64cb223
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
# Using CObject
[CObject](../VS_visualcpp/CObject-Class.md) is the root base class for most of the Microsoft Foundation Class Library (MFC). The `CObject` class contains many useful features that you may want to incorporate into your own program objects, including serialization support, run-time class information, and object diagnostic output. If you derive your class from `CObject`, your class can exploit these `CObject` features.  
  
## What do you want to do?  
  
-   [Derive a class from CObject](../VS_visualcpp/Deriving-a-Class-from-CObject.md)  
  
-   [Add support for run-time class information, dynamic creation, and serialization to my derived class](../VS_visualcpp/Specifying-Levels-of-Functionality.md)  
  
-   [Access run-time class information](../VS_visualcpp/Accessing-Run-Time-Class-Information.md)  
  
-   [Create objects dynamically](../VS_visualcpp/Dynamic-Object-Creation.md)  
  
-   [Dump the object's data for diagnostic purposes](assetId:///727855b1-5a83-44bd-9fe3-f1d535584b59)  
  
-   Validate the object's internal state (see [MFC ASSERT_VALID and CObject::AssertValid](assetId:///7654fb75-9e9a-499a-8165-0a96faf2d5e6))  
  
-   [Have the class serialize itself to persistent storage](../VS_visualcpp/Serialization-in-MFC.md)  
  
-   See a list of [CObject Frequently Asked Questions](../VS_visualcpp/CObject-Class--Frequently-Asked-Questions.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)   
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)   
 [CRuntimeClass Structure](../VS_visualcpp/CRuntimeClass-Structure.md)   
 [Files](../VS_visualcpp/Files-in-MFC.md)   
 [Serialization](../VS_visualcpp/Serialization-in-MFC.md)