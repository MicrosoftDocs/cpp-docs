---
title: "Typedef, Enum, Union, and Struct Attributes"
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
ms.assetid: f8a4fe94-dc02-4aed-bc31-3e500d42f4c7
caps.latest.revision: 8
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
# Typedef, Enum, Union, and Struct Attributes
The following attributes apply to the [typedef](assetId:///cc96cf26-ba93-4179-951e-695d1f5fdcf1), [struct](../VS_visualcpp/struct--C---.md), and [enum](../VS_visualcpp/Enumerations--C---.md) C++ keywords.  
  
### typedef  
  
|Attribute|Description|  
|---------------|-----------------|  
|[case](../VS_visualcpp/case--C---.md)|Used with the [switch_type](../VS_visualcpp/switch_type.md) attribute in a **union**.|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[export](../VS_visualcpp/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../VS_visualcpp/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[helpcontext](../VS_visualcpp/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../VS_visualcpp/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../VS_visualcpp/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[library_block](../VS_visualcpp/library_block.md)|Places a construct inside the .idl file's library block.|  
|[ptr](../VS_visualcpp/ptr.md)|Designates a pointer as a full pointer.|  
|[public](../VS_visualcpp/public--C---Attributes-.md)|Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.|  
|[ref](../VS_visualcpp/ref--C---.md)|Identifies a reference pointer.|  
|[switch_is](../VS_visualcpp/switch_is.md)|Specifies the expression or identifier acting as the union discriminant that selects the union member.|  
|[switch_type](../VS_visualcpp/switch_type.md)|Identifies the type of the variable used as the union discriminant.|  
|[unique](../VS_visualcpp/unique--C---.md)|Specifies a unique pointer.|  
|[wire_marshal](../VS_visualcpp/wire_marshal.md)|Specifies a data type that will be used for transmission instead of an application-specific data type.|  
  
### enum  
  
|Attribute|Description|  
|---------------|-----------------|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[export](../VS_visualcpp/export.md)|Causes a data structure to be placed in the .idl file.|  
|[uuid](../VS_visualcpp/uuid--C---Attributes-.md)|Specifies the unique ID for a class or interface.|  
|[v1_enum](../VS_visualcpp/v1_enum.md)|Directs that the specified enumerated type be transmitted as a 32-bit entity, rather than the 16-bit default.|  
  
### union  
  
|Attribute|Description|  
|---------------|-----------------|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[export](../VS_visualcpp/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../VS_visualcpp/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[last_is](../VS_visualcpp/last_is.md)|Specifies the index of the last array element to be transmitted.|  
|[length_is](../VS_visualcpp/length_is.md)|Specifies the number of array elements to be transmitted.|  
|[max_is](../VS_visualcpp/max_is.md)|Designates the maximum value for a valid array index.|  
|[size_is](../VS_visualcpp/size_is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|  
|[unique](../VS_visualcpp/unique--C---.md)|Specifies a unique pointer.|  
|[uuid](../VS_visualcpp/uuid--C---Attributes-.md)|Specifies the unique ID for a class or interface.|  
  
### Nonencapsulated union  
  
|Attribute|Description|  
|---------------|-----------------|  
|[ms_union](../VS_visualcpp/ms_union.md)|Controls the network data representation alignment of nonencapsulated unions.|  
|[no_injected_text](../VS_visualcpp/no_injected_text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
  
### struct  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../VS_visualcpp/aggregatable.md)|Indicates that the class supports aggregation.|  
|[aggregates](../VS_visualcpp/aggregates.md)|Indicates that a control aggregates the target class.|  
|[appobject](../VS_visualcpp/appobject.md)|Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this type library.|  
|[coclass](../VS_visualcpp/coclass.md)|Creates an ActiveX control.|  
|[com_interface_entry](../VS_visualcpp/com_interface_entry--C---.md)|Adds an interface entry to a COM map.|  
|[control](../VS_visualcpp/control.md)|Specifies that the user-defined type is a control.|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[db_column](../VS_visualcpp/db_column.md)|Binds a specified column to the rowset.|  
|[db_command](../VS_visualcpp/db_command.md)|Creates an OLE DB command.|  
|[db_param](../VS_visualcpp/db_param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../VS_visualcpp/db_source.md)|Creates a connection to a data source.|  
|[db_table](../VS_visualcpp/db_table.md)|Opens an OLE DB table.|  
|[default](../VS_visualcpp/default--C---.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|  
|[defaultvtable](../VS_visualcpp/defaultvtable.md)|Defines an interface as the default vtable interface for a control.|  
|[event_receiver](../VS_visualcpp/event_receiver.md)|Creates an event receiver.|  
|[event_source](../VS_visualcpp/event_source.md)|Creates an event source.|  
|[export](../VS_visualcpp/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../VS_visualcpp/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[hidden](../VS_visualcpp/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[implements_category](../VS_visualcpp/implements_category.md)|Specifies implemented component categories for the class.|  
|[last_is](../VS_visualcpp/last_is.md)|Specifies the index of the last array element to be transmitted.|  
|[length_is](../VS_visualcpp/length_is.md)|Specifies the number of array elements to be transmitted.|  
|[max_is](../VS_visualcpp/max_is.md)|Designates the maximum value for a valid array index.|  
|[requires_category](../VS_visualcpp/requires_category.md)|Specifies the required component categories of the target class.|  
|[size_is](../VS_visualcpp/size_is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|  
|[source](../VS_visualcpp/source--C---.md)|On a class, specifies the COM object's source interfaces for connection points. On a property or method, indicates that the member returns an object or VARIANT that is a source of events.|  
|[threading](../VS_visualcpp/threading--C---.md)|Specifies the threading model for a COM object.|  
|[unique](../VS_visualcpp/unique--C---.md)|Specifies a unique pointer.|  
|[uuid](../VS_visualcpp/uuid--C---Attributes-.md)|Specifies the unique ID for a class or interface.|  
|[version](../VS_visualcpp/version--C---.md)|Identifies a particular version among multiple versions of a class.|  
|[vi_progid](../VS_visualcpp/vi_progid.md)|Specifies a version-independent form of the ProgID.|  
  
## See Also  
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)