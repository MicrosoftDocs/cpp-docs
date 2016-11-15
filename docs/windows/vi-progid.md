---
title: "vi_progid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.vi_progid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vi_progid attribute"
ms.assetid: a52449be-b93e-4111-b883-44bb8da53261
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# vi_progid
Specifies a version-independent form of the ProgID.  
  
## Syntax  
  
```  
  
      [ vi_progid(  
   name  
) ];  
```  
  
#### Parameters  
 *name*  
 The version-independent ProgID representing the object.  
  
 ProgIDs present a human-readable version of the class identifier (CLSID) used to identify COM/ActiveX objects.  
  
## Remarks  
 The **vi_progid** C++ attribute lets you specify a version-independent ProgID for a COM object. A ProgID has the form *name1*.*name2*.*version*. A version-independent ProgID does not have a *version*. It is possible to specify both the **progid** and the **vi_progid** attributes on a coclass. If you do not specify **vi_progid**, the version-independent ProgID is the value specified by the [progid](../windows/progid.md) attribute.  
  
 **vi_progid** implies the **coclass** attribute, that is, if you specify **vi_progid**, it is the same thing as specifying the **coclass** and **vi_progid** attributes.  
  
 The **vi_progid** attribute causes a class to be automatically registered under the specified name. The generated .idl file will not display the ProgID value.  
  
 In ATL projects, If the [coclass](../windows/coclass.md) attribute is also present, the specified ProgID is used by the **GetVersionIndependentProgID** function (inserted by the **coclass** attribute).  
  
## Example  
 See the [coclass](../windows/coclass.md) example for a sample use of **vi_progid**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [ProgID Key](http://msdn.microsoft.com/library/windows/desktop/dd542719)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)