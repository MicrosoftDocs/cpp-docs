---
title: Annotating function parameters and return values
description: "Reference guide to function parameter and return value annotations."
ms.date: 10/15/2019
ms.topic: "conceptual"
f1_keywords:
  - "_Outptr_opt_result_bytebuffer_to_"
  - "_Inout_updates_all_opt_"
  - "_Post_equal_to_"
  - "_Outptr_opt_result_maybenull_"
  - "_Out_writes_bytes_all_"
  - "_Out_writes_all_opt_"
  - "_In_opt_"
  - "_Outptr_"
  - "_Outptr_result_maybenull_"
  - "_Outref_result_bytebuffer_all_maybenull_"
  - "_Inout_updates_opt_z_"
  - "_Inout_updates_z_"
  - "_Out_writes_"
  - "_Out_writes_to_ptr_opt_z_"
  - "_In_reads_to_ptr_opt_"
  - "_Ret_writes_to_maybenull_"
  - "_Outref_result_maybenull_"
  - "_Ret_writes_bytes_"
  - "_Outptr_result_bytebuffer_"
  - "_Out_writes_opt_"
  - "_Inout_updates_bytes_opt_"
  - "_In_z_"
  - "_Inout_updates_to_"
  - "_Ret_maybenull_"
  - "_Ret_writes_bytes_to_"
  - "_Ret_z_"
  - "_COM_Outptr_"
  - "_Ret_maybenull_z_"
  - "_Out_opt_"
  - "_In_reads_opt_z_"
  - "_Outptr_result_bytebuffer_to_"
  - "_Ret_notnull_"
  - "_COM_Outptr_opt_result_maybenull_"
  - "_Inout_updates_to_opt_"
  - "_Inout_updates_"
  - "_Outptr_opt_result_buffer_"
  - "_Outptr_result_buffer_to_"
  - "_Out_writes_to_ptr_opt_"
  - "_Out_writes_bytes_all_opt_"
  - "_Inout_updates_all_"
  - "_Deref_inout_range_"
  - "_Ret_writes_"
  - "_Out_writes_z_"
  - "_Ret_writes_to_"
  - "_Out_writes_to_ptr_z_"
  - "_Out_writes_bytes_to_opt_"
  - "_In_reads_or_z_"
  - "_Inout_updates_bytes_to_"
  - "_In_reads_z_"
  - "_In_opt_z_"
  - "_Outref_result_buffer_maybenull_"
  - "_Ret_range_"
  - "_COM_Outptr_opt_"
  - "_Outptr_opt_result_maybenull_z_"
  - "_In_reads_opt_"
  - "_Inout_"
  - "_Field_range_"
  - "_Ret_writes_z_"
  - "_Out_writes_to_"
  - "_Out_writes_to_ptr_"
  - "_Inout_opt_z_"
  - "_Outref_"
  - "_Deref_out_range_"
  - "_Outref_result_buffer_"
  - "_Outref_result_buffer_to_"
  - "_Outref_result_bytebuffer_to_maybenull_"
  - "_In_reads_bytes_"
  - "_Outptr_opt_result_buffer_to_"
  - "_Outref_result_buffer_all_"
  - "_Out_writes_bytes_to_"
  - "_Result_zeroonfailure_"
  - "_In_reads_bytes_opt_"
  - "_Outref_result_buffer_to_maybenull_"
  - "_Outref_result_bytebuffer_all_"
  - "_Outref_result_buffer_all_maybenull_"
  - "_Ret_writes_maybenull_z_"
  - "_In_range_"
  - "_Inout_updates_bytes_all_opt_"
  - "_Outref_result_bytebuffer_to_"
  - "_Inout_updates_bytes_to_opt_"
  - "_Pre_equal_to_"
  - "_Ret_writes_bytes_maybenull_"
  - "_COM_Outptr_result_maybenull_"
  - "_Ret_writes_maybenull_"
  - "_Out_writes_bytes_"
  - "_Outptr_opt_"
  - "_Out_writes_opt_z_"
  - "_Outref_result_nullonfailure_"
  - "_Outptr_opt_result_z_"
  - "_Inout_opt_"
  - "_Deref_in_range_"
  - "_Outptr_result_z_"
  - "_In_reads_to_ptr_opt_z_"
  - "_Struct_size_bytes_"
  - "_Outptr_result_nullonfailure_"
  - "_In_"
  - "_Inout_updates_bytes_"
  - "_In_reads_to_ptr_z_"
  - "_Ret_writes_bytes_to_maybenull"
  - "_Outptr_opt_result_nullonfailure_"
  - "_In_reads_to_ptr_"
  - "_Outptr_result_buffer_"
  - "_Out_"
  - "_Outref_result_bytebuffer_maybenull_"
  - "_Outptr_result_maybenull_z_"
  - "_In_reads_"
  - "_Inout_updates_opt_"
  - "_Out_writes_to_opt_"
  - "_Outptr_opt_result_bytebuffer_"
  - "_Out_writes_all_"
  - "_Out_range_"
  - "_Inout_updates_bytes_all_"
  - "_Inout_z_"
  - "_Outref_result_bytebuffer_"
  - "_Result_nullonfailure_"
  - "_Ret_null_"
  - "_Scanf_format_string_"
  - "_Scanf_s_format_string_"
  - "_Printf_format_string_"
ms.assetid: 82826a3d-0c81-421c-8ffe-4072555dca3a
---
# Annotating function parameters and return values

This article describes typical uses of annotations for simple function parameters—scalars, and pointers to structures and classes—and most kinds of buffers. This article also shows common usage patterns for annotations. For additional annotations that are related to functions, see [Annotating function behavior](../code-quality/annotating-function-behavior.md).

## Pointer parameters

For the annotations in the following table, when a pointer parameter is annotated, the analyzer reports an error if the pointer is null. This annotation applies to pointers and to any data item that's pointed to.

### Annotations and descriptions

- `_In_`

     Annotates input parameters that are scalars, structures, pointers to structures and the like. Explicitly may be used on simple scalars. The parameter must be valid in pre-state and won't be modified.

- `_Out_`

     Annotates output parameters that are scalars, structures, pointers to structures and the like. Don't apply this annotation to an object that can't return a value—for example, a scalar that's passed by value. The parameter doesn't have to be valid in pre-state but must be valid in post-state.

- `_Inout_`

     Annotates a parameter that will be changed by the function. It must be valid in both pre-state and post-state, but is assumed to have different values before and after the call. Must apply to a modifiable value.

- `_In_z_`

     A pointer to a null-terminated string that's used as input. The string must be valid in pre-state. Variants of `PSTR`, which already have the correct annotations, are preferred.

- `_Inout_z_`

     A pointer to a null-terminated character array that will be modified. It must be valid before and after the call, but it's assumed the value has changed. The null terminator may be moved, but only the elements up to the original null terminator may be accessed.

- `_In_reads_(s)`

     `_In_reads_bytes_(s)`

     A pointer to an array, which is read by the function. The array is of size `s` elements, all of which must be valid.

     The `_bytes_` variant gives the size in bytes instead of elements. Use this variant only when the size can't be expressed as elements. For example, **`char`** strings would use the `_bytes_` variant only if a similar function that uses **`wchar_t`** would.

- `_In_reads_z_(s)`

     A pointer to an array that is null-terminated and has a known size. The elements up to the null terminator—or `s` if there isn't a null terminator—must be valid in pre-state. If the size is known in bytes, scale `s` by the element size.

- `_In_reads_or_z_(s)`

     A pointer to an array that is null-terminated or has a known size, or both. The elements up to the null terminator—or `s` if there isn't a null terminator—must be valid in pre-state. If the size is known in bytes, scale `s` by the element size. (Used for the `strn` family.)

- `_Out_writes_(s)`

     `_Out_writes_bytes_(s)`

     A pointer to an array of `s` elements (resp. bytes) that will be written by the function. The array elements don't have to be valid in pre-state, and the number of elements that are valid in post-state is unspecified. If there are annotations on the parameter type, they're applied in post-state. For example, consider the following code.

     ```cpp
     typedef _Null_terminated_ wchar_t *PWSTR;
     void MyStringCopy(_Out_writes_(size) PWSTR p1, _In_ size_t size, _In_ PWSTR p2);
     ```

     In this example, the caller provides a buffer of `size` elements for `p1`. `MyStringCopy` makes some of those elements valid. More importantly, the `_Null_terminated_` annotation on `PWSTR` means that `p1` is null-terminated in post-state. In this way, the number of valid elements is still well-defined, but a specific element count isn't required.

     The `_bytes_` variant gives the size in bytes instead of elements. Use this variant only when the size can't be expressed as elements. For example, **`char`** strings would use the `_bytes_` variant only if a similar function that uses **`wchar_t`** would.

- `_Out_writes_z_(s)`

     A pointer to an array of `s` elements. The elements don't have to be valid in pre-state. In post-state, the elements up through the null terminator—which must be present—must be valid. If the size is known in bytes, scale `s` by the element size.

- `_Inout_updates_(s)`

     `_Inout_updates_bytes_(s)`

     A pointer to an array, which is both read and written to in the function. It's of size `s` elements, and valid in pre-state and post-state.

     The `_bytes_` variant gives the size in bytes instead of elements. Use this variant only when the size can't be expressed as elements. For example, **`char`** strings would use the `_bytes_` variant only if a similar function that uses **`wchar_t`** would.

- `_Inout_updates_z_(s)`

     A pointer to an array that's null-terminated and has a known size. The elements up through the null terminator—which must be present—must be valid in both pre-state and post-state. The value in the post-state is presumed to be different from the value in the pre-state; that includes the location of the null terminator. If the size is known in bytes, scale `s` by the element size.

- `_Out_writes_to_(s,c)`

     `_Out_writes_bytes_to_(s,c)`

     `_Out_writes_all_(s)`

     `_Out_writes_bytes_all_(s)`

     A pointer to an array of `s` elements. The elements don't have to be valid in pre-state. In post-state, the elements up to the `c`-th element must be valid. The `_bytes_` variant can be used if the size is known in bytes rather than number of elements.

     For example:

     ```cpp
     void *memcpy(_Out_writes_bytes_all_(s) char *p1, _In_reads_bytes_(s) char *p2, _In_ int s);
     void *wordcpy(_Out_writes_all_(s) DWORD *p1, _In_reads_(s) DWORD *p2, _In_ int s);
     ```

- `_Inout_updates_to_(s,c)`

     `_Inout_updates_bytes_to_(s,c)`

     A pointer to an array, which is both read and written by the function. It's of size `s` elements, all of which must be valid in pre-state, and `c` elements must be valid in post-state.

     The `_bytes_` variant gives the size in bytes instead of elements. Use this variant only when the size can't be expressed as elements. For example, **`char`** strings would use the `_bytes_` variant only if a similar function that uses **`wchar_t`** would.

- `_Inout_updates_all_(s)`

     `_Inout_updates_bytes_all_(s)`

     A pointer to an array, which is both read and written by the function of size `s` elements. Defined as equivalent to:

     `_Inout_updates_to_(_Old_(s), _Old_(s))    _Inout_updates_bytes_to_(_Old_(s), _Old_(s))`

     In other words, every element that exists in the buffer up to `s` in the pre-state is valid in the pre-state and post-state.

     The `_bytes_` variant gives the size in bytes instead of elements. Use this variant only when the size can't be expressed as elements. For example, **`char`** strings would use the `_bytes_` variant only if a similar function that uses **`wchar_t`** would.

- `_In_reads_to_ptr_(p)`

     A pointer to an array for which `p - _Curr_` (that is, `p` minus `_Curr_`) is a valid expression. The elements before `p` must be valid in pre-state.

    For example:

    ```cpp
    int ReadAllElements(_In_reads_to_ptr_(EndOfArray) const int *Array, const int *EndOfArray);
    ```

- `_In_reads_to_ptr_z_(p)`

     A pointer to a null-terminated array for which expression `p - _Curr_` (that is, `p` minus `_Curr_`) is a valid expression. The elements before `p` must be valid in pre-state.

- `_Out_writes_to_ptr_(p)`

     A pointer to an array for which `p - _Curr_` (that is, `p` minus `_Curr_`) is a valid expression. The elements before `p` don't have to be valid in pre-state and must be valid in post-state.

- `_Out_writes_to_ptr_z_(p)`

     A pointer to a null-terminated array for which `p - _Curr_` (that is, `p` minus `_Curr_`) is a valid expression. The elements before `p` don't have to be valid in pre-state and must be valid in post-state.

## Optional pointer parameters

When a pointer parameter annotation includes `_opt_`, it indicates that the parameter may be null. Otherwise, the annotation behaves the same as the version that doesn't include `_opt_`. Here is a list of the `_opt_` variants of the pointer parameter annotations:

:::row:::
   :::column:::
      `_In_opt_`\
      `_Out_opt_`\
      `_Inout_opt_`\
      `_In_opt_z_`\
      `_Inout_opt_z_`\
      `_In_reads_opt_`\
      `_In_reads_bytes_opt_`\
      `_In_reads_opt_z_`
   :::column-end:::
   :::column:::
      `_Out_writes_opt_`\
      `_Out_writes_opt_z_`\
      `_Inout_updates_opt_`\
      `_Inout_updates_bytes_opt_`\
      `_Inout_updates_opt_z_`\
      `_Out_writes_to_opt_`\
      `_Out_writes_bytes_to_opt_`\
      `_Out_writes_all_opt_`\
      `_Out_writes_bytes_all_opt_`
   :::column-end:::
   :::column:::
      `_Inout_updates_to_opt_`\
      `_Inout_updates_bytes_to_opt_`\
      `_Inout_updates_all_opt_`\
      `_Inout_updates_bytes_all_opt_`\
      `_In_reads_to_ptr_opt_`\
      `_In_reads_to_ptr_opt_z_`\
      `_Out_writes_to_ptr_opt_`\
      `_Out_writes_to_ptr_opt_z_`
   :::column-end:::
:::row-end:::

## Output pointer parameters

Output pointer parameters require special notation to disambiguate nullness on the parameter and the pointed-to location.

### Annotations and descriptions

- `_Outptr_`

   Parameter can't be null, and in the post-state the pointed-to location can't be null and must be valid.

- `_Outptr_opt_`

   Parameter may be null, but in the post-state the pointed-to location can't be null and must be valid.

- `_Outptr_result_maybenull_`

   Parameter can't be null, and in the post-state the pointed-to location can be null.

- `_Outptr_opt_result_maybenull_`

   Parameter may be null, and in the post-state the pointed-to location can be null.

  In the following table, additional substrings are inserted into the annotation name to further qualify the meaning of the annotation. The various substrings are `_z`, `_COM_`, `_buffer_`, `_bytebuffer_`, and `_to_`.

> [!IMPORTANT]
> If the interface that you are annotating is COM, use the COM form of these annotations. Don't use the COM annotations with any other type interface.

- `_Outptr_result_z_`

   `_Outptr_opt_result_z_`

   `_Outptr_result_maybenull_z_`

   `_Outptr_opt_result_maybenull_z_`

   The returned pointer has the `_Null_terminated_` annotation.

- `_COM_Outptr_`

   `_COM_Outptr_opt_`

   `_COM_Outptr_result_maybenull_`

   `_COM_Outptr_opt_result_maybenull_`

   The returned pointer has COM semantics, which is why it carries an `_On_failure_` post-condition that the returned pointer is null.

- `_Outptr_result_buffer_(s)`

   `_Outptr_result_bytebuffer_(s)`

   `_Outptr_opt_result_buffer_(s)`

   `_Outptr_opt_result_bytebuffer_(s)`

   The returned pointer points to a valid buffer of size `s` elements or bytes.

- `_Outptr_result_buffer_to_(s, c)`

   `_Outptr_result_bytebuffer_to_(s, c)`

   `_Outptr_opt_result_buffer_to_(s,c)`

   `_Outptr_opt_result_bytebuffer_to_(s,c)`

   The returned pointer points to a buffer of size `s` elements or bytes, of which the first `c` are valid.

Certain interface conventions presume that output parameters are nullified on failure. Except for explicitly COM code, the forms in the following table are preferred. For COM code, use the corresponding COM forms that are listed in the previous section.

- `_Result_nullonfailure_`

   Modifies other annotations. The result is set to null if the function fails.

- `_Result_zeroonfailure_`

   Modifies other annotations. The result is set to zero if the function fails.

- `_Outptr_result_nullonfailure_`

   The returned pointer points to a valid buffer if the function succeeds, or null if the function fails. This annotation is for a non-optional parameter.

- `_Outptr_opt_result_nullonfailure_`

   The returned pointer points to a valid buffer if the function succeeds, or null if the function fails. This annotation is for an optional parameter.

- `_Outref_result_nullonfailure_`

   The returned pointer points to a valid buffer if the function succeeds, or null if the function fails. This annotation is for a reference parameter.

## Output reference parameters

A common use of the reference parameter is for output parameters. For simple output reference parameters such as `int&`, `_Out_` provides the correct semantics. However, when the output value is a pointer such as `int *&`, the equivalent pointer annotations like `_Outptr_ int **` don't provide the correct semantics. To concisely express the semantics of output reference parameters for pointer types, use these composite annotations:

### Annotations and descriptions

- `_Outref_`

     Result must be valid in post-state and can't be null.

- `_Outref_result_maybenull_`

     Result must be valid in post-state, but may be null in post-state.

- `_Outref_result_buffer_(s)`

     Result must be valid in post-state and can't be null. Points to valid buffer of size `s` elements.

- `_Outref_result_bytebuffer_(s)`

     Result must be valid in post-state and can't be null. Points to valid buffer of size `s` bytes.

- `_Outref_result_buffer_to_(s, c)`

     Result must be valid in post-state and can't be null. Points to buffer of `s` elements, of which the first `c` are valid.

- `_Outref_result_bytebuffer_to_(s, c)`

     Result must be valid in post-state and can't be null. Points to buffer of `s` bytes of which the first `c` are valid.

- `_Outref_result_buffer_all_(s)`

     Result must be valid in post-state and can't be null. Points to valid buffer of size `s` valid elements.

- `_Outref_result_bytebuffer_all_(s)`

     Result must be valid in post-state and can't be null. Points to valid buffer of `s` bytes of valid elements.

- `_Outref_result_buffer_maybenull_(s)`

     Result must be valid in post-state, but may be null in post-state. Points to valid buffer of size `s` elements.

- `_Outref_result_bytebuffer_maybenull_(s)`

     Result must be valid in post-state, but may be null in post-state. Points to valid buffer of size `s` bytes.

- `_Outref_result_buffer_to_maybenull_(s, c)`

     Result must be valid in post-state, but may be null in post-state. Points to buffer of `s` elements, of which the first `c` are valid.

- `_Outref_result_bytebuffer_to_maybenull_(s,c)`

     Result must be valid in post-state, but may be null in post state. Points to buffer of `s` bytes of which the first `c` are valid.

- `_Outref_result_buffer_all_maybenull_(s)`

     Result must be valid in post-state, but may be null in post state. Points to valid buffer of size `s` valid elements.

- `_Outref_result_bytebuffer_all_maybenull_(s)`

     Result must be valid in post-state, but may be null in post state. Points to valid buffer of `s` bytes of valid elements.

## Return values

The return value of a function resembles an `_Out_` parameter but is at a different level of de-reference, and you don't have to consider the concept of the pointer to the result. For the following annotations, the return value is the annotated object—a scalar, a pointer to a struct, or a pointer to a buffer. These annotations have the same semantics as the corresponding `_Out_` annotation.

:::row:::
   :::column:::
      `_Ret_z_`\
      `_Ret_writes_(s)`\
      `_Ret_writes_bytes_(s)`\
      `_Ret_writes_z_(s)`\
      `_Ret_writes_to_(s,c)`\
      `_Ret_writes_maybenull_(s)`\
      `_Ret_writes_to_maybenull_(s)`\
      `_Ret_writes_maybenull_z_(s)`
   :::column-end:::
   :::column:::
      `_Ret_maybenull_`\
      `_Ret_maybenull_z_`\
      `_Ret_null_`\
      `_Ret_notnull_`\
      `_Ret_writes_bytes_to_`\
      `_Ret_writes_bytes_maybenull_`\
      `_Ret_writes_bytes_to_maybenull_`
   :::column-end:::
:::row-end:::

## Format string parameters

- `_Printf_format_string_`
     Indicates that the parameter is a format string for use in a `printf` expression.

     **Example**

    ```cpp
    int MyPrintF(_Printf_format_string_ const wchar_t* format, ...)
    {
           va_list args;
           va_start(args, format);
           int ret = vwprintf(format, args);
           va_end(args);
           return ret;
    }
    ```

- `_Scanf_format_string_`
     Indicates that the parameter is a format string for use in a `scanf` expression.

     **Example**

    ```cpp
    int MyScanF(_Scanf_format_string_ const wchar_t* format, ...)
    {
           va_list args;
           va_start(args, format);
           int ret = vwscanf(format, args);
           va_end(args);
           return ret;
    }
    ```

- `_Scanf_s_format_string_`
     Indicates that the parameter is a format string for use in a `scanf_s` expression.

     **Example**

    ```cpp
    int MyScanF_s(_Scanf_s_format_string_ const wchar_t* format, ...)
    {
           va_list args;
           va_start(args, format);
           int ret = vwscanf_s(format, args);
           va_end(args);
           return ret;
    }
    ```

## Other common annotations

### Annotations and descriptions

- `_In_range_(low, hi)`

     `_Out_range_(low, hi)`

     `_Ret_range_(low, hi)`

     `_Deref_in_range_(low, hi)`

     `_Deref_out_range_(low, hi)`

     `_Deref_inout_range_(low, hi)`

     `_Field_range_(low, hi)`

     The parameter, field, or result is in the range (inclusive) from `low` to `hi`. Equivalent to `_Satisfies_(_Curr_ >= low && _Curr_ <= hi)` that is applied to the annotated object together with the appropriate pre-state or post-state conditions.

    > [!IMPORTANT]
    > Although the names contain "in" and "out", the semantics of `_In_` and `_Out_` do **not** apply to these annotations.

- `_Pre_equal_to_(expr)`

     `_Post_equal_to_(expr)`

     The annotated value is exactly `expr`. Equivalent to `_Satisfies_(_Curr_ == expr)` that is applied to the annotated object together with the appropriate pre-state or post-state conditions.

- `_Struct_size_bytes_(size)`

     Applies to a struct or class declaration. Indicates that a valid object of that type may be larger than the declared type, with the number of bytes being given by `size`. For example:

     `typedef _Struct_size_bytes_(nSize) struct MyStruct {    size_t nSize;    ... };`

     The buffer size in bytes of a parameter `pM` of type `MyStruct *` is then taken to be:

     `min(pM->nSize, sizeof(MyStruct))`

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Understanding SAL](../code-quality/understanding-sal.md)
- [Annotating Function Behavior](../code-quality/annotating-function-behavior.md)
- [Annotating Structs and Classes](../code-quality/annotating-structs-and-classes.md)
- [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md)
- [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Intrinsic Functions](../code-quality/intrinsic-functions.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
