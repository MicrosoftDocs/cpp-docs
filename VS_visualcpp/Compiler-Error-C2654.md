---
title: "Compiler Error C2654"
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
ms.topic: error-reference
ms.assetid: ca7de1bd-576b-40bf-96fc-a91984827d20
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
# Compiler Error C2654
'identifier' : attempt to access member outside a member function  
  
 A member is accessed in a declaration. Member data can be accessed only in member functions.  
  
 This error can be caused when trying to initialize variables in a declaration. Use a constructor for this purpose.