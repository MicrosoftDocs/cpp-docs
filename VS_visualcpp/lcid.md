---
title: "lcid"
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
ms.assetid: 7f248c69-ee1c-42c3-9411-39cf27c9f43d
caps.latest.revision: 10
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
# lcid
Lets you pass a locale identifier to a function.  
  
## Syntax  
  
```  
  
[lcid]  
  
```  
  
## Remarks  
 The **lcid** C++ attribute implements the functionality of the [lcid](http://msdn.microsoft.com/library/windows/desktop/aa367067) MIDL attribute. If you want to implement locale for a library block, use the **lcid=**`lcid` parameter to the [module](../VS_visualcpp/module--C---.md) attribute.  
  
## Example  
  
```  
// cpp_attr_ref_lcid.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLibrary")];  
typedef long HRESULT;  
  
[dual, uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA")]  
__interface IStatic {  
   HRESULT MyFunc([in, lcid] long LocaleID, [out, retval] BSTR * ReturnVal);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Parameter Attributes](../VS_visualcpp/Parameter-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)