---
title: "Marshaling"
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
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
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
# Marshaling
The COM technique of marshaling allows interfaces exposed by an object in one process to be used in another process. In marshaling, COM provides code (or uses code provided by the interface implementor) both to pack a method's parameters into a format that can be moved across processes (as well as, across the wire to processes running on other machines) and to unpack those parameters at the other end. Likewise, COM must perform these same steps on the return from the call.  
  
> [!NOTE]
>  Marshaling is typically not necessary when an interface provided by an object is being used in the same process as the object. However, marshaling may be needed between threads.  
  
## See Also  
 [Introduction to COM](../VS_visualcpp/Introduction-to-COM.md)   
 [Marshaling Details](http://msdn.microsoft.com/library/windows/desktop/ms692621)