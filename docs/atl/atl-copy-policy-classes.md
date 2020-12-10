---
description: "Learn more about: ATL Copy Policy Classes"
title: "ATL Copy Policy Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["data [C++], ATL", "classes [C++], copy policy", "copy policy classes [C++]", "_Copy class", "_CopyInterface class"]
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
---
# ATL Copy Policy Classes

Copy policy classes are [utility classes](../atl/utility-classes.md) used to initialize, copy, and delete data. Copy policy classes allow you to define copy semantics for any type of data, and to define conversions between different data types.

ATL uses copy policy classes in its implementations of the following templates:

- [CComEnumImpl](../atl/reference/ccomenumimpl-class.md)

- [IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)

- [ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)

By encapsulating the information needed to copy or convert data in a copy policy class that can be passed as a template argument, the ATL developers have provided for extreme reusability of these classes. For example, if you need to implement a collection using any arbitrary data type, all you need to provide is the appropriate copy policy; you never have to touch the code that implements the collection.

## Definition

By definition, a class that provides the following static functions is a copy policy class:

`static void init(` `DestinationType` `* p);`

`static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`

`static void destroy(` `DestinationType` `* p);`

You can replace the types `DestinationType` and *SourceType* with arbitrary data types for each copy policy.

> [!NOTE]
> Although you can define copy policy classes for any arbitrary data types, use of the classes in ATL code should limit the types that make sense. For example, when using a copy policy class with ATL's collection or enumerator implementations, `DestinationType` must be a type that can be used as a parameter in a COM interface method.

Use **init** to initialize data, **copy** to copy data, and **destroy** to free the data. The precise meaning of initialization, copying, and destruction are the domain of the copy policy class and will vary depending on the data types involved.

There are two requirements on the use and implementation of a copy policy class:

- The first parameter to **copy** must only receive a pointer to data that you have previously initialized using **init**.

- **destroy** must only ever receive a pointer to data that you have previously initialized using **init** or copied via **copy**.

## Standard Implementations

ATL provides two copy policy classes in the form of the `_Copy` and `_CopyInterface` template classes:

- The `_Copy` class allows homogeneous copying only (not conversion between data types) since it only offers a single template parameter to specify both `DestinationType` and *SourceType*. The generic implementation of this template contains no initialization or destruction code and uses `memcpy` to copy the data. ATL also provides specializations of `_Copy` for VARIANT, LPOLESTR, OLEVERB, and CONNECTDATA data types.

- The `_CopyInterface` class provides an implementation for copying interface pointers following standard COM rules. Once again this class allows only homogeneous copying, so it uses simple assignment and a call to `AddRef` to perform the copy.

## Custom Implementations

Typically, you'll need to define your own copy policy classes for heterogeneous copying (that is, conversion between data types). For some examples of custom copy policy classes, look at the files VCUE_Copy.h and VCUE_CopyString.h in the [ATLCollections](../overview/visual-cpp-samples.md) sample. These files contain two template copy policy classes, `GenericCopy` and `MapCopy`, plus a number of specializations of `GenericCopy` for different data types.

### GenericCopy

`GenericCopy` allows you to specify the *SourceType* and `DestinationType` as template arguments. Here's the most general form of the `GenericCopy` class from VCUE_Copy.h:

[!code-cpp[NVC_ATL_COM#30](../atl/codesnippet/cpp/atl-copy-policy-classes_1.h)]

VCUE_Copy.h also contains the following specializations of this class: `GenericCopy<BSTR>`, `GenericCopy<VARIANT, BSTR>`, `GenericCopy<BSTR, VARIANT>`. VCUE_CopyString.h contains specializations for copying from **std::string**s: `GenericCopy<std::string>`, `GenericCopy<VARIANT, std::string>`, and `GenericCopy<BSTR, std::string>`. You could enhance `GenericCopy` by providing further specializations of your own.

### MapCopy

`MapCopy` assumes that the data being copied is stored into a C++ Standard Library-style map, so it allows you to specify the type of map in which the data is stored and the destination type. The implementation of the class just uses the typedefs supplied by the *MapType* class to determine the type of the source data and to call the appropriate `GenericCopy` class. No specializations of this class are needed.

[!code-cpp[NVC_ATL_COM#31](../atl/codesnippet/cpp/atl-copy-policy-classes_2.h)]

## See also

[Implementing a C++ Standard Library-Based Collection](../atl/implementing-an-stl-based-collection.md)<br/>
[ATLCollections Sample](../overview/visual-cpp-samples.md)
