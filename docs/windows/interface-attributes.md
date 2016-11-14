---
title: "Interface Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++], reference topics"
  - "interface attributes"
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
caps.latest.revision: 7
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
# Interface Attributes
The following attributes apply to the [interface (or __interface)](../cpp/interface.md) C++ keyword.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[async_uuid](../windows/async-uuid.md)|Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.|  
|[custom](../windows/custom-cpp.md)|Lets you define your own attributes.|  
|[dispinterface](../windows/dispinterface.md)|Places an interface in the .idl file as a dispatch interface.|  
|[dual](../windows/dual.md)|Places an interface in the .idl file as a dual interface.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[helpcontext](../windows/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../windows/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../windows/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|  
|[hidden](../windows/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[library_block](../windows/library-block.md)|Places a construct inside the .idl file's library block.|  
|[local](../windows/local-cpp.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|  
|[nonextensible](../windows/nonextensible.md)|Specifies that the `IDispatch` implementation includes only the properties and methods listed in the interface description and cannot be extended with additional members at run time. This attribute is only valid on a [dual](../windows/dual.md) interface.|  
|[odl](../windows/odl.md)|Identifies an interface as an Object Description Language (ODL) interface.|  
|[object](../windows/object-cpp.md)|Identifies a custom interface.|  
|[oleautomation](../windows/oleautomation.md)|Indicates that an interface is compatible with Automation.|  
|[pointer_default](../windows/pointer-default.md)|Specifies the default pointer attribute for all pointers except top-level pointers that appear in parameter lists.|  
|[ptr](../windows/ptr.md)|Designates a pointer as a full pointer.|  
|[restricted](../windows/restricted.md)|Designates which members of the library cannot be called arbitrarily.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Provides the unique ID for the library|  
  
 You must observe these rules for defining an interface:  
  
-   Default calling convention is [__stdcall](../cpp/stdcall.md).  
  
-   A GUID is supplied for you if you do not supply one.  
  
-   No overloaded methods are allowed.  
  
 When not specifying the [uuid](../windows/uuid-cpp-attributes.md) attribute and using the same interface name in different attribute projects, the same GUID is generated.  
  
## See Also  
 [Attributes by Usage](../windows/attributes-by-usage.md)