---
description: "Learn more about: C++ Core Guidelines checker reference"
title: C++ Core Guidelines checker reference
ms.date: 03/22/2018
ms.topic: reference
helpviewer_keywords:
  - "code analysis, C++ core check"
ms.assetid: f1429463-136e-41ed-8a75-a8dbf0b4fd89
---
# C++ Core Guidelines checker reference

This section lists C++ Core Guidelines Checker warnings. For information about Code Analysis, see [`/analyze` (Code Analysis)](../build/reference/analyze-code-analysis.md) and [Quick Start: Code Analysis for C/C++](../code-quality/quick-start-code-analysis-for-c-cpp.md).

> [!NOTE]
> Some warnings belong to more than one group, and not all warnings have a complete reference topic.

## OWNER_POINTER Group

[C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT](C26402.md)\
Return a scoped object instead of a heap-allocated if it has a move constructor. See [C++ Core Guidelines R.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26403 RESET_OR_DELETE_OWNER](C26403.md)\
Reset or explicitly delete an owner\<T> pointer '*variable*'. See [C++ Core Guidelines R.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26404 DONT_DELETE_INVALID](C26404.md)\
Do not delete an owner\<T> that may be in invalid state. See [C++ Core Guidelines R.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26405 DONT_ASSIGN_TO_VALID](C26405.md)\
Do not assign to an owner\<T> that may be in valid state. See [C++ Core Guidelines R.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26406 DONT_ASSIGN_RAW_TO_OWNER](C26406.md)\
Do not assign a raw pointer to an owner\<T>. See [C++ Core Guidelines R.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26407 DONT_HEAP_ALLOCATE_UNNECESSARILY](C26407.md)\
Prefer scoped objects, don't heap-allocate unnecessarily. See [C++ Core Guidelines R.5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[C26429 USE_NOTNULL](C26429.md)\
Symbol '*symbol*' is never tested for nullness, it can be marked as not_null. See [C++ Core Guidelines F.23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26430 TEST_ON_ALL_PATHS](C26430.md)\
Symbol '*symbol*' is not tested for nullness on all paths. See [C++ Core Guidelines F.23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26431 DONT_TEST_NOTNULL](C26431.md)\
The type of expression '*expr*' is already gsl::not_null. Do not test it for nullness. See [C++ Core Guidelines F.23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

## RAW_POINTER Group

[C26400 NO_RAW_POINTER_ASSIGNMENT](c26400.md)\
Do not assign the result of an allocation or a function call with an owner\<T> return value to a raw pointer; use owner\<T> instead. See [C++ Core Guidelines I.11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Ri-raw).

[C26401 DONT_DELETE_NON_OWNER](c26401.md)\
Do not delete a raw pointer that is not an owner\<T>. See [C++ Core Guidelines I.11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Ri-raw).

[C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT](C26402.md)\
Return a scoped object instead of a heap-allocated if it has a move constructor. See [C++ Core Guidelines R.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26408 NO_MALLOC_FREE](C26408.md)\
Avoid malloc() and free(), prefer the nothrow version of new with delete. See [C++ Core Guidelines R.10](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-mallocfree).

[C26409 NO_NEW_DELETE](C26409.md)\
Avoid calling new and delete explicitly, use std::make_unique\<T> instead. See [C++ Core Guidelines R.11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-newdelete).

[C26429 USE_NOTNULL](C26429.md)\
Symbol '*symbol*' is never tested for nullness, it can be marked as not_null. See [C++ Core Guidelines F.23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26430 TEST_ON_ALL_PATHS](C26430.md)\
Symbol '*symbol*' is not tested for nullness on all paths. See [C++ Core Guidelines F.23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26431 DONT_TEST_NOTNULL](C26431.md)\
The type of expression '*expr*' is already gsl::not_null. Do not test it for nullness. See [C++ Core Guidelines F.23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26481 NO_POINTER_ARITHMETIC](C26481.md)\
Don't use pointer arithmetic. Use span instead. See [C++ Core Guidelines Bounds.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds).

[C26485 NO_ARRAY_TO_POINTER_DECAY](C26485.md)\
Expression '*expr*': No array to pointer decay. See [C++ Core Guidelines Bounds.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds).

## UNIQUE_POINTER Group

[C26410 NO_REF_TO_CONST_UNIQUE_PTR](C26410.md)\
The parameter '*parameter*' is a reference to `const` unique pointer, use const T* or const T& instead. See [C++ Core Guidelines R.32](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-uniqueptrparam).

[C26411 NO_REF_TO_UNIQUE_PTR](C26411.md)\
The parameter '*parameter*' is a reference to unique pointer and it is never reassigned or reset, use T* or T& instead. See [C++ Core Guidelines R.33](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-reseat).

[C26414 RESET_LOCAL_SMART_PTR](C26414.md)\
Move, copy, reassign, or reset a local smart pointer '*symbol*'. See [C++ Core Guidelines R.5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[C26415 SMART_PTR_NOT_NEEDED](C26415.md)\
Smart pointer parameter '*symbol*' is used only to access contained pointer. Use T* or T& instead. See [C++ Core Guidelines R.30](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-smartptrparam).

## SHARED_POINTER Group

[C26414 RESET_LOCAL_SMART_PTR](C26414.md)\
Move, copy, reassign, or reset a local smart pointer '*symbol*'. See [C++ Core Guidelines R.5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[C26415 SMART_PTR_NOT_NEEDED](C26415.md)\
Smart pointer parameter '*symbol*' is used only to access contained pointer. Use T* or T& instead. See [C++ Core Guidelines R.30](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-smartptrparam).

[C26416 NO_RVALUE_REF_SHARED_PTR](C26416.md)\
Shared pointer parameter '*symbol*' is passed by rvalue reference. Pass by value instead. See [C++ Core Guidelines R.34](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam-owner).

[C26417 NO_LVALUE_REF_SHARED_PTR](C26417.md)\
Shared pointer parameter '*symbol*' is passed by reference and not reset or reassigned. Use T* or T& instead. See [C++ Core Guidelines R.35](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam).

[C26418 NO_VALUE_OR_CONST_REF_SHARED_PTR](C26418.md)\
Shared pointer parameter '*symbol*' is not copied or moved. Use T* or T& instead. See [C++ Core Guidelines R.36](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam-const).

## DECLARATION Group

[C26426 NO_GLOBAL_INIT_CALLS](C26426.md)\
Global initializer calls a non-constexpr function '*symbol*'. See [C++ Core Guidelines I.22](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i22-avoid-complex-initialization-of-global-objects).

[C26427 NO_GLOBAL_INIT_EXTERNS](C26427.md)\
Global initializer accesses extern object '*symbol*'. See [C++ Core Guidelines I.22](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i22-avoid-complex-initialization-of-global-objects).

[C26444 NO_UNNAMED_RAII_OBJECTS](c26444.md)\
Avoid unnamed objects with custom construction and destruction. See [ES.84: Don't (try to) declare a local variable with no name](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## CLASS Group

[C26432 DEFINE_OR_DELETE_SPECIAL_OPS](C26432.md)\
If you define or delete any default operation in the type '*symbol*', define or delete them all. See [C++ Core Guidelines C.21](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c21-if-you-define-or-delete-any-default-operation-define-or-delete-them-all).

[C26433 OVERRIDE_EXPLICITLY](c26433.md)\
Function '*symbol*' should be marked with 'override'. See [C.128: Virtual functions should specify exactly one of virtual, override, or final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c128-virtual-functions-should-specify-exactly-one-of-virtual-override-or-final).

[C26434 DONT_HIDE_METHODS](C26434.md)\
Function '*symbol_1*' hides a non-virtual function '*symbol_2*'. See [C++ Core Guidelines C.128](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c128-virtual-functions-should-specify-exactly-one-of-virtual-override-or-final).

[C26435 SINGLE_VIRTUAL_SPECIFICATION](c26435.md)\
Function '*symbol*' should specify exactly one of 'virtual', 'override', or 'final'. See [C.128: Virtual functions should specify exactly one of virtual, override, or final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

[C26436 NEED_VIRTUAL_DTOR](C26436.md)\
The type '*symbol*' with a virtual function needs either public virtual or protected non-virtual destructor. See [C++ Core Guidelines C.35](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c35-a-base-class-destructor-should-be-either-public-and-virtual-or-protected-and-nonvirtual).

[C26443 NO_EXPLICIT_DTOR_OVERRIDE](c26443.md)\
Overriding destructor should not use explicit 'override' or 'virtual' specifiers. See [C.128: Virtual functions should specify exactly one of virtual, override, or final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## STYLE Group

[C26438 NO_GOTO](C26438.md)\
Avoid `goto`. See [C++ Core Guidelines ES.76](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es76-avoid-goto).

## FUNCTION Group

[C26439 SPECIAL_NOEXCEPT](C26439.md)\
This kind of function may not throw. Declare it **`noexcept`**. See [C++ Core Guidelines F.6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

[C26440 DECLARE_NOEXCEPT](C26440.md)\
Function '*symbol*' can be declared **`noexcept`**. See [C++ Core Guidelines F.6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

[C26447 DONT_THROW_IN_NOEXCEPT](c26447.md)\
The function is declared **`noexcept`** but calls a function which may throw exceptions.
See [C++ Core Guidelines:  F.6: If your function may not throw, declare it noexcept](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

## CONCURRENCY Group

[C26441 NO_UNNAMED_GUARDS](C26441.md)\
Guard objects must be named. See [C++ Core Guidelines cp.44](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#cp44-remember-to-name-your-lock_guards-and-unique_locks).

## CONST Group

[C26460 USE_CONST_REFERENCE_ARGUMENTS](c26460.md)\
The reference argument '*argument*' for function '*function*' can be marked as `const`. See [C++ Core Guidelines con.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-ref).

[C26461 USE_CONST_POINTER_ARGUMENTS](c26461.md):\
The pointer argument '*argument*' for function '*function*' can be marked as a pointer to `const`. See [C++ Core Guidelines con.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-ref).

[C26462 USE_CONST_POINTER_FOR_VARIABLE](c26462.md)\
The value pointed to by '*variable*' is assigned only once, mark it as a pointer to `const`. See [C++ Core Guidelines con.4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26463 USE_CONST_FOR_ELEMENTS](c26463.md)\
The elements of array '*array*' are assigned only once, mark elements `const`. See [C++ Core Guidelines con.4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26464 USE_CONST_POINTER_FOR_ELEMENTS](c26464.md)\
The values pointed to by elements of array '*array*' are assigned only once, mark elements as pointer to `const`. See [C++ Core Guidelines con.4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26496 USE_CONST_FOR_VARIABLE](c26496.md)\
The variable '*variable*' is assigned only once, mark it as `const`. See [C++ Core Guidelines con.4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26497 USE_CONSTEXPR_FOR_FUNCTION](c26497.md)\
This function *function* could be marked `constexpr` if compile-time evaluation is desired. See [C++ Core Guidelines F.4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rf-constexpr).

[C26498 USE_CONSTEXPR_FOR_FUNCTIONCALL](c26498.md)\
This function call *function* can use `constexpr` if compile-time evaluation is desired. See [C++ Core Guidelines con.5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-constexpr).

## TYPE Group

[C26437 DONT_SLICE](C26437.md)\
Do not slice. See [C++ Core Guidelines ES.63](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es63-dont-slice).

[C26465 NO_CONST_CAST_UNNECESSARY](c26465.md)\
Don't use `const_cast` to cast away `const`. `const_cast` is not required; constness or volatility is not being removed by this conversion. See [C++ Core Guidelines Type.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-constcast).

[C26466 NO_STATIC_DOWNCAST_POLYMORPHIC](c26466.md)\
Don't use `static_cast` downcasts. A cast from a polymorphic type should use dynamic_cast. See [C++ Core Guidelines Type.2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-downcast).

[C26471 NO_REINTERPRET_CAST_FROM_VOID_PTR](c26471.md)\
Don't use `reinterpret_cast`. A cast from void* can use `static_cast`. See [C++ Core Guidelines Type.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26472 NO_CASTS_FOR_ARITHMETIC_CONVERSION](C26472.md)\
Don't use a `static_cast` for arithmetic conversions. Use brace initialization, gsl::narrow_cast, or gsl::narrow. See [C++ Core Guidelines Type.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26473 NO_IDENTITY_CAST](C26473.md)\
Don't cast between pointer types where the source type and the target type are the same. See [C++ Core Guidelines Type.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26474 NO_IMPLICIT_CAST](C26474.md)\
Don't cast between pointer types when the conversion could be implicit. See [C++ Core Guidelines Type.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26475 NO_FUNCTION_STYLE_CASTS](C26475.md)\
Do not use function style C-casts. See [C++ Core Guidelines ES.49](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es49-if-you-must-use-a-cast-use-a-named-cast).

[C26490 NO_REINTERPRET_CAST](c26490.md)\
Don't use `reinterpret_cast`. See [C++ Core Guidelines Type.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26491 NO_STATIC_DOWNCAST](c26490.md)\
Don't use `static_cast` downcasts. See [C++ Core Guidelines Type.2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26492 NO_CONST_CAST](c26492.md)\
Don't use `const_cast` to cast away `const`. See [C++ Core Guidelines Type.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26493 NO_CSTYLE_CAST](c26493.md)\
Don't use C-style casts. See [C++ Core Guidelines Type.4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26494 VAR_USE_BEFORE_INIT](c26494.md)\
Variable '*variable*' is uninitialized. Always initialize an object. See [C++ Core Guidelines Type.5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26495 MEMBER_UNINIT](c26495.md)\
Variable '*variable*' is uninitialized. Always initialize a member variable. See [C++ Core Guidelines Type.6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

## BOUNDS Group

[C26446 USE_GSL_AT](c26446.md)\
Prefer to use `gsl::at()` instead of unchecked subscript operator. See [C++ Core Guidelines:  Bounds.4: Don't use standard-library functions and types that are not bounds-checked](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile).

[C26481 NO_POINTER_ARITHMETIC](C26481.md)\
Don't use pointer arithmetic. Use span instead. See [C++ Core Guidelines Bounds.1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[C26482 NO_DYNAMIC_ARRAY_INDEXING](c26482.md)\
Only index into arrays using constant expressions. See [C++ Core Guidelines Bounds.2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[C26483 STATIC_INDEX_OUT_OF_RANGE](c26483.md)\
Value *value* is outside the bounds (0, *bound*) of variable '*variable*'. Only index into arrays using constant expressions that are within bounds of the array. See [C++ Core Guidelines Bounds.2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[C26485 NO_ARRAY_TO_POINTER_DECAY](C26485.md)\
Expression '*expr*': No array to pointer decay. See [C++ Core Guidelines Bounds.3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

## GSL Group

[C26445 NO_SPAN_REF](c26445.md)\
A reference to `gsl::span` or `std::string_view` may be an indication of a lifetime issue.
See [C++ Core Guidelines GSL.view: Views](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#gslview-views)

[C26446 USE_GSL_AT](c26446.md)\
Prefer to use `gsl::at()` instead of unchecked subscript operator. See [C++ Core Guidelines:  Bounds.4: Don't use standard-library functions and types that are not bounds-checked](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile).

[C26448 USE_GSL_FINALLY](c26448.md)\
Consider using `gsl::finally` if final action is intended. See [C++ Core Guidelines:  GSL.util: Utilities](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-utilities).

[C26449 NO_SPAN_FROM_TEMPORARY](c26449.md)\
`gsl::span` or `std::string_view` created from a temporary will be invalid when the temporary is invalidated. See
[C++ Core Guidelines: GSL.view: Views](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#gslview-views).

## Deprecated Warnings

The following warnings are present in an early experimental rule set of the core guidelines checker, but are now deprecated and can be safely ignored. The warnings are superseded by warnings from the list above.

- 26412 DEREF_INVALID_POINTER
- 26413 DEREF_NULLPTR
- 26420 ASSIGN_NONOWNER_TO_EXPLICIT_OWNER
- 26421 ASSIGN_VALID_OWNER
- 26422 VALID_OWNER_LEAVING_SCOPE
- 26423 ALLOCATION_NOT_ASSIGNED_TO_OWNER
- 26424 VALID_ALLOCATION_LEAVING_SCOPE
- 26425 ASSIGNING_TO_STATIC
- 26499 NO_LIFETIME_TRACKING

## See also

[Using the C++ Core Guidelines Checkers](using-the-cpp-core-guidelines-checkers.md)
