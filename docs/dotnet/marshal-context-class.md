---
description: "Learn more about: marshal_context Class"
title: "marshal_context Class"
ms.date: "01/16/2019"
ms.topic: "reference"
f1_keywords: ["msclr::interop::marshal_context::marshal_context", "msclr::interop::marshal_context::marshal_as" ]
helpviewer_keywords: ["msclr::marshal_context class [C++]"]
ms.assetid: 241b0cf6-4ca4-4812-aaee-d671c11dc034
---
# marshal_context Class

This class converts data between native and managed environments.

## Syntax

```cpp
class marshal_context
```

## Remarks

Use the `marshal_context` class for data conversions that require a context. For more information about which conversions require a context and which marshaling file has to be included, see [Overview of marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md). The result of marshaling when you use a context is valid only until the `marshal_context` object is destroyed. To preserve your result, you must copy the data.

The same `marshal_context` can be used for numerous data conversions. Reusing the context in this manner won't affect the results from previous marshaling calls.

## Members

### Public constructors

|Name|Description|
|---------|-----------|
|[marshal_context::marshal_context](#marshal-context)|Constructs a `marshal_context` object to use for data conversion between managed and native data types.|
|[marshal_context::~marshal_context](#tilde-marshal-context)|Destroys a `marshal_context` object.|

### Public methods

|Name|Description|
|---------|-----------|
|[marshal_context::marshal_as](#marshal-as)|Performs the marshaling on a specific data object to convert it between a managed and a native data type.|

## Requirements

**Header file:** \<msclr\marshal.h>, \<msclr\marshal_windows.h>, \<msclr\marshal_cppstd.h>, or \<msclr\marshal_atl.h>

**Namespace:** msclr::interop

## <a name="marshal-context"></a> marshal_context::marshal_context

Constructs a `marshal_context` object to use for data conversion between managed and native data types.

```cpp
marshal_context();
```

### Remarks

Some data conversions require a marshal context. For more information about which translations require a context and which marshaling file you must include in your application, see [Overview of marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md).

### Example

See the example for [marshal_context::marshal_as](#marshal-as).

## <a name="tilde-marshal-context"></a> marshal_context::~marshal_context

Destroys a `marshal_context` object.

```cpp
~marshal_context();
```

### Remarks

Some data conversions require a marshal context. See [Overview of marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md) for more information about which translations require a context and which marshaling file has to be included in your application.

Deleting a `marshal_context` object will invalidate the data converted by that context. If you want to preserve your data after a `marshal_context` object is destroyed, you must manually copy the data to a variable that will persist.

## <a name="marshal-as"></a> marshal_context::marshal_as

Performs the marshaling on a specific data object to convert it between a managed and a native data type.

```cpp
To_Type marshal_as<To_Type>(
   From_Type input
);
```

### Parameters

*input*<br/>
[in] The value that you want to marshal to a `To_Type` variable.

### Return value

A variable of type `To_Type` that's the converted value of `input`.

### Remarks

This function performs the marshaling on a specific data object. Use this function only with the conversions indicated by the table in [Overview of marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md).

If you try to marshal a pair of data types that aren't supported, `marshal_as` will generate an error [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) at compile time. Read the message supplied with this error for more information. The `C4996` error can be generated for more than just deprecated functions. Two conditions that generate this error are trying to marshal a pair of data types that aren't supported and trying to use `marshal_as` for a conversion that requires a context.

The marshaling library consists of several header files. Any conversion requires only one file, but you can include additional files if you need to for other conversions. The table in `Marshaling Overview in C++` indicates which marshaling file should be included for each conversion.

### Example

This example creates a context for marshaling from a `System::String` to a `const char *` variable type. The converted data won't be valid after the line that deletes the context.

```cpp
// marshal_context_test.cpp
// compile with: /clr
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>

using namespace System;
using namespace msclr::interop;

int main() {
   marshal_context^ context = gcnew marshal_context();
   String^ message = gcnew String("Test String to Marshal");
   const char* result;
   result = context->marshal_as<const char*>( message );
   delete context;
   return 0;
}
```
