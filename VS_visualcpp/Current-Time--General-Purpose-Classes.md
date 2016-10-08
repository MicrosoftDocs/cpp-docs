---
title: "Current Time: General Purpose Classes"
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
ms.assetid: c39e6775-6a92-4b27-95a7-5c86ed371d8a
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
# Current Time: General Purpose Classes
The following procedure shows how to create a `CTime` object and initialize it with the current time.  
  
#### To get the current time  
  
1.  Allocate a `CTime` object, as follows:  
  
     [!CODE [NVC_ATLMFC_Utilities#171](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#171)]  
  
    > [!NOTE]
    >  Uninitialized `CTime` objects are not initialized to a valid time.  
  
2.  Call the `CTime::GetCurrentTime` function to get the current time from the operating system. This function returns a `CTime` object that can be used to set the value of `CTime`, as follows:  
  
     [!CODE [NVC_ATLMFC_Utilities#172](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#172)]  
  
     Since `GetCurrentTime` is a static member function from the `CTime` class, you must qualify its name with the name of the class and the scope resolution operator (`::`), `CTime::GetCurrentTime()`.  
  
 Of course, the two steps outlined previously could be combined into a single program statement as follows:  
  
 [!CODE [NVC_ATLMFC_Utilities#173](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#173)]  
  
## See Also  
 [Date and Time: General-Purpose Classes](../VS_visualcpp/Date-and-Time--General-Purpose-Classes.md)