---
title: "ATL Copy Policy Classes"
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
ms.topic: article
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# ATL Copy Policy Classes
Copy policy classes are [utility classes](../VS_visualcpp/Utility-Classes.md) used to initialize, copy, and delete data. Copy policy classes allow you to define copy semantics for any type of data, and to define conversions between different data types.  
  
 ATL uses copy policy classes in its implementations of the following templates:  
  
-   [CComEnumImpl](../VS_visualcpp/CComEnumImpl-Class.md)  
  
-   [IEnumOnSTLImpl](../VS_visualcpp/IEnumOnSTLImpl-Class.md)  
  
-   [ICollectionOnSTLImpl](../VS_visualcpp/ICollectionOnSTLImpl-Class.md)  
  
 By encapsulating the information needed to copy or convert data in a copy policy class that can be passed as a template argument, the ATL developers have provided for extreme reusability of these classes. For example, if you need to implement a collection using any arbitrary data type, all you need to provide is the appropriate copy policy; you never have to touch the code that implements the collection.  
  
## Definition  
 By definition, a class that provides the following static functions is a copy policy class:  
  
 `static void init(` `DestinationType` `* p);`  
  
 `static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`  
  
 `static void destroy(` `DestinationType` `* p);`  
  
 You can replace the types `DestinationType` and *SourceType* with arbitrary data types for each copy policy.  
  
> [!NOTE]
>  Although you can define copy policy classes for any arbitrary data types, use of the classes in ATL code should limit the types that make sense. For example, when using a copy policy class with ATL's collection or enumerator implementations, `DestinationType` must be a type that can be used as a parameter in a COM interface method.  
  
 Use **init** to initialize data, **copy** to copy data, and **destroy** to free the data. The precise meaning of initialization, copying, and destruction are the domain of the copy policy class and will vary depending on the data types involved.  
  
 There are two requirements on the use and implementation of a copy policy class:  
  
-   The first parameter to **copy** must only receive a pointer to data that you have previously initialized using **init**.  
  
-   **destroy** must only ever receive a pointer to data that you have previously initialized using **init** or copied via **copy**.  
  
## Standard Implementations  
 ATL provides two copy policy classes in the form of the **_Copy** and **_CopyInterface** template classes:  
  
-   The **_Copy** class allows homogeneous copying only (not conversion between data types) since it only offers a single template parameter to specify both `DestinationType` and *SourceType*. The generic implementation of this template contains no initialization or destruction code and uses `memcpy` to copy the data. ATL also provides specializations of **_Copy** for **VARIANT**, `LPOLESTR`, **OLEVERB**, and **CONNECTDATA** data types.  
  
-   The **_CopyInterface** class provides an implementation for copying interface pointers following standard COM rules. Once again this class allows only homogeneous copying, so it uses simple assignment and a call to `AddRef` to perform the copy.  
  
## Custom Implementations  
 Typically, you'll need to define your own copy policy classes for heterogeneous copying (that is, conversion between data types). For some examples of custom copy policy classes, look at the files VCUE_Copy.h and VCUE_CopyString.h in the [ATLCollections](../VS_visualcpp/Visual-C---Samples.md) sample. These files contain two template copy policy classes, `GenericCopy` and `MapCopy`, plus a number of specializations of `GenericCopy` for different data types.  
  
### GenericCopy  
 `GenericCopy` allows you to specify the *SourceType* and `DestinationType` as template arguments. Here's the most general form of the `GenericCopy` class from VCUE_Copy.h:  
  
 [!CODE [NVC_ATL_COM#30](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#30)]  
  
 VCUE_Copy.h also contains the following specializations of this class: `GenericCopy<BSTR>`, `GenericCopy<VARIANT, BSTR>`, `GenericCopy<BSTR, VARIANT>`. VCUE_CopyString.h contains specializations for copying from **std::string**s: `GenericCopy<std::string>`, `GenericCopy<VARIANT, std::string>`, and `GenericCopy<BSTR, std::string>`. You could enhance `GenericCopy` by providing further specializations of your own.  
  
### MapCopy  
 `MapCopy` assumes that the data being copied is stored into an STL-style map, so it allows you to specify the type of map in which the data is stored and the destination type. The implementation of the class just uses the typedefs supplied by the *MapType* class to determine the type of the source data and to call the appropriate `GenericCopy` class. No specializations of this class are needed.  
  
 [!CODE [NVC_ATL_COM#31](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#31)]  
  
## See Also  
 [Implementing an STL-Based Collection](../VS_visualcpp/Implementing-an-STL-Based-Collection.md)   
 [ATLCollections Sample](../VS_visualcpp/Visual-C---Samples.md)