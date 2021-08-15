---
description: "Learn more about: Understanding SAL"
title: Understanding SAL
ms.date: 11/04/2016
ms.topic: "conceptual"
ms.assetid: a94d6907-55f2-4874-9571-51d52d6edcfd
---
# Understanding SAL

The Microsoft source-code annotation language (SAL) provides a set of annotations that you can use to describe how a function uses its parameters, the assumptions that it makes about them, and the guarantees that it makes when it finishes. The annotations are defined in the header file `<sal.h>`. Visual Studio code analysis for C++ uses SAL annotations to modify its analysis of functions. For more information about SAL 2.0 for Windows driver development, see [SAL 2.0 Annotations for Windows Drivers](/windows-hardware/drivers/devtest/sal-2-annotations-for-windows-drivers).

Natively, C and C++ provide only limited ways for developers to consistently express intent and invariance. By using SAL annotations, you can describe your functions in greater detail so that developers who are consuming them can better understand how to use them.

## What Is SAL and Why Should You Use It?

Simply stated, SAL is an inexpensive way to let the compiler check your code for you.

### SAL Makes Code More Valuable

SAL can help you make your code design more understandable, both for humans and for code analysis tools. Consider this example that shows the C runtime function `memcpy`:

```cpp

void * memcpy(
   void *dest,
   const void *src,
   size_t count
);
```

Can you tell what this function does? When a function is implemented or called, certain properties must be maintained to ensure program correctness. Just by looking at a declaration such as the one in the example, you don't know what they are. Without SAL annotations, you'd have to rely on documentation or code comments. Here's what the documentation for `memcpy` says:

> "`memcpy` copies *count* bytes from *src* to *dest*; `wmemcpy` copies *count* wide characters (two bytes). If the source and destination overlap, the behavior of `memcpy` is undefined. Use `memmove` to handle overlapping regions.\
> **Important:** Make sure that the destination buffer is the same size or larger than the source buffer. For more information, see Avoiding Buffer Overruns."

The documentation contains a couple of bits of information that suggest that your code has to maintain certain properties to ensure program correctness:

- `memcpy` copies the `count` of bytes from the source buffer to the destination buffer.

- The destination buffer must be at least as large as the source buffer.

However, the compiler can't read the documentation or informal comments. It doesn't know that there is a relationship between the two buffers and `count`, and it also can't effectively guess about a relationship. SAL could provide more clarity about the properties and implementation of the function, as shown here:

```cpp

void * memcpy(
   _Out_writes_bytes_all_(count) void *dest,
   _In_reads_bytes_(count) const void *src,
   size_t count
);
```

Notice that these annotations resemble the information in the documentation, but they are more concise and they follow a semantic pattern. When you read this code, you can quickly understand the properties of this function and how to avoid buffer overrun security issues. Even better, the semantic patterns that SAL provides can improve the efficiency and effectiveness of automated code analysis tools in the early discovery of potential bugs. Imagine that someone writes this buggy implementation of `wmemcpy`:

```cpp

wchar_t * wmemcpy(
   _Out_writes_all_(count) wchar_t *dest,
   _In_reads_(count) const wchar_t *src,
   size_t count)
{
   size_t i;
   for (i = 0; i <= count; i++) { // BUG: off-by-one error
      dest[i] = src[i];
   }
   return dest;
}
```

This implementation contains a common off-by-one error. Fortunately, the code author included the SAL buffer size annotation—a code analysis tool could catch the bug by analyzing this function alone.

### SAL Basics

SAL defines four basic kinds of parameters, which are categorized by usage pattern.

|Category|Parameter Annotation|Description|
|--------------|--------------------------|-----------------|
|**Input to called function**|`_In_`|Data is passed to the called function, and is treated as read-only.|
|**Input to called function, and output to caller**|`_Inout_`|Usable data is passed into the function and potentially is modified.|
|**Output to caller**|`_Out_`|The caller only provides space for the called function to write to. The called function writes data into that space.|
|**Output of pointer to caller**|`_Outptr_`|Like **Output to caller**. The value that's returned by the called function is a pointer.|

These four basic annotations can be made more explicit in various ways. By default, annotated pointer parameters are assumed to be required—they must be non-NULL for the function to succeed. The most commonly used variation of the basic annotations indicates that a pointer parameter is optional—if it's NULL, the function can still succeed in doing its work.

This table shows how to distinguish between required and optional parameters:

||Parameters are required|Parameters are optional|
|-|-----------------------------|-----------------------------|
|**Input to called function**|`_In_`|`_In_opt_`|
|**Input to called function, and output to caller**|`_Inout_`|`_Inout_opt_`|
|**Output to caller**|`_Out_`|`_Out_opt_`|
|**Output of pointer to caller**|`_Outptr_`|`_Outptr_opt_`|

These annotations help identify possible uninitialized values and invalid null pointer uses in a formal and accurate manner. Passing NULL to a required parameter might cause a crash, or it might cause a "failed" error code to be returned. Either way, the function cannot succeed in doing its job.

## SAL Examples

This section shows code examples for the basic SAL annotations.

### Using the Visual Studio Code Analysis Tool to Find Defects

In the examples, the Visual Studio Code Analysis tool is used together with SAL annotations to find code defects. Here's how to do that.

#### To use Visual Studio code analysis tools and SAL

1. In Visual Studio, open a C++ project that contains SAL annotations.

1. On the menu bar, choose **Build**, **Run Code Analysis on Solution**.

     Consider the \_In\_ example in this section. If you run code analysis on it, this warning is displayed:

    > **C6387 Invalid Parameter Value**
    > 'pInt' could be '0': this does not adhere to the specification for the function 'InCallee'.

### Example: The \_In\_ Annotation

The `_In_` annotation indicates that:

- The parameter must be valid and will not be modified.

- The function will only read from the single-element buffer.

- The caller must provide the buffer and initialize it.

- `_In_` specifies "read-only". A common mistake is to apply `_In_` to a parameter that should have the `_Inout_` annotation instead.

- `_In_` is allowed but ignored by the analyzer on non-pointer scalars.

```cpp
void InCallee(_In_ int *pInt)
{
   int i = *pInt;
}

void GoodInCaller()
{
   int *pInt = new int;
   *pInt = 5;

   InCallee(pInt);
   delete pInt;
}

void BadInCaller()
{
   int *pInt = NULL;
   InCallee(pInt); // pInt should not be NULL
}
```

If you use Visual Studio Code Analysis on this example, it validates that the callers pass a non-Null pointer to an initialized buffer for `pInt`. In this case, `pInt` pointer cannot be NULL.

### Example: The \_In\_opt\_ Annotation

`_In_opt_` is the same as `_In_`, except that the input parameter is allowed to be NULL and, therefore, the function should check for this.

```cpp

void GoodInOptCallee(_In_opt_ int *pInt)
{
   if(pInt != NULL) {
      int i = *pInt;
   }
}

void BadInOptCallee(_In_opt_ int *pInt)
{
   int i = *pInt; // Dereferencing NULL pointer 'pInt'
}

void InOptCaller()
{
   int *pInt = NULL;
   GoodInOptCallee(pInt);
   BadInOptCallee(pInt);
}
```

Visual Studio Code Analysis validates that the function checks for NULL before it accesses the buffer.

### Example: The \_Out\_ Annotation

`_Out_` supports a common scenario in which a non-NULL pointer that points to an element buffer is passed in and the function initializes the element. The caller doesn't have to initialize the buffer before the call; the called function promises to initialize it before it returns.

```cpp
void GoodOutCallee(_Out_ int *pInt)
{
   *pInt = 5;
}

void BadOutCallee(_Out_ int *pInt)
{
   // Did not initialize pInt buffer before returning!
}

void OutCaller()
{
   int *pInt = new int;
   GoodOutCallee(pInt);
   BadOutCallee(pInt);
   delete pInt;
}
```

Visual Studio Code Analysis Tool validates that the caller passes a non-NULL pointer to a buffer for `pInt` and that the buffer is initialized by the function before it returns.

### Example: The \_Out\_opt\_ Annotation

`_Out_opt_` is the same as `_Out_`, except that the parameter is allowed to be NULL and, therefore, the function should check for this.

```cpp
void GoodOutOptCallee(_Out_opt_ int *pInt)
{
   if (pInt != NULL) {
      *pInt = 5;
   }
}

void BadOutOptCallee(_Out_opt_ int *pInt)
{
   *pInt = 5; // Dereferencing NULL pointer 'pInt'
}

void OutOptCaller()
{
   int *pInt = NULL;
   GoodOutOptCallee(pInt);
   BadOutOptCallee(pInt);
}
```

Visual Studio Code Analysis validates that this function checks for NULL before `pInt` is dereferenced, and if `pInt` is not NULL, that the buffer is initialized by the function before it returns.

### Example: The \_Inout\_ Annotation

`_Inout_` is used to annotate a pointer parameter that may be changed by the function. The pointer must point to valid initialized data before the call, and even if it changes, it must still have a valid value on return. The annotation specifies that the function may freely read from and write to the one-element buffer. The caller must provide the buffer and initialize it.

> [!NOTE]
> Like `_Out_`, `_Inout_` must apply to a modifiable value.

```cpp
void InOutCallee(_Inout_ int *pInt)
{
   int i = *pInt;
   *pInt = 6;
}

void InOutCaller()
{
   int *pInt = new int;
   *pInt = 5;
   InOutCallee(pInt);
   delete pInt;
}

void BadInOutCaller()
{
   int *pInt = NULL;
   InOutCallee(pInt); // 'pInt' should not be NULL
}
```

Visual Studio Code Analysis validates that callers pass a non-NULL pointer to an initialized buffer for `pInt`, and that, before return, `pInt` is still non-NULL and the buffer is initialized.

### Example: The \_Inout\_opt\_ Annotation

`_Inout_opt_` is the same as `_Inout_`, except that the input parameter is allowed to be NULL and, therefore, the function should check for this.

```cpp
void GoodInOutOptCallee(_Inout_opt_ int *pInt)
{
   if(pInt != NULL) {
      int i = *pInt;
      *pInt = 6;
   }
}

void BadInOutOptCallee(_Inout_opt_ int *pInt)
{
   int i = *pInt; // Dereferencing NULL pointer 'pInt'
   *pInt = 6;
}

void InOutOptCaller()
{
   int *pInt = NULL;
   GoodInOutOptCallee(pInt);
   BadInOutOptCallee(pInt);
}
```

Visual Studio Code Analysis validates that this function checks for NULL before it accesses the buffer, and if `pInt` is not NULL, that the buffer is initialized by the function before it returns.

### Example: The \_Outptr\_ Annotation

`_Outptr_` is used to annotate a parameter that's intended to return a pointer.  The parameter itself should not be NULL, and the called function returns a non-NULL pointer in it and that pointer points to initialized data.

```cpp
void GoodOutPtrCallee(_Outptr_ int **pInt)
{
   int *pInt2 = new int;
   *pInt2 = 5;

   *pInt = pInt2;
}

void BadOutPtrCallee(_Outptr_ int **pInt)
{
   int *pInt2 = new int;
   // Did not initialize pInt buffer before returning!
   *pInt = pInt2;
}

void OutPtrCaller()
{
   int *pInt = NULL;
   GoodOutPtrCallee(&pInt);
   BadOutPtrCallee(&pInt);
}
```

Visual Studio Code Analysis validates that the caller passes a non-NULL pointer for `*pInt`, and that the buffer is initialized by the function before it returns.

### Example: The \_Outptr\_opt\_ Annotation

`_Outptr_opt_` is the same as `_Outptr_`, except that the parameter is optional—the caller can pass in a NULL pointer for the parameter.

```cpp
void GoodOutPtrOptCallee(_Outptr_opt_ int **pInt)
{
   int *pInt2 = new int;
   *pInt2 = 6;

   if(pInt != NULL) {
      *pInt = pInt2;
   }
}

void BadOutPtrOptCallee(_Outptr_opt_ int **pInt)
{
   int *pInt2 = new int;
   *pInt2 = 6;
   *pInt = pInt2; // Dereferencing NULL pointer 'pInt'
}

void OutPtrOptCaller()
{
   int **ppInt = NULL;
   GoodOutPtrOptCallee(ppInt);
   BadOutPtrOptCallee(ppInt);
}
```

Visual Studio Code Analysis validates that this function checks for NULL before `*pInt` is dereferenced, and that the buffer is initialized by the function before it returns.

### Example: The \_Success\_ Annotation in Combination with \_Out\_

Annotations  can be applied to most objects.  In particular, you can annotate a whole function.  One of the most obvious characteristics of a function is that it can succeed or fail. But like the association between a buffer and its size, C/C++ cannot express function success or failure. By using the `_Success_` annotation, you can say what success for a function looks like.  The parameter to the `_Success_` annotation is just an expression that when it is true indicates that the function has succeeded. The expression can be anything that the annotation parser can handle. The effects of the annotations after the function returns are only applicable when the function succeeds. This example shows how `_Success_` interacts with `_Out_` to do the right thing. You can use the keyword **`return`** to represent the return value.

```cpp
_Success_(return != false) // Can also be stated as _Success_(return)
bool GetValue(_Out_ int *pInt, bool flag)
{
   if(flag) {
      *pInt = 5;
      return true;
   } else {
      return false;
   }
}
```

The `_Out_` annotation causes Visual Studio Code Analysis to validate that the caller passes a non-NULL pointer to a buffer for `pInt`, and that the buffer is initialized by the function before it returns.

## SAL Best Practice

### Adding Annotations to Existing Code

SAL is a powerful technology that can help you improve the security and reliability of your code. After you learn SAL, you can apply the new skill to your daily work. In new code, you can use SAL-based specifications by design throughout; in older code, you can add annotations incrementally and thereby increase the benefits every time you update.

Microsoft public headers are already annotated. Therefore, we suggest that in your projects you first annotate leaf node functions and functions that call Win32 APIs to get the most benefit.

### When Do I Annotate?

Here are some guidelines:

- Annotate all pointer parameters.

- Annotate value-range annotations so that Code Analysis can ensure buffer and pointer safety.

- Annotate locking rules and locking side effects. For more information, see [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md).

- Annotate driver properties and other domain-specific properties.

Or you can annotate all parameters to make your intent clear throughout and to make it easy to check that annotations have been done.

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Annotating Function Parameters and Return Values](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotating Function Behavior](../code-quality/annotating-function-behavior.md)
- [Annotating Structs and Classes](../code-quality/annotating-structs-and-classes.md)
- [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md)
- [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
