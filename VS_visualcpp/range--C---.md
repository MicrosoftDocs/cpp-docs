---
title: "range (C++)"
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
ms.assetid: f352f79e-ecb3-4cdd-9cdd-8406ef473594
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
# range (C++)
Specifies a range of allowable values for arguments or fields whose values are set at run time.  
  
## Syntax  
  
```  
  
      [ range(  
   low,   
   high  
) ]  
```  
  
#### Parameters  
 *low*  
 The low range value.  
  
 *high*  
 The high range value.  
  
## Remarks  
 The **range** C++ attribute has the same functionality as the [range](http://msdn.microsoft.com/library/windows/desktop/aa367151) MIDL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_range.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
   HRESULT length_is1([in, range(0, 999)] long f, [in, length_is(f)] char array[10]);  
   HRESULT length_is2([in, range(-99, -1)] long f, [in, length_is("f"), size_is(10)] char *array);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface method, interface parameter|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Method Attributes](../VS_visualcpp/Method-Attributes.md)   
 [Parameter Attributes](../VS_visualcpp/Parameter-Attributes.md)   
 [Data Member Attributes](../VS_visualcpp/Data-Member-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)