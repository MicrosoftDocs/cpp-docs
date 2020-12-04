---
description: "Learn more about: AsyncBase Class"
title: "AsyncBase Class"
ms.date: "10/08/2018"
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase", "async/Microsoft::WRL::AsyncBase::AsyncBase", "async/Microsoft::WRL::AsyncBase::Cancel", "async/Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall", "async/Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall", "async/Microsoft::WRL::AsyncBase::Close", "async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation", "async/Microsoft::WRL::AsyncBase::CurrentStatus", "async/Microsoft::WRL::AsyncBase::ErrorCode", "async/Microsoft::WRL::AsyncBase::FireCompletion", "async/Microsoft::WRL::AsyncBase::FireProgress", "async/Microsoft::WRL::AsyncBase::get_ErrorCode", "async/Microsoft::WRL::AsyncBase::get_Id", "async/Microsoft::WRL::AsyncBase::get_Status", "async/Microsoft::WRL::AsyncBase::GetOnComplete", "async/Microsoft::WRL::AsyncBase::GetOnProgress", "async/Microsoft::WRL::AsyncBase::OnCancel", "async/Microsoft::WRL::AsyncBase::OnClose", "async/Microsoft::WRL::AsyncBase::OnStart", "async/Microsoft::WRL::AsyncBase::put_Id", "async/Microsoft::WRL::AsyncBase::PutOnComplete", "async/Microsoft::WRL::AsyncBase::PutOnProgress", "async/Microsoft::WRL::AsyncBase::TryTransitionToCompleted", "async/Microsoft::WRL::AsyncBase::TryTransitionToError"]
helpviewer_keywords: ["Microsoft::WRL::AsyncBase class", "Microsoft::WRL::AsyncBase::AsyncBase, constructor", "Microsoft::WRL::AsyncBase::Cancel method", "Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall method", "Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall method", "Microsoft::WRL::AsyncBase::Close method", "Microsoft::WRL::AsyncBase::ContinueAsyncOperation method", "Microsoft::WRL::AsyncBase::CurrentStatus method", "Microsoft::WRL::AsyncBase::ErrorCode method", "Microsoft::WRL::AsyncBase::FireCompletion method", "Microsoft::WRL::AsyncBase::FireProgress method", "Microsoft::WRL::AsyncBase::get_ErrorCode method", "Microsoft::WRL::AsyncBase::get_Id method", "Microsoft::WRL::AsyncBase::get_Status method", "Microsoft::WRL::AsyncBase::GetOnComplete method", "Microsoft::WRL::AsyncBase::GetOnProgress method", "Microsoft::WRL::AsyncBase::OnCancel method", "Microsoft::WRL::AsyncBase::OnClose method", "Microsoft::WRL::AsyncBase::OnStart method", "Microsoft::WRL::AsyncBase::put_Id method", "Microsoft::WRL::AsyncBase::PutOnComplete method", "Microsoft::WRL::AsyncBase::PutOnProgress method", "Microsoft::WRL::AsyncBase::TryTransitionToCompleted method", "Microsoft::WRL::AsyncBase::TryTransitionToError method"]
ms.assetid: 64259b9b-f427-4ffd-a611-e7a2f82362b2
---
# AsyncBase Class

Implements the Windows Runtime asynchronous state machine.

## Syntax

```cpp
template <
    typename TComplete,
    typename TProgress = Details::Nil,
    AsyncResultType resultType = SingleResult
>
class AsyncBase : public AsyncBase<TComplete, Details::Nil, resultType>;

template <typename TComplete, AsyncResultType resultType>
class AsyncBase<TComplete, Details::Nil, resultType> :
    public Microsoft::WRL::Implements<IAsyncInfo>;
```

### Parameters

*TComplete*<br/>
An event handler that is called when an asynchronous operation completes.

*TProgress*<br/>
An event handler that is called when a running asynchronous operation reports the current progress of the operation.

*resultType*<br/>
One of the [AsyncResultType](asyncresulttype-enumeration.md) enumeration values. By default, `SingleResult`.

## Members

### Public Constructors

Name                               | Description
---------------------------------- | -------------------------------------------------
[AsyncBase::AsyncBase](#asyncbase) | Initializes an instance of the `AsyncBase` class.

### Public Methods

Name                                         | Description
-------------------------------------------- | -------------------------------------------------------------------------------------
[AsyncBase::Cancel](#cancel)                 | Cancels an asynchronous operation.
[AsyncBase::Close](#close)                   | Closes the asynchronous operation.
[AsyncBase::FireCompletion](#firecompletion) | Invokes the completion event handler, or resets the internal progress delegate.
[AsyncBase::FireProgress](#fireprogress)     | Invokes the current progress event handler.
[AsyncBase::get_ErrorCode](#get-errorcode)   | Retrieves the error code for the current asynchronous operation.
[AsyncBase::get_Id](#get-id)                 | Retrieves the handle of the asynchronous operation.
[AsyncBase::get_Status](#get-status)         | Retrieves a value that indicates the status of the asynchronous operation.
[AsyncBase::GetOnComplete](#getoncomplete)   | Copies the address of the current completion event handler to the specified variable.
[AsyncBase::GetOnProgress](#getonprogress)   | Copies the address of the current progress event handler to the specified variable.
[AsyncBase::put_Id](#put-id)                 | Sets the handle of the asynchronous operation.
[AsyncBase::PutOnComplete](#putoncomplete)   | Sets the address of the completion event handler to the specified value.
[AsyncBase::PutOnProgress](#putonprogress)   | Sets the address of the progress event handler to the specified value.

### Protected Methods

Name                                                                         | Description
---------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------
[AsyncBase::CheckValidStateForDelegateCall](#checkvalidstatefordelegatecall) | Tests whether delegate properties can be modified in the current asynchronous state.
[AsyncBase::CheckValidStateForResultsCall](#checkvalidstateforresultscall)   | Tests whether the results of an asynchronous operation can be collected in the current asynchronous state.
[AsyncBase::ContinueAsyncOperation](#continueasyncoperation)                 | Determines whether the asynchronous operation should continue processing or should halt.
[AsyncBase::CurrentStatus](#currentstatus)                                   | Retrieves the status of the current asynchronous operation.
[AsyncBase::ErrorCode](#errorcode)                                           | Retrieves the error code for the current asynchronous operation.
[AsyncBase::OnCancel](#oncancel)                                             | When overridden in a derived class, cancels an asynchronous operation.
[AsyncBase::OnClose](#onclose)                                               | When overridden in a derived class, closes an asynchronous operation.
[AsyncBase::OnStart](#onstart)                                               | When overridden in a derived class, starts an asynchronous operation.
[AsyncBase::Start](#start)                                                   | Starts the asynchronous operation.
[AsyncBase::TryTransitionToCompleted](#trytransitiontocompleted)             | Indicates whether the current asynchronous operation has completed.
[AsyncBase::TryTransitionToError](#trytransitiontoerror)                     | Indicates whether the specified error code can modify the internal error state.

## Inheritance Hierarchy

`AsyncBase`

`AsyncBase`

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## <a name="asyncbase"></a> AsyncBase::AsyncBase

Initializes an instance of the `AsyncBase` class.

```cpp
AsyncBase();
```

## <a name="cancel"></a> AsyncBase::Cancel

Cancels an asynchronous operation.

```cpp
STDMETHOD(
   Cancel
)(void);
```

### Return Value

By default, always returns S_OK.

### Remarks

`Cancel()` is a default implementation of `IAsyncInfo::Cancel`, and does no actual work. To actually cancel an asynchronous operation, override the `OnCancel()` pure virtual method.

## <a name="checkvalidstatefordelegatecall"></a> AsyncBase::CheckValidStateForDelegateCall

Tests whether delegate properties can be modified in the current asynchronous state.

```cpp
inline HRESULT CheckValidStateForDelegateCall();
```

### Return Value

S_OK if delegate properties can be modified; otherwise, E_ILLEGAL_METHOD_CALL.

## <a name="checkvalidstateforresultscall"></a> AsyncBase::CheckValidStateForResultsCall

Tests whether the results of an asynchronous operation can be collected in the current asynchronous state.

```cpp
inline HRESULT CheckValidStateForResultsCall();
```

### Return Value

S_OK if results can be collected; otherwise, E_ILLEGAL_METHOD_CALLE_ILLEGAL_METHOD_CALL.

## <a name="close"></a> AsyncBase::Close

Closes the asynchronous operation.

```cpp
STDMETHOD(
   Close
)(void) override;
```

### Return Value

S_OK if the operation closes or is already closed; otherwise, E_ILLEGAL_STATE_CHANGE.

### Remarks

`Close()` is a default implementation of `IAsyncInfo::Close`, and does no actual work. To actually close an asynchronous operation, override the `OnClose()` pure virtual method.

## <a name="continueasyncoperation"></a> AsyncBase::ContinueAsyncOperation

Determines whether the asynchronous operation should continue processing or should halt.

```cpp
inline bool ContinueAsyncOperation();
```

### Return Value

**`true`** if the current state of the asynchronous operation is *started*, which means the operation should continue. Otherwise, **`false`**, which means the operation should halt.

## <a name="currentstatus"></a> AsyncBase::CurrentStatus

Retrieves the status of the current asynchronous operation.

```cpp
inline void CurrentStatus(
   Details::AsyncStatusInternal *status
);
```

### Parameters

*status*<br/>
The location where this operation stores the current status.

### Remarks

This operation is thread-safe.

## <a name="errorcode"></a> AsyncBase::ErrorCode

Retrieves the error code for the current asynchronous operation.

```cpp
inline void ErrorCode(
   HRESULT *error
);
```

### Parameters

*error*<br/>
The location where this operation stores the current error code.

### Remarks

This operation is thread-safe.

## <a name="firecompletion"></a> AsyncBase::FireCompletion

Invokes the completion event handler, or resets the internal progress delegate.

```cpp
void FireCompletion(
   void
) override;

virtual void FireCompletion();
```

### Remarks

The first version of `FireCompletion()` resets the internal progress delegate variable. The second version invokes the completion event handler if the asynchronous operation is complete.

## <a name="fireprogress"></a> AsyncBase::FireProgress

Invokes the current progress event handler.

```cpp
void FireProgress(
   const typename ProgressTraits::Arg2Type arg
);
```

### Parameters

*arg*<br/>
The event handler method to invoke.

### Remarks

`ProgressTraits` is derived from [ArgTraitsHelper Structure](argtraitshelper-structure.md).

## <a name="get-errorcode"></a> AsyncBase::get_ErrorCode

Retrieves the error code for the current asynchronous operation.

```cpp
STDMETHOD(
   get_ErrorCode
)(HRESULT* errorCode) override;
```

### Parameters

*errorCode*<br/>
The location where the current error code is stored.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL if the current asynchronous operation is closed.

## <a name="get-id"></a> AsyncBase::get_Id

Retrieves the handle of the asynchronous operation.

```cpp
STDMETHOD(
   get_Id
)(unsigned int *id) override;
```

### Parameters

*id*<br/>
The location where the handle is to be stored.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

### Remarks

This method implements `IAsyncInfo::get_Id`.

## <a name="get-status"></a> AsyncBase::get_Status

Retrieves a value that indicates the status of the asynchronous operation.

```cpp
STDMETHOD(
   get_Status
)(AsyncStatus *status) override;
```

### Parameters

*status*<br/>
The location where the status is to be stored. For more information, see `Windows::Foundation::AsyncStatus` enumeration.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

### Remarks

This method implements `IAsyncInfo::get_Status`.

## <a name="getoncomplete"></a> AsyncBase::GetOnComplete

Copies the address of the current completion event handler to the specified variable.

```cpp
STDMETHOD(
   GetOnComplete
)(TComplete** completeHandler);
```

### Parameters

*completeHandler*<br/>
The location where the address of the current completion event handler is stored.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## <a name="getonprogress"></a> AsyncBase::GetOnProgress

Copies the address of the current progress event handler to the specified variable.

```cpp
STDMETHOD(
   GetOnProgress
)(TProgress** progressHandler);
```

### Parameters

*progressHandler*<br/>
The location where the address of the current progress event handler is stored.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## <a name="oncancel"></a> AsyncBase::OnCancel

When overridden in a derived class, cancels an asynchronous operation.

```cpp
virtual void OnCancel(
   void
) = 0;
```

## <a name="onclose"></a> AsyncBase::OnClose

When overridden in a derived class, closes an asynchronous operation.

```cpp
virtual void OnClose(
   void
) = 0;
```

## <a name="onstart"></a> AsyncBase::OnStart

When overridden in a derived class, starts an asynchronous operation.

```cpp
virtual HRESULT OnStart(
   void
) = 0;
```

## <a name="put-id"></a> AsyncBase::put_Id

Sets the handle of the asynchronous operation.

```cpp
STDMETHOD(
   put_Id
)(const unsigned int id);
```

### Parameters

*id*<br/>
A nonzero handle.

### Return Value

S_OK if successful; otherwise, E_INVALIDARG or E_ILLEGAL_METHOD_CALL.

## <a name="putoncomplete"></a> AsyncBase::PutOnComplete

Sets the address of the completion event handler to the specified value.

```cpp
STDMETHOD(
   PutOnComplete
)(TComplete* completeHandler);
```

### Parameters

*completeHandler*<br/>
The address to which the completion event handler is set.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## <a name="putonprogress"></a> AsyncBase::PutOnProgress

Sets the address of the progress event handler to the specified value.

```cpp
STDMETHOD(
   PutOnProgress
)(TProgress* progressHandler);
```

### Parameters

*progressHandler*<br/>
The address to which the progress event handler is set.

### Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## <a name="start"></a> AsyncBase::Start

Starts the asynchronous operation.

```cpp
STDMETHOD(
   Start
)(void);
```

### Return Value

S_OK if the operation starts or is already started; otherwise, E_ILLEGAL_STATE_CHANGE.

### Remarks

`Start()` is a protected method that is not externally visible because async operations "hot start" before returning to the caller.

## <a name="trytransitiontocompleted"></a> AsyncBase::TryTransitionToCompleted

Indicates whether the current asynchronous operation has completed.

```cpp
bool TryTransitionToCompleted(
   void
);
```

### Return Value

**`true`** if the asynchronous operation has completed; otherwise, **`false`**.

## <a name="trytransitiontoerror"></a> AsyncBase::TryTransitionToError

Indicates whether the specified error code can modify the internal error state.

```cpp
bool TryTransitionToError(
   const HRESULT error
);
```

### Parameters

*error*<br/>
An error HRESULT.

### Return Value

**`true`** if the internal error state was changed; otherwise, **`false`**.

### Remarks

This operation modifies the error state only if the error state is already set to S_OK. This operation has no effect if the error state is already error, cancelled, completed, or closed.
