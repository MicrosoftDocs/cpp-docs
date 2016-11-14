---
title: "idl_module | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.idl_module"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "idl_module attribute"
ms.assetid: 3578b337-e38a-4334-b747-15404c02dbc0
caps.latest.revision: 11
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
# idl_module
Specifies an entry point in a .dll file.  
  
## Syntax  
  
```  
  
      [ idl_module (   
   name=module_name,   
   dllname=dll,   
   uuid="uuid",   
   helpstring="help text",   
   helpstringcontext=helpcontextID,   
   helpcontext=helpcontext,   
   hidden,   
   restricted  
) ]  
function declaration  
```  
  
#### Parameters  
 **name**  
 A user-defined name for the code block that will appear in the .idl file.  
  
 **dllname** (optional)  
 The .dll file that contains the export.  
  
 `uuid` (optional)  
 A unique ID.  
  
 **helpstring** (optional)  
 A character string used to describe the type library.  
  
 **helpstringcontext** (optional)  
 The ID of a help topic in an .hlp or .chm file.  
  
 **helpcontext** (optional)  
 The Help ID for this type library.  
  
 **hidden** (optional)  
 A parameter that prevents the library from being displayed. See the [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) MIDL attribute for more information.  
  
 ***restricted***  (optional)  
 Members of the library cannot be arbitrarily called. See the [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) MIDL attribute for more information.  
  
 *function declaration*  
 The function that you will define.  
  
## Remarks  
 The `idl_module` C++ attribute lets you specify the entry point in a .dll file, which allows you to import from a .dll file.  
  
 The **idl_module** attribute has functionality similar to the [module](http://msdn.microsoft.com/library/windows/desktop/aa367099) MIDL attribute.  
  
 You can export anything from a COM object that you can export from a .dll file by putting a DLL entry point in the library block of an .idl file.  
  
 Your must use `idl_module` in two steps. First, you must define a name/DLL pair. Then, when you use `idl_module` to specify an entry point, specify the name and any additional attributes.  
  
## Example  
 The following code shows how to use the `idl_module` attribute:  
  
```  
// cpp_attr_ref_idl_module.cpp  
// compile with: /LD  
[idl_quote("midl_pragma warning(disable:2461)")];  
[module(name="MyLibrary"), idl_module(name="MyLib", dllname="xxx.dll")];  
[idl_module(name="MyLib"), entry(4), usesgetlasterror]  
void FuncName(int i);  
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
 [entry](../windows/entry.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)