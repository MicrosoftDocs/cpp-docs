---
title: "Typedef, Enum, Union, and Struct Attributes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "union attributes"
  - "attributes [C++], reference topics"
  - "struct attributes"
  - "typedef attributes"
  - "enum attributes"
ms.assetid: f8a4fe94-dc02-4aed-bc31-3e500d42f4c7
caps.latest.revision: 8
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
# Typedef, Enum, Union, and Struct Attributes
The following attributes apply to the [typedef](assetId:///cc96cf26-ba93-4179-951e-695d1f5fdcf1), [struct](../cpp/struct--c---.md), and [enum](../cpp/enumerations--c---.md) C++ keywords.  
  
### typedef  
  
|Attribute|Description|  
|---------------|-----------------|  
|[case](../windows/case--c---.md)|Used with the [switch_type](../windows/switch_type.md) attribute in a **union**.|  
|[custom](../windows/custom--c---.md)|Lets you define your own attribute.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../windows/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[helpcontext](../windows/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../windows/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../windows/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[library_block](../windows/library_block.md)|Places a construct inside the .idl file's library block.|  
|[ptr](../windows/ptr.md)|Designates a pointer as a full pointer.|  
|[public](../windows/public--c---attributes-.md)|Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.|  
|[ref](../windows/ref--c---.md)|Identifies a reference pointer.|  
|[switch_is](../windows/switch_is.md)|Specifies the expression or identifier acting as the union discriminant that selects the union member.|  
|[switch_type](../windows/switch_type.md)|Identifies the type of the variable used as the union discriminant.|  
|[unique](../windows/unique--c---.md)|Specifies a unique pointer.|  
|[wire_marshal](../windows/wire_marshal.md)|Specifies a data type that will be used for transmission instead of an application-specific data type.|  
  
### enum  
  
|Attribute|Description|  
|---------------|-----------------|  
|[custom](../windows/custom--c---.md)|Lets you define your own attribute.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[uuid](../windows/uuid--c---attributes-.md)|Specifies the unique ID for a class or interface.|  
|[v1_enum](../windows/v1_enum.md)|Directs that the specified enumerated type be transmitted as a 32-bit entity, rather than the 16-bit default.|  
  
### union  
  
|Attribute|Description|  
|---------------|-----------------|  
|[custom](../windows/custom--c---.md)|Lets you define your own attribute.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../windows/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[last_is](../windows/last_is.md)|Specifies the index of the last array element to be transmitted.|  
|[length_is](../windows/length_is.md)|Specifies the number of array elements to be transmitted.|  
|[max_is](../windows/max_is.md)|Designates the maximum value for a valid array index.|  
|[size_is](../windows/size_is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|  
|[unique](../windows/unique--c---.md)|Specifies a unique pointer.|  
|[uuid](../windows/uuid--c---attributes-.md)|Specifies the unique ID for a class or interface.|  
  
### Nonencapsulated union  
  
|Attribute|Description|  
|---------------|-----------------|  
|[ms_union](../windows/ms_union.md)|Controls the network data representation alignment of nonencapsulated unions.|  
|[no_injected_text](../windows/no_injected_text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
  
### struct  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../windows/aggregatable.md)|Indicates that the class supports aggregation.|  
|[aggregates](../windows/aggregates.md)|Indicates that a control aggregates the target class.|  
|[appobject](../windows/appobject.md)|Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this type library.|  
|[coclass](../windows/coclass.md)|Creates an ActiveX control.|  
|[com_interface_entry](../windows/com_interface_entry--c---.md)|Adds an interface entry to a COM map.|  
|[control](../windows/control.md)|Specifies that the user-defined type is a control.|  
|[custom](../windows/custom--c---.md)|Lets you define your own attribute.|  
|[db_column](../windows/db_column.md)|Binds a specified column to the rowset.|  
|[db_command](../windows/db_command.md)|Creates an OLE DB command.|  
|[db_param](../windows/db_param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../windows/db_source.md)|Creates a connection to a data source.|  
|[db_table](../windows/db_table.md)|Opens an OLE DB table.|  
|[default](../windows/default--c---.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|  
|[defaultvtable](../windows/defaultvtable.md)|Defines an interface as the default vtable interface for a control.|  
|[event_receiver](../windows/event_receiver.md)|Creates an event receiver.|  
|[event_source](../windows/event_source.md)|Creates an event source.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../windows/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[hidden](../windows/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[implements_category](../windows/implements_category.md)|Specifies implemented component categories for the class.|  
|[last_is](../windows/last_is.md)|Specifies the index of the last array element to be transmitted.|  
|[length_is](../windows/length_is.md)|Specifies the number of array elements to be transmitted.|  
|[max_is](../windows/max_is.md)|Designates the maximum value for a valid array index.|  
|[requires_category](../windows/requires_category.md)|Specifies the required component categories of the target class.|  
|[size_is](../windows/size_is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|  
|[source](../windows/source--c---.md)|On a class, specifies the COM object's source interfaces for connection points. On a property or method, indicates that the member returns an object or VARIANT that is a source of events.|  
|[threading](../windows/threading--c---.md)|Specifies the threading model for a COM object.|  
|[unique](../windows/unique--c---.md)|Specifies a unique pointer.|  
|[uuid](../windows/uuid--c---attributes-.md)|Specifies the unique ID for a class or interface.|  
|[version](../windows/version--c---.md)|Identifies a particular version among multiple versions of a class.|  
|[vi_progid](../windows/vi_progid.md)|Specifies a version-independent form of the ProgID.|  
  
## See Also  
 [Attributes by Usage](../windows/attributes-by-usage.md)