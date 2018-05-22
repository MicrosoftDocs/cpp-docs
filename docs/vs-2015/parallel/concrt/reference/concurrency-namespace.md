---
title: "concurrency Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concurrent_priority_queue/concurrency"
  - "agents/concurrency"
  - "concurrent_vector/concurrency"
  - "concrt/concurrency"
  - "internal_split_ordered_list/concurrency"
  - "concurrent_queue/concurrency"
  - "pplcancellation_token/concurrency"
  - "pplinterface/concurrency"
  - "ppltasks/concurrency"
  - "ppl/concurrency"
  - "concurrent_unordered_map/concurrency"
  - "concrtrm/concurrency"
  - "concurrent_unordered_set/concurrency"
  - "pplconcrt/concurrency"
  - "internal_concurrent_hash/concurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Concurrency namespace"
ms.assetid: f1d33ca2-679b-4442-b140-22a9d9df61d1
caps.latest.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# concurrency Namespace
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The `Concurrency` namespace provides classes and functions that give you access to the Concurrency Runtime, a concurrent programming framework for C++. For more information, see [Concurrency Runtime](../../../parallel/concrt/concurrency-runtime.md).  
  
## Syntax  
  
```  
namespace concurrency;  
```  
  
## Members  
  
### Namespaces  
  
|Name|Description|  
|----------|-----------------|  
|[concurrency::extensibility Namespace](http://msdn.microsoft.com/en-us/16a86ff2-128e-4edf-89e4-38aac79c81f9)||  
  
### Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`runtime_object_identity`|Each message instance has an identity that follows it as it is cloned and passed between messaging components. This cannot be the address of the message object.|  
|`task_status`|A type that represents the terminal state of a task. Valid values are `completed` and `canceled`.|  
|`TaskProc`|An elementary abstraction for a task, defined as `void (__cdecl * TaskProc)(void *)`. A `TaskProc` is called to invoke the body of a task.|  
|`TaskProc_t`|An elementary abstraction for a task, defined as `void (__cdecl * TaskProc_t)(void *)`. A `TaskProc` is called to invoke the body of a task.|  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[affinity_partitioner Class](../../../parallel/concrt/reference/affinity-partitioner-class.md)|The `affinity_partitioner` class is similar to the `static_partitioner` class, but it improves cache affinity by its choice of mapping subranges to worker threads. It can improve performance significantly when a loop is re-executed over the same data set, and the data fits in cache. Note that the same `affinity_partitioner` object must be used with subsequent iterations of a parallel loop that is executed over a particular data set, to benefit from data locality.|  
|[agent Class](../../../parallel/concrt/reference/agent-class.md)|A class intended to be used as a base class for all independent agents. It is used to hide state from other agents and interact using message-passing.|  
|[auto_partitioner Class](../../../parallel/concrt/reference/auto-partitioner-class.md)|The `auto_partitioner` class represents the default method `parallel_for`, `parallel_for_each` and `parallel_transform` use to partition the range they iterates over. This method of partitioning employes range stealing for load balancing as well as per-iterate cancellation.|  
|[bad_target Class](../../../parallel/concrt/reference/bad-target-class.md)|This class describes an exception thrown when a messaging block is given a pointer to a target which is invalid for the operation being performed.|  
|[call Class](../../../parallel/concrt/reference/call-class.md)|A `call` messaging block is a multi-source, ordered `target_block` that invokes a specified function when receiving a message.|  
|[cancellation_token Class](../../../parallel/concrt/reference/cancellation-token-class.md)|The `cancellation_token` class represents the ability to determine whether some operation has been requested to cancel. A given token can be associated with a `task_group`, `structured_task_group`, or `task` to provide implicit cancellation. It can also be polled for cancellation or have a callback registered for if and when the associated `cancellation_token_source` is canceled.|  
|[cancellation_token_registration Class](../../../parallel/concrt/reference/cancellation-token-registration-class.md)|The `cancellation_token_registration` class represents a callback notification from a `cancellation_token`. When the `register` method on a `cancellation_token` is used to receive notification of when cancellation occurs, a `cancellation_token_registration` object is returned as a handle to the callback so that the caller can request a specific callback no longer be made through use of the `deregister` method.|  
|[cancellation_token_source Class](../../../parallel/concrt/reference/cancellation-token-source-class.md)|The `cancellation_token_source` class represents the ability to cancel some cancelable operation.|  
|[choice Class](../../../parallel/concrt/reference/choice-class.md)|A `choice` messaging block is a multi-source, single-target block that represents a control-flow interaction with a set of sources. The choice block will wait for any one of multiple sources to produce a message and will propagate the index of the source that produced the message.|  
|[combinable Class](../../../parallel/concrt/reference/combinable-class.md)|The `combinable<T>` object is intended to provide thread-private copies of data, to perform lock-free thread-local sub-computations during parallel algorithms. At the end of the parallel operation, the thread-private sub-computations can then be merged into a final result. This class can be used instead of a shared variable, and can result in a performance improvement if there would otherwise be a lot of contention on that shared variable.|  
|[concurrent_priority_queue Class](../../../parallel/concrt/reference/concurrent-priority-queue-class.md)|The `concurrent_priority_queue` class is a container that allows multiple threads to concurrently push and pop items. Items are popped in priority order where priority is determined by a functor supplied as a template argument.|  
|[concurrent_queue Class](../../../parallel/concrt/reference/concurrent-queue-class.md)|The `concurrent_queue` class is a sequence container class that allows first-in, first-out access to its elements. It enables a limited set of concurrency-safe operations, such as `push` and `try_pop`.|  
|[concurrent_unordered_map Class](../../../parallel/concrt/reference/concurrent-unordered-map-class.md)|The `concurrent_unordered_map` class is a concurrency-safe container that controls a varying-length sequence of elements of type `std::pair<const K, _Element_type>`. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access, and iterator traversal operations.|  
|[concurrent_unordered_multimap Class](../../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)|The `concurrent_unordered_multimap` class is an concurrency-safe container that controls a varying-length sequence of elements of type `std::pair<const K, _Element_type>`. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access and iterator traversal operations.|  
|[concurrent_unordered_multiset Class](../../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)|The `concurrent_unordered_multiset` class is an concurrency-safe container that controls a varying-length sequence of elements of type K. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access and iterator traversal operations.|  
|[concurrent_unordered_set Class](../../../parallel/concrt/reference/concurrent-unordered-set-class.md)|The `concurrent_unordered_set` class is an concurrency-safe container that controls a varying-length sequence of elements of type K. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access and iterator traversal operations.|  
|[concurrent_vector Class](../../../parallel/concrt/reference/concurrent-vector-class.md)|The `concurrent_vector` class is a sequence container class that allows random access to any element. It enables concurrency-safe append, element access, iterator access, and iterator traversal operations.|  
|[Context Class](../../../parallel/concrt/reference/context-class.md)|Represents an abstraction for an execution context.|  
|[context_self_unblock Class](../../../parallel/concrt/reference/context-self-unblock-class.md)|This class describes an exception thrown when the `Unblock` method of a `Context` object is called from the same context. This would indicate an attempt by a given context to unblock itself.|  
|[context_unblock_unbalanced Class](../../../parallel/concrt/reference/context-unblock-unbalanced-class.md)|This class describes an exception thrown when calls to the `Block` and `Unblock` methods of a `Context` object are not properly paired.|  
|[critical_section Class](../../../parallel/concrt/reference/critical-section-class.md)|A non-reentrant mutex which is explicitly aware of the Concurrency Runtime.|  
|[CurrentScheduler Class](../../../parallel/concrt/reference/currentscheduler-class.md)|Represents an abstraction for the current scheduler associated with the calling context.|  
|[default_scheduler_exists Class](../../../parallel/concrt/reference/default-scheduler-exists-class.md)|This class describes an exception thrown when the `Scheduler::SetDefaultSchedulerPolicy` method is called when a default scheduler already exists within the process.|  
|[event Class](../../../parallel/concrt/reference/event-class.md)|A manual reset event which is explicitly aware of the Concurrency Runtime.|  
|[improper_lock Class](../../../parallel/concrt/reference/improper-lock-class.md)|This class describes an exception thrown when a lock is acquired improperly.|  
|[improper_scheduler_attach Class](../../../parallel/concrt/reference/improper-scheduler-attach-class.md)|This class describes an exception thrown when the `Attach` method is called on a `Scheduler` object which is already attached to the current context.|  
|[improper_scheduler_detach Class](../../../parallel/concrt/reference/improper-scheduler-detach-class.md)|This class describes an exception thrown when the `CurrentScheduler::Detach` method is called on a context which has not been attached to any scheduler using the `Attach` method of a `Scheduler` object.|  
|[improper_scheduler_reference Class](../../../parallel/concrt/reference/improper-scheduler-reference-class.md)|This class describes an exception thrown when the `Reference` method is called on a `Scheduler` object that is shutting down, from a context that is not part of that scheduler.|  
|[invalid_link_target Class](../../../parallel/concrt/reference/invalid-link-target-class.md)|This class describes an exception thrown when the `link_target` method of a messaging block is called and the messaging block is unable to link to the target. This can be the result of exceeding the number of links the messaging block is allowed or attempting to link a specific target twice to the same source.|  
|[invalid_multiple_scheduling Class](../../../parallel/concrt/reference/invalid-multiple-scheduling-class.md)|This class describes an exception thrown when a `task_handle` object is scheduled multiple times using the `run` method of a `task_group` or `structured_task_group` object without an intervening call to either the `wait` or `run_and_wait` methods.|  
|[invalid_operation Class](../../../parallel/concrt/reference/invalid-operation-class.md)|This class describes an exception thrown when an invalid operation is performed that is not more accurately described by another exception type thrown by the Concurrency Runtime.|  
|[invalid_oversubscribe_operation Class](../../../parallel/concrt/reference/invalid-oversubscribe-operation-class.md)|This class describes an exception thrown when the `Context::Oversubscribe` method is called with the `_BeginOversubscription` parameter set to `false` without a prior call to the `Context::Oversubscribe` method with the `_BeginOversubscription` parameter set to `true`.|  
|[invalid_scheduler_policy_key Class](../../../parallel/concrt/reference/invalid-scheduler-policy-key-class.md)|This class describes an exception thrown when an invalid or unknown key is passed to a `SchedulerPolicy` object constructor, or the `SetPolicyValue` method of a `SchedulerPolicy` object is passed a key that must be changed using other means such as the `SetConcurrencyLimits` method.|  
|[invalid_scheduler_policy_thread_specification Class](../../../parallel/concrt/reference/invalid-scheduler-policy-thread-specification-class.md)|This class describes an exception thrown when an attempt is made to set the concurrency limits of a `SchedulerPolicy` object such that the value of the `MinConcurrency` key is less than the value of the `MaxConcurrency` key.|  
|[invalid_scheduler_policy_value Class](../../../parallel/concrt/reference/invalid-scheduler-policy-value-class.md)|This class describes an exception thrown when a policy key of a `SchedulerPolicy` object is set to an invalid value for that key.|  
|[ISource Class](../../../parallel/concrt/reference/isource-class.md)|The `ISource` class is the interface for all source blocks. Source blocks propagate messages to `ITarget` blocks.|  
|[ITarget Class](../../../parallel/concrt/reference/itarget-class.md)|The `ITarget` class is the interface for all target blocks. Target blocks consume messages offered to them by `ISource` blocks.|  
|[join Class](../../../parallel/concrt/reference/join-class.md)|A `join` messaging block is a single-target, multi-source, ordered `propagator_block` which combines together messages of type `T` from each of its sources.|  
|[location Class](../../../parallel/concrt/reference/location-class.md)|An abstraction of a physical location on hardware.|  
|[message Class](../../../parallel/concrt/reference/message-class.md)|The basic message envelope containing the data payload being passed between messaging blocks.|  
|[message_not_found Class](../../../parallel/concrt/reference/message-not-found-class.md)|This class describes an exception thrown when a messaging block is unable to find a requested message.|  
|[message_processor Class](../../../parallel/concrt/reference/message-processor-class.md)|The `message_processor` class is the abstract base class for processing of `message` objects. There is no guarantee on the ordering of the messages.|  
|[missing_wait Class](../../../parallel/concrt/reference/missing-wait-class.md)|This class describes an exception thrown when there are tasks still scheduled to a `task_group` or `structured_task_group` object at the time that object's destructor executes. This exception will never be thrown if the destructor is reached because of a stack unwinding as the result of an exception.|  
|[multi_link_registry Class](../../../parallel/concrt/reference/multi-link-registry-class.md)|The `multi_link_registry` object is a `network_link_registry` that manages multiple source blocks or multiple target blocks.|  
|[multitype_join Class](../../../parallel/concrt/reference/multitype-join-class.md)|A `multitype_join` messaging block is a multi-source, single-target messaging block that combines together messages of different types from each of its sources and offers a tuple of the combined messages to its targets.|  
|[nested_scheduler_missing_detach Class](../../../parallel/concrt/reference/nested-scheduler-missing-detach-class.md)|This class describes an exception thrown when the Concurrency Runtime detects that you neglected to call the `CurrentScheduler::Detach` method on a context that attached to a second scheduler using the `Attach` method of the `Scheduler` object.|  
|[network_link_registry Class](../../../parallel/concrt/reference/network-link-registry-class.md)|The `network_link_registry` abstract base class manages the links between source and target blocks.|  
|[operation_timed_out Class](../../../parallel/concrt/reference/operation-timed-out-class.md)|This class describes an exception thrown when an operation has timed out.|  
|[ordered_message_processor Class](../../../parallel/concrt/reference/ordered-message-processor-class.md)|An `ordered_message_processor` is a `message_processor` that allows message blocks to process messages in the order they were received.|  
|[overwrite_buffer Class](../../../parallel/concrt/reference/overwrite-buffer-class.md)|An `overwrite_buffer` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing a single message at a time. New messages overwrite previously held ones.|  
|[progress_reporter Class](../../../parallel/concrt/reference/progress-reporter-class.md)|The progress reporter class allows reporting progress notifications of a specific type. Each progress_reporter object is bound to a particular asynchronous action or operation.|  
|[propagator_block Class](../../../parallel/concrt/reference/propagator-block-class.md)|The `propagator_block` class is an abstract base class for message blocks that are both a source and target. It combines the functionality of both the `source_block` and `target_block` classes.|  
|[reader_writer_lock Class](../../../parallel/concrt/reference/reader-writer-lock-class.md)|A writer-preference queue-based reader-writer lock with local only spinning. The lock grants first in - first out (FIFO) access to writers and starves readers under a continuous load of writers.|  
|[ScheduleGroup Class](../../../parallel/concrt/reference/schedulegroup-class.md)|Represents an abstraction for a schedule group. Schedule groups organize a set of related work that benefits from being scheduled close together either temporally, by executing another task in the same group before moving to another group, or spatially, by executing multiple items within the same group on the same NUMA node or physical socket.|  
|[Scheduler Class](../../../parallel/concrt/reference/scheduler-class.md)|Represents an abstraction for a Concurrency Runtime scheduler.|  
|[scheduler_not_attached Class](../../../parallel/concrt/reference/scheduler-not-attached-class.md)|This class describes an exception thrown when an operation is performed which requires a scheduler to be attached to the current context and one is not.|  
|[scheduler_resource_allocation_error Class](../../../parallel/concrt/reference/scheduler-resource-allocation-error-class.md)|This class describes an exception thrown because of a failure to acquire a critical resource in the Concurrency Runtime.|  
|[scheduler_worker_creation_error Class](../../../parallel/concrt/reference/scheduler-worker-creation-error-class.md)|This class describes an exception thrown because of a failure to create a worker execution context in the Concurrency Runtime.|  
|[SchedulerPolicy Class](../../../parallel/concrt/reference/schedulerpolicy-class.md)|The `SchedulerPolicy` class contains a set of key/value pairs, one for each policy element, that control the behavior of a scheduler instance.|  
|[simple_partitioner Class](../../../parallel/concrt/reference/simple-partitioner-class.md)|The `simple_partitioner` class represents a static partitioning of the range iterated over by `parallel_for`. The partitioner divides the range into chunks such that each chunk has at least the number of iterations specified by the chunk size.|  
|[single_assignment Class](../../../parallel/concrt/reference/single-assignment-class.md)|A `single_assignment` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing a single, write-once `message`.|  
|[single_link_registry Class](../../../parallel/concrt/reference/single-link-registry-class.md)|The `single_link_registry` object is a `network_link_registry` that manages only a single source or target block.|  
|[source_block Class](../../../parallel/concrt/reference/source-block-class.md)|The `source_block` class is an abstract base class for source-only blocks. The class provides basic link management functionality as well as common error checks.|  
|[source_link_manager Class](../../../parallel/concrt/reference/source-link-manager-class.md)|The `source_link_manager` object manages messaging block network links to `ISource` blocks.|  
|[static_partitioner Class](../../../parallel/concrt/reference/static-partitioner-class.md)|The `static_partitioner` class represents a static partitioning of the range iterated over by `parallel_for`. The partitioner divides the range into as many chunks as there are workers available to the underyling scheduler.|  
|[structured_task_group Class](../../../parallel/concrt/reference/structured-task-group-class.md)|The `structured_task_group` class represents a highly structured collection of parallel work. You can queue individual parallel tasks to a `structured_task_group` using `task_handle` objects, and wait for them to complete, or cancel the task group before they have finished executing, which will abort any tasks that have not begun execution.|  
|[target_block Class](../../../parallel/concrt/reference/target-block-class.md)|The `target_block` class is an abstract base class that provides basic link management functionality and error checking for target only blocks.|  
|[task Class (Concurrency Runtime)](../../../parallel/concrt/reference/task-class-concurrency-runtime.md)|The Parallel Patterns Library (PPL) `task` class. A `task` object represents work that can be executed asynchronously, and concurrently with other tasks and parallel work produced by parallel algorithms in the Concurrency Runtime. It produces a result of type `_ResultType` on successful completion. Tasks of type `task<void>` produce no result. A task can be waited upon and canceled independently of other tasks. It can also be composed with other tasks using continuations(`then`), and join(`when_all`) and choice(`when_any`) patterns.|  
|[task_canceled Class](../../../parallel/concrt/reference/task-canceled-class.md)|This class describes an exception thrown by the PPL tasks layer in order to force the current task to cancel. It is also thrown by the `get()` method on [task](http://msdn.microsoft.com/en-us/5389e8a5-5038-40b6-844a-55e9b58ad35f), for a canceled task.|  
|[task_completion_event Class](../../../parallel/concrt/reference/task-completion-event-class.md)|The `task_completion_event` class allows you to delay the execution of a task until a condition is satisfied, or start a task in response to an external event.|  
|[task_continuation_context Class](../../../parallel/concrt/reference/task-continuation-context-class.md)|The `task_continuation_context` class allows you to specify where you would like a continuation to be executed. It is only useful to use this class from a Windows Store app. For non-Windows Store apps, the task continuation's execution context is determined by the runtime, and not configurable.|  
|[task_group Class](http://msdn.microsoft.com/library/b4af5b28-227d-4488-8194-0a0d039173b7)|The `task_group` class represents a collection of parallel work which can be waited on or canceled.|  
|[task_handle Class](../../../parallel/concrt/reference/task-handle-class.md)|The `task_handle` class represents an individual parallel work item. It encapsulates the instructions and the data required to execute a piece of work.|  
|[task_options Class (Concurrency Runtime)](../../../parallel/concrt/reference/task-options-class-concurrency-runtime.md)|Represents the allowed options for creating a task|  
|[timer Class](../../../parallel/concrt/reference/timer-class.md)|A `timer` messaging block is a single-target `source_block` capable of sending a message to its target after a specified time period has elapsed or at specific intervals.|  
|[transformer Class](../../../parallel/concrt/reference/transformer-class.md)|A `transformer` messaging block is a single-target, multi-source, ordered `propagator_block` which can accept messages of one type and is capable of storing an unbounded number of messages of a different type.|  
|[unbounded_buffer Class](~/parallel/concrt/reference/unbounded-buffer-class.md)|An `unbounded_buffer` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing an unbounded number of messages.|  
|[unsupported_os Class](../../../parallel/concrt/reference/unsupported-os-class.md)|This class describes an exception thrown when an unsupported operating system is used.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[DispatchState Structure](../../../parallel/concrt/reference/dispatchstate-structure.md)|The `DispatchState` structure is used to transfer state to the `IExecutionContext::Dispatch` method. It describes the circumstances under which the `Dispatch` method is invoked on an `IExecutionContext` interface.|  
|[IExecutionContext Structure](../../../parallel/concrt/reference/iexecutioncontext-structure.md)|An interface to an execution context which can run on a given virtual processor and be cooperatively context switched.|  
|[IExecutionResource Structure](../../../parallel/concrt/reference/iexecutionresource-structure.md)|An abstraction for a hardware thread.|  
|[IResourceManager Structure](../../../parallel/concrt/reference/iresourcemanager-structure.md)|An interface to the Concurrency Runtime's Resource Manager. This is the interface by which schedulers communicate with the Resource Manager.|  
|[IScheduler Structure](../../../parallel/concrt/reference/ischeduler-structure.md)|An interface to an abstraction of a work scheduler. The Concurrency Runtime's Resource Manager uses this interface to communicate with work schedulers.|  
|[ISchedulerProxy Structure](../../../parallel/concrt/reference/ischedulerproxy-structure.md)|The interface by which schedulers communicate with the Concurrency Runtime's Resource Manager to negotiate resource allocation.|  
|[IThreadProxy Structure](../../../parallel/concrt/reference/ithreadproxy-structure.md)|An abstraction for a thread of execution. Depending on the `SchedulerType` policy key of the scheduler you create, the Resource Manager will grant you a thread proxy that is backed by either a regular Win32 thread or a user-mode schedulable (UMS) thread. UMS threads are supported on 64-bit operating systems with version Windows 7 and higher.|  
|[ITopologyExecutionResource Structure](../../../parallel/concrt/reference/itopologyexecutionresource-structure.md)|An interface to an execution resource as defined by the Resource Manager.|  
|[ITopologyNode Structure](../../../parallel/concrt/reference/itopologynode-structure.md)|An interface to a topology node as defined by the Resource Manager. A node contains one or more execution resources.|  
|[IUMSCompletionList Structure](../../../parallel/concrt/reference/iumscompletionlist-structure.md)|Represents a UMS completion list. When a UMS thread blocks, the scheduler's designated scheduling context is dispatched in order to make a decision of what to schedule on the underlying virtual processor root while the original thread is blocked. When the original thread unblocks, the operating system queues it to the completion list which is accessible through this interface. The scheduler can query the completion list on the designated scheduling context or any other place it searches for work.|  
|[IUMSScheduler Structure](../../../parallel/concrt/reference/iumsscheduler-structure.md)|An interface to an abstraction of a work scheduler that wants the Concurrency Runtime's Resource Manager to hand it user-mode schedulable (UMS) threads. The Resource Manager uses this interface to communicate with UMS thread schedulers. The `IUMSScheduler` interface inherits from the `IScheduler` interface.|  
|[IUMSThreadProxy Structure](../../../parallel/concrt/reference/iumsthreadproxy-structure.md)|An abstraction for a thread of execution. If you want your scheduler to be granted user-mode schedulable (UMS) threads, set the value for the scheduler policy element `SchedulerKind` to `UmsThreadDefault`, and implement the `IUMSScheduler` interface. UMS threads are only supported on 64-bit operating systems with version Windows 7 and higher.|  
|[IUMSUnblockNotification Structure](../../../parallel/concrt/reference/iumsunblocknotification-structure.md)|Represents a notification from the Resource Manager that a thread proxy which blocked and triggered a return to the scheduler's designated scheduling context has unblocked and is ready to be scheduled. This interface is invalid once the thread proxy's associated execution context, returned from the `GetContext` method, is rescheduled.|  
|[IVirtualProcessorRoot Structure](../../../parallel/concrt/reference/ivirtualprocessorroot-structure.md)|An abstraction for a hardware thread on which a thread proxy can execute.|  
|[scheduler_interface Structure](../../../parallel/concrt/reference/scheduler-interface-structure.md)|Scheduler Interface|  
|[scheduler_ptr Structure (Concurrency Runtime)](../../../parallel/concrt/reference/scheduler-ptr-structure-concurrency-runtime.md)|Represents a pointer to a scheduler. This class exists to allow the the specification of a shared lifetime by using shared_ptr or just a plain reference by using raw pointer.|  
  
### Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[agent_status Enumeration](http://msdn.microsoft.com/library/46fa9b51-7930-4706-ba9d-c94a5ccac6b1)|The valid states for an `agent`.|  
|[Agents_EventType Enumeration](http://msdn.microsoft.com/library/c986df30-da61-4705-bc87-a104c88f4ee9)|The types of events that can be traced using the tracing functionality offered by the Agents Library|  
|[ConcRT_EventType Enumeration](http://msdn.microsoft.com/library/f593d554-ce66-4f72-bd33-00dd1a0cf52e)|The types of events that can be traced using the tracing functionality offered by the Concurrency Runtime.|  
|[Concrt_TraceFlags Enumeration](http://msdn.microsoft.com/library/e7e13607-86f8-4fdc-90b2-57503710232c)|Trace flags for the event types|  
|[CriticalRegionType Enumeration](http://msdn.microsoft.com/library/e08c60a8-4a81-4c2d-af3f-320ffa7a1eba)|The type of critical region a context is inside.|  
|[DynamicProgressFeedbackType Enumeration](http://msdn.microsoft.com/library/25c43ad3-f0f6-4d70-8358-d33caf1e5820)|Used by the `DynamicProgressFeedback` policy to describe whether resources for the scheduler will be rebalanced according to statistical information gathered from the scheduler or only based on virtual processors going in and out of the idle state through calls to the `Activate` and `Deactivate` methods on the `IVirtualProcessorRoot` interface. For more information on available scheduler policies, see [PolicyElementKey Enumeration](http://msdn.microsoft.com/library/6376ca26-54c8-4804-863f-c081e387fe36).|  
|[join_type Enumeration](http://msdn.microsoft.com/library/75b0a0a2-caad-444f-83f6-7faf61456e8b)|The type of a `join` messaging block.|  
|[message_status Enumeration](http://msdn.microsoft.com/library/e5e05af0-734d-4063-ae32-f6356382f313)|The valid responses for an offer of a `message` object to a block.|  
|[PolicyElementKey Enumeration](http://msdn.microsoft.com/library/6376ca26-54c8-4804-863f-c081e387fe36)|Policy keys describing aspects of scheduler behavior. Each policy element is described by a key-value pair. For more information about scheduler policies and their impact on schedulers, see [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).|  
|[SchedulerType Enumeration](http://msdn.microsoft.com/library/df44b4bc-788a-407f-a0c4-148d6876ebb2)|Used by the `SchedulerKind` policy to describe the type of threads that the scheduler should utilize for underlying execution contexts. For more information on available scheduler policies, see [PolicyElementKey Enumeration](http://msdn.microsoft.com/library/6376ca26-54c8-4804-863f-c081e387fe36).|  
|[SchedulingProtocolType Enumeration](http://msdn.microsoft.com/library/a4bb87b9-bec3-4918-bb06-1993c53e1069)|Used by the `SchedulingProtocol` policy to describe which scheduling algorithm will be utilized for the scheduler. For more information on available scheduler policies, see [PolicyElementKey Enumeration](http://msdn.microsoft.com/library/6376ca26-54c8-4804-863f-c081e387fe36).|  
|[SwitchingProxyState Enumeration](http://msdn.microsoft.com/library/fe292c59-1257-499d-9a04-0d95f9a618ab)|Used to denote the state a thread proxy is in, when it is executing a cooperative context switch to a different thread proxy.|  
|[task_group_status Enumeration](http://msdn.microsoft.com/library/fce7cc14-6cb6-43b8-82ba-f98e2225db6a)|Describes the execution status of a `task_group` or `structured_task_group` object. A value of this type is returned by numerous methods that wait on tasks scheduled to a task group to complete.|  
|[WinRTInitializationType Enumeration](http://msdn.microsoft.com/library/adcbbd85-2622-45a8-983e-3718dabbb902)|Used by the `WinRTInitialization` policy to describe whether and how the Windows Runtime will be initialized on scheduler threads for an application which runs on operating systems with version Windows 8 or higher. For more information on available scheduler policies, see [PolicyElementKey Enumeration](http://msdn.microsoft.com/library/6376ca26-54c8-4804-863f-c081e387fe36).|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[Alloc Function](http://msdn.microsoft.com/library/41246453-c699-4a73-9234-f952efbd9106)|Allocates a block of memory of the size specified from the Concurrency Runtime Caching Suballocator.|  
|[asend Function](http://msdn.microsoft.com/library/920dc665-7e23-4bd7-8c74-3e74067aa52a)|Overloaded. An asynchronous send operation, which schedules a task to propagate the data to the target block.|  
|[cancel_current_task Function](http://msdn.microsoft.com/library/03a5e7bb-20bc-49b7-b119-83421845769b)|Cancels the currently executing task. This function can be called from within the body of a task to abort the task's execution and cause it to enter the `canceled` state.<br /><br /> It is not a supported scenario to call this function if you are not within the body of a `task`. Doing so will result in undefined behavior such as a crash or a hang in your application.|  
|[create_async Function](http://msdn.microsoft.com/library/beadec39-5976-43fb-99b0-aeb9aad344fd)|Creates a Windows Runtime asynchronous construct based on a user supplied lambda or function object. The return type of `create_async` is one of either `IAsyncAction^`, `IAsyncActionWithProgress<TProgress>^`, `IAsyncOperation<TResult>^`, or `IAsyncOperationWithProgress<TResult, TProgress>^` based on the signature of the lambda passed to the method.|  
|[create_task Function](http://msdn.microsoft.com/library/6e364052-c923-4006-9e03-8516bf041482)|Overloaded. Creates a PPL [task](http://msdn.microsoft.com/en-us/5389e8a5-5038-40b6-844a-55e9b58ad35f) object. `create_task` can be used anywhere you would have used a task constructor. It is provided mainly for convenience, because it allows use of the `auto` keyword while creating tasks.|  
|[CreateResourceManager Function](http://msdn.microsoft.com/library/8fced60c-65f0-4298-9dc8-cf02ea8b107a)|Returns an interface that represents the singleton instance of the Concurrency Runtime's Resource Manager. The Resource Manager is responsible for assigning resources to schedulers that want to cooperate with each other.|  
|[DisableTracing Function](http://msdn.microsoft.com/library/deccd704-c8de-4026-81e9-9214dbb5d71e)|Disables tracing in the Concurrency Runtime. This function is deprecated because ETW tracing is unregistered by default.|  
|[EnableTracing Function](http://msdn.microsoft.com/library/66ece37f-97f1-490f-bd78-d5ff1e43b805)|Enables tracing in the Concurrency Runtime. This function is deprecated because ETW tracing is now on by default.|  
|[Free Function](http://msdn.microsoft.com/library/cde873ad-874b-482d-aae3-451f2e380d2b)|Releases a block of memory previously allocated by the `Alloc` method to the Concurrency Runtime Caching Suballocator.|  
|[get_ambient_scheduler Function (Concurrency Runtime)](http://msdn.microsoft.com/library/6cbe2fde-5272-43f8-a267-b32a8e7ecbac)||  
|[GetExecutionContextId Function](http://msdn.microsoft.com/library/4f16d068-c6d2-45b2-b4c4-6e4af4ea7caf)|Returns a unique identifier that can be assigned to an execution context that implements the `IExecutionContext` interface.|  
|[GetOSVersion Function](http://msdn.microsoft.com/library/73388a52-9b59-42d6-a49b-d35856fa671a)|Returns the operating system version.|  
|[GetProcessorCount Function](http://msdn.microsoft.com/library/bea5a723-89bf-4597-8657-46ecff3f0fae)|Returns the number of hardware threads on the underlying system.|  
|[GetProcessorNodeCount Function](http://msdn.microsoft.com/library/ffbc9395-d79c-4cb4-bbb3-8511820f5c62)|Returns the number of NUMA nodes or processor packages on the underlying system.|  
|[GetSchedulerId Function](http://msdn.microsoft.com/library/30b63059-9712-43d2-8958-443489282c7a)|Returns a unique identifier that can be assigned to a scheduler that implements the `IScheduler` interface.|  
|[interruption_point Function](http://msdn.microsoft.com/library/350f062c-3ff5-45bc-9718-fece1ede9cdb)|Creates an interruption point for cancellation. If a cancellation is in progress in the context where this function is called, this will throw an internal exception that aborts the execution of the currently executing parallel work. If cancellation is not in progress, the function does nothing.|  
|[is_current_task_group_canceling Function](http://msdn.microsoft.com/library/96e07637-1683-431f-b0ac-1b85af96c9d9)|Returns an indication of whether the task group which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly). Note that if there is no task group currently executing inline on the current context, `false` will be returned.|  
|[make_choice Function](http://msdn.microsoft.com/library/98c33b3f-e8e5-4302-ba91-b56515c00066)|Overloaded. Constructs a `choice` messaging block from an optional `Scheduler` or `ScheduleGroup` and two or more input sources.|  
|[make_greedy_join Function](http://msdn.microsoft.com/library/0e1a1922-3c46-4898-9e58-4887c71c3ce7)|Overloaded. Constructs a `greedy multitype_join` messaging block from an optional `Scheduler` or `ScheduleGroup` and two or more input sources.|  
|[make_join Function](http://msdn.microsoft.com/library/8634413d-05fd-42c7-8a35-c7f8a0fff980)|Overloaded. Constructs a `non_greedy multitype_join` messaging block from an optional `Scheduler` or `ScheduleGroup` and two or more input sources.|  
|[make_task Function](http://msdn.microsoft.com/library/f8f7cb10-90ca-42ce-9c70-cbf090aa3cf6)|A factory method for creating a `task_handle` object.|  
|[parallel_buffered_sort Function](http://msdn.microsoft.com/library/fe173c7e-7986-4a31-86e5-0e03c8648824)|Overloaded. Arranges the elements in a specified range into a nondescending order, or according to an ordering criterion specified by a binary predicate, in parallel. This function is semantically similar to `std::sort` in that it is a compare-based, unstable, in-place sort except that it needs `O(n)` additional space, and requires default initialization for the elements being sorted.|  
|[parallel_for Function](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d)|Overloaded. `parallel_for` iterates over a range of indices and executes a user-supplied function at each iteration, in parallel.|  
|[parallel_for_each Function](http://msdn.microsoft.com/library/ff7ec2dd-63fd-4838-b202-225036b30f28)|Overloaded. `parallel_for_each` applies a specified function to each element within a range, in parallel. It is semantically equivalent to the `for_each` function in the `std` namespace, except that iteration over the elements is performed in parallel, and the order of iteration is unspecified. The argument `_Func` must support a function call operator of the form `operator()(T)` where the parameter `T` is the item type of the container being iterated over.|  
|[parallel_invoke Function](http://msdn.microsoft.com/library/8c8fe553-f372-4138-b9c6-e31b0e83eb9b)|Overloaded. Executes the function objects supplied as parameters in parallel, and blocks until they have finished executing. Each function object could be a lambda expression, a pointer to function, or any object that supports the function call operator with the signature `void operator()()`.|  
|[parallel_radixsort Function](http://msdn.microsoft.com/library/f3cf915b-b280-4bf1-bed9-ce3fb660341c)|Overloaded. Arranges elements in a specified range into an non descending order using a radix sorting algorithm. This is a stable sort function which requires a projection function that can project elements to be sorted into unsigned integer-like keys. Default initialization is required for the elements being sorted.|  
|[parallel_reduce Function](http://msdn.microsoft.com/library/275a2706-c12a-4c87-9ad6-f07d4fc205cc)|Overloaded. Computes the sum of all elements in a specified range by computing successive partial sums, or computes the result of successive partial results similarly obtained from using a specified binary operation other than sum, in parallel. `parallel_reduce` is semantically similar to `std::accumulate`, except that it requires the binary operation to be associative, and requires an identity value instead of an initial value.|  
|[parallel_sort Function](http://msdn.microsoft.com/library/9c84defe-c8c2-4b56-806e-484b1ce73ef5)|Overloaded. Arranges the elements in a specified range into a nondescending order, or according to an ordering criterion specified by a binary predicate, in parallel. This function is semantically similar to `std::sort` in that it is a compare-based, unstable, in-place sort.|  
|[parallel_transform Function](http://msdn.microsoft.com/library/3f61f693-2a7f-45a7-8904-b6df436a2818)|Overloaded. Applies a specified function object to each element in a source range, or to a pair of elements from two source ranges, and copies the return values of the function object into a destination range, in parallel. This functional is semantically equivalent to `std::transform`.|  
|[receive Function](http://msdn.microsoft.com/library/f36bbca1-97ac-4343-bfac-ea71ca2139e9)|Overloaded. A general receive implementation, allowing a context to wait for data from exactly one source and filter the values that are accepted.|  
|[run_with_cancellation_token Function](http://msdn.microsoft.com/library/02083191-ebc9-4565-9438-2ca39fcd31f6)|Executes a function object immediately and synchronously in the context of a given cancellation token.|  
|[send Function](http://msdn.microsoft.com/library/8713fb36-066b-47de-af12-589fa74805d6)|Overloaded. A synchronous send operation, which waits until the target either accepts or declines the message.|  
|[set_ambient_scheduler Function (Concurrency Runtime)](http://msdn.microsoft.com/library/83b32fa3-ae98-4274-9b84-2cabc3cdcf68)||  
|[set_task_execution_resources Function](http://msdn.microsoft.com/library/25f7fc36-cd2b-4245-9738-3a33fdef31fa)|Overloaded. Restricts the execution resources used by the Concurrency Runtime internal worker threads to the affinity set specified.<br /><br /> It is valid to call this method only before the Resource Manager has been created, or between two Resource Manager lifetimes. It can be invoked multiple times as long as the Resource Manager does not exist at the time of invocation. After an affinity limit has been set, it remains in effect until the next valid call to the `set_task_execution_resources` method.<br /><br /> The affinity mask provided need not be a subset of the process affinity mask. The process affinity will be updated if necessary.|  
|[swap Function](http://msdn.microsoft.com/library/1d6508df-4435-4acf-9fe6-eaa70c5dfd17)|Exchanges the elements of two `concurrent_vector` objects.|  
|[task_from_exception Function (Concurrency Runtime)](http://msdn.microsoft.com/library/8e915732-1433-44d4-ad40-597201cb766c)||  
|[task_from_result Function (Concurrency Runtime)](http://msdn.microsoft.com/library/a989545d-9190-4396-a338-d632083a3ffc)||  
|[Trace_agents_register_name Function](http://msdn.microsoft.com/library/9bea9d3d-922d-4d1d-b075-4bc3be45dab4)|Associates the given name to the message block or agent in the ETW trace.|  
|[try_receive Function](http://msdn.microsoft.com/library/c9d76668-e5cf-48de-ab79-bd7b2bc38db9)|Overloaded. A general try-receive implementation, allowing a context to look for data from exactly one source and filter the values that are accepted. If the data is not ready, the method will return false.|  
|[wait Function](http://msdn.microsoft.com/library/a8a326d1-854d-4462-b705-36d3a2a6fb2b)|Pauses the current context for a specified amount of time.|  
|[when_all Function](http://msdn.microsoft.com/library/1c80cc05-8211-43d4-a8d7-1b3415899823)|Creates a task that will complete successfully when all of the tasks supplied as arguments complete successfully.|  
|[when_any Function](http://msdn.microsoft.com/library/26b09c07-4c23-41a5-a1de-d71c91dc9ca2)|Overloaded. Creates a task that will complete successfully when any of the tasks supplied as arguments completes successfully.|  
  
### Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator!= Operator](http://msdn.microsoft.com/library/acaa8f8e-9281-44f3-a43d-5d8a85d48f0a)|Tests if the `concurrent_vector` object on the left side of the operator is not equal to the `concurrent_vector` object on the right side.|  
|[operator&& Operator](http://msdn.microsoft.com/library/1334b94a-c4de-4180-bbab-76849ca44309)|Overloaded. Creates a task that will complete succesfully when both of the tasks supplied as arguments complete successfully.|  
|[operator&#124;&#124; Operator](http://msdn.microsoft.com/library/b584cedd-6ae0-4045-b30d-d3a40e5d7a78)|Overloaded. Creates a task that will complete successfully when either of the tasks supplied as arguments completes successfully.|  
|[operator< Operator](http://msdn.microsoft.com/library/c7106a22-a02b-4774-a91b-a103c492be0b)|Tests if the `concurrent_vector` object on the left side of the operator is less than the `concurrent_vector` object on the right side.|  
|[operator<= Operator](http://msdn.microsoft.com/library/646d93df-15e6-4cd4-9967-2465ed000fe0)|Tests if the `concurrent_vector` object on the left side of the operator is less than or equal to the `concurrent_vector` object on the right side.|  
|[operator== Operator](http://msdn.microsoft.com/library/16c7a9ba-2aa4-4ad2-91e0-6c61d4a72ae4)|Tests if the `concurrent_vector` object on the left side of the operator is equal to the `concurrent_vector` object on the right side.|  
|[operator> Operator](http://msdn.microsoft.com/library/1f850c42-6b09-4726-9dab-c8cf770baf92)|Tests if the `concurrent_vector` object on the left side of the operator is greater than the `concurrent_vector` object on the right side.|  
|[operator>= Operator](http://msdn.microsoft.com/library/a644be5b-12b1-4f39-aedd-634aa0dfe552)|Tests if the `concurrent_vector` object on the left side of the operator is greater than or equal to the `concurrent_vector` object on the right side.|  
  
### Constants  
  
|Name|Description|  
|----------|-----------------|  
|[AgentEventGuid Constant](http://msdn.microsoft.com/library/b69610ce-9216-4e39-be9f-a62fc1c67e20)|A category GUID ({B9B5B78C-0713-4898-A21A-C67949DCED07}) describing ETW events fired by the Agents library in the Concurrency Runtime.|  
|[ChoreEventGuid Constant](http://msdn.microsoft.com/library/1c0ec298-ce70-41b1-9458-6384c0bbf45e)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to chores or tasks.|  
|[ConcRT_ProviderGuid Constant](http://msdn.microsoft.com/library/5849a265-ee6a-485f-a571-b3aba71425d0)|The ETW provider GUID for the Concurrency Runtime.|  
|[CONCRT_RM_VERSION_1 Constant](http://msdn.microsoft.com/library/dabef168-4e89-48a8-8f70-32fca63836a6)|Indicates support of the Resource Manager interface defined in Visual Studio 2010.|  
|[ConcRTEventGuid Constant](http://msdn.microsoft.com/library/78e621f4-cd16-402f-b4e4-520d56ee3269)|A category GUID describing ETW events fired by the Concurrency Runtime that are not more specifically described by another category.|  
|[ContextEventGuid Constant](http://msdn.microsoft.com/library/c3aec997-4941-433a-bdb6-f7ef6e5219fe)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to contexts.|  
|[COOPERATIVE_TIMEOUT_INFINITE Constant](http://msdn.microsoft.com/library/87c3f9e4-a3a2-4d42-95a0-7ffe2aa5e1ec)|Value indicating that a wait should never time out.|  
|[COOPERATIVE_WAIT_TIMEOUT Constant](http://msdn.microsoft.com/library/7da2433d-130b-47ff-b809-1cfeeafe25a6)|Value indicating that a wait timed out.|  
|[INHERIT_THREAD_PRIORITY Constant](http://msdn.microsoft.com/library/e641b23b-63a8-48c6-b63a-3440cf973fa6)|Special value for the policy key `ContextPriority` indicating that the thread priority of all contexts in the scheduler should be the same as that of the thread which created the scheduler.|  
|[LockEventGuid Constant](http://msdn.microsoft.com/library/f771e726-9ac6-4732-a96a-fccbe32001dd)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to locks.|  
|[MaxExecutionResources Constant](http://msdn.microsoft.com/library/7cef895d-f0d6-41bc-b4c3-b4254fa07898)|Special value for the policy keys `MinConcurrency` and `MaxConcurrency`. Defaults to the number of hardware threads on the machine in the absence of other constraints.|  
|[PPLParallelForeachEventGuid Constant](http://msdn.microsoft.com/library/3b00d409-83ea-4836-bec6-af40cf1a5902)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the `parallel_for_each` function.|  
|[PPLParallelForEventGuid Constant](http://msdn.microsoft.com/library/db0a6329-840f-4db5-8f84-1f531d9cc382)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the `parallel_for` function.|  
|[PPLParallelInvokeEventGuid Constant](http://msdn.microsoft.com/library/52dfc38b-44e9-435d-9207-ad9d16b6bd53)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the `parallel_invoke` function.|  
|[ResourceManagerEventGuid Constant](http://msdn.microsoft.com/library/b5d7a70b-0130-44d4-b03a-a1e9a789b8bd)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to the resource manager.|  
|[ScheduleGroupEventGuid Constant](http://msdn.microsoft.com/library/548cde87-1467-49d0-af54-59e0cbfbdcb2)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to schedule groups.|  
|[SchedulerEventGuid Constant](http://msdn.microsoft.com/library/76e2cf6b-e042-4052-8df1-ddfcf453a112)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to scheduler activity.|  
|[VirtualProcessorEventGuid Constant](http://msdn.microsoft.com/library/ab73a4da-a44d-43de-bb34-193062afc334)|A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to virtual processors.|  
  
## Requirements  
 **Header:** agents.h, concrt.h, concrtrm.h, concurrent_priority_queue.h, concurrent_queue.h, concurrent_unordered_map.h, concurrent_unordered_set.h, concurrent_vector.h, internal_concurrent_hash.h, internal_split_ordered_list.h, ppl.h, pplcancellation_token.h, pplconcrt.h, pplinterface.h, ppltasks.h  
  
## See Also  
 [Reference](../../../parallel/concrt/reference/reference-concurrency-runtime.md)

