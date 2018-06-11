---
title: "adapter (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["<cliext/adapter>", "cliext::collection_adapter"]
dev_langs: ["C++"]
helpviewer_keywords: ["<adapter> header [STL/CLR]", "adapter [STL/CLR]", "<cliext/adapter> header [STL/CLR]", "collection_adapter class [STL/CLR]"]
ms.assetid: 71ce7e51-42b6-4f70-9595-303791a97677
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# adapter (STL/CLR)
The STL/CLR header `<cliext/adapter>` specifies two template classes (`collection_adapter` and `range_adapter`), and the template function `make_collection`.  
  
## Syntax  
  
```  
#include <cliext/adapter>  
```  
  
## Remarks  
  
|Class|Description|  
|-----------|-----------------|  
|[collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)|Wraps the Base Class Library (BCL) collection as a range.|  
|[range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)|Wraps the range as a BCL collection.|  
  
|Function|Description|  
|--------------|-----------------|  
|[make_collection (STL/CLR)](../dotnet/make-collection-stl-clr.md)|Creates a range adapter using an iterator pair.|  
  
## Members

### Constructors

|Constructor|Description|
|-|-|
|[collection_adapter](#collection_adapter)|Describes a simple STL/CLR container object.|

## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## <a name="collection_adapter"></a>   collection_adapter (STL/CLR)
Wraps a .NET collection for use as an STL/CLR container. A `collection_adapter` is a template class that describes a simple STL/CLR container object. It wraps a Base Class Library (BCL) interface, and returns an iterator pair that you use to manipulate the controlled sequence.  
  
### Syntax  
  
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
  
##### Parameters  
 Coll  
 The type of the wrapped collection.  
  
### Specializations  
  
|Specialization|Description|  
|--------------------|-----------------|  
|IEnumerable|Sequences through elements.|  
|ICollection|Maintains a group of elements.|  
|IList|Maintains an ordered group of elements.|  
|IDictionary|Maintain a set of {key, value} pairs.|  
|IEnumerable\<Value>|Sequences through typed elements.|  
|ICollection\<Value>|Maintains a group of typed elements.|  
|IList\<Value>|Maintains an ordered group of typed elements.|  
|IDictionary\<Value>|Maintains a set of typed {key, value} pairs.|  
  
### Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[collection_adapter::difference_type (STL/CLR)](../dotnet/collection-adapter-difference-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[collection_adapter::iterator (STL/CLR)](../dotnet/collection-adapter-iterator-stl-clr.md)|The type of an iterator for the controlled sequence.|  
|[collection_adapter::key_type (STL/CLR)](../dotnet/collection-adapter-key-type-stl-clr.md)|The type of a dictionary key.|  
|[collection_adapter::mapped_type (STL/CLR)](../dotnet/collection-adapter-mapped-type-stl-clr.md)|The type of a dictionary value.|  
|[collection_adapter::reference (STL/CLR)](../dotnet/collection-adapter-reference-stl-clr.md)|The type of a reference to an element.|  
|[collection_adapter::size_type (STL/CLR)](../dotnet/collection-adapter-size-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[collection_adapter::value_type (STL/CLR)](../dotnet/collection-adapter-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[collection_adapter::base (STL/CLR)](../dotnet/collection-adapter-base-stl-clr.md)|Designates the wrapped BCL interface.|  
|[collection_adapter::begin (STL/CLR)](../dotnet/collection-adapter-begin-stl-clr.md)|Designates the beginning of the controlled sequence.|  
|[collection_adapter::collection_adapter (STL/CLR)](../dotnet/collection-adapter-collection-adapter-stl-clr.md)|Constructs an adapter object.|  
|[collection_adapter::end (STL/CLR)](../dotnet/collection-adapter-end-stl-clr.md)|Designates the end of the controlled sequence.|  
|[collection_adapter::size (STL/CLR)](../dotnet/collection-adapter-size-stl-clr.md)|Counts the number of elements.|  
|[collection_adapter::swap (STL/CLR)](../dotnet/collection-adapter-swap-stl-clr.md)|Swaps the contents of two containers.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[collection_adapter::operator= (STL/CLR)](../dotnet/collection-adapter-operator-assign-stl-clr.md)|Replaces the stored BCL handle.|  
  
### Remarks  
 You use this template class to manipulate a BCL container as a STL/CLR container. The `collection_adapter` stores a handle to a BCL interface, which in turn controls a sequence of elements. A `collection_adapter` object `X` returns a pair of input iterators `X.begin()` and `X.end()` that you use to visit the elements, in order. Some of the specializations also let you write `X.size()` to determine the length of the controlled sequence.  
  
### Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  