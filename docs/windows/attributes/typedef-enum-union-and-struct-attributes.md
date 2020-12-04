---
description: "Learn more about: Typedef, Enum, Union, and Struct Attributes"
title: "Typedef, Enum, Union, and Struct Attributes (C++ COM)"
ms.date: "10/02/2018"
helpviewer_keywords: ["union attributes", "attributes [C++/CLI], reference topics"]
ms.assetid: f8a4fe94-dc02-4aed-bc31-3e500d42f4c7
---
# Typedef, Enum, Union, and Struct Attributes

The following attributes apply to the [typedef](../../cpp/aliases-and-typedefs-cpp.md), [struct](../../cpp/struct-cpp.md), and [enum](../../cpp/enumerations-cpp.md) C++ keywords.

### typedef

|Attribute|Description|
|---------------|-----------------|
|[case](case-cpp.md)|Used with the [switch_type](switch-type.md) attribute in a **`union`**.|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[export](export.md)|Causes a data structure to be placed in the .idl file.|
|[first_is](first-is.md)|Specifies the index of the first array element to be transmitted.|
|[helpcontext](helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|
|[helpfile](helpfile.md)|Sets the name of the Help file for a type library.|
|[helpstring](helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|
|[library_block](library-block.md)|Places a construct inside the .idl file's library block.|
|[ptr](ptr.md)|Designates a pointer as a full pointer.|
|[public](public-cpp-attributes.md)|Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.|
|[ref](ref-cpp.md)|Identifies a reference pointer.|
|[switch_is](switch-is.md)|Specifies the expression or identifier acting as the union discriminant that selects the union member.|
|[switch_type](switch-type.md)|Identifies the type of the variable used as the union discriminant.|
|[unique](unique-cpp.md)|Specifies a unique pointer.|
|[wire_marshal](wire-marshal.md)|Specifies a data type that will be used for transmission instead of an application-specific data type.|

### enum

|Attribute|Description|
|---------------|-----------------|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[export](export.md)|Causes a data structure to be placed in the .idl file.|
|[uuid](uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|
|[v1_enum](v1-enum.md)|Directs that the specified enumerated type be transmitted as a 32-bit entity, rather than the 16-bit default.|

### union

|Attribute|Description|
|---------------|-----------------|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[export](export.md)|Causes a data structure to be placed in the .idl file.|
|[first_is](first-is.md)|Specifies the index of the first array element to be transmitted.|
|[last_is](last-is.md)|Specifies the index of the last array element to be transmitted.|
|[length_is](length-is.md)|Specifies the number of array elements to be transmitted.|
|[max_is](max-is.md)|Designates the maximum value for a valid array index.|
|[size_is](size-is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|
|[unique](unique-cpp.md)|Specifies a unique pointer.|
|[uuid](uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|

### Nonencapsulated union

|Attribute|Description|
|---------------|-----------------|
|[ms_union](ms-union.md)|Controls the network data representation alignment of nonencapsulated unions.|
|[no_injected_text](no-injected-text.md)|Prevents the compiler from injecting code as a result of attribute use.|

### struct

|Attribute|Description|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indicates that the class supports aggregation.|
|[aggregates](aggregates.md)|Indicates that a control aggregates the target class.|
|[appobject](appobject.md)|Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this type library.|
|[coclass](coclass.md)|Creates an ActiveX control.|
|[com_interface_entry](com-interface-entry-cpp.md)|Adds an interface entry to a COM map.|
|[control](control.md)|Specifies that the user-defined type is a control.|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[db_column](db-column.md)|Binds a specified column to the rowset.|
|[db_command](db-command.md)|Creates an OLE DB command.|
|[db_param](db-param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|
|[db_source](db-source.md)|Creates a connection to a data source.|
|[db_table](db-table.md)|Opens an OLE DB table.|
|[default](default-cpp.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|
|[defaultvtable](defaultvtable.md)|Defines an interface as the default vtable interface for a control.|
|[event_receiver](event-receiver.md)|Creates an event receiver.|
|[event_source](event-source.md)|Creates an event source.|
|[export](export.md)|Causes a data structure to be placed in the .idl file.|
|[first_is](first-is.md)|Specifies the index of the first array element to be transmitted.|
|[hidden](hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|
|[implements_category](implements-category.md)|Specifies implemented component categories for the class.|
|[last_is](last-is.md)|Specifies the index of the last array element to be transmitted.|
|[length_is](length-is.md)|Specifies the number of array elements to be transmitted.|
|[max_is](max-is.md)|Designates the maximum value for a valid array index.|
|[requires_category](requires-category.md)|Specifies the required component categories of the target class.|
|[size_is](size-is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|
|[source](source-cpp.md)|On a class, specifies the COM object's source interfaces for connection points. On a property or method, indicates that the member returns an object or VARIANT that is a source of events.|
|[threading](threading-cpp.md)|Specifies the threading model for a COM object.|
|[unique](unique-cpp.md)|Specifies a unique pointer.|
|[uuid](uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|
|[version](version-cpp.md)|Identifies a particular version among multiple versions of a class.|
|[vi_progid](vi-progid.md)|Specifies a version-independent form of the ProgID.|

## See also

[Attributes by Usage](attributes-by-usage.md)
