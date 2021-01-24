---
description: "Learn more about: Template-Based Classes"
title: "Template-Based Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["type-safe collections", "CTypedPtrList class [MFC], template-based classes", "arrays [MFC], classes", "arrays [MFC], pointers", "typed pointers, collections of", "arrays [MFC], template-based", "CArray class [MFC], template-based classes", "simple template-based collections", "simple array collection classes [MFC]", "typed pointers", "collections, typed-pointer", "CList class [MFC], template-based classes", "collection classes [MFC], template-based", "CTypedPtrMap class [MFC], template-based classes", "pointers, collections of typed", "CTypedPtrArray class [MFC], template-based classes", "MFC collection classes [MFC], template-based", "template-based collection classes [MFC]", "simple list collection classes [MFC]"]
ms.assetid: c69fc95b-c8f6-4a99-abed-517c9898ef0c
---
# Template-Based Classes

This article explains the type-safe template-based collection classes in MFC version 3.0 and later. Using these templates to create type-safe collections is more convenient and helps provide type safety more effectively than using the collection classes not based on templates.

MFC predefines two categories of template-based collections:

- [Simple array, list, and map classes](#_core_using_simple_array.2c_.list.2c_.and_map_templates)

   `CArray`, `CList`, `CMap`

- [Arrays, lists, and maps of typed pointers](#_core_using_typed.2d.pointer_collection_templates)

   `CTypedPtrArray`, `CTypedPtrList`, `CTypedPtrMap`

The simple collection classes are all derived from class `CObject`, so they inherit the serialization, dynamic creation, and other properties of `CObject`. The typed pointer collection classes require you to specify the class you derive from — which must be one of the nontemplate pointer collections predefined by MFC, such as `CPtrList` or `CPtrArray`. Your new collection class inherits from the specified base class, and the new class's member functions use encapsulated calls to the base class members to enforce type safety.

For more information about C++ templates, see [Templates](../cpp/templates-cpp.md) in the *C++ Language Reference*.

## <a name="_core_using_simple_array.2c_.list.2c_.and_map_templates"></a> Using Simple Array, List, and Map Templates

To use the simple collection templates, you need to know what kind of data you can store in these collections and what parameters to use in your collection declarations.

### <a name="_core_simple_array_and_list_usage"></a> Simple Array and List Usage

The simple array and list classes, [CArray](../mfc/reference/carray-class.md) and [CList](../mfc/reference/clist-class.md), take two parameters: *TYPE* and `ARG_TYPE`. These classes can store any data type, which you specify in the *TYPE* parameter:

- Fundamental C++ data types, such as **`int`**, **`char`**, and **`float`**

- C++ structures and classes

- Other types that you define

For convenience and efficiency, you can use the *ARG_TYPE* parameter to specify the type of function arguments. Typically, you specify *ARG_TYPE* as a reference to the type you named in the *TYPE* parameter. For example:

[!code-cpp[NVC_MFCCollections#1](../mfc/codesnippet/cpp/template-based-classes_1.cpp)]

The first example declares an array collection, `myArray`, that contains **`int`**s. The second example declares a list collection, `myList`, that stores `CPerson` objects. Certain member functions of the collection classes take arguments whose type is specified by the *ARG_TYPE* template parameter. For example, the `Add` member function of class `CArray` takes an *ARG_TYPE* argument:

[!code-cpp[NVC_MFCCollections#2](../mfc/codesnippet/cpp/template-based-classes_2.cpp)]

### <a name="_core_simple_map_usage"></a> Simple Map Usage

The simple map class, [CMap](../mfc/reference/cmap-class.md), takes four parameters: *KEY*, *ARG_KEY*, *VALUE*, and *ARG_VALUE*. Like the array and list classes, the map classes can store any data type. Unlike arrays and lists, which index and order the data they store, maps associate keys and values: You access a value stored in a map by specifying the value's associated key. The *KEY* parameter specifies the data type of the keys used to access data stored in the map. If the type of *KEY* is a structure or class, the *ARG_KEY* parameter is typically a reference to the type specified in *KEY*. The *VALUE* parameter specifies the type of the items stored in the map. If the type of *ARG_VALUE* is a structure or class, the *ARG_VALUE* parameter is typically a reference to the type specified in *VALUE*. For example:

[!code-cpp[NVC_MFCCollections#3](../mfc/codesnippet/cpp/template-based-classes_3.cpp)]

The first example stores `MY_STRUCT` values, accesses them by **`int`** keys, and returns accessed `MY_STRUCT` items by reference. The second example stores `CPerson` values, accesses them by `CString` keys, and returns references to accessed items. This example might represent a simple address book, in which you look up persons by last name.

Because the *KEY* parameter is of type `CString` and the *KEY_TYPE* parameter is of type `LPCSTR`, the keys are stored in the map as items of type `CString` but are referenced in functions such as `SetAt` through pointers of type `LPCSTR`. For example:

[!code-cpp[NVC_MFCCollections#4](../mfc/codesnippet/cpp/template-based-classes_4.cpp)]

## <a name="_core_using_typed.2d.pointer_collection_templates"></a> Using Typed-Pointer Collection Templates

To use the typed-pointer collection templates, you need to know what kinds of data you can store in these collections and what parameters to use in your collection declarations.

### <a name="_core_typed.2d.pointer_array_and_list_usage"></a> Typed-Pointer Array and List Usage

The typed-pointer array and list classes, [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md) and [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md), take two parameters: *BASE_CLASS* and *TYPE*. These classes can store any data type, which you specify in the *TYPE* parameter. They are derived from one of the nontemplate collection classes that stores pointers; you specify this base class in *BASE_CLASS*. For arrays, use either `CObArray` or `CPtrArray`. For lists, use either `CObList` or `CPtrList`.

In effect, when you declare a collection based on, say `CObList`, the new class not only inherits the members of its base class, but it also declares a number of additional type-safe member functions and operators that help provide type safety by encapsulating calls to the base class members. These encapsulations manage all necessary type conversion. For example:

[!code-cpp[NVC_MFCCollections#5](../mfc/codesnippet/cpp/template-based-classes_5.cpp)]

The first example declares a typed-pointer array, `myArray`, derived from `CObArray`. The array stores and returns pointers to `CPerson` objects (where `CPerson` is a class derived from `CObject`). You can call any `CObArray` member function, or you can call the new type-safe `GetAt` and `ElementAt` functions or use the type-safe **[ ]** operator.

The second example declares a typed-pointer list, `myList`, derived from `CPtrList`. The list stores and returns pointers to `MY_STRUCT` objects. A class based on `CPtrList` is used for storing pointers to objects not derived from `CObject`. `CTypedPtrList` has a number of type-safe member functions: `GetHead`, `GetTail`, `RemoveHead`, `RemoveTail`, `GetNext`, `GetPrev`, and `GetAt`.

### <a name="_core_typed.2d.pointer_map_usage"></a> Typed-Pointer Map Usage

The typed-pointer map class, [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md), takes three parameters: *BASE_CLASS*, *KEY*, and *VALUE*. The *BASE_CLASS* parameter specifies the class from which to derive the new class: `CMapPtrToWord`, `CMapPtrToPtr`, `CMapStringToPtr`, `CMapWordToPtr`, `CMapStringToOb`, and so on. *KEY* is analogous to *KEY* in `CMap`: It specifies the type of the key used for lookups. *VALUE* is analogous to *VALUE* in `CMap`: It specifies the type of object stored in the map. For example:

[!code-cpp[NVC_MFCCollections#6](../mfc/codesnippet/cpp/template-based-classes_6.cpp)]

The first example is a map based on `CMapPtrToPtr` — it uses `CString` keys mapped to pointers to `MY_STRUCT`. You can look up a stored pointer by calling a type-safe `Lookup` member function. You can use the **[ ]** operator to look up a stored pointer and add it if not found. And you can iterate the map using the type-safe `GetNextAssoc` function. You can also call other member functions of class `CMapPtrToPtr`.

The second example is a map based on `CMapStringToOb` — it uses string keys mapped to stored pointers to `CMyObject` objects. You can use the same type-safe members described in the previous paragraph, or you can call members of class `CMapStringToOb`.

> [!NOTE]
> If you specify a **`class`** or **`struct`** type for the *VALUE* parameter, rather than a pointer or reference to the type, the class or structure must have a copy constructor.

For more information, see [How to Make a Type-Safe Collection](../mfc/how-to-make-a-type-safe-collection.md).

## See also

[Collections](../mfc/collections.md)
