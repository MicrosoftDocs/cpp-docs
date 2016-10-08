---
title: "Concurrency::graphics Namespace"
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
ms.assetid: 4529d3b1-d7da-4ffb-82bf-080915e0f23e
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
# Concurrency::graphics Namespace
The graphics namespace provides types and functions that are designed for graphics programming.  
  
## Syntax  
  
```  
namespace graphics;  
```  
  
## Members  
  
### Namespaces  
  
|Name|Description|  
|----------|-----------------|  
|[Concurrency::graphics::direct3d Namespace](../VS_visualcpp/Concurrency--graphics--direct3d-Namespace.md)|Provides functions for Direct3D interop.|  
  
### Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`uint`|The element type for [uint_2 Class](../VS_visualcpp/uint_2-Class.md), [uint_3 Class](../VS_visualcpp/uint_3-Class.md), and [uint_4 Class](../VS_visualcpp/uint_4-Class.md). Defined as `typedef unsigned int uint;`.|  
  
### Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[address_mode Enumeration](../VS_visualcpp/address_mode-Enumeration.md)|Specifies address modes supported for texture sampling.|  
|[filter_mode Enumeration](../VS_visualcpp/filter_mode-Enumeration.md)|Specifies filter modes supported for texture sampling.|  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[texture Class](../VS_visualcpp/texture-Class.md)|A texture is a data aggregate on an accelerator_view in the extent domain. It is a collection of variables, one for each element in an extent domain. Each variable holds a value corresponding to C++ primitive type (unsigned int, int, float, double), or scalar type norm, or unorm (defined in concurrency::graphics), or eligible short vector types defined in concurrency::graphics.|  
|[writeonly_texture_view Class](../VS_visualcpp/writeonly_texture_view-Class.md)|A writeonly_texture_view provides writeonly access to a texture.|  
|[double_2 Class](../VS_visualcpp/double_2-Class.md)|Represents a short vector of 2 `double` values.|  
|[double_3 Class](../VS_visualcpp/double_3-Class.md)|Represents a short vector of 3 `double` values.|  
|[double_4 Class](../VS_visualcpp/double_4-Class.md)|Represents a short vector of 4 `double` values.|  
|[float_2 Class](../VS_visualcpp/float_2-Class.md)|Represents a short vector of 2 `float` values.|  
|[float_3 Class](../VS_visualcpp/float_3-Class.md)|Represents a short vector of 3 `float` values.|  
|[float_4 Class](../VS_visualcpp/float_4-Class.md)|Represents a short vector of 4 `float` values.|  
|[int_2 Class](../VS_visualcpp/int_2-Class.md)|Represents a short vector of 2 `int` values.|  
|[int_3 Class](../VS_visualcpp/int_3-Class.md)|Represents a short vector of 3 `int` values.|  
|[int_4 Class](../VS_visualcpp/int_4-Class.md)|Represents a short vector of 4 `int` values.|  
|[norm_2 Class](../VS_visualcpp/norm_2-Class.md)|Represents a short vector of 2 `norm` values.|  
|[norm_3 Class](../VS_visualcpp/norm_3-Class.md)|Represents a short vector of 3 `norm` values.|  
|[norm_4 Class](../VS_visualcpp/norm_4-Class.md)|Represents a short vector of 4 `norm` values.|  
|[uint_2 Class](../VS_visualcpp/uint_2-Class.md)|Represents a short vector of 2 `uint` values.|  
|[uint_3 Class](../VS_visualcpp/uint_3-Class.md)|Represents a short vector of 3 `uint` values.|  
|[uint_4 Class](../VS_visualcpp/uint_4-Class.md)|Represents a short vector of 4 `uint` values.|  
|[unorm_2 Class](../VS_visualcpp/unorm_2-Class.md)|Represents a short vector of 2 `unorm` values.|  
|[unorm_3 Class](../VS_visualcpp/unorm_3-Class.md)|Represents a short vector of 3 `unorm` values.|  
|[unorm_4 Class](../VS_visualcpp/unorm_4-Class.md)|Represents a short vector of 4 `unorm` values.|  
|[sampler Class](../VS_visualcpp/sampler-Class.md)|Represents the sampler configuration used for texture sampling.|  
|[short_vector Structure](../VS_visualcpp/short_vector-Structure.md)|Provides a basic implementation of a short vector of values.|  
|[short_vector_traits Structure](../VS_visualcpp/short_vector_traits-Structure.md)|Provides for retrieval of the length and type of a short vector.|  
|[texture_view Class](../VS_visualcpp/texture_view-Class.md)|Provides read access and write access to a texture.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[copy Function](../VS_visualcpp/copy-Function.md)|Overloaded. Copies the contents of the source texture into the destination host buffer.|  
|[copy_async Function](../VS_visualcpp/copy_async-Function.md)|Overloaded. Asynchronously copies the contents of the source texture into the destination host buffer.|  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)