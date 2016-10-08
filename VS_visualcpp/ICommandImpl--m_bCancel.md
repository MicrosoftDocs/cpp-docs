---
title: "ICommandImpl::m_bCancel"
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
ms.assetid: f3b6fb60-4de4-4d81-a5d2-4052c41be0de
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
# ICommandImpl::m_bCancel
Indicates whether the command is canceled.  
  
## Syntax  
  
```  
  
unsigned m_bCancel:1;  
  
```  
  
## Remarks  
 You can retrieve this variable in the **Execute** method of your command class and cancel as appropriate.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandImpl Class](../VS_visualcpp/ICommandImpl-Class.md)   
 [ICommandImpl::m_bCancelWhenExecuting](../VS_visualcpp/ICommandImpl--m_bCancelWhenExecuting.md)