---
description: "Learn more about: SchedulerPolicy Class"
title: "SchedulerPolicy Class"
ms.date: "11/04/2016"
f1_keywords: ["SchedulerPolicy", "concrt/concurrency::SchedulerPolicy", "concrt/concurrency::SchedulerPolicy::SchedulerPolicy", "concrt/concurrency::SchedulerPolicy::GetPolicyValue", "concrt/concurrency::SchedulerPolicy::SetConcurrencyLimits", "concrt/concurrency::SchedulerPolicy::SetPolicyValue"]
helpviewer_keywords: ["SchedulerPolicy class"]
ms.assetid: bcebf51a-65f8-45a3-809b-d1ff93527dc4
---
# SchedulerPolicy Class

The `SchedulerPolicy` class contains a set of key/value pairs, one for each policy element, that control the behavior of a scheduler instance.

## Syntax

```cpp
class SchedulerPolicy;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[SchedulerPolicy](#ctor)|Overloaded. Constructs a new scheduler policy and populates it with values for [policy keys](concurrency-namespace-enums.md) supported by Concurrency Runtime schedulers and the Resource Manager.|
|[~SchedulerPolicy Destructor](#dtor)|Destroys a scheduler policy.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[GetPolicyValue](#getpolicyvalue)|Retrieves the value of the policy key supplied as the `key` parameter.|
|[SetConcurrencyLimits](#setconcurrencylimits)|Simultaneously sets the `MinConcurrency` and `MaxConcurrency` policies on the `SchedulerPolicy` object.|
|[SetPolicyValue](#setpolicyvalue)|Sets the value of the policy key supplied as the `key` parameter and returns the old value.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator=](#operator_eq)|Assigns the scheduler policy from another scheduler policy.|

## Remarks

For more information about the policies which can be controlled using the `SchedulerPolicy` class, see [PolicyElementKey](concurrency-namespace-enums.md).

## Inheritance Hierarchy

`SchedulerPolicy`

## Requirements

**Header:** concrt.h, concrtrm.h

**Namespace:** concurrency

## <a name="getpolicyvalue"></a> GetPolicyValue

Retrieves the value of the policy key supplied as the `key` parameter.

```cpp
unsigned int GetPolicyValue(PolicyElementKey key) const;
```

### Parameters

*key*<br/>
The policy key to retrieve a value for.

### Return Value

If the key specified by the `key` parameter is supported, the policy value for the key cast to an **`unsigned int`**.

### Remarks

The method will throw [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md) for an invalid policy key.

## <a name="operator_eq"></a> operator=

Assigns the scheduler policy from another scheduler policy.

```cpp
SchedulerPolicy& operator= (const SchedulerPolicy& _RhsPolicy);
```

### Parameters

*_RhsPolicy*<br/>
The policy to assign to this policy.

### Return Value

A reference to the scheduler policy.

### Remarks

Often, the most convenient way to define a new scheduler policy is to copy an existing policy and modify it using the `SetPolicyValue` or `SetConcurrencyLimits` methods.

## <a name="ctor"></a> SchedulerPolicy

Constructs a new scheduler policy and populates it with values for [policy keys](concurrency-namespace-enums.md) supported by Concurrency Runtime schedulers and the Resource Manager.

```cpp
SchedulerPolicy();

SchedulerPolicy(
    size_t _PolicyKeyCount,
...);

SchedulerPolicy(
    const SchedulerPolicy& _SrcPolicy);
```

### Parameters

*_PolicyKeyCount*<br/>
The number of key/value pairs that follow the `_PolicyKeyCount` parameter.

*_SrcPolicy*<br/>
The source policy to copy.

### Remarks

The first constructor creates a new scheduler policy where all policies will be initialized to their default values.

The second constructor creates a new scheduler policy that uses a named-parameter style of initialization. Values after the `_PolicyKeyCount` parameter are supplied as key/value pairs. Any policy key which is not specified in this constructor will have its default value. This constructor could throw the exceptions [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md), [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) or [invalid_scheduler_policy_thread_specification](invalid-scheduler-policy-thread-specification-class.md).

The third constructor is a copy constructor. Often, the most convenient way to define a new scheduler policy is to copy an existing policy and modify it using the `SetPolicyValue` or `SetConcurrencyLimits` methods.

## <a name="dtor"></a> ~SchedulerPolicy

Destroys a scheduler policy.

```cpp
~SchedulerPolicy();
```

## <a name="setconcurrencylimits"></a> SetConcurrencyLimits

Simultaneously sets the `MinConcurrency` and `MaxConcurrency` policies on the `SchedulerPolicy` object.

```cpp
void SetConcurrencyLimits(
    unsigned int _MinConcurrency,
    unsigned int _MaxConcurrency = MaxExecutionResources);
```

### Parameters

*_MinConcurrency*<br/>
The value for the `MinConcurrency` policy key.

*_MaxConcurrency*<br/>
The value for the `MaxConcurrency` policy key.

### Remarks

The method will throw [invalid_scheduler_policy_thread_specification](invalid-scheduler-policy-thread-specification-class.md) if the value specified for the `MinConcurrency` policy is greater than that specified for the `MaxConcurrency` policy.

The method can also throw [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) for other invalid values.

## <a name="setpolicyvalue"></a> SetPolicyValue

Sets the value of the policy key supplied as the `key` parameter and returns the old value.

```cpp
unsigned int SetPolicyValue(
    PolicyElementKey key,
    unsigned int value);
```

### Parameters

*key*<br/>
The policy key to set a value for.

*value*<br/>
The value to set the policy key to.

### Return Value

If the key specified by the `key` parameter is supported, the old policy value for the key cast to an **`unsigned int`**.

### Remarks

The method will throw [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md) for an invalid policy key or any policy key whose value cannot be set by the `SetPolicyValue` method.

The method will throw [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) for a value that is not supported for the key specified by the `key` parameter.

Note that this method is not allowed to set the `MinConcurrency` or `MaxConcurrency` policies. To set these values, use the [SetConcurrencyLimits](#setconcurrencylimits) method.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[CurrentScheduler Class](currentscheduler-class.md)<br/>
[Scheduler Class](scheduler-class.md)<br/>
[Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
