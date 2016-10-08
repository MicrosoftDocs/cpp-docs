---
title: "defaultvalue"
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
ms.assetid: efa5d050-b2cc-4d9e-9b8e-79954f218d3a
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
# defaultvalue
Allows specification of a default value for a typed optional parameter.  
  
## Syntax  
  
```  
  
[ defaultvalue= value ]  
```  
  
#### Parameters  
 *value*  
 The default value for the parameter.  
  
## Remarks  
 The **defaultvalue** C++ attribute has the same functionality as the [defaultvalue](http://msdn.microsoft.com/library/windows/desktop/aa366793) MIDL attribute.  
  
## Example  
 The following code shows an interface method using the **defaultvalue** attribute:  
  
```  
// cpp_attr_ref_defaultvalue.cpp  
// compile with: /LD  
#include <windows.h>  
  
[export] typedef long HRESULT;  
[export, ptr, string] typedef unsigned char * MY_STRING_TYPE;  
  
[  uuid("479B29EE-9A2C-11D0-B696-00A0C903487A"),  
   dual, oleautomation,  
   helpstring("IFireTabCtrl Interface"),  
   helpcontext(122), pointer_default(unique) ]  
  
__interface IFireTabCtrl : IDispatch {  
   [bindable, propget] HRESULT get_Size([out, retval, defaultvalue("33")] long *nSize);  
   [bindable, propput] HRESULT put_Size([in] int nSize);  
};  
  
[ module(name="ATLFIRELib", uuid="479B29E1-9A2C-11D0-B696-00A0C903487A",  
      version="1.0", helpstring="ATLFire 1.0 Type Library") ];  
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
 [out](../VS_visualcpp/out--C---.md)   
 [retval](../VS_visualcpp/retval.md)   
 [in](../VS_visualcpp/in--C---.md)   
 [pointer_default](../VS_visualcpp/pointer_default.md)   
 [unique](../VS_visualcpp/unique--C---.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)