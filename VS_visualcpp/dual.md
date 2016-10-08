---
title: "dual"
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
ms.assetid: 5d4a9069-d819-42cd-ba56-bbcda17157d9
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
# dual
Places an interface in the .idl file as a dual interface.  
  
## Syntax  
  
```  
  
[dual]  
  
```  
  
## Remarks  
 When the **dual** C++ attribute precedes an interface, it causes the interface to be placed inside the library block in the generated .idl file.  
  
## Example  
 The following code is an attribute block that uses **dual** before an interface definition:  
  
```  
// cpp_attr_ref_dual.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLibrary")];  
  
[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), dual]  
  
__interface IStatic : IDispatch   
{  
   HRESULT Func1(int i);  
   [   propget,   
      id(1),   
      bindable,   
      displaybind,   
      defaultbind,   
      requestedit  
   ]   
   HRESULT P1([out, retval] long *nSize);  
   [   propput,   
      id(1),   
      bindable,   
      displaybind,   
      defaultbind,   
      requestedit  
   ]   
   HRESULT P1([in] long nSize);      
};  
  
[cpp_quote("#include file.h")];  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**dispinterface**|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)   
 [custom](../VS_visualcpp/custom--C---.md)   
 [dispinterface](../VS_visualcpp/dispinterface.md)   
 [object](../VS_visualcpp/object--C---.md)   
 [__interface](../VS_visualcpp/__interface.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)