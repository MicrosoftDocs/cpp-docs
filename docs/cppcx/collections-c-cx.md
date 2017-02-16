---
title: "Collections (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 914da30b-aac5-4cd7-9da3-a5ac08cdd72c
caps.latest.revision: 35
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Collections (C++-CX)
In a [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] ([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]) program, you can make free use of Standard Template Library (STL) containers, or any other user-defined collection type. However, when you pass collections back and forth across the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] application binary interface (ABI)—for example, to a XAML control or to a JavaScript client—you must use [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] collection types.  
  
 The [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] defines the interfaces for collections and related types, and [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] provides the concrete C++ implementations in the collection.h header file. This illustration shows the relationships between the collection types:  
  
 ![C&#43;&#43;&#47;CX inheritance tree for collection types](../cppcx/media/cppcxcollectionsinheritancetree.png "CPPCXCollectionsInheritanceTree")  
  
-   The [Platform::Collections::Vector class](../cppcx/platform-collections-vector-class.md) resembles the [std::vector class](../Topic/vector%20Class%201.md).  
  
-   The [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md) class resembles the [std::map class](../Topic/map%20Class.md).  
  
-   [Platform::Collections::VectorView Class](../cppcx/platform-collections-vectorview-class.md) and[Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md) are read-only versions of `Vector` and `Map`.  
  
-   Iterators are defined in the [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md). These iterators satisfy the requirements for STL iterators and enable the use of [std::find](../Topic/find%20\(STL\).md),  [std::count_if](../Topic/count_if.md), and other STL algorithms on any [Windows::Foundation::Collections](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.aspx) interface type or [Platform::Collections](../cppcx/platform-collections-namespace.md) concrete type. For example, this means that you can iterate a collection in a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component that's created in C# and apply an STL algorithm to it.  
  
    > [!IMPORTANT]
    >  Proxy iterators `VectorIterator` and `VectorViewIterator` utilize proxy objects `VectoryProxy<T>` and `ArrowProxy<T>` to enable usage with STL containers. For more information, see "VectorProxy elements" later in this article.  
  
-   The [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] collection types support the same thread safety guarantees that STL containers support.  
  
-   [Windows::Foundation::Collections::IObservableVector](http://msdn.microsoft.com/library/windows/apps/br226052.aspx) and [Windows::Foundation::Collections::IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) define events that are fired when the collection changes in various ways. By implementing these interfaces,  [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) and [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) support databinding with XAML collections. For example, if you have a `Vector` that is data-bound to a `Grid`, when you add an item to a collection, the change is reflected in the Grid UI.  
  
## Vector usage  
 When your class has to pass a sequence container to another [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component, use [Windows::Foundation::Collections:: IVector\<T>](http://msdn.microsoft.com/library/windows/apps/br206631.aspx) as the parameter or return type, and [Platform::Collections::Vector\<T>](../cppcx/platform-collections-vector-class.md) as the concrete implementation. If you attempt to use a `Vector` type in a public return value or parameter, compiler error C3986 will be raised. You can fix the error by changing the `Vector` to an `IVector`.  
  
> [!IMPORTANT]
>  If you are passing a sequence within your own program, then use either `Vector` or `std::vector` because they are more efficient than `IVector`. Use `IVector` only when you pass the container across the ABI.  
>   
>  The Windows Runtime type system does not support the concept of jagged arrays and therefore you cannot pass an IVector<Platform::Array\<T>> as a return value or method parameter. To pass a jagged array or a sequence of sequences across the ABI, use `IVector<IVector<T>^>`.  
  
 `Vector<T>` provides the methods that are required for adding, removing, and accessing items in the collection, and it is implicitly convertible to `IVector<T>`. You can also use STL algorithms on instances of `Vector<T>`. The following example demonstrates some basic usage. The [begin function](../cppcx/begin-function.md) and [end function](../cppcx/end-function.md) here are from the `Platform::Collections` namespace, not the `std` namespace.  
  
 [!code-cpp[cx_collections#01](../cppcx/codesnippet/CPP/collections/class1.cpp#01)]  
  
 If you have existing code that uses `std::vector` and you want to reuse it in a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component, just use one of the `Vector` constructors that takes a `std::vector` or a pair of iterators to construct a `Vector` at the point where you pass the collection across the ABI. The following example shows how to use the `Vector` move constructor for efficient initialization from a `std::vector`. After the move operation, the original `vec` variable is no longer valid.  
  
 [!code-cpp[cx_collections#02](../cppcx/codesnippet/CPP/collections/class1.cpp#02)]  
  
 If you have a vector of strings that you must pass across the ABI at some future point, you must decide whether to create the strings initially as `std::wstring` types or as `Platform::String^` types. If you have to do a lot of processing on the strings, then use `wstring`. Otherwise, create the strings as `Platform::String^` types and avoid the cost of converting them later. You must also decide whether to put these strings into a `std:vector` or `Platform::Collections::Vector` internally. As a general practice, use `std::vector` and then create a `Platform::Vector` from it only when you pass the container across the ABI.  
  
## Value types in Vector  
 Any element to be stored in a [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) must support equality comparison, either implicitly or by using a custom [std::equal_to](../Topic/equal_to%20Struct.md) comparator that you provide. All reference types and all scalar types implicitly support equality comparisons. For non-scalar value types such as [Windows::Foundation::DateTime](http://msdn.microsoft.com/library/windows/apps/windows.foundation.datetime.aspx), or for custom comparisons—for example, `objA->UniqueID == objB->UniqueID`—you must provide a custom function object.  
  
 [!CODE [cx_collections#03](../CodeSnippet/VS_Snippets_Misc/cx_collections#03)]  
  
## VectorProxy elements  
 [Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md) and [Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) enable the use of `range for` loops and algorithms like [std::sort](../Topic/sort.md) with an [IVector\<T>](http://msdn.microsoft.com/en-us/library/windows/apps/br206631.aspx) container. But `IVector` elements cannot be accessed through C++ pointer dereference; they can be accessed only through [GetAt](http://msdn.microsoft.com/library/windows/apps/br206634.aspx) and [SetAt](http://msdn.microsoft.com/library/windows/apps/br206642.aspx) methods. Therefore, these iterators use the proxy classes `Platform::Details::VectorProxy<T>` and `Platform::Details::ArrowProxy<T>` to provide access to the individual elements through `*`, `->`, and `[]` operators, as required by the STL. Strictly speaking, given an `IVector<Person^> vec`, the type of `*begin(vec)` is `VectorProxy<Person^>`. However, the proxy object is almost always transparent to your code. These proxy objects are not documented because they are only for internal use by the iterators, but it is useful to know how the mechanism works.  
  
 When you use a `range for` loop over `IVector` containers, use `auto&&` to enable the iterator variable to bind correctly to the `VectorProxy` elements. If you use `auto` or `auto&`, compiler warning C4239 is raised and `VectoryProxy` is mentioned in the warning text.  
  
 The following illustration shows a `range for` loop over an `IVector<Person^>`. Notice that execution is stopped on the breakpoint on line 64. The **QuickWatch** window shows that the iterator variable `p` is in fact a `VectorProxy<Person^>` that has `m_v` and `m_i` member variables. However, when you call `GetType` on this variable, it returns the identical type to the `Person` instance `p2`. The takeaway is that although `VectorProxy` and `ArrowProxy` might appear in **QuickWatch**, the debugger certain compiler errors, or other places, you typically don't have to explicitly code for them.  
  
 ![VectorProxy in range&#45;based for loop](../cppcx/media/vectorproxy-1.png "VectorProxy_1")  
  
 One scenario in which you have to code around the proxy object is when you have to perform a `dynamic_cast` on the elements—for example, when you are looking for XAML objects of a particular type in a `UIElement` element collection. In this case, you must first cast the element to [Platform::Object](../cppcx/platform-object-class.md)^ and then perform the dynamic cast:  
  
```  
  
void FindButton(UIElementCollection^ col)  
{  
    // Use auto&& to avoid warning C4239  
    for (auto&& elem : col)  
    {  
        Button^ temp = dynamic_cast<Button^>(static_cast<Object^>(elem));  
        if (nullptr != temp)  
        {  
            // Use temp...  
        }  
    }  
}  
```  
  
## Map usage  
 This example shows how to insert items and look them up in a [Platform::Collections::Map](../cppcx/platform-collections-map-class.md), and then return the `Map` as a read-only [Windows::Foundation::Collections::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx) type.  
  
 [!code-cpp[cx_collections#04](../cppcx/codesnippet/CPP/collections/class1.cpp#04)]  
  
 In general, for internal map functionality, prefer the `std::map` type for performance reasons. If you have to pass the container across the ABI, construct a [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) from the [std::map](../Topic/map%20Class.md) and return the `Map` as an [Windows::Foundation::Collections::IMap](http://msdn.microsoft.com/library/windows/apps/br226042.aspx). If you attempt to use a `Map` type in a public return value or parameter, compiler error C3986 will be raised. You can fix the error by changing the `Map` to an `IMap`. In some cases—for example, if you are not making a large number of lookups or insertions, and you are passing the collection across the ABI frequently—it might be less expensive to use `Platform::Collections::Map` from the beginning and avoid the cost of converting the `std::map`. In any case, avoid lookup and insert operations on an `IMap` because these are the least performant of the three types. Convert to `IMap` only at the point that you pass the container across the ABI.  
  
## Value types in Map  
 Elements in a [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) are ordered. Any element to be stored in a `Map` must support less-than comparison with strict weak ordering, either implicitly or by using a custom [stl::less](../Topic/less%20Struct.md) comparator that you provide. Scalar types support the comparison implicitly. For non-scalar value types such as `Windows::Foundation::DateTime`, or for custom comparisons—for example, `objA->UniqueID < objB->UniqueID`—you must provide a custom comparator.  
  
## Collection types  
 Collections fall into four categories: modifiable versions and read-only versions of sequence collections and associative collections. In addition, [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] enhances collections by providing three iterator classes that simplify the accessing of collections. For a brief discussion about iterators, see [Iterators](../Topic/Iterators.md).  
  
 Elements of a modifiable collection can be changed, but elements of a read-only collection, which is known as a *view*, can only be read. Elements of a [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) or[Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md) collection can be accessed by using an iterator or the collection's [Vector::GetAt Method](../cppcx/vector-getat-method.md) and an index. Elements of an associative collection can be accessed by using the collection's [Map::Lookup Method](../cppcx/map-lookup-method.md) and a key.  
  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)  
 A modifiable, associative collection. Map elements are key-value pairs. Looking up a key to retrieve its associated value, and iterating through all key-value pairs, are both supported.  
  
 `Map` and `MapView` are templated on `<K, V, C = std::less<K>>`; therefore, you can customize the comparator.  Additionally, `Vector` and `VectorView` are templated on `<T, E = std::equal_to<T>>` so that you can customize the behavior of `IndexOf()`. This is important mostly for `Vector` and `VectorView` of value structs. For example, to create a Vector\<Windows::Foundation::DateTime>, you must provide a custom comparator because DateTime does not overload the == operator.  
  
 [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md)  
 A read-only version of a `Map`.  
  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)  
 A modifiable sequence collection. `Vector<T>` supports constant-time random access and amortized-constant-time [Append](../cppcx/vector-append-method.md) operations..  
  
 [Platform::Collections::VectorView Class](../cppcx/platform-collections-vectorview-class.md)  
 A read-only version of a `Vector`.  
  
 [Platform::Collections::InputIterator Class](../cppcx/platform-collections-inputiterator-class.md)  
 An STL iterator that satisfies the requirements of an STL input iterator.  
  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)  
 An STL iterator that satisfies the requirements of an STL mutable random-access iterator.  
  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)  
 An STL iterator that satisfies the requirements of an STL  `const` random-access iterator.  
  
### begin() and end() functions  
 To simplify the use of the STL to process `Vector`, `VectorView`, `Map`, `MapView`, and arbitrary `Windows::Foundation::Collections` objects, [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supports overloads of the [begin Function](../cppcx/begin-function.md) and [end Function](../cppcx/end-function.md) non-member functions.  
  
 The following table lists the available iterators and functions.  
  
|Iterators|Functions|  
|---------------|---------------|  
|[Platform::Collections::VectorIterator\<T>](../cppcx/platform-collections-vectoriterator-class.md)<br /><br /> (Internally stores [Windows::Foundation::Collections:: IVector\<T>](http://msdn.microsoft.com/library/windows/apps/br206631.aspx) and int.)|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md)([Windows::Foundation::Collections:: IVector\<T>](http://msdn.microsoft.com/library/windows/apps/br206631.aspx))|  
|[Platform::Collections::VectorViewIterator\<T>](../cppcx/platform-collections-vectorviewiterator-class.md)<br /><br /> (Internally stores [IVectorView\<T>](http://msdn.microsoft.com/library/windows/apps/br226058.aspx)^ and int.)|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([IVectorView\<T>](http://msdn.microsoft.com/library/windows/apps/br226058.aspx)^)|  
|[Platform::Collections::InputIterator\<T>](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> (Internally stores [IIterator\<T>](http://msdn.microsoft.com/library/windows/apps/br226026.aspx)^ and T.)|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([IIterable\<T>](http://msdn.microsoft.com/library/windows/apps/br226024.aspx))|  
|[Platform::Collections::InputIterator<IKeyValuePair\<K, V>^>](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> (Internally stores [IIterator\<T>](http://msdn.microsoft.com/library/windows/apps/br226026.aspx)^ and T.)|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([IMap\<K,V>](http://msdn.microsoft.com/library/windows/apps/br226042.aspx).|  
|[Platform::Collections::InputIterator<IKeyValuePair\<K, V>^>](../cppcx/platform-collections-inputiterator-class.md)<br /><br /> (Internally stores [IIterator\<T>](http://msdn.microsoft.com/library/windows/apps/br226026.aspx)^ and T.)|[begin](../cppcx/begin-function.md)/ [end](../cppcx/end-function.md) ([Windows::Foundation::Collections::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx))|  
  
### Collection change events  
 `Vector` and `Map` support databinding in XAML collections by implementing events that occur when a collection object is changed or reset, or when any element of a collection is inserted, removed, or changed. You can write your own types that support databinding, although you cannot inherit from `Map` or `Vector` because those types are sealed.  
  
 The [Windows::Foundation::Collections::VectorChangedEventHandler](http://msdn.microsoft.com/library/windows/apps/br206656.aspx) and [Windows::Foundation::Collections::MapChangedEventHandler](http://msdn.microsoft.com/library/windows/apps/br206644.aspx) delegates specify the signatures for event handlers for collection change events. The [Windows::Foundation::Collections::CollectionChange](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx) public enum class, and `Platform::Collection::Details::MapChangedEventArgs` and `Platform::Collections::Details::VectorChangedEventArgs` ref classes, store the event arguments to determine what caused the event. The *`EventArgs` types are defined in the `Details` namespace because you don't have to construct or consume them explicitly when you use `Map` or `Vector`.  
  
## See Also  
 [Type System](../cppcx/type-system-c-cx.md)   
 [Built-in Types](http://msdn.microsoft.com/en-us/acc196fd-09da-4882-b554-6c94685ec75f)   
 [Visual C++ Language Reference](../cppcx/visual-c-language-reference-c-cx.md)   
 [Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)