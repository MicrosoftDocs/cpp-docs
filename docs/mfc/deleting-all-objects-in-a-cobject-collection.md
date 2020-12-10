---
description: "Learn more about: Deleting All Objects in a CObject Collection"
title: "Deleting All Objects in a CObject Collection"
ms.date: "11/04/2016"
helpviewer_keywords: ["objects [MFC], deleting in collections", "objects in CObject collections, deleting", "CObject class [MFC], deleting in collection", "collection classes [MFC], deleting all objects", "CObject class collection", "objects in CObject collections", "collection classes [MFC], shared objects"]
ms.assetid: 81d2c1d5-a0a5-46e1-8ab9-82b45cf7afd2
---
# Deleting All Objects in a CObject Collection

This article explains how to delete all objects in a collection (without deleting the collection object itself).

To delete all the objects in a collection of `CObject`s (or of objects derived from `CObject`), you use one of the iteration techniques described in the article [Accessing All Members of a Collection](accessing-all-members-of-a-collection.md) to delete each object in turn.

> [!CAUTION]
> Objects in collections can be shared. That is, the collection keeps a pointer to the object, but other parts of the program may also have pointers to the same object. You must be careful not to delete an object that is shared until all the parts have finished using the object.

This article shows you how to delete the objects in:

- [A list](#_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject)

- [An array](#_core_to_delete_all_elements_in_an_array)

- [A map](#_core_to_delete_all_elements_in_a_map)

#### <a name="_core_to_delete_all_objects_in_a_list_of_pointers_to_cobject"></a> To delete all objects in a list of pointers to CObject

1. Use `GetHeadPosition` and `GetNext` to iterate through the list.

1. Use the **`delete`** operator to delete each object as it is encountered in the iteration.

1. Call the `RemoveAll` function to remove all elements from the list after the objects associated with those elements have been deleted.

The following example shows how to delete all objects from a list of `CPerson` objects. Each object in the list is a pointer to a `CPerson` object that was originally allocated on the heap.

[!code-cpp[NVC_MFCCollections#17](codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_1.cpp)]

The last function call, `RemoveAll`, is a list member function that removes all elements from the list. The member function `RemoveAt` removes a single element.

Notice the difference between deleting an element's object and removing the element itself. Removing an element from the list merely removes the list's reference to the object. The object still exists in memory. When you delete an object, it ceases to exist and its memory is reclaimed. Thus, it is important to remove an element immediately after the element's object has been deleted so that the list won't try to access objects that no longer exist.

#### <a name="_core_to_delete_all_elements_in_an_array"></a> To delete all elements in an array

1. Use `GetSize` and integer index values to iterate through the array.

1. Use the **`delete`** operator to delete each element as it is encountered in the iteration.

1. Call the `RemoveAll` function to remove all elements from the array after they have been deleted.

   The code for deleting all elements of an array is as follows:

   [!code-cpp[NVC_MFCCollections#18](codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_2.cpp)]

As with the list example above, you can call `RemoveAll` to remove all elements in an array or `RemoveAt` to remove an individual element.

#### <a name="_core_to_delete_all_elements_in_a_map"></a> To delete all elements in a map

1. Use `GetStartPosition` and `GetNextAssoc` to iterate through the array.

1. Use the **`delete`** operator to delete the key and/or value for each map element as it is encountered in the iteration.

1. Call the `RemoveAll` function to remove all elements from the map after they have been deleted.

   The code for deleting all elements of a `CMap` collection is as follows. Each element in the map has a string as the key and a `CPerson` object (derived from `CObject`) as the value.

   [!code-cpp[NVC_MFCCollections#19](codesnippet/cpp/deleting-all-objects-in-a-cobject-collection_3.cpp)]

You can call `RemoveAll` to remove all elements in a map or `RemoveKey` to remove an individual element with the specified key.

## See also

[Accessing All Members of a Collection](accessing-all-members-of-a-collection.md)
