---
title: "ICommandUI::Check"
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
ms.assetid: 469185b7-f6cc-4100-bb2d-91e79cc3c661
caps.latest.revision: 11
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
# ICommandUI::Check
Sets the user interface item for this command to the appropriate check state.  
  
## Syntax  
  
```  
property UICheckState Check;  
```  
  
## Remarks  
 This property sets the user interface item for this command to the appropriate check state. Set `Check` to the following values:  
  
|Term|Definition|  
|----------|----------------|  
|0|Uncheck|  
|1|Check|  
|2|Set indeterminate|  
  
## Requirements  
 **Header:** afxwinforms.h  
  
## See Also  
 [ICommandUI Interface](../VS_visualcpp/ICommandUI-Interface.md)