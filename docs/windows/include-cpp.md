---
title: "include (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.include"]
dev_langs: ["C++"]
helpviewer_keywords: ["include attribute"]
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# include (C++)
Specifies one or more header files to be included in the generated .idl file.  
  
## Syntax  
  
```  
  
      [ include(  
   header_file  
) ];  
```  
  
#### Parameters  
 *header_file*  
 The name of a file that you want included in the generated .idl file.  
  
## Remarks  
 The **include** C++ attribute causes an `#include` statement to be placed below the `import "docobj.idl"` statement in the generated .idl file.  
  
 The **include** C++ attribute has the same functionality as the [include](http://msdn.microsoft.com/library/windows/desktop/aa367052) MIDL attribute.  
  
## Example  
 The following code shows an example of how to use **include**. For this example, the file include.h contains only a #include statement.  
  
```  
// cpp_attr_ref_include.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[include(cpp_attr_ref_include.h)];  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Anywhere|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand-Alone Attributes](../windows/stand-alone-attributes.md)   
 [import](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [includelib](../windows/includelib-cpp.md)   
 [importlib](../windows/importlib.md)   