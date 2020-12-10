---
description: "Learn more about: Recommendations for Choosing a Collection Class"
title: "Recommendations for Choosing a Collection Class"
ms.date: "11/04/2016"
helpviewer_keywords: ["type safety of collection classes [MFC]", "collection classes [MFC], serialization", "collection classes [MFC], speed", "collection classes [MFC], type safety", "collection classes [MFC], choosing", "collection classes [MFC], functionality", "shapes, collection", "collection classes [MFC], template-based", "MFC collection classes [MFC], characteristics", "collection classes [MFC], about collection classes [MFC]", "serialization [MFC], collection classes", "collection classes [MFC], duplicates allowed", "collection classes [MFC], shapes"]
ms.assetid: a82188cd-443f-40d8-a244-edf292a53db4
---
# Recommendations for Choosing a Collection Class

This article contains detailed information designed to help you choose a collection class for your particular application needs.

Your choice of a collection class depends on a number of factors, including:

- The features of the class shape: order, indexing, and performance, as shown in the [Collection Shape Features](#_core_collection_shape_features) table later in this topic

- Whether the class uses C++ templates

- Whether the elements stored in the collection can be serialized

- Whether the elements stored in the collection can be dumped for diagnostics

- Whether the collection is type-safe

The following table, [Collection Shape Features](#_core_collection_shape_features), summarizes the characteristics of the available collection shapes.

- Columns 2 and 3 describe each shape's ordering and access characteristics. In the table, the term "ordered" means that the order in which items are inserted and deleted determines their order in the collection; it does not mean the items are sorted on their contents. The term "indexed" means that the items in the collection can be retrieved by an integer index, much like items in a typical array.

- Columns 4 and 5 describe each shape's performance. In applications that require many insertions into the collection, insertion speed might be especially important; for other applications, lookup speed may be more important.

- Column 6 describes whether each shape allows duplicate elements.

### <a name="_core_collection_shape_features"></a> Collection Shape Features

|Shape|Ordered|Indexed|Insert an element|Search for specified element|Duplicate elements|
|-----------|--------------|--------------|-----------------------|----------------------------------|-------------------------|
|List|Yes|No|Fast|Slow|Yes|
|Array|Yes|By int|Slow|Slow|Yes|
|Map|No|By key|Fast|Fast|No (keys) Yes (values)|

The following table, [Characteristics of MFC Collection Classes](#_core_characteristics_of_mfc_collection_classes), summarizes other important characteristics of specific MFC collection classes as a guide to selection. Your choice may depend on whether the class is based on C++ templates, whether its elements can be serialized via MFC's document [serialization](../mfc/serialization-in-mfc.md) mechanism, whether its elements can be dumped via MFC's diagnostic dumping mechanism, or whether the class is type-safe — that is, whether you can guarantee the type of elements stored in and retrieved from a collection based on the class.

### <a name="_core_characteristics_of_mfc_collection_classes"></a> Characteristics of MFC Collection Classes

|Class|Uses C++<br /><br /> templates|Can be<br /><br /> serialized|Can be<br /><br /> dumped|Is<br /><br /> type-safe|
|-----------|------------------------------|---------------------------|-----------------------|-----------------------|
|`CArray`|Yes|Yes 1|Yes 1|No|
|`CByteArray`|No|Yes|Yes|Yes 3|
|`CDWordArray`|No|Yes|Yes|Yes 3|
|`CList`|Yes|Yes 1|Yes 1|No|
|`CMap`|Yes|Yes 1|Yes 1|No|
|`CMapPtrToPtr`|No|No|Yes|No|
|`CMapPtrToWord`|No|No|Yes|No|
|`CMapStringToOb`|No|Yes|Yes|No|
|`CMapStringToPtr`|No|No|Yes|No|
|`CMapStringToString`|No|Yes|Yes|Yes 3|
|`CMapWordToOb`|No|Yes|Yes|No|
|`CMapWordToPtr`|No|No|Yes|No|
|`CObArray`|No|Yes|Yes|No|
|`CObList`|No|Yes|Yes|No|
|`CPtrArray`|No|No|Yes|No|
|`CPtrList`|No|No|Yes|No|
|`CStringArray`|No|Yes|Yes|Yes 3|
|`CStringList`|No|Yes|Yes|Yes 3|
|`CTypedPtrArray`|Yes|Depends 2|Yes|Yes|
|`CTypedPtrList`|Yes|Depends 2|Yes|Yes|
|`CTypedPtrMap`|Yes|Depends 2|Yes|Yes|
|`CUIntArray`|No|No|Yes|Yes 3|
|`CWordArray`|No|Yes|Yes|Yes 3|

1. To serialize, you must explicitly call the collection object's `Serialize` function; to dump, you must explicitly call its `Dump` function. You cannot use the form `ar << collObj` to serialize or the form `dmp` `<< collObj` to dump.

2. Serializability depends on the underlying collection type. For example, if a typed pointer array is based on `CObArray`, it is serializable; if based on `CPtrArray`, it is not serializable. In general, the "Ptr" classes cannot be serialized.

3. If marked Yes in this column, a nontemplate collection class is type-safe provided you use it as intended. For example, if you store bytes in a `CByteArray`, the array is type-safe. But if you use it to store characters, its type safety is less certain.

## See also

[Collections](../mfc/collections.md)<br/>
[Template-Based Classes](../mfc/template-based-classes.md)<br/>
[How to: Make a Type-Safe Collection](../mfc/how-to-make-a-type-safe-collection.md)<br/>
[Accessing All Members of a Collection](../mfc/accessing-all-members-of-a-collection.md)
