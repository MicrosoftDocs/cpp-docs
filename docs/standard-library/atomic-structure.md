---
description: "Learn more about: atomic Structure"
title: "atomic Structure"
ms.date: "04/20/2018"
f1_keywords: ["atomic/std::atomic"]
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
---
# atomic Structure

Describes an object that performs atomic operations on a stored value of type *Ty*.

## Syntax

```cpp
template <class Ty>
struct atomic;
```

## Members

|Member|Description|
|----------|-----------------|
|**Constructor**||
|[atomic](#atomic)|Constructs an atomic object.|
|**Operators**||
|[atomic::operator Ty](#op_ty)|Reads and returns the stored value. ([atomic::load](#load))|
|[atomic::operator=](#op_eq)|Uses a specified value to replace the stored value. ([atomic::store](#store))|
|[atomic::operator++](#op_inc)|Increments the stored value. Used only by integral and pointer specializations.|
|[atomic::operator+=](#op_add_eq)|Adds a specified value to the stored value. Used only by integral and pointer specializations.|
|[atomic::operator--](#op_dec)|Decrements the stored value. Used only by integral and pointer specializations.|
|[atomic::operator-=](#op_sub_eq)|Subtracts a specified value from the stored value. Used only by integral and pointer specializations.|
|[atomic::operator&=](#op_and_eq)|Performs a bitwise and on a specified value and the stored value. Used only by integral specializations.|
|[atomic::operator&#124;=](#op_or_eq)|Performs a bitwise or on a specified value and the stored value. Used only by integral specializations.|
|[atomic::operator^=](#op_xor_eq)|Performs a bitwise exclusive or on a specified value and the stored value. Used only by integral specializations.|
|**Functions**||
|[compare_exchange_strong](#compare_exchange_strong)|Performs an *atomic_compare_and_exchange* operation on **`this`** and returns the result.|
|[compare_exchange_weak](#compare_exchange_weak)|Performs a *weak_atomic_compare_and_exchange* operation on **`this`** and returns the result.|
|[fetch_add](#fetch_add)|Adds a specified value to the stored value.|
|[fetch_and](#fetch_and)|Performs a bitwise and on a specified value and the stored value.|
|[fetch_or](#fetch_or)|Performs a bitwise or on a specified value and the stored value.|
|[fetch_sub](#fetch_sub)|Subtracts a specified value from the stored value.|
|[fetch_xor](#fetch_xor)|Performs a bitwise exclusive or on a specified value and the stored value.|
|[is_lock_free](#is_lock_free)|Specifies whether atomic operations on **`this`** are *lock free*. An atomic type is *lock free* if no atomic operations on that type use locks.|
|[load](#load)|Reads and returns the stored value.|
|[store](#store)|Uses a specified value to replace the stored value.|

## Remarks

The type *Ty* must be *trivially copyable*. That is, using [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) to copy its bytes must produce a valid *Ty* object that compares equal to the original object. The [compare_exchange_weak](#compare_exchange_weak) and [compare_exchange_strong](#compare_exchange_strong) member functions use [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md) to determine whether two *Ty* values are equal. These functions will not use a *Ty*-defined `operator==`. The member functions of `atomic` use `memcpy` to copy values of type *Ty*.

A partial specialization, `atomic<Ty*>`, exists for all pointer types. The specialization enables the addition of an offset to the managed pointer value or the subtraction of an offset from it. The arithmetic operations take an argument of type `ptrdiff_t` and adjust that argument according to the size of *Ty* to be consistent with ordinary address arithmetic.

A specialization exists for every integral type except **`bool`**. Each specialization provides a rich set of methods for atomic arithmetic and logical operations.

:::row:::
   :::column:::
      `atomic<char>`\
      `atomic<signed char>`\
      `atomic<unsigned char>`\
      `atomic<char16_t>`\
      `atomic<char32_t>`\
      `atomic<wchar_t>`\
      `atomic<short>`
   :::column-end:::
   :::column:::
      `atomic<unsigned short>`\
      `atomic<int>`\
      `atomic<unsigned int>`\
      `atomic<long>`\
      `atomic<unsigned long>`\
      `atomic<long long>`\
      `atomic<unsigned long long>`
   :::column-end:::
:::row-end:::

Integral specializations are derived from corresponding `atomic_integral` types. For example, `atomic<unsigned int>` is derived from `atomic_uint`.

## Requirements

**Header:** \<atomic>

**Namespace:** std

## <a name="atomic"></a> atomic::atomic

Constructs an atomic object.

```cpp
atomic();
atomic( const atomic& );
atomic( Ty Value ) noexcept;
```

### Parameters

*Value*\
Initialization value.

### Remarks

Atomic objects cannot be copied or moved.

Objects that are instantiations of atomic\<*Ty*> can be initialized only by the constructor that takes an argument of type *Ty* and not by using aggregate initialization. However, atomic_integral objects can be initialized only by using aggregate initialization.

```cpp
atomic<int> ai0 = ATOMIC_VAR_INIT(0);
atomic<int> ai1(0);
```

## <a name="op_ty"></a> atomic::operator *Ty*

The operator for the type specified to the template, atomic\<*Ty*>. Retrieves the stored value in **\*this**.

```cpp
atomic<Ty>::operator Ty() const volatile noexcept;
atomic<Ty>::operator Ty() const noexcept;
```

### Remarks

This operator applies the `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_eq"></a> atomic::operator=

Stores a specified value.

```cpp
Ty operator=(
   Ty Value
) volatile noexcept;
Ty operator=(
   Ty Value
) noexcept;
```

### Parameters

*Value*\
A *Ty* object.

### Return Value

Returns *Value*.

## <a name="op_inc"></a> atomic::operator++

Increments the stored value. Used only by integral and pointer specializations.

```cpp
Ty atomic<Ty>::operator++(int) volatile noexcept;
Ty atomic<Ty>::operator++(int) noexcept;
Ty atomic<Ty>::operator++() volatile noexcept;
Ty atomic<Ty>::operator++() noexcept;
```

### Return Value

The first two operators return the incremented value; the last two operators return the value before the increment. The operators use the `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_add_eq"></a> atomic::operator+=

Adds a specified value to the stored value. Used only by integral and pointer specializations.

```cpp
Ty atomic<Ty>::operator+=(
   Ty Value
) volatile noexcept;
Ty atomic<Ty>::operator+=(
   Ty Value
) noexcept;
```

### Parameters

*Value*\
An integral or pointer value.

### Return Value

A *Ty* object that contains the result of the addition.

### Remarks

This operator uses the `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_dec"></a> atomic::operator--

Decrements the stored value. Used only by integral and pointer specializations.

```cpp
Ty atomic<Ty>::operator--(int) volatile noexcept;
Ty atomic<Ty>::operator--(int) noexcept;
Ty atomic<Ty>::operator--() volatile noexcept;
Ty atomic<Ty>::operator--() noexcept;
```

### Return Value

The first two operators return the decremented value; the last two operators return the value before the decrement. The operators use the `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_sub_eq"></a> atomic::operator-=

Subtracts a specified value from the stored value. Used only by integral and pointer specializations.

```cpp
Ty atomic<Ty>::operator-=(
   Ty Value
) volatile noexcept;
Ty atomic<Ty>::operator-=(
   Ty Value
) noexcept;
```

### Parameters

*Value*\
An integral or pointer value.

### Return Value

A *Ty* object that contains the result of the subtraction.

### Remarks

This operator uses the `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_and_eq"></a> atomic::operator&=

Performs a bitwise and on a specified value and the stored value of **\*this**. Used only by integral specializations.

```cpp
atomic<Ty>::operator&= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator&= (
   Ty Value
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

### Return Value

The result of the bitwise and.

### Remarks

This operator performs a read-modify-write operation to replace the stored value of **\*this** with a bitwise and of *Value* and the current value that is stored in **\*this**, within the constraints of the `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_or_eq"></a> atomic::operator&#124;=

Performs a bitwise or on a specified value and the stored value of **\*this**. Used only by integral specializations.

```cpp
atomic<Ty>::operator|= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator|= (
   Ty Value
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

### Return Value

The result of the bitwise or.

### Remarks

This operator performs a read-modify-write operation to replace the stored value of **\*this** with a bitwise or of *Value* and the current value that is stored in **\*this**, within the constraints of the `memory_order_seq_cst` [memory_order](atomic-enums.md) constraints.

## <a name="op_xor_eq"></a> atomic::operator^=

Performs a bitwise exclusive or on a specified value and the stored value of **\*this**. Used only by integral specializations.

```cpp
atomic<Ty>::operator^= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator^= (
   Ty Value
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

### Return Value

The result of the bitwise exclusive or.

### Remarks

This operator performs a read-modify-write operation to replace the stored value of **\*this** with a bitwise exclusive or of *Value* and the current value that is stored in **\*this**, within the constraints of the `memory_order_seq_cst` [memory_order](atomic-enums.md) constraints.

## <a name="compare_exchange_strong"></a> atomic::compare_exchange_strong

Performs an atomic compare and exchange operation on **\*this**.

```cpp
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) volatile noexcept;
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) noexcept;
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) volatile noexcept;
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) noexcept;
```

### Parameters

*Exp*\
A value of type *Ty*.

*Value*\
A value of type *Ty*.

*Order1*\
First `memory_order` argument.

*Order2*\
Second `memory_order` argument.

### Return Value

A **`bool`** that indicates the result of the value comparison.

### Remarks

This atomic compare and exchange operation compares the value that is stored in **\*this** with *Exp*. If the values are equal, the operation replaces the value that is stored in **\*this** with *Value* by using a read-modify-write operation and applying the memory order constraints that are specified by *Order1*. If the values are not equal, the operation uses the value that is stored in **\*this** to replace *Exp* and applies the memory order constraints that are specified by *Order2*.

Overloads that do not have a second `memory_order` use an implicit *Order2* that is based on the value of *Order1*. If *Order1* is `memory_order_acq_rel`, *Order2* is `memory_order_acquire`. If *Order1* is `memory_order_release`, *Order2* is `memory_order_relaxed`. In all other cases, *Order2* is equal to *Order1*.

For overloads that take two `memory_order` parameters, the value of *Order2* must not be `memory_order_release` or `memory_order_acq_rel`, and must not be stronger than the value of *Order1*.

## <a name="compare_exchange_weak"></a> atomic::compare_exchange_weak

Performs a weak atomic compare and exchange operation on **\*this**.

```cpp
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) volatile noexcept;
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) noexcept;
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) volatile noexcept;
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) noexcept;
```

### Parameters

*Exp*\
A value of type *Ty*.

*Value*\
A value of type *Ty*.

*Order1*\
First `memory_order` argument.

*Order2*\
Second `memory_order` argument.

### Return Value

A **`bool`** that indicates the result of the value comparison.

### Remarks

This atomic compare and exchange operation compares the value that is stored in **\*this** with *Exp*. If the values are equal, the operation replaces the value that is stored in **\*this** with*Value* by using a read-modify-write operation and applying the memory order constraints that are specified by *Order1*. If the values are not equal, the operation uses the value that is stored in **\*this** to replace *Exp* and applies the memory order constraints that are specified by *Order2*.

A weak atomic compare and exchange operation performs an exchange if the compared values are equal. If the values are not equal, the operation is not guaranteed to perform an exchange.

Overloads that do not have a second `memory_order` use an implicit *Order2* that is based on the value of *Order1*. If *Order1* is `memory_order_acq_rel`, *Order2* is `memory_order_acquire`. If *Order1* is `memory_order_release`, *Order2* is `memory_order_relaxed`. In all other cases, *Order2* is equal to *Order1*.

For overloads that take two `memory_order` parameters, the value of *Order2* must not be `memory_order_release` or `memory_order_acq_rel`, and must not be stronger than the value of *Order1*.

## <a name="exchange"></a> atomic::exchange

Uses a specified value to replace the stored value of **\*this**.

```cpp
Ty atomic<Ty>::exchange(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::exchange(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

*Order*\
A `memory_order`.

### Return Value

The stored value of **\*this** before the exchange.

### Remarks

This operation performs a read-modify-write operation to use *Value* to replace the value that is stored in **\*this**, within the memory constraints that are specified by *Order*.

## <a name="fetch_add"></a> atomic::fetch_add

Fetches the value stored in **\*this**, and then adds a specified value to the stored value.

```cpp
Ty atomic<Ty>::fetch_add (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_add (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

*Order*\
A `memory_order`.

### Return Value

A *Ty* object that contains the value stored in **\*this** prior to the addition.

### Remarks

The `fetch_add` method performs a read-modify-write operation to atomically add *Value* to the stored value in **\*this**, and applies the memory constraints that are specified by *Order*.

## <a name="fetch_and"></a> atomic::fetch_and

Performs a bitwise and on a value and an existing value that is stored in **\*this**.

```cpp
Ty atomic<Ty>::fetch_and (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_and (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

*Order*\
A `memory_order`.

### Return Value

A *Ty* object that contains the result of the bitwise and.

### Remarks

The `fetch_and` method performs a read-modify-write operation to replace the stored value of **\*this** with a bitwise and of *Value* and the current value that is stored in **\*this**, within the memory constraints that are specified by *Order*.

## <a name="fetch_or"></a> atomic::fetch_or

Performs a bitwise or on a value and an existing value that is stored in **\*this**.

```cpp
Ty atomic<Ty>::fetch_or (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_or (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

*Order*\
A `memory_order`.

### Return Value

A *Ty* object that contains the result of the bitwise or.

### Remarks

The `fetch_or` method performs a read-modify-write operation to replace the stored value of **\*this** with a bitwise or of *Value* and the current value that is stored in **\*this**, within the memory constraints that are specified by *Order*.

## <a name="fetch_sub"></a> atomic::fetch_sub

Subtracts a specified value from the stored value.

```cpp
Ty atomic<Ty>::fetch_sub (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_sub (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

*Order*\
A `memory_order`.

### Return Value

A *Ty* object that contains the result of the subtraction.

### Remarks

The `fetch_sub` method performs a read-modify-write operation to atomically subtract *Value* from the stored value in **\*this**, within the memory constraints that are specified by *Order*.

## <a name="fetch_xor"></a> atomic::fetch_xor

Performs a bitwise exclusive or on a value and an existing value that is stored in **\*this**.

```cpp
Ty atomic<Ty>::fetch_xor (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_xor (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A value of type *Ty*.

*Order*\
A `memory_order`.

### Return Value

A *Ty* object that contains the result of the bitwise exclusive or.

### Remarks

The `fetch_xor` method performs a read-modify-write operation to replace the stored value of **\*this** with a bitwise exclusive or of *Value* and the current value that is stored in **\*this**, and applies the memory constraints that are specified by *Order*.

## <a name="is_lock_free"></a> atomic::is_lock_free

Specifies whether atomic operations on **\*this** are lock free.

```cpp
bool is_lock_free() const volatile noexcept;
```

### Return Value

true if atomic operations on **\*this** are lock free; otherwise, false.

### Remarks

An atomic type is lock free if no atomic operations on that type use locks.

## <a name="load"></a> atomic::load

Retrieves the stored value in **\*this**, within the specified memory constraints.

```cpp
Ty atomic::load(
   memory_order Order = memory_order_seq_cst
) const volatile noexcept;
Ty atomic::load(
   memory_order Order = memory_order_seq_cst
) const noexcept;
```

### Parameters

*Order*\
A `memory_order`. *Order* must not be `memory_order_release` or `memory_order_acq_rel`.

### Return Value

The retrieved value that is stored in **\*this**.

## <a name="store"></a> atomic::store

Stores a specified value.

```cpp
void atomic<Ty>::store(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
void atomic<Ty>::store(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### Parameters

*Value*\
A *Ty* object.

*Order*\
A `memory_order` constraint.

### Remarks

This member function atomically stores *Value* in **`*this`**, within the memory constraints that are specified by *Order*.

## See also

[\<atomic>](../standard-library/atomic.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
