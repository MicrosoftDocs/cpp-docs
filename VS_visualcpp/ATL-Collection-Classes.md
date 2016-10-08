---
title: "ATL Collection Classes"
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
ms.assetid: 4d619d46-5b4e-41dd-b9fd-e86b1fbc00b5
caps.latest.revision: 12
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
# ATL Collection Classes
ATL provides many classes for storing and accessing data. Which class you decide to use depends on several factors, including:  
  
-   The amount of data to be stored  
  
-   Efficiency versus performance in accessing the data  
  
-   The ability to access the data by index or by key  
  
-   How the data is ordered  
  
-   Personal preference  
  
## Small Collection Classes  
 ATL provides the following array classes for dealing with small numbers of objects. However, these classes are limited and designed for use internally by ATL. It is not recommended that you use them in your programs.  
  
|Class|Type of data storage|  
|-----------|--------------------------|  
|[CSimpleArray](../VS_visualcpp/CSimpleArray-Class.md)|Implements an array class for dealing with small numbers of objects.|  
|[CSimpleMap](../VS_visualcpp/CSimpleMap-Class.md)|Implements a mapping class for dealing with small numbers of objects.|  
  
## General Purpose Collection Classes  
 The follow classes implement arrays, lists, and maps and are provided as general purpose collection classes:  
  
|Class|Type of data storage|  
|-----------|--------------------------|  
|[CAtlArray](../VS_visualcpp/CAtlArray-Class.md)|Implements an array.|  
|[CAtlList](../VS_visualcpp/CAtlList-Class.md)|Implements a list.|  
|[CAtlMap](../VS_visualcpp/CAtlMap-Class.md)|Implements a mapping structure, whereby data can be referenced by key or value.|  
|[CRBMap](../VS_visualcpp/CRBMap-Class.md)|Implements a mapping structure using the Red-Black algorithm.|  
|[CRBMultiMap](../VS_visualcpp/CRBMultiMap-Class.md)|Implements a Red-Black multimapping structure.|  
  
 These classes will trap many programming errors when used in debug builds, but for sake of performance, these checks will not be performed in retail builds.  
  
## Specialized Collection Classes  
 More specialized collection classes are also provided for managing memory pointers and interface pointers:  
  
|Class|Purpose|  
|-----------|-------------|  
|[CAutoPtrArray](../VS_visualcpp/CAutoPtrArray-Class.md)|Provides methods useful when constructing an array of smart pointers.|  
|[CAutoPtrList](../VS_visualcpp/CAutoPtrList-Class.md)|Provides methods useful when constructing a list of smart pointers.|  
|[CComUnkArray](../VS_visualcpp/CComUnkArray-Class.md)|Stores `IUnknown` pointers and is designed to be used as a parameter to the [IConnectionPointImpl](../VS_visualcpp/IConnectionPointImpl-Class.md) template class.|  
|[CHeapPtrList](../VS_visualcpp/CHeapPtrList-Class.md)|Provides methods useful when constructing a list of heap pointers.|  
|[CInterfaceArray](../VS_visualcpp/CInterfaceArray-Class.md)|Provides methods useful when constructing an array of COM interface pointers.|  
|[CInterfaceList](../VS_visualcpp/CInterfaceList-Class.md)|Provides methods useful when constructing a list of COM interface pointers.|  
  
## Choosing a Collection Class  
 Each of the available collection classes offers different performance characteristics, as shown in the table below.  
  
-   Columns 2 and 3 describe each class's ordering and access characteristics. In the table, the term "ordered" means that the order in which items are inserted and deleted determines their order in the collection; it does not mean the items are sorted on their contents. The term "indexed" means that the items in the collection can be retrieved by an integer index, much like items in a typical array.  
  
-   Columns 4 and 5 describe each class's performance. In applications that require many insertions into the collection, insertion speed might be especially important; for other applications, lookup speed may be more important.  
  
-   Column 6 describes whether each shape allows duplicate elements.  
  
-   The performance of a given collection class operation is expressed in terms of the relationship between the time required to complete the operation and the number of elements in the collection. An operation taking an amount of time that increases linearly as the number of elements increases is described as an O(n) algorithm. By contrast, an operation taking a period of time that increases less and less as the number of elements increases is described as an O(log n) algorithm. Therefore, in terms of performance, O(log n) algorithms outperform O(n) algorithms more and more as the number of elements increases.  
  
### Collection Shape Features  
  
|Shape|Ordered?|Indexed?|Insert an<br /><br /> element|Search for<br /><br /> specified element|Duplicate<br /><br /> elements?|  
|-----------|--------------|--------------|---------------------------|--------------------------------------|-----------------------------|  
|List|Yes|No|Fast (constant time)|Slow O(n)|Yes|  
|Array|Yes|By int (constant time)|Slow O(n) except if inserting at end, in which case constant time|Slow O(n)|Yes|  
|Map|No|By key (constant time)|Fast (constant time)|Fast (constant time)|No (keys) Yes (values)|  
|Red-Black Map|Yes (by key)|By key O(log n)|Fast O(log n)|Fast O(log n)|No|  
|Red-Black Multimap|Yes (by key)|By key O(log n) (multiple values per key)|Fast O(log n)|Fast O(log n)|Yes (multiple values per key)|  
  
## Using CTraits Objects  
 As the ATL collection classes can be used to store a wide range of user-defined data types, it can be useful to be able to override important functions such as comparisons. This is achieved using the CTraits classes.  
  
 CTraits classes are similar to, but more flexible than, the MFC collection class helper functions; see [Collection Class Helpers](../VS_visualcpp/Collection-Class-Helpers.md) for more information.  
  
 When constructing your collection class, you have the option of specifying a CTraits class. This class will contain the code that will perform operations such as comparisons when called by the other methods that make up the collection class. For example, if your list object contains your own user-defined structures, you may want to redefine the equality test to only compare certain member variables. In this way, the list object's Find method will operate in a more useful manner.  
  
## Example  
  
### Code  
 [!CODE [NVC_ATL_Utilities#112](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#112)]  
  
## Comments  
 For a list of the CTraits classes, see [Collection Classes](../VS_visualcpp/Collection-Classes.md).  
  
 The following diagram shows the class hierarchy for the CTraits classes.  
  
 ![Traits hierarchy for collection classes](../VS_visualcpp/media/vcTraitsCollectionClassesHierarchy.gif "vcTraitsCollectionClassesHierarchy")  
  
## Collection Classes Samples  
 The following samples demonstrate the collection classes:  
  
-   [MMXSwarm Sample](../VS_visualcpp/Visual-C---Samples.md)  
  
-   [DynamicConsumer Sample](../VS_visualcpp/Visual-C---Samples.md)  
  
-   [UpdatePV Sample](../VS_visualcpp/Visual-C---Samples.md)  
  
-   [Marquee Sample](../VS_visualcpp/Visual-C---Samples.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)   
 [Collection Classes](../VS_visualcpp/Collection-Classes.md)