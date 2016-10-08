---
title: "AsyncBase Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 64259b9b-f427-4ffd-a611-e7a2f82362b2
caps.latest.revision: 3
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
# AsyncBase Class
Implements the Windows Runtime asynchronous state machine.  
  
## Syntax  
  
```  
  
template <  
   typename TComplete,  
   typename TProgress = Details::Nil,  
   AsyncResultType resultType = SingleResult  
>  
class AsyncBase : public AsyncBase< TComplete, Details::Nil, resultType >;  
  
template <  
   typename TComplete,  
   AsyncResultType resultType  
>  
class AsyncBase< TComplete, Details::Nil, resultType > : public Microsoft::WRL::Implements< IAsyncInfo >;  
```  
  
#### Parameters  
 `TComplete`  
 An event handler that is called when an asynchronous operation completes.  
  
 `TProgress`  
 An event handler that is called when a running asynchronous operation reports the current progress of the operation.  
  
 `resultType`  
 One of the [AsyncResultType](../VS_visualcpp/AsyncResultType-Enumeration.md) enumeration values. By default, SingleResult.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncBase::AsyncBase Constructor](../VS_visualcpp/AsyncBase--AsyncBase-Constructor.md)|Initializes an instance of the AsyncBase class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncBase::Cancel Method](../VS_visualcpp/AsyncBase--Cancel-Method.md)|Cancels an asynchronous operation.|  
|[AsyncBase::Close Method](../VS_visualcpp/AsyncBase--Close-Method.md)|Closes the asynchronous operation.|  
|[AsyncBase::FireCompletion Method](../VS_visualcpp/AsyncBase--FireCompletion-Method.md)|Invokes the completion event handler, or resets the internal progress delegate.|  
|[AsyncBase::FireProgress Method](../VS_visualcpp/AsyncBase--FireProgress-Method.md)|Invokes the current progress event handler.|  
|[AsyncBase::get_ErrorCode Method](../VS_visualcpp/AsyncBase--get_ErrorCode-Method.md)|Retrieves the error code for the current asynchronous operation.|  
|[AsyncBase::get_Id Method](../VS_visualcpp/AsyncBase--get_Id-Method.md)|Retrieves the handle of the asynchronous operation.|  
|[AsyncBase::get_Status Method](../VS_visualcpp/AsyncBase--get_Status-Method.md)|Retrieves a value that indicates the status of the asynchronous operation.|  
|[AsyncBase::GetOnComplete Method](../VS_visualcpp/AsyncBase--GetOnComplete-Method.md)|Copies the address of the current completion event handler to the specified variable.|  
|[AsyncBase::GetOnProgress Method](../VS_visualcpp/AsyncBase--GetOnProgress-Method.md)|Copies the address of the current progress event handler to the specified variable.|  
|[AsyncBase::put_Id Method](../VS_visualcpp/AsyncBase--put_Id-Method.md)|Sets the handle of the asynchronous operation.|  
|[AsyncBase::PutOnComplete Method](../VS_visualcpp/AsyncBase--PutOnComplete-Method.md)|Sets the address of the completion event handler to the specified value.|  
|[AsyncBase::PutOnProgress Method](../VS_visualcpp/AsyncBase--PutOnProgress-Method.md)|Sets the address of the progress event handler to the specified value.|  
|[AsyncBase::Start Method](../VS_visualcpp/AsyncBase--Start-Method.md)|Starts the asynchronous operation.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncBase::CheckValidStateForDelegateCall Method](../VS_visualcpp/AsyncBase--CheckValidStateForDelegateCall-Method.md)|Tests whether delegate properties can be modified in the current asynchronous state.|  
|[AsyncBase::CheckValidStateForResultsCall Method](../VS_visualcpp/AsyncBase--CheckValidStateForResultsCall-Method.md)|Tests whether the results of an asynchronous operation can be collected in the current asynchronous state.|  
|[AsyncBase::ContinueAsyncOperation Method](../VS_visualcpp/AsyncBase--ContinueAsyncOperation-Method.md)|Determines whether the asynchronous operation should continue processing or should halt.|  
|[AsyncBase::CurrentStatus Method](../VS_visualcpp/AsyncBase--CurrentStatus-Method.md)|Retrieves the status of the current asynchronous operation.|  
|[AsyncBase::ErrorCode Method](../VS_visualcpp/AsyncBase--ErrorCode-Method.md)|Retrieves the error code for the current asynchronous operation.|  
|[AsyncBase::OnCancel Method](../VS_visualcpp/AsyncBase--OnCancel-Method.md)|When overridden in a derived class, cancels an asynchronous operation.|  
|[AsyncBase::OnClose Method](../VS_visualcpp/AsyncBase--OnClose-Method.md)|When overridden in a derived class, closes an asynchronous operation.|  
|[AsyncBase::OnStart Method](../VS_visualcpp/AsyncBase--OnStart-Method.md)|When overridden in a derived class, starts an asynchronous operation.|  
|[AsyncBase::TryTransitionToCompleted Method](../VS_visualcpp/AsyncBase--TryTransitionToCompleted-Method.md)|Indicates whether the current asynchronous operation has completed.|  
|[AsyncBase::TryTransitionToError Method](../VS_visualcpp/AsyncBase--TryTransitionToError-Method.md)|Indicates whether the specified error code can modify the internal error state.|  
  
## Inheritance Hierarchy  
 `AsyncBase`  
  
 `AsyncBase`  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)