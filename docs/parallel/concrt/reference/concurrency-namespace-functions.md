---
title: "concurrency namespace functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 520a6dff-9324-4df2-990d-302e3050af6a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# concurrency namespace functions
||||  
|-|-|-|  
|[Alloc](#alloc)|[CreateResourceManager](#createresourcemanager)|[DisableTracing](#disabletracing)|  
|[EnableTracing](#enabletracing)|[Free](#free)|[GetExecutionContextId](#getexecutioncontextid)|  
|[GetOSVersion](#getosversion)|[GetProcessorCount](#getprocessorcount)|[GetProcessorNodeCount](#getprocessornodecount)|  
|[GetSchedulerId](#getschedulerid)|[Trace_agents_register_name](#trace_agents_register_name)|[asend](#asend)|  
|[cancel_current_task](#cancel_current_task)|[clear](#clear)|[create_async](#create_async)|  
|[create_task](#create_task)|[get_ambient_scheduler](#get_ambient_scheduler)|[internal_assign_iterators](#internal_assign_iterators)|  
|[interruption_point](#interruption_point)|[is_current_task_group_canceling](#is_current_task_group_canceling)|[make_choice](#make_choice)|  
|[make_greedy_join](#make_greedy_join)|[make_join](#make_join)|[make_task](#make_task)|  
|[parallel_buffered_sort](#parallel_buffered_sort)|[parallel_for](#parallel_for)|[parallel_for_each](#parallel_for_each)|  
|[parallel_invoke](#parallel_invoke)|[parallel_radixsort](#parallel_radixsort)|[parallel_reduce](#parallel_reduce)|  
|[parallel_sort](#parallel_sort)|[parallel_transform](#parallel_transform)|[receive](#receive)|  
|[run_with_cancellation_token](#run_with_cancellation_token)|[send](#send)|[set_ambient_scheduler](#set_ambient_scheduler)|  
|[set_task_execution_resources](#set_task_execution_resources)|[swap](#swap)|[task_from_exception](#task_from_exception)|  
|[task_from_result](#task_from_result)|[try_receive](#try_receive)|[wait](#wait)|  
|[when_all](#when_all)|[when_any](#when_any)|  
  
##  <a name="alloc"></a>  Alloc  
 Allocates a block of memory of the size specified from the Concurrency Runtime Caching Suballocator.  
  
```
void* __cdecl Alloc(size_t _NumBytes);
```  
  
### Parameters  
 `_NumBytes`  
 The number of bytes of memory to allocate.  
  
### Return Value  
 A pointer to newly allocated memory.  
  
### Remarks  
 For more information about which scenarios in your application could benefit from using the Caching Suballocator, see [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
##  <a name="asend"></a>  asend  
 An asynchronous send operation, which schedules a task to propagate the data to the target block.  
  
```
template <class T>
bool asend(
    _Inout_ ITarget<T>* _Trg,
    const T& _Data);

template <class T>
bool asend(
    ITarget<T>& _Trg,
    const T& _Data);
```  
  
### Parameters  
 `T`  
 The type of the data to be sent.  
  
 `_Trg`  
 A pointer or reference to the target to which data is sent.  
  
 `_Data`  
 A reference to the data to be sent.  
  
### Return Value  
 `true` if the message was accepted before the method returned, `false` otherwise.  
  
### Remarks  
 For more information, see [Message Passing Functions](../../../parallel/concrt/message-passing-functions.md).  
  
##  <a name="cancel_current_task"></a>  cancel_current_task  
 Cancels the currently executing task. This function can be called from within the body of a task to abort the task's execution and cause it to enter the `canceled` state.  
  
 It is not a supported scenario to call this function if you are not within the body of a `task`. Doing so will result in undefined behavior such as a crash or a hang in your application.  
  
```
inline __declspec(noreturn) void __cdecl cancel_current_task();
```  
  
##  <a name="clear"></a>  clear  
 Clears the concurrent queue, destroying any currently enqueued elements. This method is not concurrency-safe.  
  
```
template<typename T, class _Ax>
void concurrent_queue<T,
    _Ax>::clear();
```   
  
### Parameters  
 `T`  
 `_Ax`  
  
##  <a name="create_async"></a>  create_async  
 Creates a Windows Runtime asynchronous construct based on a user supplied lambda or function object. The return type of `create_async` is one of either `IAsyncAction^`, `IAsyncActionWithProgress<TProgress>^`, `IAsyncOperation<TResult>^`, or `IAsyncOperationWithProgress<TResult, TProgress>^` based on the signature of the lambda passed to the method.  
  
```
template<typename _Function>
__declspec(noinline) auto create_async(const _Function& _Func) -> decltype(ref new details::_AsyncTaskGeneratorThunk<_Function>(_Func));
```  
  
### Parameters  
 `_Function`  
 `_Func`  
 The lambda or function object from which to create a Windows Runtime asynchronous construct.  
  
### Return Value  
 An asynchronous construct represented by an IAsyncAction^, IAsyncActionWithProgress\<TProgress>^, IAsyncOperation\<TResult>^, or an IAsyncOperationWithProgress\<TResult, TProgress>^. The interface returned depends on the signature of the lambda passed into the function.  
  
### Remarks  
 The return type of the lambda determines whether the construct is an action or an operation.  
  
 Lambdas that return void cause the creation of actions. Lambdas that return a result of type `TResult` cause the creation of operations of TResult.  
  
 The lambda may also return a `task<TResult>` which encapsulates the aysnchronous work within itself or is the continuation of a chain of tasks that represent the asynchronous work. In this case, the lambda itself is executed inline, since the tasks are the ones that execute asynchronously, and the return type of the lambda is unwrapped to produce the asynchronous construct returned by `create_async`. This implies that a lambda that returns a task\<void> will cause the creation of actions, and a lambda that returns a task\<TResult> will cause the creation of operations of TResult.  
  
 The lambda may take either zero, one or two arguments. The valid arguments are `progress_reporter<TProgress>` and `cancellation_token`, in that order if both are used. A lambda without arguments causes the creation of an asynchronous construct without the capability for progress reporting. A lambda that takes a progress_reporter\<TProgress> will cause `create_async` to return an asynchronous construct which reports progress of type TProgress each time the `report` method of the progress_reporter object is called. A lambda that takes a cancellation_token may use that token to check for cancellation, or pass it to tasks that it creates so that cancellation of the asynchronous construct causes cancellation of those tasks.  
  
 If the body of the lambda or function object returns a result (and not a task\<TResult>), the lamdba will be executed asynchronously within the process MTA in the context of a task the Runtime implicitly creates for it. The `IAsyncInfo::Cancel` method will cause cancellation of the implicit task.  
  
 If the body of the lambda returns a task, the lamba executes inline, and by declaring the lambda to take an argument of type `cancellation_token` you can trigger cancellation of any tasks you create within the lambda by passing that token in when you create them. You may also use the `register_callback` method on the token to cause the Runtime to invoke a callback when you call `IAsyncInfo::Cancel` on the async operation or action produced..  
  
 This function is only available to Windows Store apps.  
  
##  <a name="createresourcemanager"></a>  CreateResourceManager  
 Returns an interface that represents the singleton instance of the Concurrency Runtime's Resource Manager. The Resource Manager is responsible for assigning resources to schedulers that want to cooperate with each other.  
  
```
IResourceManager* __cdecl CreateResourceManager();
```  
  
### Return Value  
 An `IResourceManager` interface.  
  
### Remarks  
 Multiple subsequent calls to this method will return the same instance of the Resource Manager. Each call to the method increments a reference count on the Resource Manager, and must be matched with a call to the [IResourceManager::Release](http://msdn.microsoft.com/en-us/5d1356ec-fbd3-4284-a361-1e9e20bbb522) method when your scheduler is done communicating with the Resource Manager.  
  
 [unsupported_os](unsupported-os-class.md) is thrown if the operating system is not supported by the Concurrency Runtime.  
  
##  <a name="create_task"></a>  create_task  
 Creates a PPL [task](http://msdn.microsoft.com/en-us/5389e8a5-5038-40b6-844a-55e9b58ad35f) object. `create_task` can be used anywhere you would have used a task constructor. It is provided mainly for convenience, because it allows use of the `auto` keyword while creating tasks.  
  
```
template<typename T>
__declspec(
    noinline) auto create_task(T _Param, const task_options& _TaskOptions = task_options()) -> task<typename details::_TaskTypeFromParam<T>::T>;

template<typename _ReturnType>
__declspec(
    noinline) task<_ReturnType> create_task(const task<_ReturnType>& _Task);
```  
  
### Parameters  
 `T`  
 The type of the parameter from which the task is to be constructed.  
  
 `_ReturnType`  
 `_Param`  
 The parameter from which the task is to be constructed. This could be a lambda or function object, a `task_completion_event` object, a different `task` object, or a Windows::Foundation::IAsyncInfo interface if you are using tasks in your Windows Store app.  
  
 `_TaskOptions`  
 `_Task`  
  
### Return Value  
 A new task of type `T`, that is inferred from `_Param`.  
  
### Remarks  
 The first overload behaves like a task constructor that takes a single parameter.  
  
 The second overload associates the cancellation token provided with the newly created task. If you use this overload you are not allowed to pass in a different `task` object as the first parameter.  
  
 The type of the returned task is inferred from the first parameter to the function. If `_Param` is a `task_completion_event<T>`, a `task<T>`, or a functor that returns either type `T` or `task<T>`, the type of the created task is `task<T>`.  
  
 In a Windows Store app, if `_Param` is of type Windows::Foundation::IAsyncOperation\<T>^ or Windows::Foundation::IAsyncOperationWithProgress\<T,P>^, or a functor that returns either of those types, the created task will be of type `task<T>`. If `_Param` is of type Windows::Foundation::IAsyncAction^ or Windows::Foundation::IAsyncActionWithProgress\<P>^, or a functor that returns either of those types, the created task will have type `task<void>`.  
  
##  <a name="disabletracing"></a>  DisableTracing  
 Disables tracing in the Concurrency Runtime. This function is deprecated because ETW tracing is unregistered by default.  
  
```
__declspec(deprecated("Concurrency::DisableTracing is a deprecated function.")) _CRTIMP HRESULT __cdecl DisableTracing();
```  
  
### Return Value  
 If tracing was correctly disabled, `S_OK` is returned. If tracing was not previously initiated, `E_NOT_STARTED` is returned  
  
##  <a name="enabletracing"></a>  EnableTracing  
 Enables tracing in the Concurrency Runtime. This function is deprecated because ETW tracing is now on by default.  
  
```
__declspec(deprecated("Concurrency::EnableTracing is a deprecated function.")) _CRTIMP HRESULT __cdecl EnableTracing();
```  
  
### Return Value  
 If tracing was correctly initiated, `S_OK` is returned; otherwise, `E_NOT_STARTED` is returned.  
  
##  <a name="free"></a>  Free  
 Releases a block of memory previously allocated by the `Alloc` method to the Concurrency Runtime Caching Suballocator.  
  
```
void __cdecl Free(_Pre_maybenull_ _Post_invalid_ void* _PAllocation);
```  
  
### Parameters  
 `_PAllocation`  
 A pointer to memory previously allocated by the `Alloc` method which is to be freed. If the parameter `_PAllocation` is set to the value `NULL`, this method will ignore it and return immediately.  
  
### Remarks  
 For more information about which scenarios in your application could benefit from using the Caching Suballocator, see [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
##  <a name="get_ambient_scheduler"></a>  get_ambient_scheduler  
  
```
inline std::shared_ptr<::Concurrency::scheduler_interface> get_ambient_scheduler();
```  
  
### Return Value  
  
##  <a name="getexecutioncontextid"></a>  GetExecutionContextId  
 Returns a unique identifier that can be assigned to an execution context that implements the `IExecutionContext` interface.  
  
```
unsigned int __cdecl GetExecutionContextId();
```  
  
### Return Value  
 A unique identifier for an execution context.  
  
### Remarks  
 Use this method to obtain an identifier for your execution context before you pass an `IExecutionContext` interface as a parameter to any of the methods offered by the Resource Manager.  
  
##  <a name="getosversion"></a>  GetOSVersion  
 Returns the operating system version.  
  
```
IResourceManager::OSVersion __cdecl GetOSVersion();
```  
  
### Return Value  
 An enumerated value representing the operating system.  
  
### Remarks  
 [unsupported_os](unsupported-os-class.md) is thrown if the operating system is not supported by the Concurrency Runtime.  
  
##  <a name="getprocessorcount"></a>  GetProcessorCount  
 Returns the number of hardware threads on the underlying system.  
  
```
unsigned int __cdecl GetProcessorCount();
```  
  
### Return Value  
 The number of hardware threads.  
  
### Remarks  
 [unsupported_os](unsupported-os-class.md) is thrown if the operating system is not supported by the Concurrency Runtime.  
  
##  <a name="getprocessornodecount"></a>  GetProcessorNodeCount  
 Returns the number of NUMA nodes or processor packages on the underlying system.  
  
```
unsigned int __cdecl GetProcessorNodeCount();
```  
  
### Return Value  
 The number of NUMA nodes or processor packages.  
  
### Remarks  
 If the system contains more NUMA nodes than processor packages, the number of NUMA nodes is returned, otherwise, the number of processor packages is returned.  
  
 [unsupported_os](unsupported-os-class.md) is thrown if the operating system is not supported by the Concurrency Runtime.  
  
##  <a name="getschedulerid"></a>  GetSchedulerId  
 Returns a unique identifier that can be assigned to a scheduler that implements the `IScheduler` interface.  
  
```
unsigned int __cdecl GetSchedulerId();
```  
  
### Return Value  
 A unique identifier for a scheduler.  
  
### Remarks  
 Use this method to obtain an identifier for your scheduler before you pass an `IScheduler` interface as a parameter to any of the methods offered by the Resource Manager.  
  
##  <a name="internal_assign_iterators"></a>  internal_assign_iterators  
  
```
template<typename T, class _Ax>
template<class _I> void concurrent_vector<T,
    _Ax>::internal_assign_iterators(
 _I
    first,
 _I
    last);
```   
  
### Parameters  
 `T`  
 `_Ax`  
 `_I`  
 `first`  
 `last`  
  
##  <a name="interruption_point"></a>  interruption_point  
 Creates an interruption point for cancellation. If a cancellation is in progress in the context where this function is called, this will throw an internal exception that aborts the execution of the currently executing parallel work. If cancellation is not in progress, the function does nothing.  
  
```
inline void interruption_point();
```  
  
### Remarks  
 You should not catch the internal cancellation exception thrown by the `interruption_point()` function. The exception will be caught and handled by the runtime, and catching it may cause your program to behave abnormally.  
  
##  <a name="is_current_task_group_canceling"></a>  is_current_task_group_canceling  
 Returns an indication of whether the task group which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly). Note that if there is no task group currently executing inline on the current context, `false` will be returned.  
  
```
bool __cdecl is_current_task_group_canceling();
```  
  
### Return Value  
 `true` if the task group which is currently executing is canceling, `false` otherwise.  
  
### Remarks  
 For more information, see [Cancellation](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).  
  
##  <a name="make_choice"></a>  make_choice  
 Constructs a `choice` messaging block from an optional `Scheduler` or `ScheduleGroup` and two or more input sources.  
  
```
template<typename T1,
    typename T2,
    typename... Ts>
choice<std::tuple<T1,
    T2,
 Ts...>> make_choice(
    Scheduler& _PScheduler,
    T1
 _Item1,
    T2
 _Item2,
    Ts... _Items);

template<typename T1,
    typename T2,
    typename... Ts>
choice<std::tuple<T1,
    T2,
 Ts...>> make_choice(
    ScheduleGroup& _PScheduleGroup,
    T1
 _Item1,
    T2
 _Item2,
    Ts... _Items);

template<typename T1,
    typename T2,
    typename... Ts>
choice<std::tuple<T1,
    T2,
 Ts...>> make_choice(
    T1
 _Item1,
    T2
 _Item2,
    Ts... _Items);
```  
  
### Parameters  
 `T1`  
 The message block type of the first source.  
  
 `T2`  
 The message block type of the second source.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `choice` messaging block is scheduled.  
  
 `_Item1`  
 The first source.  
  
 `_Item2`  
 The second source.  
  
 `_Items`  
 Additional sources.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `choice` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Return Value  
 A `choice` message block with two or more input sources.  
  
##  <a name="make_greedy_join"></a>  make_greedy_join  
 Constructs a `greedy multitype_join` messaging block from an optional `Scheduler` or `ScheduleGroup` and two or more input sources.  
  
```
template<typename T1,
    typename T2,
    typename... Ts>
multitype_join<std::tuple<T1,
    T2,
 Ts...>,
    greedy> make_greedy_join(
    Scheduler& _PScheduler,
    T1
 _Item1,
    T2
 _Item2,
    Ts... _Items);

template<typename T1,
    typename T2,
    typename... Ts>
multitype_join<std::tuple<T1,
    T2,
 Ts...>,
    greedy> make_greedy_join(
    ScheduleGroup& _PScheduleGroup,
    T1
 _Item1,
    T2
 _Item2,
    Ts... _Items);

template<typename T1,
    typename T2,
    typename... Ts>
multitype_join<std::tuple<T1,
    T2,
 Ts...>,
    greedy> make_greedy_join(
    T1
 _Item1,
    T2
 _Item2,
    Ts... _Items);
```  
  
### Parameters  
 `T1`  
 The message block type of the first source.  
  
 `T2`  
 The message block type of the second source.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `multitype_join` messaging block is scheduled.  
  
 `_Item1`  
 The first source.  
  
 `_Item2`  
 The second source.  
  
 `_Items`  
 Additional sources.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `multitype_join` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Return Value  
 A `greedy multitype_join` message block with two or more input sources.  
  
##  <a name="make_join"></a>  make_join  
 Constructs a `non_greedy multitype_join` messaging block from an optional `Scheduler` or `ScheduleGroup` and two or more input sources.  
  
```
template<typename T1, typename T2, typename... Ts>
multitype_join<std::tuple<T1, T2, Ts...>> 
    make_join(
 Scheduler& _PScheduler,
    T1 _Item1,
    T2 _Item2,
    Ts... _Items);

template<typename T1, typename T2, typename... Ts>
multitype_join<std::tuple<T1, T2, Ts...>>
make_join(
 ScheduleGroup& _PScheduleGroup,
    T1 _Item1,
    T2 _Item2,
    Ts... _Items);

template<typename T1, typename T2, typename... Ts>
multitype_join<std::tuple<T1, T2, Ts...>>
make_join(
 T1 _Item1,
    T2 _Item2,
    Ts... _Items);
```  
  
### Parameters  
 `T1`  
 The message block type of the first source.  
  
 `T2`  
 The message block type of the second source.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `multitype_join` messaging block is scheduled.  
  
 `_Item1`  
 The first source.  
  
 `_Item2`  
 The second source.  
  
 `_Items`  
 Additional sources.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `multitype_join` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Return Value  
 A `non_greedy multitype_join` message block with two or more input sources.  
  
##  <a name="make_task"></a>  make_task  
 A factory method for creating a `task_handle` object.  
  
```
template <class _Function>
task_handle<_Function> make_task(const _Function& _Func);
```  
  
### Parameters  
 `_Function`  
 The type of the function object that will be invoked to execute the work represented by the `task_handle` object.  
  
 `_Func`  
 The function that will be invoked to execute the work represented by the `task_handle` object. This may be a lambda functor, a pointer to a function, or any object that supports a version of the function call operator with the signature `void operator()()`.  
  
### Return Value  
 A `task_handle` object.  
  
### Remarks  
 This function is useful when you need to create a `task_handle` object with a lambda expression, because it allows you to create the object without knowing the true type of the lambda functor.  
  
##  <a name="parallel_buffered_sort"></a>  parallel_buffered_sort  
 Arranges the elements in a specified range into a nondescending order, or according to an ordering criterion specified by a binary predicate, in parallel. This function is semantically similar to `std::sort` in that it is a compare-based, unstable, in-place sort except that it needs `O(n)` additional space, and requires default initialization for the elements being sorted.  
  
```
template<typename _Random_iterator>
inline void parallel_buffered_sort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Allocator,
    typename _Random_iterator>
inline void parallel_buffered_sort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Allocator,
    typename _Random_iterator>
inline void parallel_buffered_sort(
    const _Allocator& _Alloc,
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Random_iterator,
    typename _Function>
inline void parallel_buffered_sort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Func,
    const size_t _Chunk_size = 2048);

template<typename _Allocator,
    typename _Random_iterator,
    typename _Function>
inline void parallel_buffered_sort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Func,
    const size_t _Chunk_size = 2048);

template<typename _Allocator,
    typename _Random_iterator,
    typename _Function>
inline void parallel_buffered_sort(
    const _Allocator& _Alloc,
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Func,
    const size_t _Chunk_size = 2048);
```  
  
### Parameters  
 `_Random_iterator`  
 The iterator type of the input range.  
  
 `_Allocator`  
 The type of an STL compatible memory allocator.  
  
 `_Function`  
 The type of the binary comparator.  
  
 `_Begin`  
 A random-access iterator addressing the position of the first element in the range to be sorted.  
  
 `_End`  
 A random-access iterator addressing the position one past the final element in the range to be sorted.  
  
 `_Alloc`  
 An instance of an STL compatible memory allocator.  
  
 `_Func`  
 A user-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns `true` when satisfied and `false` when not satisfied. This comparator function must impose a strict weak ordering on pairs of elements from the sequence.  
  
 `_Chunk_size`  
 The mimimum size of a chunk that will be split into two for parallel execution.  
  
### Remarks  
 All overloads require `n * sizeof(T)` additional space, where `n` is the number of elements to be sorted, and `T` is the element type. In most cases parallel_buffered_sort will show an improvement in performance over [parallel_sort](concurrency-namespace-functions.md), and you should use it over parallel_sort if you have the memory available.  
  
 If you do not supply a binary comparator `std::less` is used as the default, which requires the element type to provide the operator `operator<()`.  
  
 If you do not supply an allocator type or instance, the STL memory allocator `std::allocator<T>` is used to allocate the buffer.  
  
 The algorithm divides the input range into two chunks and successively divides each chunk into two sub-chunks for execution in parallel. The optional argument `_Chunk_size` can be used to indicate to the algorithm that it should handles chunks of size < `_Chunk_size` serially.  
  
##  <a name="parallel_for"></a>  parallel_for  
 `parallel_for` iterates over a range of indices and executes a user-supplied function at each iteration, in parallel.  
  
```
template <typename _Index_type, typename _Function, typename _Partitioner>
void parallel_for(
    _Index_type first,
    _Index_type last,
    _Index_type _Step,
    const _Function& _Func,
    _Partitioner&& _Part);

template <typename _Index_type, typename _Function>
void parallel_for(
    _Index_type first,
    _Index_type last,
    _Index_type _Step,
    const _Function& _Func);

template <typename _Index_type, typename _Function>
void parallel_for(
    _Index_type first,
    _Index_type last,
    const _Function& _Func,
    const auto_partitioner& _Part = auto_partitioner());

template <typename _Index_type, typename _Function>
void parallel_for(
    _Index_type first,
    _Index_type last,
    const _Function& _Func,
    const static_partitioner& _Part);

template <typename _Index_type, typename _Function>
void parallel_for(
    _Index_type first,
    _Index_type last,
    const _Function& _Func,
    const simple_partitioner& _Part);

template <typename _Index_type, typename _Function>
void parallel_for(
    _Index_type first,
    _Index_type last,
    const _Function& _Func,
    affinity_partitioner& _Part);
```  
  
### Parameters  
 `_Index_type`  
 The type of the index being used for the iteration.  
  
 `_Function`  
 The type of the function that will be executed at each iteration.  
  
 `_Partitioner`  
 The type of the partitioner that is used to partition the supplied range.  
  
 `first`  
 The first index to be included in the iteration.  
  
 `last`  
 The index one past the last index to be included in the iteration.  
  
 `_Step`  
 The value by which to step when iterating from `first` to `last`. The step must be positive. [invalid_argument](../../../standard-library/invalid-argument-class.md) is thrown if the step is less than 1.  
  
 `_Func`  
 The function to be executed at each iteration. This may be a lambda expression, a function pointer, or any object that supports a version of the function call operator with the signature `void operator()(``_Index_type``)`.  
  
 `_Part`  
 A reference to the partitioner object. The argument can be one of `const`[auto_partitioner](auto-partitioner-class.md)`&`, `const`[static_partitioner](static-partitioner-class.md)`&`, `const`[simple_partitioner](simple-partitioner-class.md)`&` or [affinity_partitioner](affinity-partitioner-class.md)`&` If an [affinity_partitioner](affinity-partitioner-class.md) object is used, the reference must be a non-const l-value reference, so that the algorithm can store state for future loops to re-use.  
  
### Remarks  
 For more information, see [Parallel Algorithms](../../../parallel/concrt/parallel-algorithms.md).  
  
##  <a name="parallel_for_each"></a>  parallel_for_each  
 `parallel_for_each` applies a specified function to each element within a range, in parallel. It is semantically equivalent to the `for_each` function in the `std` namespace, except that iteration over the elements is performed in parallel, and the order of iteration is unspecified. The argument `_Func` must support a function call operator of the form `operator()(T)` where the parameter `T` is the item type of the container being iterated over.  
  
```
template <typename _Iterator, typename _Function>
void parallel_for_each(
    _Iterator first,
    _Iterator last,
    const _Function& _Func);

template <typename _Iterator, typename _Function, typename _Partitioner>
void parallel_for_each(
    _Iterator first,
    _Iterator last,
    const _Function& _Func,
    _Partitioner&& _Part);
```  
  
### Parameters  
 `_Iterator`  
 The type of the iterator being used to iterate over the container.  
  
 `_Function`  
 The type of the function that will be applied to each element within the range.  
  
 `_Partitioner`  
 `first`  
 An iterator addressing the position of the first element to be included in parallel iteration.  
  
 `last`  
 An iterator addressing the position one past the final element to be included in parallel iteration.  
  
 `_Func`  
 A user-defined function object that is applied to each element in the range.  
  
 `_Part`  
 A reference to the partitioner object. The argument can be one of `const`[auto_partitioner](auto-partitioner-class.md)`&`, `const`[static_partitioner](static-partitioner-class.md)`&`, `const`[simple_partitioner](simple-partitioner-class.md)`&` or [affinity_partitioner](affinity-partitioner-class.md)`&` If an [affinity_partitioner](affinity-partitioner-class.md) object is used, the reference must be a non-const l-value reference, so that the algorithm can store state for future loops to re-use.  
  
### Remarks  
 [auto_partitioner](auto-partitioner-class.md) will be used for the overload without an explicit partitioner.  
  
 For iterators that do not support random access, only [auto_partitioner](auto-partitioner-class.md) is supported.  
  
 For more information, see [Parallel Algorithms](../../../parallel/concrt/parallel-algorithms.md).  
  
##  <a name="parallel_invoke"></a>  parallel_invoke  
 Executes the function objects supplied as parameters in parallel, and blocks until they have finished executing. Each function object could be a lambda expression, a pointer to function, or any object that supports the function call operator with the signature `void operator()()`.  
  
```
template <typename _Function1, typename _Function2>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2);

template <typename _Function1, typename _Function2, typename _Function3>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4,
    typename _Function5>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4,
    const _Function5& _Func5);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4,
    typename _Function5,
    typename _Function6>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4,
    const _Function5& _Func5,
    const _Function6& _Func6);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4,
    typename _Function5,
    typename _Function6,
    typename _Function7>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4,
    const _Function5& _Func5,
    const _Function6& _Func6,
    const _Function7& _Func7);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4,
    typename _Function5,
    typename _Function6,
    typename _Function7,
    typename _Function8>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4,
    const _Function5& _Func5,
    const _Function6& _Func6,
    const _Function7& _Func7,
    const _Function8& _Func8);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4,
    typename _Function5,
    typename _Function6,
    typename _Function7,
    typename _Function8,
    typename _Function9>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4,
    const _Function5& _Func5,
    const _Function6& _Func6,
    const _Function7& _Func7,
    const _Function8& _Func8,
    const _Function9& _Func9);

template <typename _Function1,
    typename _Function2,
    typename _Function3,
    typename _Function4,
    typename _Function5,
    typename _Function6,
    typename _Function7,
    typename _Function8,
    typename _Function9,
    typename _Function10>
void parallel_invoke(
    const _Function1& _Func1,
    const _Function2& _Func2,
    const _Function3& _Func3,
    const _Function4& _Func4,
    const _Function5& _Func5,
    const _Function6& _Func6,
    const _Function7& _Func7,
    const _Function8& _Func8,
    const _Function9& _Func9,
    const _Function10& _Func10);
```  
  
### Parameters  
 `_Function1`  
 The type of the first function object to be executed in parallel.  
  
 `_Function2`  
 The type of the second function object to be executed in parallel.  
  
 `_Function3`  
 The type of the third function object to be executed in parallel.  
  
 `_Function4`  
 The type of the fourth function object to be executed in parallel.  
  
 `_Function5`  
 The type of the fifth function object to be executed in parallel.  
  
 `_Function6`  
 The type of the sixth function object to be executed in parallel.  
  
 `_Function7`  
 The type of the seventh function object to be executed in parallel.  
  
 `_Function8`  
 The type of the eighth function object to be executed in parallel.  
  
 `_Function9`  
 The type of the ninth function object to be executed in parallel.  
  
 `_Function10`  
 The type of the tenth function object to be executed in parallel.  
  
 `_Func1`  
 The first function object to be executed in parallel.  
  
 `_Func2`  
 The second function object to be executed in parallel.  
  
 `_Func3`  
 The third function object to be executed in parallel.  
  
 `_Func4`  
 The fourth function object to be executed in parallel.  
  
 `_Func5`  
 The fifth function object to be executed in parallel.  
  
 `_Func6`  
 The sixth function object to be executed in parallel.  
  
 `_Func7`  
 The seventh function object to be executed in parallel.  
  
 `_Func8`  
 The eighth function object to be executed in parallel.  
  
 `_Func9`  
 The ninth function object to be executed in parallel.  
  
 `_Func10`  
 The tenth function object to be executed in parallel.  
  
### Remarks  
 Note that one or more of the function objects supplied as parameters may execute inline on the calling context.  
  
 If one or more of the function objects passed as parameters to this function throws an exception, the runtime will select one such exception of its choosing and propagate it out of the call to `parallel_invoke`.  
  
 For more information, see [Parallel Algorithms](../../../parallel/concrt/parallel-algorithms.md).  
  
##  <a name="parallel_radixsort"></a>  parallel_radixsort  
 Arranges elements in a specified range into an non descending order using a radix sorting algorithm. This is a stable sort function which requires a projection function that can project elements to be sorted into unsigned integer-like keys. Default initialization is required for the elements being sorted.  
  
```
template<typename _Random_iterator>
inline void parallel_radixsort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Allocator, typename _Random_iterator>
inline void parallel_radixsort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Allocator, typename _Random_iterator>
inline void parallel_radixsort(
    const _Allocator& _Alloc,
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Random_iterator, typename _Function>
inline void parallel_radixsort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Proj_func,
    const size_t _Chunk_size = 256* 256);

template<typename _Allocator, typename _Random_iterator,
    typename _Function>
inline void parallel_radixsort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Proj_func,
    const size_t _Chunk_size = 256* 256);

template<typename _Allocator,
    typename _Random_iterator,
    typename _Function>
inline void parallel_radixsort(
    const _Allocator& _Alloc,
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Proj_func,
    const size_t _Chunk_size = 256* 256);
```  
  
### Parameters  
 `_Random_iterator`  
 The iterator type of the input range.  
  
 `_Allocator`  
 The type of an STL compatible memory allocator.  
  
 `_Function`  
 The type of the projection function.  
  
 `_Begin`  
 A random-access iterator addressing the position of the first element in the range to be sorted.  
  
 `_End`  
 A random-access iterator addressing the position one past the final element in the range to be sorted.  
  
 `_Alloc`  
 An instance of an STL compatible memory allocator.  
  
 `_Proj_func`  
 A user-defined projection function object that converts an element into an integral value.  
  
 `_Chunk_size`  
 The mimimum size of a chunk that will be split into two for parallel execution.  
  
### Remarks  
 All overloads require `n * sizeof(T)` additional space, where `n` is the number of elements to be sorted, and `T` is the element type. An unary projection functor with the signature `I _Proj_func(T)` is required to return a key when given an element, where `T` is the element type and `I` is an unsigned integer-like type.  
  
 If you do not supply a projection function, a default projection function which simply returns the element is used for integral types. The function will fail to compile if the element is not an integral type in the absence of a projection function.  
  
 If you do not supply an allocator type or instance, the STL memory allocator `std::allocator<T>` is used to allocate the buffer.  
  
 The algorithm divides the input range into two chunks and successively divides each chunk into two sub-chunks for execution in parallel. The optional argument `_Chunk_size` can be used to indicate to the algorithm that it should handles chunks of size < `_Chunk_size` serially.  
  
##  <a name="parallel_reduce"></a>  parallel_reduce  
 Computes the sum of all elements in a specified range by computing successive partial sums, or computes the result of successive partial results similarly obtained from using a specified binary operation other than sum, in parallel. `parallel_reduce` is semantically similar to `std::accumulate`, except that it requires the binary operation to be associative, and requires an identity value instead of an initial value.  
  
```
template<typename _Forward_iterator>
inline typename std::iterator_traits<_Forward_iterator>::value_type parallel_reduce(
    _Forward_iterator _Begin,
    _Forward_iterator _End,
    const typename std::iterator_traits<_Forward_iterator>::value_type& _Identity);

template<typename _Forward_iterator, typename _Sym_reduce_fun>
inline typename std::iterator_traits<_Forward_iterator>::value_type parallel_reduce(
    _Forward_iterator _Begin,
    _Forward_iterator _End,
    const typename std::iterator_traits<_Forward_iterator>::value_type& _Identity,
    _Sym_reduce_fun
 _Sym_fun);

template<typename _Reduce_type,
    typename _Forward_iterator,
    typename _Range_reduce_fun,
    typename _Sym_reduce_fun>
inline _Reduce_type parallel_reduce(
    _Forward_iterator _Begin,
    _Forward_iterator _End,
    const _Reduce_type& _Identity,
    const _Range_reduce_fun& _Range_fun,
    const _Sym_reduce_fun& _Sym_fun);
```  
  
### Parameters  
 `_Forward_iterator`  
 The iterator type of input range.  
  
 `_Sym_reduce_fun`  
 The type of the symmetric reduction function. This must be a function type with signature `_Reduce_type _Sym_fun(_Reduce_type, _Reduce_type)`, where _Reduce_type is the same as the identity type and the result type of the reduction. For the third overload, this should be consistent with the output type of `_Range_reduce_fun`.  
  
 `_Reduce_type`  
 The type that the input will reduce to, which can be different from the input element type. The return value and identity value will has this type.  
  
 `_Range_reduce_fun`  
 The type of the range reduction function. This must be a function type with signature `_Reduce_type _Range_fun(_Forward_iterator, _Forward_iterator, _Reduce_type)`, _Reduce_type is the same as the identity type and the result type of the reduction.  
  
 `_Begin`  
 An input iterator addressing the first element in the range to be reduced.  
  
 `_End`  
 An input iterator addressing the element that is one position beyond the final element in the range to be reduced.  
  
 `_Identity`  
 The identity value `_Identity` is of the same type as the result type of the reduction and also the `value_type` of the iterator for the first and second overloads. For the third overload, the identity value must have the same type as the result type of the reduction, but can be different from the `value_type` of the iterator. It must have an appropriate value such that the range reduction operator `_Range_fun`, when applied to a range of a single element of type `value_type` and the identity value, behaves like a type cast of the value from type `value_type` to the identity type.  
  
 `_Sym_fun`  
 The symmetric function that will be used in the second of the reduction. Refer to Remarks for more information.  
  
 `_Range_fun`  
 The function that will be used in the first phase of the reduction. Refer to Remarks for more information.  
  
### Return Value  
 The result of the reduction.  
  
### Remarks  
 To perform a parallel reduction, the function divides the range into chunks based on the number of workers available to the underlying scheduler. The reduction takes place in two phases, the first phase performs a reduction within each chunk, and the second phase performs a reduction between the partial results from each chunk.  
  
 The first overload requires that the iterator's `value_type`, `T`, be the same as the identity value type as well as the reduction result type. The element type T must provide the operator `T T::operator + (T)` to reduce elements in each chunk. The same operator is used in the second phase as well.  
  
 The second overload also requires that the iterator's `value_type` be the same as the identity value type as well as the reduction result type. The supplied binary operator `_Sym_fun` is used in both reduction phases, with the identity value as the initial value for the first phase.  
  
 For the third overload, the identity value type must be the same as the reduction result type, but the iterator's `value_type` may be different from both. The range reduction function `_Range_fun` is used in the first phase with the identity value as the initial value, and the binary function `_Sym_reduce_fun` is applied to sub results in the second phase.  
  
##  <a name="parallel_sort"></a>  parallel_sort  
 Arranges the elements in a specified range into a nondescending order, or according to an ordering criterion specified by a binary predicate, in parallel. This function is semantically similar to `std::sort` in that it is a compare-based, unstable, in-place sort.  
  
```
template<typename _Random_iterator>
inline void parallel_sort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End);

template<typename _Random_iterator,typename _Function>
inline void parallel_sort(
    const _Random_iterator& _Begin,
    const _Random_iterator& _End,
    const _Function& _Func,
    const size_t _Chunk_size = 2048);
```  
  
### Parameters  
 `_Random_iterator`  
 The iterator type of the input range.  
  
 `_Function`  
 The type of the binary comparison functor.  
  
 `_Begin`  
 A random-access iterator addressing the position of the first element in the range to be sorted.  
  
 `_End`  
 A random-access iterator addressing the position one past the final element in the range to be sorted.  
  
 `_Func`  
 A user-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns `true` when satisfied and `false` when not satisfied. This comparator function must impose a strict weak ordering on pairs of elements from the sequence.  
  
 `_Chunk_size`  
 The mimimum size of a chunk that will be split into two for parallel execution.  
  
### Remarks  
 The first overload uses the the binary comparator `std::less`.  
  
 The second overloaded uses the supplied binary comparator that should have the signature `bool _Func(T, T)` where `T` is the type of the elements in the input range.  
  
 The algorithm divides the input range into two chunks and successively divides each chunk into two sub-chunks for execution in parallel. The optional argument `_Chunk_size` can be used to indicate to the algorithm that it should handles chunks of size < `_Chunk_size` serially.  
  
##  <a name="parallel_transform"></a>  parallel_transform  
 Applies a specified function object to each element in a source range, or to a pair of elements from two source ranges, and copies the return values of the function object into a destination range, in parallel. This functional is semantically equivalent to `std::transform`.  
  
```
template <typename _Input_iterator1,
    typename _Output_iterator,
    typename _Unary_operator>
_Output_iterator parallel_transform(
    _Input_iterator1 first1,
    _Input_iterator1 last1,
    _Output_iterator _Result,
    const _Unary_operator& _Unary_op,
    const auto_partitioner& _Part = auto_partitioner());

template <typename _Input_iterator1,
    typename _Output_iterator,
    typename _Unary_operator>
_Output_iterator parallel_transform(
    _Input_iterator1 first1,
    _Input_iterator1 last1,
    _Output_iterator _Result,
    const _Unary_operator& _Unary_op,
    const static_partitioner& _Part);

template <typename _Input_iterator1,
    typename _Output_iterator,
    typename _Unary_operator>
_Output_iterator parallel_transform(
    _Input_iterator1 first1,
    _Input_iterator1 last1,
    _Output_iterator _Result,
    const _Unary_operator& _Unary_op,
    const simple_partitioner& _Part);

template <typename _Input_iterator1,
    typename _Output_iterator,
    typename _Unary_operator>
_Output_iterator parallel_transform(
    _Input_iterator1 first1,
    _Input_iterator1 last1,
    _Output_iterator _Result,
    const _Unary_operator& _Unary_op,
    affinity_partitioner& _Part);

template <typename _Input_iterator1,
    typename _Input_iterator2,
    typename _Output_iterator,
    typename _Binary_operator,
    typename _Partitioner>
_Output_iterator parallel_transform(
    _Input_iterator1 first1,
    _Input_iterator1 last1,
    _Input_iterator2
 first2,
    _Output_iterator _Result,
    const _Binary_operator& _Binary_op,
    _Partitioner&& _Part);

template <typename _Input_iterator1,
    typename _Input_iterator2,
    typename _Output_iterator,
    typename _Binary_operator>
_Output_iterator parallel_transform(
    _Input_iterator1 first1,
    _Input_iterator1 last1,
    _Input_iterator2
 first2,
    _Output_iterator _Result,
    const _Binary_operator& _Binary_op);
```  
  
### Parameters  
 `_Input_iterator1`  
 The type of the first or only input iterator.  
  
 `_Output_iterator`  
 The type of the output iterator.  
  
 `_Unary_operator`  
 The type of the unary functor to be executed on each element in the input range.  
  
 `_Input_iterator2`  
 The type of second input iterator.  
  
 `_Binary_operator`  
 The type of the binary functor executed pairwise on elements from the two source ranges.  
  
 `_Partitioner`  
 `first1`  
 An input iterator addressing the position of the first element in the first or only source range to be operated on.  
  
 `last1`  
 An input iterator addressing the position one past the final element in the first or only source range to be operated on.  
  
 `_Result`  
 An output iterator addressing the position of the first element in the destination range.  
  
 `_Unary_op`  
 A user-defined unary function object that is applied to each element in the source range.  
  
 `_Part`  
 A reference to the partitioner object. The argument can be one of `const`[auto_partitioner](auto-partitioner-class.md)`&`, `const`[static_partitioner](static-partitioner-class.md)`&`, `const`[simple_partitioner](simple-partitioner-class.md)`&` or [affinity_partitioner](affinity-partitioner-class.md)`&` If an [affinity_partitioner](affinity-partitioner-class.md) object is used, the reference must be a non-const l-value reference, so that the algorithm can store state for future loops to re-use.  
  
 `first2`  
 An input iterator addressing the position of the first element in the second source range to be operated on.  
  
 `_Binary_op`  
 A user-defined binary function object that is applied pairwise, in a forward order, to the two source ranges.  
  
### Return Value  
 An output iterator addressing the position one past the final element in the destination range that is receiving the output elements transformed by the function object.  
  
### Remarks  
 [auto_partitioner](auto-partitioner-class.md) will be used for the overloads without an explicit partitioner argument.  
  
 For iterators that do not support random access, only [auto_partitioner](auto-partitioner-class.md) is supported.  
  
 The overloads that take the argument `_Unary_op` transform the input range into the output range by applying the unary functor to each element in the input range. `_Unary_op` must support the function call operator with signature `operator()(T)` where `T` is the value type of the range being iterated over.  
  
 The overloads that take the argument `_Binary_op` transform two input ranges into the output range by applying the binary functor to one element from the first input range and one element from the second input range. `_Binary_op` must support the function call operator with signature `operator()(T, U)` where `T`, `U` are value types of the two input iterators.  
  
 For more information, see [Parallel Algorithms](../../../parallel/concrt/parallel-algorithms.md).  
  
##  <a name="receive"></a>  receive  
 A general receive implementation, allowing a context to wait for data from exactly one source and filter the values that are accepted.  
  
```
template <class T>
T receive(
    _Inout_ ISource<T>* _Src,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);

template <class T>
T receive(
    _Inout_ ISource<T>* _Src,
    typename ITarget<T>::filter_method const& _Filter_proc,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);

template <class T>
T receive(
    ISource<T>& _Src,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);

template <class T>
T receive(
    ISource<T>& _Src,
    typename ITarget<T>::filter_method const& _Filter_proc,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### Parameters  
 `T`  
 The payload type.  
  
 `_Src`  
 A pointer or reference to the source from which data is expected.  
  
 `_Timeout`  
 The maximum time for which the method should for the data, in milliseconds.  
  
 `_Filter_proc`  
 A filter function which determines whether messages should be accepted.  
  
### Return Value  
 A value from the source, of the payload type.  
  
### Remarks  
 If the parameter `_Timeout` has a value other than the constant `COOPERATIVE_TIMEOUT_INFINITE`, the exception [operation_timed_out](operation-timed-out-class.md) is thrown if the specified amount of time expires before a message is received. If you want a zero length timeout, you should use the [try_receive](concurrency-namespace-functions.md) function, as opposed to calling `receive` with a timeout of `0` (zero), as it is more efficient and does not throw exceptions on timeouts.  
  
 For more information, see [Message Passing Functions](../../../parallel/concrt/message-passing-functions.md).  
  
##  <a name="run_with_cancellation_token"></a>  run_with_cancellation_token  
 Executes a function object immediately and synchronously in the context of a given cancellation token.  
  
```
template<typename _Function>
void run_with_cancellation_token(
    const _Function& _Func,
    cancellation_token _Ct);
```  
  
### Parameters  
 `_Function`  
 The type of the function object that will be invoked.  
  
 `_Func`  
 The function object which will be executed. This object must support the function call operator with a signature of void(void).  
  
 `_Ct`  
 The cancellation token which will control implicit cancellation of the function object. Use `cancellation_token::none()` if you want the function execute without any possibility of implicit cancellation from a parent task group being canceled.  
  
### Remarks  
 Any interruption points in the function object will be triggered when the `cancellation_token` is canceled. The explicit token `_Ct` will isolate this `_Func` from parent cancellation if the parent has a different token or no token.  
  
##  <a name="send"></a>  send  
 A synchronous send operation, which waits until the target either accepts or declines the message.  
  
```
template <class T>
bool send(
    _Inout_ ITarget<T>* _Trg,
    const T& _Data);

template <class T>
bool send(
    ITarget<T>& _Trg,
    const T& _Data);
```  
  
### Parameters  
 `T`  
 The payload type.  
  
 `_Trg`  
 A pointer or reference to the target to which data is sent.  
  
 `_Data`  
 A reference to the data to be sent.  
  
### Return Value  
 `true` if the message was accepted, `false` otherwise.  
  
### Remarks  
 For more information, see [Message Passing Functions](../../../parallel/concrt/message-passing-functions.md).  
  
##  <a name="set_ambient_scheduler"></a>  set_ambient_scheduler  
  
```
inline void set_ambient_scheduler(std::shared_ptr<::Concurrency::scheduler_interface> _Scheduler);
```  
  
### Parameters  
 `_Scheduler`  
  
##  <a name="set_task_execution_resources"></a>  set_task_execution_resources  
 Restricts the execution resources used by the Concurrency Runtime internal worker threads to the affinity set specified.  
  
 It is valid to call this method only before the Resource Manager has been created, or between two Resource Manager lifetimes. It can be invoked multiple times as long as the Resource Manager does not exist at the time of invocation. After an affinity limit has been set, it remains in effect until the next valid call to the `set_task_execution_resources` method.  
  
 The affinity mask provided need not be a subset of the process affinity mask. The process affinity will be updated if necessary.  
  
```
void __cdecl set_task_execution_resources(
    DWORD_PTR _ProcessAffinityMask);

void __cdecl set_task_execution_resources(
    unsigned short count,
    PGROUP_AFFINITY _PGroupAffinity);
```  
  
### Parameters  
 `_ProcessAffinityMask`  
 The affinity mask that the Concurrency Runtime worker threads are to be restricted to. Use this method on a system with greater than 64 hardware threads only if you want to limit the Concurrency Runtime to a subset of the current processor group. In general, you should use the version of the method that accepts an array of group affinities as a parameter, to restrict affinity on machines with greater than 64 hardware threads.  
  
 `count`  
 The number of `GROUP_AFFINITY` entries in the array specified by the parameter `_PGroupAffinity`.  
  
 `_PGroupAffinity`  
 An array of `GROUP_AFFINITY` entries.  
  
### Remarks  
 The method will throw an [invalid_operation](invalid-operation-class.md) exception if a Resource Manager is present at the time it is invoked, and an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the affinity specified results in an empty set of resources.  
  
 The version of the method that takes an array of group affinities as a parameter should only be used on operating systems with version Windows 7 or higher. Otherwise, an [invalid_operation](invalid-operation-class.md) exception is thrown.  
  
 Programatically modifying the process affinity after this method has been invoked will not cause the Resource Manager to re-evaluate the affinity it is restricted to. Therefore, all changes to process affinity should be made before calling this method.  
  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two `concurrent_vector` objects.  
  
```
template<typename T, class _Ax>
inline void swap(
    concurrent_vector<T, _Ax>& _A,
    concurrent_vector<T, _Ax>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `_Ax`  
 The allocator type of the concurrent vectors.  
  
 `_A`  
 The concurrent vector whose elements are to be exchanged with those of the concurrent vector `_B`.  
  
 `_B`  
 The concurrent vector providing the elements to be swapped, or the vector whose elements are to be exchanged with those of the concurrent vector `_A`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class `concurrent_vector` to execute the member function `_A`. [concurrent_vector::swap](concurrent-vector-class.md#swap)( `_B`). These are instances of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, `template <class T> void swap(T&, T&)`, in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 This method is not concurrency-safe. You must ensure that no other threads are performing operations on either of the concurrent vectors when you call this method.  
  
##  <a name="task_from_exception"></a>  task_from_exception  
  
```
template<typename _TaskType, typename _ExType>
task<_TaskType> task_from_exception(
    _ExType _Exception,
    const task_options& _TaskOptions = task_options());
```  
  
### Parameters  
 `_TaskType`  
 `_ExType`  
 `_Exception`  
 `_TaskOptions`  
  
### Return Value  
  
##  <a name="task_from_result"></a>  task_from_result  
  
```
template<typename T>
task<T> task_from_result(
    T _Param,
    const task_options& _TaskOptions = task_options());

inline task<bool> task_from_result(ool _Param);

inline task<void> task_from_result(
    const task_options& _TaskOptions = task_options());
```  
  
### Parameters  
 `T`  
 `_Param`  
 `_TaskOptions`  
  
### Return Value  
  
##  <a name="trace_agents_register_name"></a>  Trace_agents_register_name  
 Associates the given name to the message block or agent in the ETW trace.  
  
```
template <class T>
void Trace_agents_register_name(
    _Inout_ T* _PObject,
    _In_z_ const wchar_t* _Name);
```  
  
### Parameters  
 `T`  
 The type of the object. This is typically a message block or an agent.  
  
 `_PObject`  
 A pointer to the message block or agent that is being named in the trace.  
  
 `_Name`  
 The name for the given object.  
  
##  <a name="try_receive"></a>  try_receive  
 A general try-receive implementation, allowing a context to look for data from exactly one source and filter the values that are accepted. If the data is not ready, the method will return false.  
  
``` 
template <class T>
bool try_receive(
    _Inout_ ISource<T>* _Src,
    T& _value);

template <class T>
bool try_receive(
    _Inout_ ISource<T>* _Src,
    T& _value,
    typename ITarget<T>::filter_method const& _Filter_proc);

template <class T>
bool try_receive(
    ISource<T>& _Src,
    T& _value);

template <class T>
bool try_receive(
    ISource<T>& _Src,
    T& _value,
    typename ITarget<T>::filter_method const& _Filter_proc);
```  
  
### Parameters  
 `T`  
 The payload type  
  
 `_Src`  
 A pointer or reference to the source from which data is expected.  
  
 `_value`  
 A reference to a location where the result will be placed.  
  
 `_Filter_proc`  
 A filter function which determines whether messages should be accepted.  
  
### Return Value  
 A `bool` value indicating whether or not a payload was placed in `_value`.  
  
### Remarks  
 For more information, see [Message Passing Functions](../../../parallel/concrt/message-passing-functions.md).  
  
##  <a name="wait"></a>  wait  
 Pauses the current context for a specified amount of time.  
  
```
void __cdecl wait(unsigned int _Milliseconds);
```  
  
### Parameters  
 `_Milliseconds`  
 The number of milliseconds the current context should be paused for. If the `_Milliseconds` parameter is set to the value `0`, the current context should yield execution to other runnable contexts before continuing.  
  
### Remarks  
 If this method is called on a Concurrency Runtime scheduler context, the scheduler will find a different context to run on the underlying resource. Because the scheduler is cooperative in nature, this context cannot resume exactly after the number of milliseconds specified. If the scheduler is busy executing other tasks that do not cooperatively yield to the scheduler, the wait period could be indefinite.  
  
##  <a name="when_all"></a>  when_all  
 Creates a task that will complete successfully when all of the tasks supplied as arguments complete successfully.  
  
```
template <typename _Iterator>
auto when_all(
    _Iterator _Begin,
    _Iterator _End,
    const task_options& _TaskOptions = task_options()) -> 
    decltype (details::_WhenAllImpl<typename std::iterator_traits<_Iterator>::value_type::result_type,
    _Iterator>::_Perform(_TaskOptions,
 _Begin,
    _End));
```   
  
### Parameters  
 `_Iterator`  
 The type of the input iterator.  
  
 `_Begin`  
 The position of the first element in the range of elements to be combined into the resulting task.  
  
 `_End`  
 The position of the first element beyond the range of elements to be combined into the resulting task.  
  
 `_TaskOptions`  
  
### Return Value  
 A task that completes sucessfully when all of the input tasks have completed successfully. If the input tasks are of type `T`, the output of this function will be a `task<std::vector<T>>`. If the input tasks are of type `void` the output task will also be a `task<void>`.  
  
### Remarks  
 `when_all` is a non-blocking function that produces a `task` as its result. Unlike [task::wait](task-class.md#wait), it is safe to call this function in a [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)] app on the ASTA (Application STA) thread.  
  
 If one of the tasks is canceled or throws an exception, the returned task will complete early, in the canceled state, and the exception, if one is encoutered, will be thrown if you call [task::get](task-class.md#get) or `task::wait` on that task.  
  
 For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
##  <a name="when_any"></a>  when_any  
 Creates a task that will complete successfully when any of the tasks supplied as arguments completes successfully.  
  
```
template<typename _Iterator>
auto when_any(
    _Iterator _Begin,
    _Iterator _End,
    const task_options& _TaskOptions = task_options()) -> decltype (details::_WhenAnyImpl<typename std::iterator_traits<_Iterator>::value_type::result_type,
    _Iterator>::_Perform(_TaskOptions,
 _Begin,
    _End));

template<typename _Iterator>
auto when_any(
    _Iterator _Begin,
    _Iterator _End,
    cancellation_token _CancellationToken) -> decltype (details::_WhenAnyImpl<typename std::iterator_traits<_Iterator>::value_type::result_type,
    _Iterator>::_Perform(_CancellationToken._GetImplValue(),
 _Begin,
    _End));
```   
  
### Parameters  
 `_Iterator`  
 The type of the input iterator.  
  
 `_Begin`  
 The position of the first element in the range of elements to be combined into the resulting task.  
  
 `_End`  
 The position of the first element beyond the range of elements to be combined into the resulting task.  
  
 `_TaskOptions`  
 `_CancellationToken`  
 The cancellation token which controls cancellation of the returned task. If you do not provide a cancellation token, the resulting task will receive the cancellation token of the task that causes it to complete.  
  
### Return Value  
 A task that completes successfully when any one of the input tasks has completed successfully. If the input tasks are of type `T`, the output of this function will be a `task<std::pair<T, size_t>>>`, where the first element of the pair is the result of the completing task, and the second element is the index of the task that finished. If the input tasks are of type `void` the output is a `task<size_t>`, where the result is the index of the completing task.  
  
### Remarks  
 `when_any` is a non-blocking function that produces a `task` as its result. Unlike [task::wait](task-class.md#wait), it is safe to call this function in a [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)] app on the ASTA (Application STA) thread.  
  
 For more information, see [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
