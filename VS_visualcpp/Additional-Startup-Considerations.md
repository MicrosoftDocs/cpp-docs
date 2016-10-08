---
title: "Additional Startup Considerations"
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
ms.topic: language-reference
ms.assetid: 0e942aa6-8342-447c-b068-8980ed7622bd
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
# Additional Startup Considerations
In C++, object construction and destruction can involve executing user code. Therefore, it is important to understand which initializations happen before entry to **main** and which destructors are invoked after exit from **main**. (For detailed information about construction and destruction of objects, see [Constructors](../VS_visualcpp/Constructors--C---.md) and [Destructors](../VS_visualcpp/Destructors--C---.md).)  
  
 The following initializations take place prior to entry to **main**:  
  
-   Default initialization of static data to zero. All static data without explicit initializers are set to zero prior to executing any other code, including run-time initialization. Static data members must still be explicitly defined.  
  
-   Initialization of global static objects in a translation unit. This may occur either before entry to **main** or before the first use of any function or object in the object's translation unit.  
  
 **Microsoft Specific**  
  
 In Microsoft C++, global static objects are initialized before entry to **main**.  
  
 **END Microsoft Specific**  
  
 Global static objects that are mutually interdependent but in different translation units may cause incorrect behavior.  
  
## See Also  
 [Startup and Termination](../VS_visualcpp/Startup-and-Termination--C---.md)