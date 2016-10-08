---
title: "Serialization: Serializing an Object"
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
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
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
# Serialization: Serializing an Object
The article [Serialization: Making a Serializable Class](../VS_visualcpp/Serialization--Making-a-Serializable-Class.md) shows how to make a class serializable. Once you have a serializable class, you can serialize objects of that class to and from a file via a [CArchive](../VS_visualcpp/CArchive-Class.md) object. This article explains:  
  
-   [What a CArchive object is](../VS_visualcpp/What-Is-a-CArchive-Object.md).  
  
-   [Two ways to create a CArchive](../VS_visualcpp/Two-Ways-to-Create-a-CArchive-Object.md).  
  
-   [How to use the CArchive << and >> operators](../VS_visualcpp/Using-the-CArchive----and----Operators.md).  
  
-   [Storing and loading CObjects via an archive](../VS_visualcpp/Storing-and-Loading-CObjects-via-an-Archive.md).  
  
 You can let the framework create the archive for your serializable document or explicitly create the `CArchive` object yourself. You can transfer data between a file and your serializable object by using the << and >> operators for `CArchive` or, in some cases, by calling the `Serialize` function of a `CObject`-derived class.  
  
## See Also  
 [Serialization](../VS_visualcpp/Serialization-in-MFC.md)