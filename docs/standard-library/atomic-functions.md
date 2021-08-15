---
description: "Learn more about: &lt;atomic&gt; functions"
title: "&lt;atomic&gt; functions"
ms.date: "07/11/2018"
f1_keywords: ["atomic/std::atomic_compare_exchange_strong", "atomic/std::atomic_compare_exchange_strong_explicit", "atomic/std::atomic_compare_exchange_weak", "atomic/std::atomic_compare_exchange_weak_explicit", "atomic/std::atomic_exchange", "atomic/std::atomic_exchange_explicit", "atomic/std::atomic_fetch_add", "atomic/std::atomic_fetch_add_explicit", "atomic/std::atomic_fetch_and", "atomic/std::atomic_fetch_and_explicit", "atomic/std::atomic_fetch_or", "atomic/std::atomic_fetch_or_explicit", "atomic/std::atomic_fetch_sub", "atomic/std::atomic_fetch_sub_explicit", "atomic/std::atomic_fetch_xor", "atomic/std::atomic_fetch_xor_explicit", "atomic/std::atomic_flag_clear", "atomic/std::atomic_flag_clear_explicit", "atomic/std::atomic_flag_test_and_set", "atomic/std::atomic_flag_test_and_set_explicit", "atomic/std::atomic_init", "atomic/std::atomic_is_lock_free", "atomic/std::atomic_load", "atomic/std::atomic_load_explicit", "atomic/std::atomic_signal_fence", "atomic/std::atomic_store", "atomic/std::atomic_store_explicit", "atomic/std::atomic_thread_fence", "atomic/std::kill_dependency"]
ms.assetid: 5c53b4f8-6ff5-47d7-beb2-2d6ee3c6ea89
helpviewer_keywords: ["std::atomic_compare_exchange_strong [C++]", "std::atomic_compare_exchange_strong_explicit [C++]", "std::atomic_compare_exchange_weak [C++]", "std::atomic_compare_exchange_weak_explicit [C++]", "std::atomic_exchange [C++]", "std::atomic_exchange_explicit [C++]", "std::atomic_fetch_add [C++]", "std::atomic_fetch_add_explicit [C++]", "std::atomic_fetch_and [C++]", "std::atomic_fetch_and_explicit [C++]", "std::atomic_fetch_or [C++]", "std::atomic_fetch_or_explicit [C++]", "std::atomic_fetch_sub [C++]", "std::atomic_fetch_sub_explicit [C++]", "std::atomic_fetch_xor [C++]", "std::atomic_fetch_xor_explicit [C++]", "std::atomic_flag_clear [C++]", "std::atomic_flag_clear_explicit [C++]", "std::atomic_flag_test_and_set [C++]", "std::atomic_flag_test_and_set_explicit [C++]", "std::atomic_init [C++]", "std::atomic_is_lock_free [C++]", "std::atomic_load [C++]", "std::atomic_load_explicit [C++]", "std::atomic_signal_fence [C++]", "std::atomic_store [C++]", "std::atomic_store_explicit [C++]", "std::atomic_thread_fence [C++]", "std::kill_dependency [C++]"]
---
# &lt;atomic&gt; functions

[atomic_compare_exchange_strong](#atomic_compare_exchange_strong)\
[atomic_compare_exchange_strong_explicit](#atomic_compare_exchange_strong_explicit)\
[atomic_compare_exchange_weak](#atomic_compare_exchange_weak)\
[atomic_compare_exchange_weak_explicit](#atomic_compare_exchange_weak_explicit)\
[atomic_exchange](#atomic_exchange)\
[atomic_exchange_explicit](#atomic_exchange_explicit)\
[atomic_fetch_add](#atomic_fetch_add)\
[atomic_fetch_add_explicit](#atomic_fetch_add_explicit)\
[atomic_fetch_and](#atomic_fetch_and)\
[atomic_fetch_and_explicit](#atomic_fetch_and_explicit)\
[atomic_fetch_or](#atomic_fetch_or)\
[atomic_fetch_or_explicit](#atomic_fetch_or_explicit)\
[atomic_fetch_sub](#atomic_fetch_sub)\
[atomic_fetch_sub_explicit](#atomic_fetch_sub_explicit)\
[atomic_fetch_xor](#atomic_fetch_xor)\
[atomic_fetch_xor_explicit](#atomic_fetch_xor_explicit)\
[atomic_flag_clear](#atomic_flag_clear)\
[atomic_flag_clear_explicit](#atomic_flag_clear_explicit)\
[atomic_flag_test_and_set](#atomic_flag_test_and_set)\
[atomic_flag_test_and_set_explicit](#atomic_flag_test_and_set_explicit)\
[atomic_init](#atomic_init)\
[atomic_is_lock_free](#atomic_is_lock_free)\
[atomic_load](#atomic_load)\
[atomic_load_explicit](#atomic_load_explicit)\
[atomic_signal_fence](#atomic_signal_fence)\
[atomic_store](#atomic_store)\
[atomic_store_explicit](#atomic_store_explicit)\
[atomic_thread_fence](#atomic_thread_fence)\
[kill_dependency](#kill_dependency)

## <a name="atomic_compare_exchange_strong"></a> atomic_compare_exchange_strong

Performs an atomic compare and exchange operation.

```cpp
template <class Ty>
inline bool atomic_compare_exchange_strong(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Value) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_strong(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an *atomic* object that stores a value of type `Ty`.

*Exp*\
A pointer to a value of type `Ty`.

*Value*\
A value of type `Ty`.

### Return Value

**`true`** if the values are equal, otherwise **`false`**.

### Remarks

This method performs an atomic compare and exchange operation by using implicit `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) arguments. For more information, see [atomic_compare_exchange_strong_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_explicit).

## <a name="atomic_compare_exchange_strong_explicit"></a> atomic_compare_exchange_strong_explicit

Performs an *atomic compare and exchange* operation.

```cpp
template <class T>
inline bool atomic_compare_exchange_strong_explicit(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_strong_explicit(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `Ty`.

*Exp*\
A pointer to a value of type `Ty`.

*Value*\
A value of type `Ty`.

*Order1*\
First [memory_order](../standard-library/atomic-enums.md#memory_order_enum) argument.

*Order2*\
Second `memory_order` argument. The value of *Order2* cannot be `memory_order_release` or `memory_order_acq_rel`, it cannot be stronger than the value of *Order1*.

### Return Value

**`true`** if the values are equal, otherwise **`false`**.

### Remarks

An *atomic compare and exchange operation* compares the value that is stored in the object that is pointed to by *Atom* against the value that is pointed to by *Exp*. If the values are equal, the value that is stored in the object that is pointed to by *atom* is replaced with *Value* by using a `read-modify-write` operation and applying the memory order constraints that are specified by *Order1*. If the values are not equal, the operation replaces the value that is pointed to by *Exp* with the value that is stored in the object that is pointed to by *Atom* and applies the memory order constraints that are specified by *Order2*.

## <a name="atomic_compare_exchange_weak"></a> atomic_compare_exchange_weak

Performs a *weak atomic compare and exchange* operation.

```cpp
template <class Ty>
inline bool atomic_compare_exchange_strong(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_strong(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `Ty`.

*Exp*\
A pointer to a value of type `Ty`.

*Value*\
A value of type `Ty`.

### Return Value

**`true`** if the values are equal, otherwise **`false`**.

### Remarks

This method performs a *weak atomic compare and exchange operation* that has implicit `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) arguments. For more information, see [atomic_compare_exchange_weak_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_explicit).

## <a name="atomic_compare_exchange_weak_explicit"></a> atomic_compare_exchange_weak_explicit

Performs a *weak atomic compare and exchange* operation.

```cpp
template <class Ty>
inline bool atomic_compare_exchange_weak_explicit(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_weak_explicit(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `Ty`.

*Exp*\
A pointer to a value of type `Ty`.

*Value*\
A value of type `Ty`.

*Order1*\
First [memory_order](../standard-library/atomic-enums.md#memory_order_enum) argument.

*Order2*\
Second `memory_order` argument. The value of *Order2* cannot be `memory_order_release` or `memory_order_acq_rel`, nor can it be stronger than the value of *Order1*.

### Return Value

**`true`** if the values are equal, otherwise **`false`**.

### Remarks

Both the strong and weak flavors of an *atomic compare and exchange operation* guarantee that they do not store the new value if the expected and current values are not equal. The strong flavor guarantees that it will store the new value if the expected and current values are equal. The weak flavor may sometimes return **`false`** and not store the new value even if the current and expected values are equal. In other words, the function will return **`false`**, but a later examination of the expected value might reveal that it did not change, and therefore should have compared as equal.

## <a name="atomic_exchange"></a> atomic_exchange

Uses *Value* to replace the stored value of *Atom*.

```cpp
template <class T>
inline Ty atomic_exchange(volatile atomic<Ty>* _Atom, Ty Value) noexcept;

template <class Ty>
inline T atomic_exchange(atomic<Ty>* Atom, Ty Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `Ty`.

*Value*\
A value of type `Ty`.

### Return Value

The stored value of *Atom* before the exchange.

### Remarks

The `atomic_exchange` function performs a `read-modify-write` operation to exchange the value that is stored in *Atom* with *Value*, using the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_exchange_explicit"></a> atomic_exchange_explicit

Replaces the stored value of *Atom* with *Value*.

```cpp
template <class Ty>
inline Ty atomic_exchange_explicit(
    volatile atomic<Ty>* Atom,
    Ty Value,
    memory_order Order) noexcept;

template <class Ty>
inline Ty atomic_exchange_explicit(
    atomic<Ty>* Atom,
    Ty Value,
    memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `Ty`.

*Value*\
A value of type `Ty`.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### Return Value

The stored value of *Atom* before the exchange.

### Remarks

The `atomic_exchange_explicit` function performs a `read-modify-write` operation to exchange the value that is stored in *Atom* with *Value*, within the memory constraints that are specified by *Order*.

## <a name="atomic_fetch_add"></a> atomic_fetch_add

Adds a value to an existing value that is stored in an `atomic` object.

```cpp
template <class T>
T* atomic_fetch_add(volatile atomic<T*>* Atom, ptrdiff_t Value) noexcept;
template <class T>
T* atomic_fetch_add(atomic<T*>* Atom, ptrdiff_t Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a pointer to type `T`.

*Value*\
A value of type `ptrdiff_t`.

### Return Value

The value of the pointer contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_add` function performs a `read-modify-write` operation to atomically add *Value* to the stored value in *Atom*, using the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraint.

When the atomic type is `atomic_address`, *Value* has type `ptrdiff_t` and the operation treats the stored pointer as a `char *`.

This operation is also overloaded for integral types:

```cpp
integral atomic_fetch_add(volatile atomic-integral* Atom, integral Value) noexcept;

integral atomic_fetch_add(atomic-integral* Atom, integral Value) noexcept;
```

## <a name="atomic_fetch_add_explicit"></a> atomic_fetch_add_explicit

Adds a value to an existing value that is stored in an `atomic` object.

```cpp
template <class T>
T* atomic_fetch_add_explicit(
    volatile atomic<T*>* Atom,
    ptrdiff_t Value,
    memory_order Order) noexcept;

template <class T>
T* atomic_fetch_add_explicit(
    atomic<T*>* Atom,
    ptrdiff_t Value,
    memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a pointer to type `T`.

*Value*\
A value of type `ptrdiff_t`.

### Return Value

The value of the pointer contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_add_explicit` function performs a `read-modify-write` operation to atomically add *Value* to the stored value in *Atom*, within the [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints that are specified by `Order`.

When the atomic type is `atomic_address`, `Value` has type `ptrdiff_t` and the operation treats the stored pointer as a `char *`.

This operation is also overloaded for integral types:

```cpp
integral atomic_fetch_add_explicit(
    volatile atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;

integral atomic_fetch_add_explicit(
    atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;
```

## <a name="atomic_fetch_and"></a> atomic_fetch_and

Performs a bitwise `and` on a value and an existing value that is stored in an `atomic` object.

```cpp
template <class T>
inline T atomic_fetch_and(volatile atomic<T>* Atom, T Value) noexcept;
template <class T>
inline T atomic_fetch_and(volatile atomic<T>* Atom, T Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

*Value*\
A value of type `T`.

### Return Value

The value contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_and` function performs a `read-modify-write` operation to replace the stored value of *Atom* with a bitwise `and` of *Value* and the current value that is stored in *Atom*, using the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraint.

## <a name="atomic_fetch_and_explicit"></a> atomic_fetch_and_explicit

Performs a bitwise `and` of a value and an existing value that is stored in an `atomic` object.

```cpp
template <class T>
inline T atomic_fetch_and_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;

template <class T>
inline T atomic_fetch_and_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

*Value*\
A value of type `T`.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### Return Value

The value contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_and_explicit` function performs a `read-modify-write` operation to replace the stored value of *Atom* with a bitwise `and` of *Value* and the current value that is stored in *Atom*, within the memory constraints that are specified by *Order*.

## <a name="atomic_fetch_or"></a> atomic_fetch_or

Performs a bitwise `or` on a value and an existing value that is stored in an `atomic` object.

```cpp
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

*Value*\
A value of type `T`.

### Return Value

The value contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_or` function performs a `read-modify-write` operation to replace the stored value of *Atom* with a bitwise `or` of *Value* and the current value that is stored in *Atom*, using the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_fetch_or_explicit"></a> atomic_fetch_or_explicit

Performs a bitwise `or` on a value and an existing value that is stored in an `atomic` object.

```cpp
template <class T>
inline T atomic_fetch_or_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;

template <class T>
inline T atomic_fetch_or_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

*Value*\
A value of type `T`.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### Return Value

The value contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_or_explicit` function performs a `read-modify-write` operation to replace the stored value of *Atom* with a bitwise `or` of *Value* and the current value that is stored in *Atom*, within the [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints specified by *Order*.

## <a name="atomic_fetch_sub"></a> atomic_fetch_sub

Subtracts a value from an existing value that is stored in an `atomic` object.

```cpp
template <class T>
T* atomic_fetch_sub(
    volatile atomic<T*>* Atom,
    ptrdiff_t Value) noexcept;

template <class T>
T* atomic_fetch_sub(
    atomic<T*>* Atom,
    ptrdiff_t Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a pointer to type `T`.

*Value*\
A value of type `ptrdiff_t`.

### Return Value

The value of the pointer contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_sub` function performs a `read-modify-write` operation to atomically subtract *Value* from the stored value in *Atom*, using the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraint.

When the atomic type is `atomic_address`, *Value* has type `ptrdiff_t` and the operation treats the stored pointer as a `char *`.

This operation is also overloaded for integral types:

```cpp
integral atomic_fetch_sub(volatile atomic-integral* Atom, integral Value) noexcept;
integral atomic_fetch_sub(atomic-integral* Atom, integral Value) noexcept;
```

## <a name="atomic_fetch_sub_explicit"></a> atomic_fetch_sub_explicit

Subtracts a value from an existing value that is stored in an `atomic` object.

```cpp
template <class T>
T* atomic_fetch_sub_explicit(
    volatile atomic<T*>* Atom,
    ptrdiff_t Value,
    memory_order Order) noexcept;

template <class T>
T* atomic_fetch_sub_explicit(
    atomic<T*>* Atom,
    ptrdiff_t Value, memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a pointer to type `T`.

*Value*\
A value of type `ptrdiff_t`.

### Return Value

The value of the pointer contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_sub_explicit` function performs a `read-modify-write` operation to atomically subtract *Value* from the stored value in *Atom*, within the [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints that are specified by `Order`.

When the atomic type is `atomic_address`, *Value* has type `ptrdiff_t` and the operation treats the stored pointer as a `char *`.

This operation is also overloaded for integral types:

```cpp
integral atomic_fetch_sub_explicit(
    volatile atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;

integral atomic_fetch_sub_explicit(
    atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;
```

## <a name="atomic_fetch_xor"></a> atomic_fetch_xor

Performs a bitwise `exclusive or` on a value and an existing value that is stored in an `atomic` object.

```cpp
template <class T>
inline T atomic_fetch_xor(volatile atomic<T>* Atom, T Value) noexcept;

template <class T>
inline T atomic_fetch_xor(volatile atomic<T>* Atom, T Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

*Value*\
A value of type `T`.

### Return Value

The value contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_xor` function performs a `read-modify-write` operation to replace the stored value of *Atom* with a bitwise `exclusive or` of *Value* and the current value that is stored in *Atom*, using the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_fetch_xor_explicit"></a> atomic_fetch_xor_explicit

Performs a bitwise `exclusive or` on a value and an existing value that is stored in an `atomic` object.

```cpp
template <class T>
inline T atomic_fetch_xor_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;

template <class T>
inline T atomic_fetch_xor_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

*Value*\
A value of type `T`.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### Return Value

The value contained by the atomic object immediately before the operation was performed.

### Remarks

The `atomic_fetch_xor_explicit` function performs a `read-modify-write` operation to replace the stored value of *Atom* with a bitwise `exclusive or` of *Value* and the current value that is stored in *Atom*, within the [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints that are specified by *Order*.

## <a name="atomic_flag_clear"></a> atomic_flag_clear

Sets the **`bool`** flag in an [atomic_flag](../standard-library/atomic-flag-structure.md) object to **`false`**, within the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline void atomic_flag_clear(volatile atomic_flag* Flag) noexcept;
inline void atomic_flag_clear(atomic_flag* Flag) noexcept;
```

### Parameters

*Flag*\
A pointer to an `atomic_flag` object.

## <a name="atomic_flag_clear_explicit"></a> atomic_flag_clear_explicit

Sets the **`bool`** flag in an [atomic_flag](../standard-library/atomic-flag-structure.md) object to **`false`**, within the specified [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints.

```cpp
inline void atomic_flag_clear_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline void atomic_flag_clear_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### Parameters

*Flag*\
A pointer to an `atomic_flag` object.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_flag_test_and_set"></a> atomic_flag_test_and_set

Sets the **`bool`** flag in an [atomic_flag](../standard-library/atomic-flag-structure.md) object to **`true`**, within the constraints of the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline bool atomic_flag_test_and_set(volatile atomic_flag* Flag,) noexcept;
inline bool atomic_flag_test_and_set(atomic_flag* Flag,) noexcept;
```

### Parameters

*Flag*\
A pointer to an `atomic_flag` object.

### Return Value

The initial value of *Flag*.

## <a name="atomic_flag_test_and_set_explicit"></a> atomic_flag_test_and_set_explicit

Sets the **`bool`** flag in an [atomic_flag](../standard-library/atomic-flag-structure.md) object to **`true`**, within the specified [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints.

```cpp
inline bool atomic_flag_test_and_set_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline bool atomic_flag_test_and_set_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### Parameters

*Flag*\
A pointer to an `atomic_flag` object.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### Return Value

The initial value of *Flag*.

## <a name="atomic_init"></a> atomic_init

Sets the stored value in an `atomic` object.

```cpp
template <class Ty>
inline void atomic_init(volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline void atomic_init(atomic<Ty>* Atom, Ty Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `Ty`.

*Value*\
A value of type `Ty`.

### Remarks

`atomic_init` is not an atomic operation. It is not thread-safe.

## <a name="atomic_is_lock_free"></a> atomic_is_lock_free

Specifies whether atomic operations on an `atomic` object are *lock-free*.

```cpp
template <class T>
inline bool atomic_is_lock_free(const volatile atomic<T>* Atom) noexcept;
template <class T>
inline bool atomic_is_lock_free(const atomic<T>* Atom) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that stores a value of type `T`.

### Return Value

**`true`** if atomic operations on *Atom* are lock-free; otherwise, **`false`**.

### Remarks

An atomic type is lock-free if no atomic operations on that type use locks. If this function returns true, the type is safe to use in signal-handlers.

## <a name="atomic_load"></a> atomic_load

Retrieves the stored value in an `atomic` object.

```cpp
template <class Ty>
inline Ty atomic_load(const volatile atomic<Ty>* Atom) noexcept;
template <class Ty>
inline Ty atomic_load(const atomic<Ty>* Atom) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that contains a value of type `Ty`.

### Return Value

The retrieved value that is stored in *Atom*.

### Remarks

`atomic_load` implicitly uses the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_load_explicit"></a> atomic_load_explicit

Retrieves the stored value in an `atomic` object, within a specified [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
template <class Ty>
inline Ty atomic_load_explicit(const volatile atomic<Ty>* Atom, memory_order Order) noexcept;
template <class Ty>
inline Ty atomic_load_explicit(const atomic<Ty>* Atom, memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that contains a value of type `Ty`.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Do not use `memory_order_release` or `memory_order_acq_rel`.

### Return Value

The retrieved value that is stored in *Atom*.

## <a name="atomic_signal_fence"></a> atomic_signal_fence

Acts as a *fence*—which is a memory synchronization primitive that enforces ordering between load/store operations—between other fences in a calling thread that have signal handlers that are executed in the same thread.

```cpp
inline void atomic_signal_fence(memory_order Order) noexcept;
```

### Parameters

*Order*\
A memory ordering constraint that determines fence type.

### Remarks

The *Order* argument determines fence type.

|Value|Description|
|-|-|
|`memory_order_relaxed`|The fence has no effect.|
|`memory_order_consume`|The fence is an acquire fence.|
|`memory_order_acquire`|The fence is an acquire fence.|
|`memory_order_release`|The fence is a release fence.|
|`memory_order_acq_rel`|The fence is both an acquire fence and a release fence.|
|`memory_order_seq_cst`|The fence is both an acquire fence and a release fence, and is sequentially consistent.|

## <a name="atomic_store"></a> atomic_store

Atomically stores a value in an atomic object.

```cpp
template <class Ty>
inline Ty atomic_store_explicit(const volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline Ty atomic_store_explicit(const atomic<Ty>* Atom, T Value) noexcept;
```

### Parameters

*Atom*\
A pointer to an atomic object that contains a value of type `Ty`.

*Value*\
A value of type `Ty`.

### Remarks

`atomic_store` stores *Value* in the object that is pointed to by *Atom*, within the `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraint.

## <a name="atomic_store_explicit"></a> atomic_store_explicit

Atomically stores a value in an atomic object.

```cpp
template <class Ty>
inline Ty atomic_store_explicit(
    const volatile atomic<Ty>* Atom,
    Ty Value,
    memory_order Order) noexcept;

template <class Ty>
inline Ty atomic_store_explicit(
    const atomic<Ty>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### Parameters

*Atom*\
A pointer to an `atomic` object that contains a value of type `Ty`.

*Value*\
A value of type `Ty`.

*Order*\
A [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Do not use `memory_order_consume`, `memory_order_acquire`, or `memory_order_acq_rel`.

### Remarks

`atomic_store` stores *Value* in the object that is pointed to by *Atom*, within the `memory_order` that is specified by *Order*.

## <a name="atomic_thread_fence"></a> atomic_thread_fence

Acts as a *fence*—which is a memory synchronization primitive that enforces ordering between load/store operations—without an associated atomic operation.

```cpp
inline void atomic_thread_fence(memory_order Order) noexcept;
```

### Parameters

*Order*\
A memory ordering constraint that determines fence type.

### Remarks

The *Order* argument determines fence type.

|Value|Description|
|-|-|
|`memory_order_relaxed`|The fence has no effect.|
|`memory_order_consume`|The fence is an acquire fence.|
|`memory_order_acquire`|The fence is an acquire fence.|
|`memory_order_release`|The fence is a release fence.|
|`memory_order_acq_rel`|The fence is both an acquire fence and a release fence.|
|`memory_order_seq_cst`|The fence is both an acquire fence and a release fence, and is sequentially consistent.|

## <a name="kill_dependency"></a> kill_dependency

Removes a dependency.

```cpp
template <class Ty>
Ty kill_dependency(Ty Arg) noexcept;
```

### Parameters

*Arg*\
A value of type `Ty`.

### Return Value

The return value is *Arg*. The evaluation of *Arg* does not carry a dependency to the function call. By breaking a possible dependency chain, the function might permit the compiler to generate more efficient code.

## See also

[\<atomic>](../standard-library/atomic.md)
