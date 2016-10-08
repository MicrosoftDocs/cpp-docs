---
title: "create_accelerator_view Function"
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
ms.assetid: 2ab7f14a-db10-4ff2-815d-eb43824fb790
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
# create_accelerator_view Function
Creates an [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object from a pointer to a Direct3D device interface.  
  
## Syntax  
  
```  
accelerator_view create_accelerator_view(  
    IUnknown * _D3D_device  
    queuing_mode _Qmode = queuing_mode_automatic);  
  
accelerator_view create_accelerator_view(  
    accelerator& _Accelerator,  
    bool _Disable_timeout  
    queuing_mode _Qmode = queuing_mode_automatic);  
```  
  
#### Parameters  
 `_Accelerator`  
 The accelerator on which the new accelerator_view is to be created.  
  
 `_D3D_device`  
 The pointer to the Direct3D device interface.  
  
 `_Disable_timeout`  
 A Boolean parameter that specifies whether timeout should be disabled for the newly created accelerator_view. This corresponds to the D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT flag for Direct3D device creation and is used to indicate if the operating system should allow workloads that take more than 2 seconds to execute without resetting the device per the Windows timeout detection and recovery mechanism. Use of this flag is recommended if you need to perform time consuming tasks on the accelerator_view.  
  
 `_Qmode`  
 The [queuing_mode](../VS_visualcpp/queuing_mode-Enumeration.md) to be used for the newly created accelerator_view. This parameter has a default value of `queuing_mode_automatic`.  
  
## Return Value  
 The `accelerator_view` object created from the passed Direct3D device interface.  
  
## Remarks  
 This function creates a new `accelerator_view` object from an existing pointer to a Direct3D device interface. If the function call succeeds, the reference count of the parameter is incremented by means of an `AddRef` call to the interface. You can safely release the object when it is no longer required in your DirectX code. If the method call fails, a [runtime_exception](../VS_visualcpp/runtime_exception-Class.md) is thrown.  
  
 The `accelerator_view` object that you create by using this function is thread safe. You must synchronize concurrent use of the `accelerator_view` object. Unsynchronized concurrent usage of the `accelerator_view` object and the raw ID3D11Device interface causes undefined behavior.  
  
 The C++ AMP runtime provides detailed error information in debug mode by using the D3D Debug layer if you use the `D3D11_CREATE_DEVICE_DEBUG` flag.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)