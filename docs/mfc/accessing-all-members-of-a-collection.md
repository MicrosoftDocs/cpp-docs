---
description: "Learn more about: Accessing All Members of a Collection"
title: "Accessing All Members of a Collection"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, collections", "enumerations [MFC]", "enumerating collections [MFC]", "collections [MFC], accessing", "collection classes [MFC]", ", ", ", ", ", ", ", ", ", ", ", ", ", "]
ms.assetid: 7bbae518-062e-4393-81f9-b22abd2e5f59
---
# Accessing All Members of a Collection

The MFC array collection classes — both template-based and not — use indexes to access their elements. The MFC list and map collection classes — both template-based and not — use an indicator of type **POSITION** to describe a given position within the collection. To access one or more members of these collections, you first initialize the position indicator and then repeatedly pass that position to the collection and ask it to return the next element. The collection is not responsible for maintaining state information about the progress of the iteration. That information is kept in the position indicator. But, given a particular position, the collection is responsible for returning the next element.

The following procedures show how to iterate over the three main types of collections provided with MFC:

- [Iterating an array](#_core_to_iterate_an_array)

- [Iterating a list](#_core_to_iterate_a_list)

- [Iterating a map](#_core_to_iterate_a_map)

### <a name="_core_to_iterate_an_array"></a> To iterate an array

1. Use sequential index numbers with the `GetAt` member function:

   [!code-cpp[NVC_MFCCollections#12](codesnippet/cpp/accessing-all-members-of-a-collection_1.cpp)]

   This example uses a typed pointer array that contains pointers to `CPerson` objects. The array is derived from class `CObArray`, one of the nontemplate predefined classes. `GetAt` returns a pointer to a `CPerson` object. For typed pointer collection classes — arrays or lists — the first parameter specifies the base class; the second parameter specifies the type to store.

   The `CTypedPtrArray` class also overloads the **[ ]** operator so that you can use the customary array-subscript syntax to access elements of an array. An alternative to the statement in the body of the **`for`** loop above is

   [!code-cpp[NVC_MFCCollections#13](codesnippet/cpp/accessing-all-members-of-a-collection_2.cpp)]

   This operator exists in both **`const`** and non-**`const`** versions. The **`const`** version, which is invoked for **`const`** arrays, can appear only on the right side of an assignment statement.

### <a name="_core_to_iterate_a_list"></a> To iterate a list

1. Use the member functions `GetHeadPosition` and `GetNext` to work your way through the list:

   [!code-cpp[NVC_MFCCollections#14](codesnippet/cpp/accessing-all-members-of-a-collection_3.cpp)]

   This example uses a typed pointer list to contain pointers to `CPerson` objects. The list declaration resembles the one for the array in the procedure [To iterate an array](#_core_to_iterate_an_array) but is derived from class `CObList`. `GetNext` returns a pointer to a `CPerson` object.

### <a name="_core_to_iterate_a_map"></a> To iterate a map

1. Use `GetStartPosition` to get to the beginning of the map and `GetNextAssoc` to repeatedly get the next key and value from the map, as shown by the following example:

   [!code-cpp[NVC_MFCCollections#15](codesnippet/cpp/accessing-all-members-of-a-collection_4.cpp)]

   This example uses a simple map template (rather than a typed pointer collection) that uses `CString` keys and stores pointers to `CPerson` objects. When you use access functions such as `GetNextAssoc`, the class provides pointers to `CPerson` objects. If you use one of the nontemplate map collections instead, you must cast the returned `CObject` pointer to a pointer to a `CPerson`.

    > [!NOTE]
    >  For nontemplate maps, the compiler requires a reference to a `CObject` pointer in the last parameter to `GetNextAssoc`. On input, you must cast your pointers to that type, as shown in the next example.

   The template solution is simpler and helps provide better type safety. The nontemplate code is more complicated, as you can see here:

   [!code-cpp[NVC_MFCCollections#16](codesnippet/cpp/accessing-all-members-of-a-collection_5.cpp)]

For more information, see [Deleting All Objects in a CObject Collection](deleting-all-objects-in-a-cobject-collection.md).

## See also

[Collections](collections.md)
