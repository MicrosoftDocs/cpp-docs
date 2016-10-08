---
title: "Collections"
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
ms.assetid: 02586e4c-851d-41d0-a722-feb11c17c74c
caps.latest.revision: 16
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
# Collections
The Microsoft Foundation Class Library provides collection classes to manage groups of objects. These classes are of two types:  
  
-   [Collection classes created from C++ templates](#_core_the_template.2d.based_collection_classes)  
  
-   [Collection classes not created from templates](#_core_the_collection_classes_not_based_on_templates)  
  
> [!NOTE]
>  If your code already uses nontemplate collection classes, you can continue to use them. If you write new type-safe collection classes for your own data types, we recommend that you use the newer template-based classes.  
  
##  <a name="_core_collection_shapes"></a> Collection Shapes  
 A collection class is characterized by its "shape" and by the types of its elements. The shape refers to the way the objects are organized and stored by the collection. MFC provides three basic collection shapes: lists, arrays, and maps (also known as dictionaries). You can pick the collection shape that is most suited to your particular programming problem.  
  
 Each of the three provided collection shapes is described briefly later in this topic. To compare the features of the shapes to help you decide which is best for your program, see [Recommendations for Choosing a Collection Class](../VS_visualcpp/Recommendations-for-Choosing-a-Collection-Class.md).  
  
-   List  
  
     The list class provides an ordered, nonindexed list of elements, implemented as a doubly linked list. A list has a "head" and a "tail," and adding or removing elements from the head or tail, or inserting or deleting elements in the middle, is very fast.  
  
-   Array  
  
     The array class provides a dynamically sized, ordered, and integer-indexed array of objects.  
  
-   Map (also known as a dictionary)  
  
     A map is a collection that associates a key object with a value object.  
  
##  <a name="_core_the_template.2d.based_collection_classes"></a> The Template-Based Collection Classes  
 The easiest way to implement a type-safe collection that contains objects of any type is to use one of the MFC template-based classes. For examples of these classes, see the MFC sample [COLLECT](../VS_visualcpp/Visual-C---Samples.md).  
  
 The following table lists the MFC template-based collection classes.  
  
### Collection Template Classes  
  
|Collection contents|Arrays|Lists|Maps|  
|-------------------------|------------|-----------|----------|  
|Collections of objects of any type|`CArray`|`CList`|`CMap`|  
|Collections of pointers to objects of any type|`CTypedPtrArray`|`CTypedPtrList`|`CTypedPtrMap`|  
  
##  <a name="_core_the_collection_classes_not_based_on_templates"></a> The Collection Classes Not Based on Templates  
 If your application already uses MFC nontemplate classes, you can continue to use them. However, for new collections, we recommend that you use the template-based classes. The following table lists the MFC collection classes that are not based on templates.  
  
### Nontemplate Collection Classes  
  
|Arrays|Lists|Maps|  
|------------|-----------|----------|  
|`CObArray`|`CObList`|`CMapPtrToWord`|  
|`CByteArray`|`CPtrList`|`CMapPtrToPtr`|  
|`CDWordArray`|`CStringList`|`CMapStringToOb`|  
|`CPtrArray`||`CMapStringToPtr`|  
|`CStringArray`||`CMapStringToString`|  
|`CWordArray`||`CMapWordToOb`|  
|`CUIntArray`||`CMapWordToPtr`|  
  
 The Characteristics of MFC Collection Classes table in [Recommendations for Choosing a Collection Class](../VS_visualcpp/Recommendations-for-Choosing-a-Collection-Class.md) describes the MFC collection classes in terms of these characteristics (other than shape):  
  
-   Whether the class uses C++ templates  
  
-   Whether the elements stored in the collection can be serialized  
  
-   Whether the elements stored in the collection can be dumped for diagnostics  
  
-   Whether the collection is type-safe  
  
### What do you want to do?  
  
#### General Collection-Class Tasks  
  
-   [Recommendations for Choosing a Collection Class](../VS_visualcpp/Recommendations-for-Choosing-a-Collection-Class.md)  
  
-   [How to: Make a Type-Safe Collection](../VS_visualcpp/How-to--Make-a-Type-Safe-Collection.md)  
  
-   [Creating Stack and Queue Collections](../VS_visualcpp/Creating-Stack-and-Queue-Collections.md)  
  
-   [CArray::Add](../Topic/CArray::Add.md)  
  
#### Template-Based Collection-Class Tasks  
  
-   [Template-Based Classes](../VS_visualcpp/Template-Based-Classes.md)  
  
#### Accessing the Members of a Collection (Template-Based or Not)  
  
-   [Accessing All Members of a Collection](../VS_visualcpp/Accessing-All-Members-of-a-Collection.md)  
  
-   [Deleting All Objects in a CObject Collection](../VS_visualcpp/Deleting-All-Objects-in-a-CObject-Collection.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)   
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)