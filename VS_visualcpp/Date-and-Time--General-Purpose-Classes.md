---
title: "Date and Time: General-Purpose Classes"
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
ms.assetid: b8115d7f-428a-4c41-9970-18502f2caca2
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
# Date and Time: General-Purpose Classes
This article describes how to take advantage of the class library general-purpose services related to date and time management. Procedures described include:  
  
-   [Getting the current time](../VS_visualcpp/Current-Time--General-Purpose-Classes.md)  
  
-   [Calculating elapsed time](../VS_visualcpp/Elapsed-Time--General-Purpose-Classes.md)  
  
-   [Formatting a string representation of a date/time](../VS_visualcpp/Formatting-Time-Values--General-Purpose-Classes.md)  
  
 The `CTime` class provides a way to represent date and time information easily. The `CTimeSpan` class represents elapsed time, such as the difference between two `CTime` objects.  
  
> [!NOTE]
>  CTime objects can be used to represent dates between January 1, 1970, and January 18, 2038. `CTime` objects have a resolution of 1 second. `CTime` is based on the `time_t` data type, defined in the *Run-Time Library Reference*.  
  
## See Also  
 [Date and Time](../VS_visualcpp/Date-and-Time.md)