---
title: "Elapsed Time: Automation Classes"
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
ms.assetid: 26b34b37-c10e-4b91-82c3-1dc5ffb5361f
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
# Elapsed Time: Automation Classes
This procedure shows how to calculate the difference between two `CTime` objects and get a `CTimeSpan` result.  
  
#### To calculate elapsed time  
  
1.  Create two `COleDateTime` objects.  
  
2.  Set one of the `COleDateTime` objects to the current time.  
  
3.  Perform some time-consuming task.  
  
4.  Set the other `COleDateTime` object to the current time.  
  
5.  Take the difference between the two times.  
  
     [!CODE [NVC_ATLMFC_Utilities#178](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#178)]  
  
## See Also  
 [Date and Time: Automation Support](../VS_visualcpp/Date-and-Time--Automation-Support.md)