---
title: "helpstringdll"
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
ms.assetid: 121271fa-f061-492b-b87f-bbfcf4b02e7b
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
# helpstringdll
Specifies the name of the DLL to use to perform document string lookup (localization).  
  
## Syntax  
  
```  
  
      [ helpstringdll(  
   "string"  
) ]  
```  
  
#### Parameters  
 `string`  
 The DLL to use to perform document string lookup.  
  
## Remarks  
 The **helpstringdll** C++ attribute has the same functionality as the [helpstringdll](http://msdn.microsoft.com/library/windows/desktop/aa366860) MIDL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_helpstringdll.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib", helpstringdll="xx.dll")];  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI   
{  
   HRESULT xxx();  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `interface`, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Interface Attributes](../VS_visualcpp/Interface-Attributes.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Method Attributes](../VS_visualcpp/Method-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)