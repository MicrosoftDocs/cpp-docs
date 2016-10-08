---
title: "async_uuid"
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
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
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
# async_uuid
Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.  
  
## Syntax  
  
```  
  
      [async_uuid (  
   uuid  
)]  
```  
  
#### Parameters  
 *uuid*  
 A UUID that identifies the version of the interface.  
  
## Remarks  
 The **async_uuid** C++ attribute has the same functionality as the [async_uuid](http://msdn.microsoft.com/library/windows/desktop/aa366735) MIDL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_async_uuid.cpp  
// compile with: /LD  
#include <Windows.h>  
[module(name="Test")];  
[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb"),   
async_uuid("e8583106-38fd-487e-912e-4fc8645c677e")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**dual**, **dispinterface**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Interface Attributes](../VS_visualcpp/Interface-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)