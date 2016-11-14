---
title: "AsyncBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsyncBase class"
ms.assetid: 64259b9b-f427-4ffd-a611-e7a2f82362b2
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
 One of the [AsyncResultType](../windows/asyncresulttype-enumeration.md) enumeration values. By default, SingleResult.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncBase::AsyncBase Constructor](../windows/asyncbase-asyncbase-constructor.md)|Initializes an instance of the AsyncBase class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncBase::Cancel Method](../windows/asyncbase-cancel-method.md)|Cancels an asynchronous operation.|  
|[AsyncBase::Close Method](../windows/asyncbase-close-method.md)|Closes the asynchronous operation.|  
|[AsyncBase::FireCompletion Method](../windows/asyncbase-firecompletion-method.md)|Invokes the completion event handler, or resets the internal progress delegate.|  
|[AsyncBase::FireProgress Method](../windows/asyncbase-fireprogress-method.md)|Invokes the current progress event handler.|  
|[AsyncBase::get_ErrorCode Method](../windows/asyncbase-get-errorcode-method.md)|Retrieves the error code for the current asynchronous operation.|  
|[AsyncBase::get_Id Method](../windows/asyncbase-get-id-method.md)|Retrieves the handle of the asynchronous operation.|  
|[AsyncBase::get_Status Method](../windows/asyncbase-get-status-method.md)|Retrieves a value that indicates the status of the asynchronous operation.|  
|[AsyncBase::GetOnComplete Method](../windows/asyncbase-getoncomplete-method.md)|Copies the address of the current completion event handler to the specified variable.|  
|[AsyncBase::GetOnProgress Method](../windows/asyncbase-getonprogress-method.md)|Copies the address of the current progress event handler to the specified variable.|  
|[AsyncBase::put_Id Method](../windows/asyncbase-put-id-method.md)|Sets the handle of the asynchronous operation.|  
|[AsyncBase::PutOnComplete Method](../windows/asyncbase-putoncomplete-method.md)|Sets the address of the completion event handler to the specified value.|  
|[AsyncBase::PutOnProgress Method](../windows/asyncbase-putonprogress-method.md)|Sets the address of the progress event handler to the specified value.|  
|[AsyncBase::Start Method](../windows/asyncbase-start-method.md)|Starts the asynchronous operation.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncBase::CheckValidStateForDelegateCall Method](../windows/asyncbase-checkvalidstatefordelegatecall-method.md)|Tests whether delegate properties can be modified in the current asynchronous state.|  
|[AsyncBase::CheckValidStateForResultsCall Method](../windows/asyncbase-checkvalidstateforresultscall-method.md)|Tests whether the results of an asynchronous operation can be collected in the current asynchronous state.|  
|[AsyncBase::ContinueAsyncOperation Method](../windows/asyncbase-continueasyncoperation-method.md)|Determines whether the asynchronous operation should continue processing or should halt.|  
|[AsyncBase::CurrentStatus Method](../windows/asyncbase-currentstatus-method.md)|Retrieves the status of the current asynchronous operation.|  
|[AsyncBase::ErrorCode Method](../windows/asyncbase-errorcode-method.md)|Retrieves the error code for the current asynchronous operation.|  
|[AsyncBase::OnCancel Method](../windows/asyncbase-oncancel-method.md)|When overridden in a derived class, cancels an asynchronous operation.|  
|[AsyncBase::OnClose Method](../windows/asyncbase-onclose-method.md)|When overridden in a derived class, closes an asynchronous operation.|  
|[AsyncBase::OnStart Method](../windows/asyncbase-onstart-method.md)|When overridden in a derived class, starts an asynchronous operation.|  
|[AsyncBase::TryTransitionToCompleted Method](../windows/asyncbase-trytransitiontocompleted-method.md)|Indicates whether the current asynchronous operation has completed.|  
|[AsyncBase::TryTransitionToError Method](../windows/asyncbase-trytransitiontoerror-method.md)|Indicates whether the specified error code can modify the internal error state.|  
  
## Inheritance Hierarchy  
 `AsyncBase`  
  
 `AsyncBase`  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)