---
title: "collection_adapter (STL-CLR)"
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
ms.topic: reference
H1: collection_adapter (STL/CLR)
ms.assetid: 31964058-1f50-48bf-82c2-b0b3cc8a7887
caps.latest.revision: 11
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
# collection_adapter (STL-CLR)
Wraps a .NET collection for use as an STL/CLR container. A `collection_adapter` is a template class that describes a simple STL/CLR container object. It wraps a Base Class Library (BCL) interface, and returns an iterator pair that you use to manipulate the controlled sequence.  
  
## Syntax  
  
```  
template<typename Coll>  
    ref class collection_adapter;  
  
template<>  
    ref class collection_adapter<  
        System::Collections::ICollection>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IEnumerable>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IList>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IDictionary>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::ICollection<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IEnumerable<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IList<Value>>;  
template<typename Key,  
    typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IDictionary<Key, Value>>;  
```  
  
#### Parameters  
 Coll  
 The type of the wrapped collection.  
  
## Specializations  
  
|Specialization|Description|  
|--------------------|-----------------|  
|IEnumerable|Sequences through elements.|  
|ICollection|Maintains a group of elements.|  
|IList|Maintains an ordered group of elements.|  
|IDictionary|Maintain a set of {key, value} pairs.|  
|IEnumerable<Value\>|Sequences through typed elements.|  
|ICollection<Value\>|Maintains a group of typed elements.|  
|IList<Value\>|Maintains an ordered group of typed elements.|  
|IDictionary<Value\>|Maintains a set of typed {key, value} pairs.|  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[collection_adapter::difference_type (STL/CLR)](../VS_visualcpp/collection_adapter--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[collection_adapter::iterator (STL/CLR)](../VS_visualcpp/collection_adapter--iterator--STL-CLR-.md)|The type of an iterator for the controlled sequence.|  
|[collection_adapter::key_type (STL/CLR)](../VS_visualcpp/collection_adapter--key_type--STL-CLR-.md)|The type of a dictionary key.|  
|[collection_adapter::mapped_type (STL/CLR)](../VS_visualcpp/collection_adapter--mapped_type--STL-CLR-.md)|The type of a dictionary value.|  
|[collection_adapter::reference (STL/CLR)](../VS_visualcpp/collection_adapter--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[collection_adapter::size_type (STL/CLR)](../VS_visualcpp/collection_adapter--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[collection_adapter::value_type (STL/CLR)](../VS_visualcpp/collection_adapter--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[collection_adapter::base (STL/CLR)](../VS_visualcpp/collection_adapter--base--STL-CLR-.md)|Designates the wrapped BCL interface.|  
|[collection_adapter::begin (STL/CLR)](../VS_visualcpp/collection_adapter--begin--STL-CLR-.md)|Designates the beginning of the controlled sequence.|  
|[collection_adapter::collection_adapter (STL/CLR)](../VS_visualcpp/collection_adapter--collection_adapter--STL-CLR-.md)|Constructs an adapter object.|  
|[collection_adapter::end (STL/CLR)](../VS_visualcpp/collection_adapter--end--STL-CLR-.md)|Designates the end of the controlled sequence.|  
|[collection_adapter::size (STL/CLR)](../VS_visualcpp/collection_adapter--size--STL-CLR-.md)|Counts the number of elements.|  
|[collection_adapter::swap (STL/CLR)](../VS_visualcpp/collection_adapter--swap--STL-CLR-.md)|Swaps the contents of two containers.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[collection_adapter::operator= (STL/CLR)](../VS_visualcpp/collection_adapter--operator=--STL-CLR-.md)|Replaces the stored BCL handle.|  
  
## Remarks  
 You use this template class to manipulate a BCL container as a STL/CLR container. The `collection_adapter` stores a handle to a BCL interface, which in turn controls a sequence of elements. A `collection_adapter` object `X` returns a pair of input iterators `X.begin()` and `X.end()` that you use to visit the elements, in order. Some of the specializations also let you write `X.size()` to determine the length of the controlled sequence.  
  
## Requirements  
 **Header:** <cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [range_adapter (STL/CLR)](../VS_visualcpp/range_adapter--STL-CLR-.md)   
 [make_collection (STL/CLR)](../VS_visualcpp/make_collection--STL-CLR-.md)