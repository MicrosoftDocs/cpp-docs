---
title: "Interface Attributes"
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
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
caps.latest.revision: 7
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
# Interface Attributes
The following attributes apply to the [interface (or __interface)](../VS_visualcpp/__interface.md) C++ keyword.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[async_uuid](../VS_visualcpp/async_uuid.md)|Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attributes.|  
|[dispinterface](../VS_visualcpp/dispinterface.md)|Places an interface in the .idl file as a dispatch interface.|  
|[dual](../VS_visualcpp/dual.md)|Places an interface in the .idl file as a dual interface.|  
|[export](../VS_visualcpp/export.md)|Causes a data structure to be placed in the .idl file.|  
|[helpcontext](../VS_visualcpp/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../VS_visualcpp/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../VS_visualcpp/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[helpstringcontext](../VS_visualcpp/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstringdll](../VS_visualcpp/helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|  
|[hidden](../VS_visualcpp/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[library_block](../VS_visualcpp/library_block.md)|Places a construct inside the .idl file's library block.|  
|[local](../VS_visualcpp/local--C---.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|  
|[nonextensible](../VS_visualcpp/nonextensible.md)|Specifies that the `IDispatch` implementation includes only the properties and methods listed in the interface description and cannot be extended with additional members at run time. This attribute is only valid on a [dual](../VS_visualcpp/dual.md) interface.|  
|[odl](../VS_visualcpp/odl.md)|Identifies an interface as an Object Description Language (ODL) interface.|  
|[object](../VS_visualcpp/object--C---.md)|Identifies a custom interface.|  
|[oleautomation](../VS_visualcpp/oleautomation.md)|Indicates that an interface is compatible with Automation.|  
|[pointer_default](../VS_visualcpp/pointer_default.md)|Specifies the default pointer attribute for all pointers except top-level pointers that appear in parameter lists.|  
|[ptr](../VS_visualcpp/ptr.md)|Designates a pointer as a full pointer.|  
|[restricted](../VS_visualcpp/restricted.md)|Designates which members of the library cannot be called arbitrarily.|  
|[uuid](../VS_visualcpp/uuid--C---Attributes-.md)|Provides the unique ID for the library|  
  
 You must observe these rules for defining an interface:  
  
-   Default calling convention is [__stdcall](../VS_visualcpp/__stdcall.md).  
  
-   A GUID is supplied for you if you do not supply one.  
  
-   No overloaded methods are allowed.  
  
 When not specifying the [uuid](../VS_visualcpp/uuid--C---Attributes-.md) attribute and using the same interface name in different attribute projects, the same GUID is generated.  
  
## See Also  
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)