---
title: "progid"
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
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
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
# progid
Specifies the ProgID for a COM object.  
  
## Syntax  
  
```  
  
      [ progid(  
   name  
) ];  
```  
  
#### Parameters  
 *name*  
 The ProgID representing the object.  
  
 ProgIDs present a human-readable version of the class identifier (CLSID) used to identify COM/ActiveX objects.  
  
## Remarks  
 The **progid** C++ attribute lets you specify the ProgID for a COM object. A ProgID has the form *name1*.*name2*.*version*. If you do not specify a *version* for a ProgID, the default version is 1. If you do not specify *name1*.*name2*, the default name is *classname*.*classname*. If you do not specify **progid** and you do specify **vi_progid**, *name1*.*name2* are taken from **vi_progid** and the (next sequential number) version is appended.  
  
 If an attribute block that uses **progid** does not also use `uuid`, the compiler will check the registry to see if a `uuid` exists for the specified **progid**. If **progid** is not specified, the version (and coclass name, if creating a coclass) will be used to generate a **progid**.  
  
 **progid** implies the **coclass** attribute, that is, if you specify **progid**, it is the same thing as specifying the **coclass** and **progid** attributes.  
  
 The **progid** attribute causes a class to be automatically registered under the specified name. The generated .idl file will not display the **progid** value.  
  
 When this attribute is used within a project that uses ATL, the behavior of the attribute changes. In addition to the above behavior, the information specified with this attribute is used in the **GetProgID** function, injected by the **coclass** attribute. For more information, see the [coclass](../VS_visualcpp/coclass.md) attribute.  
  
## Example  
 See the example for [coclass](../VS_visualcpp/coclass.md) for a sample use of **progid**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../VS_visualcpp/Typedef--Enum--Union--and-Struct-Attributes.md)   
 [ProgID Key](http://msdn.microsoft.com/library/windows/desktop/dd542719)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)