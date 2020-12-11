---
description: "Learn more about: Annotating Locking Behavior"
title: Annotating Locking Behavior
ms.date: 11/04/2016
ms.topic: "conceptual"
f1_keywords:
  - "_Releases_nonreentrant_lock_"
  - "_Lock_kind_mutex_"
  - "_Lock_kind_critical_section_"
  - "_Acquires_lock_"
  - "_Releases_lock_"
  - "_Has_lock_kind_"
  - "_Releases_exclusive_lock_"
  - "_Post_same_lock_"
  - "_Requires_exclusive_lock_held_"
  - "_Requires_shared_lock_held_"
  - "_Lock_kind_semaphore_"
  - "_Requires_lock_held_"
  - "_Acquires_exclusive_lock_"
  - "_Create_lock_level_"
  - "_Acquires_nonreentrant_lock_"
  - "_Releases_shared_lock_"
  - "_Has_lock_level_"
  - "_Lock_kind_spin_lock_"
  - "_Requires_lock_not_held_"
  - "_Acquires_shared_lock_"
  - "_Requires_no_locks_held_"
  - "_Lock_level_order_"
  - "_Lock_kind_event_"
ms.assetid: 07769c25-9b97-4ab7-b175-d1c450308d7a
---
# Annotating Locking Behavior

To avoid concurrency bugs in your multithreaded program, always follow an appropriate locking discipline and use SAL annotations.

Concurrency bugs are notoriously hard to reproduce, diagnose, and debug because they are non-deterministic. Reasoning about thread interleaving is difficult at best, and becomes impractical when you are designing a body of code that has more than a few threads. Therefore, it's good practice to follow a locking discipline in your multithreaded programs. For example, obeying a lock order while acquiring multiple locks helps avoid deadlocks, and acquiring the proper guarding lock before accessing a shared resource helps prevent race conditions.

Unfortunately, seemingly simple locking rules can be surprisingly hard to follow in practice. A fundamental limitation in today's programming languages and compilers is that they do not directly support the specification and analysis of concurrency requirements. Programmers have to rely on informal code comments to express their intentions about how they use locks.

Concurrency SAL annotations are designed to help you specify locking side effects, locking responsibility, data guardianship, lock order hierarchy, and other expected locking behavior. By making implicit rules explicit, SAL concurrency annotations provide a consistent way for you to document how your code uses locking rules. Concurrency annotations also enhance the ability of code analysis tools to find race conditions, deadlocks, mismatched synchronization operations, and other subtle concurrency errors.

## General Guidelines

By using annotations, you can state the contracts that are implied by function definitions between implementations (callees) and clients (callers), and express invariants and other properties of the program that can further improve analysis.

SAL supports many different kinds of locking primitives—for example, critical sections, mutexes, spin locks, and other resource objects. Many concurrency annotations take a lock expression as a parameter. By convention, a lock is denoted by the path expression of the underlying lock object.

Some thread ownership rules to keep in mind:

- Spin locks are uncounted locks that have clear thread ownership.

- Mutexes and critical sections are counted locks that have clear thread ownership.

- Semaphores and events are counted locks that do not have clear thread ownership.

## Locking Annotations

The following table lists the locking annotations.

|Annotation|Description|
|----------------|-----------------|
|`_Acquires_exclusive_lock_(expr)`|Annotates a function and indicates that in post state the function increments by one the exclusive lock count of the lock object that's named by `expr`.|
|`_Acquires_lock_(expr)`|Annotates a function and indicates that in post state the function increments by one the lock count of the lock object that's named by `expr`.|
|`_Acquires_nonreentrant_lock_(expr)`|The lock that's named by `expr` is acquired.  An error is reported if the lock is already held.|
|`_Acquires_shared_lock_(expr)`|Annotates a function and indicates that in post state the function increments by one the shared lock count of the lock object that's named by `expr`.|
|`_Create_lock_level_(name)`|A statement that declares the symbol `name` to be a lock level so that it may be used in the annotations `_Has_Lock_level_` and `_Lock_level_order_`.|
|`_Has_lock_kind_(kind)`|Annotates any object to refine the type information of a resource object. Sometimes a common type is used for different kinds of resources and the overloaded type is not sufficient to distinguish the semantic requirements among various resources. Here's a list of pre-defined `kind` parameters:<br /><br /> `_Lock_kind_mutex_`<br /> Lock kind ID for mutexes.<br /><br /> `_Lock_kind_event_`<br /> Lock kind ID for events.<br /><br /> `_Lock_kind_semaphore_`<br /> Lock kind ID for semaphores.<br /><br /> `_Lock_kind_spin_lock_`<br /> Lock kind ID for spin locks.<br /><br /> `_Lock_kind_critical_section_`<br /> Lock kind ID for critical sections.|
|`_Has_lock_level_(name)`|Annotates a lock object and gives it the lock level of `name`.|
|`_Lock_level_order_(name1, name2)`|A statement that gives the lock ordering between `name1` and `name2`.  Locks that have level `name1` must be acquired before locks that have level `name2`.|
|`_Post_same_lock_(expr1, expr2)`|Annotates a function and indicates that in post state the two locks, `expr1` and `expr2`, are treated as if they are the same lock object.|
|`_Releases_exclusive_lock_(expr)`|Annotates a function and indicates that in post state the function decrements by one the exclusive lock count of the lock object that's named by `expr`.|
|`_Releases_lock_(expr)`|Annotates a function and indicates that in post state the function decrements by one the lock count of the lock object that's named by `expr`.|
|`_Releases_nonreentrant_lock_(expr)`|The lock that's named by `expr` is released. An error is reported if the lock is not currently held.|
|`_Releases_shared_lock_(expr)`|Annotates a function and indicates that in post state the function decrements by one the shared lock count of the lock object that's named by `expr`.|
|`_Requires_lock_held_(expr)`|Annotates a function and indicates that in pre state the lock count of the object that's named by `expr` is at least one.|
|`_Requires_lock_not_held_(expr)`|Annotates a function and indicates that in pre state the lock count of the object that's named by `expr` is zero.|
|`_Requires_no_locks_held_`|Annotates a function and indicates that the lock counts of all locks that are known to the checker are zero.|
|`_Requires_shared_lock_held_(expr)`|Annotates a function and indicates that in pre state the shared lock count of the object that's named by `expr` is at least one.|
|`_Requires_exclusive_lock_held_(expr)`|Annotates a function and indicates that in pre state the exclusive lock count of the object that's named by `expr` is at least one.|

## SAL Intrinsics For Unexposed Locking Objects

Certain lock objects are not exposed by the implementation of the associated locking functions.  The following table lists SAL intrinsic variables that enable annotations on functions that operate on those unexposed lock objects.

|Annotation|Description|
|----------------|-----------------|
|`_Global_cancel_spin_lock_`|Describes the cancel spin lock.|
|`_Global_critical_region_`|Describes the critical region.|
|`_Global_interlock_`|Describes interlocked operations.|
|`_Global_priority_region_`|Describes the priority region.|

## Shared Data Access Annotations

The following table lists the annotations for shared data access.

|Annotation|Description|
|----------------|-----------------|
|`_Guarded_by_(expr)`|Annotates a variable and indicates that whenever the variable is accessed, the lock count of the lock object that's named by `expr` is at least one.|
|`_Interlocked_`|Annotates a variable and is equivalent to `_Guarded_by_(_Global_interlock_)`.|
|`_Interlocked_operand_`|The annotated function parameter is the target operand of one of the various Interlocked functions.  Those operands must have specific additional properties.|
|`_Write_guarded_by_(expr)`|Annotates a variable and indicates that whenever the variable is modified, the lock count of the lock object that's named by `expr` is at least one.|

## Smart Lock and RAII Annotations

Smart locks typically wrap native locks and manage their lifetime. The following table lists annotations that can be used with smart locks and RAII coding patterns with support for `move` semantics.

|Annotation|Description|
|----------------|-----------------|
|`_Analysis_assume_smart_lock_acquired_`|Tells the analyzer to assume that a smart lock has been acquired. This annotation expects a reference lock type as its parameter.|
|`_Analysis_assume_smart_lock_released_`|Tells the analyzer to assume that a smart lock has been released. This annotation expects a reference lock type as its parameter.|
|`_Moves_lock_(target, source)`|Describes `move constructor` operation which transfers lock state from the `source` object to the `target`. The `target` is considered a newly constructed object, so any state it had before is lost and replaced by the `source` state. The `source` is also reset to a clean state with no lock counts or aliasing target, but aliases pointing to it remain unchanged.|
|`_Replaces_lock_(target, source)`|Describes `move assignment operator` semantics where the target lock is released before transferring the state from the source. This can be regarded as a combination of `_Moves_lock_(target, source)` preceded by a `_Releases_lock_(target)`.|
|`_Swaps_locks_(left, right)`|Describes the standard `swap` behavior which assumes that objects `left` and `right` exchange their state. The state exchanged includes lock count and aliasing target, if present. Aliases that point to the `left` and `right` objects remain unchanged.|
|`_Detaches_lock_(detached, lock)`|Describes a scenario in which a lock wrapper type allows dissociation with its contained resource. This is similar to how `std::unique_ptr` works with its internal pointer: it allows programmers to extract the pointer and leave its smart pointer container in a clean state. Similar logic is supported by `std::unique_lock` and can be implemented in custom lock wrappers. The detached lock retains its state (lock count and aliasing target, if any), while the wrapper is reset to contain zero lock count and no aliasing target, while retaining its own aliases. There's no operation on lock counts (releasing and acquiring). This annotation behaves exactly as `_Moves_lock_` except that the detached argument should be **`return`** rather than **`this`**.|

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Understanding SAL](../code-quality/understanding-sal.md)
- [Annotating Function Parameters and Return Values](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotating Function Behavior](../code-quality/annotating-function-behavior.md)
- [Annotating Structs and Classes](../code-quality/annotating-structs-and-classes.md)
- [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Intrinsic Functions](../code-quality/intrinsic-functions.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
