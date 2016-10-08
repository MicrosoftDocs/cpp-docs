---
title: "usesgetlasterror"
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
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
caps.latest.revision: 9
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
# usesgetlasterror
Tells the caller that if there is an error when calling that function, then the caller can then call `GetLastError` to retrieve the error code.  
  
## Syntax  
  
```  
  
[usesgetlasterror]  
  
```  
  
## Remarks  
 The **usesgetlasterror** C++ attribute has the same functionality as the [usesgetlasterror](http://msdn.microsoft.com/library/windows/desktop/aa367297) MIDL attribute.  
  
## Example  
 See the [idl_module](../VS_visualcpp/idl_module.md) example for a sample of how to use **usesgetlasterror**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**module** attribute|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)