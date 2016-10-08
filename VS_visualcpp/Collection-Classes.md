---
title: "Collection Classes"
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
ms.assetid: eff95de6-78ef-4212-9d7d-1dacbdd4cc58
caps.latest.revision: 10
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
# Collection Classes
The following classes provide support for arrays, lists, maps, and also traits methods for helping with comparisons and element access.  
  
-   [CAtlArray](../VS_visualcpp/CAtlArray-Class.md) This class implements an array object.  
  
-   [CAtlList](../VS_visualcpp/CAtlList-Class.md) This class provides methods for creating and managing a list object.  
  
-   [CAtlMap](../VS_visualcpp/CAtlMap-Class.md) This class provides methods for creating and managing a map object.  
  
-   [CAutoPtrArray](../VS_visualcpp/CAutoPtrArray-Class.md) This class provides methods useful when constructing an array of smart pointers.  
  
-   [CAutoPtrElementTraits](../VS_visualcpp/CAutoPtrElementTraits-Class.md) This class provides methods, static functions, and typedefs useful when creating collections of smart pointers.  
  
-   [CAutoPtrList](../VS_visualcpp/CAutoPtrList-Class.md) This class provides methods useful when constructing a list of smart pointers.  
  
-   [CAutoVectorPtrElementTraits](../VS_visualcpp/CAutoVectorPtrElementTraits-Class.md) This class provides methods, static functions, and typedefs useful when creating collections of smart pointers using vector new and delete operators.  
  
-   [CComQIPtrElementTraits](../VS_visualcpp/CComQIPtrElementTraits-Class.md) This class provides methods, static functions, and typedefs useful when creating collections of COM interface pointers.  
  
-   [CComSafeArray](../VS_visualcpp/CComSafeArray-Class.md) This class is a wrapper for the [SAFEARRAY Data Type](assetId:///9ec8025b-4763-4526-ab45-390c5d8b3b1e) structure.  
  
-   [CComSafeArrayBound](../VS_visualcpp/CComSafeArrayBound-Class.md) This class is a wrapper for a [SAFEARRAYBOUND](assetId:///303a9bdb-71d6-4f14-8747-84cf84936c6d) structure.  
  
-   [CComUnkArray](../VS_visualcpp/CComUnkArray-Class.md) This class stores **IUnknown** pointers and is designed to be used as a parameter to the [IConnectionPointImpl](../VS_visualcpp/IConnectionPointImpl-Class.md) template class.  
  
-   [CDefaultCharTraits](../VS_visualcpp/CDefaultCharTraits-Class.md) This class provides two static functions for converting characters between uppercase and lowercase.  
  
-   [CDefaultCompareTraits](../VS_visualcpp/CDefaultCompareTraits-Class.md) This class provides default element comparison functions.  
  
-   [CDefaultElementTraits](../VS_visualcpp/CDefaultElementTraits-Class.md) This class provides default methods and functions for a collection class.  
  
-   [CDefaultHashTraits](../VS_visualcpp/CDefaultHashTraits-Class.md) This class provides a static function for calculating hash values.  
  
-   [CElementTraits](../VS_visualcpp/CElementTraits-Class.md) This class is used by collection classes to provide methods and functions for moving, copying, comparison, and hashing operations.  
  
-   [CElementTraitsBase](../VS_visualcpp/CElementTraitsBase-Class.md) This class provides default copy and move methods for a collection class.  
  
-   [CHeapPtrElementTraits](../VS_visualcpp/CHeapPtrElementTraits-Class.md) This class provides methods, static functions, and typedefs useful when creating collections of heap pointers.  
  
-   [CHeapPtrList](../VS_visualcpp/CHeapPtrList-Class.md) This class provides methods useful when constructing a list of heap pointers.  
  
-   [CInterfaceArray](../VS_visualcpp/CInterfaceArray-Class.md) This class provides methods useful when constructing an array of COM interface pointers.  
  
-   [CInterfaceList](../VS_visualcpp/CInterfaceList-Class.md) This class provides methods useful when constructing a list of COM interface pointers.  
  
-   [CPrimitiveElementTraits](../VS_visualcpp/CPrimitiveElementTraits-Class.md) This class provides default methods and functions for a collection class composed of primitive data types.  
  
-   [CRBMap](../VS_visualcpp/CRBMap-Class.md) This class represents a mapping structure, using a Red-Black binary tree.  
  
-   [CRBMultiMap](../VS_visualcpp/CRBMultiMap-Class.md) This class represents a mapping structure that allows each key to be associated with more than one value, using a Red-Black binary tree.  
  
-   [CRBTree](../VS_visualcpp/CRBTree-Class.md) This class provides methods for creating and utilizing a Red-Black tree.  
  
-   [CSimpleArray](../VS_visualcpp/CSimpleArray-Class.md) This class provides methods for managing a simple array.  
  
-   [CSimpleArrayEqualHelper](../VS_visualcpp/CSimpleArrayEqualHelper-Class.md) This class is a helper for the [CSimpleArray](../VS_visualcpp/CSimpleArray-Class.md) class.  
  
-   [CSimpleArrayEqualHelperFalse](../VS_visualcpp/CSimpleArrayEqualHelperFalse-Class.md) This class is a helper for the [CSimpleArray](../VS_visualcpp/CSimpleArray-Class.md) class.  
  
-   [CSimpleMap](../VS_visualcpp/CSimpleMap-Class.md) This class provides support for a simple mapping array.  
  
-   [CSimpleMapEqualHelper](../VS_visualcpp/CSimpleMapEqualHelper-Class.md) This class is a helper for the [CSimpleMap](../VS_visualcpp/CSimpleMap-Class.md) class.  
  
-   [CSimpleMapEqualHelperFalse](../VS_visualcpp/CSimpleMapEqualHelperFalse-Class.md) This class is a helper for the [CSimpleMap](../VS_visualcpp/CSimpleMap-Class.md) class.  
  
-   [CStringElementTraits](../VS_visualcpp/CStringElementTraits-Class.md) This class provides static functions used by collection classes storing `CString` objects.  
  
-   [CStringElementTraitsI](../VS_visualcpp/CStringElementTraitsI-Class.md) This class provides static functions related to strings stored in collection class objects. It is similar to [CStringElementTraits](../VS_visualcpp/CStringElementTraits-Class.md), but performs case-insensitive comparisons.  
  
-   [CStringRefElementTraits](../VS_visualcpp/CStringRefElementTraits-Class.md) This class provides static functions related to strings stored in collection class objects. The string objects are dealt with as references.  
  
## Related Articles  
 [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md)  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md)