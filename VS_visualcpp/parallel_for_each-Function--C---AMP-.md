---
title: "parallel_for_each Function (C++ AMP)"
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
ms.assetid: 449013a2-5f16-4280-ac1a-0d850f7d5160
caps.latest.revision: 17
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
# parallel_for_each Function (C++ AMP)
Runs a function across the compute domain. For more information, see [C++ AMP Overview](../VS_visualcpp/C---AMP-Overview.md).  
  
## Syntax  
  
```  
template <  
    int _Rank,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const extent< _Rank>& _Compute_domain,  
    const _Kernel_type & _Kernel );  
  
template <  
    int _Dim0,  
    int _Dim1,  
    int _Dim2,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const tiled_extent< _Dim0, _Dim1, _Dim2>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
  
template <  
    int _Dim0,  
    int _Dim1,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const tiled_extent< _Dim0, _Dim1>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
  
template <  
    int _Dim0,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const tiled_extent< _Dim0>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
  
template <  
    int _Rank,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const accelerator_view& _Accl_view,  
    const extent< _Rank>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
  
template <  
    int _Dim0,  
    int _Dim1,  
    int _Dim2,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const accelerator_view& _Accl_view,  
    const tiled_extent< _Dim0, _Dim1, _Dim2>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
  
template <  
    int _Dim0,  
    int _Dim1,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const accelerator_view& _Accl_view,  
    const tiled_extent< _Dim0, _Dim1>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
  
template <  
    int _Dim0,  
    typename _Kernel_type  
>  
void parallel_for_each(  
    const accelerator_view& _Accl_view,  
    const tiled_extent< _Dim0>& _Compute_domain,  
    const _Kernel_type& _Kernel );  
```  
  
#### Parameters  
 `_Accl_view`  
 The `accelerator_view` object to run the parallel computation on.  
  
 `_Compute_domain`  
 An `extent` object that contains the data for the computation.  
  
 `_Dim0`  
 The dimension of the `tiled_extent` object.  
  
 `_Dim1`  
 The dimension of the `tiled_extent` object.  
  
 `_Dim2`  
 The dimension of the `tiled_extent` object.  
  
 `_Kernel`  
 A lambda or function object that takes an argument of type "index<_Rank>" and performs the parallel computation.  
  
 `_Kernel_type`  
 A lambda or functor.  
  
 `_Rank`  
 The rank of the extent.  
  
## Remarks  
 The `parallel_for_each` function starts data-parallel computations on accelerator devices. The basic behavior of `parallel_for_each` is like that of [for_each](../Topic/for_each.md), which runs a function on each element that's in a container. The basic components in a call to `parallel_for_each` are a *compute domain*, an *index*, and a *kernel function*. When `parallel_for_each` runs, a parallel activity is run for each index in the compute domain. You can use the parallel activity to access the elements in the input or output arrays. A call to `parallel_for_each` behaves as though it's synchronous. In practice, the call is asynchronous because it runs on a separate device. There are no guarantees about the order and concurrency of the parallel activities run by the non-tiled `parallel_for_each`. Activities communicate only by using atomic functions.  
  
 The tiled version of `parallel_for_each` organizes the parallel activities into tiles that have a fixed size and 1, 2, or 3 dimensions, as specified in the `tiled_extent` argument. Threads in the same tile have access to any variables declared with the [tile_static](../VS_visualcpp/tile_static-Keyword.md) keyword. You can use the [tile_barrier::wait Method](../VS_visualcpp/tile_barrier--wait-Method.md) method to synchronize access to variables declared with the [tile_static](../VS_visualcpp/tile_static-Keyword.md) keyword. The following restrictions apply to the tiled `parallel_for_each`:  
  
-   The product of the tile extent dimensions cannot exceed 1024.  
  
    -   3D:  D0 * D1 \* D2 ≤ 1024; and D0 ≤ 64  
  
    -   2D:  D0 * D1 ≤ 1024  
  
    -   1D:  D0 ≤ 1024  
  
-   The tiled grid provided as the first parameter to `parallel_for_each` must be divisible, along each of its dimensions, by the corresponding tile extent.  
  
 For more information, see [Using Tiles](../VS_visualcpp/Using-Tiles.md).  
  
 The `parallel_for_each` code runs on an accelerator, usually a GPU device. You can pass this accelerator explicitly to `parallel_for_each` as an optional `accelerator_view` parameter. Otherwise, the target accelerator is chosen from the objects of type `array<T,N>` that are captured in the kernel function. If all arrays aren’t bound to the same accelerator, an exception is thrown. The `tiled_index` argument passed to the kernel contains a collection of indexes, including those that are relative to the current tile.  
  
 The `_Kernel` parameter of the `parallel_for_each` function must be a lambda or function object. To run on an accelerator, the lambda must include the `restrict(amp)` clause, although it can have additional restrictions. The restriction clause imposes several restrictions of the kernel function. For more information, see [restrict (C++ AMP)](../VS_visualcpp/restrict--C---AMP-.md).  
  
 You must be able to invoke the `_Kernel` argument by using one of the following argument types:  
  
-   Non-tiled: `index<N>`, where `N` must be the same rank as the `extent<N>` used in the `parallel_for_each`.  
  
-   Tiled: A `tiled_index` object whose dimensions match those of the `tiled_extent` object used in the call to `parallel_for_each`.  
  
 The kernel function must return `void`.  
  
 Because the kernel function doesn't take any other arguments, all other data operated on by the kernel must be captured in the lambda or function object. All captured data must be passed by value, except for `array<T,N>` objects, which must be captured by reference or pointer. Several restrictions also apply on the object types that can be captured. For more information, see [restrict (C++ AMP)](../VS_visualcpp/restrict--C---AMP-.md).  
  
 If an error occurs when trying to start the `parallel_for_each`, call the runtime throws an exception.  Exceptions can be thrown the following reasons:  
  
-   Failure to create the shader.  
  
-   Failure to create buffers.  
  
-   Invalid extent passed.  
  
-   Mismatched accelerators.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)