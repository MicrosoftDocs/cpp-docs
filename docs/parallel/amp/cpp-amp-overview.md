---
description: "Learn more about: C++ AMP Overview"
title: "C++ AMP Overview"
ms.date: "11/19/2018"
helpviewer_keywords: ["C++ Accelerated Massive Parallelism, requirements", "C++ Accelerated Massive Parallelism, architecture", "C++ AMP", "C++ Accelerated Massive Parallelism, overview", "C++ Accelerated Massive Parallelism"]
ms.assetid: 9e593b06-6e3c-43e9-8bae-6d89efdd39fc
---
# C++ AMP Overview

C++ Accelerated Massive Parallelism (C++ AMP) accelerates execution of C++ code by taking advantage of data-parallel hardware such as a graphics processing unit (GPU) on a discrete graphics card. By using C++ AMP, you can code multi-dimensional data algorithms so that execution can be accelerated by using parallelism on heterogeneous hardware. The C++ AMP programming model includes multidimensional arrays, indexing, memory transfer, tiling, and a mathematical function library. You can use C++ AMP language extensions to control how data is moved from the CPU to the GPU and back, so that you can improve performance.

## System Requirements

- Windows 7 or later

- Windows Server 2008 R2 or later

- DirectX 11 Feature Level 11.0 or later hardware

- For debugging on the software emulator, Windows 8 or Windows Server 2012 is required. For debugging on the hardware, you must install the drivers for your graphics card. For more information, see [Debugging GPU Code](/visualstudio/debugger/debugging-gpu-code).

- Note: AMP is currently not supported on ARM64.

## Introduction

The following two examples illustrate the primary components of C++ AMP. Assume that you want to add the corresponding elements of two one-dimensional arrays. For example, you might want to add `{1, 2, 3, 4, 5}` and `{6, 7, 8, 9, 10}` to obtain `{7, 9, 11, 13, 15}`. Without using C++ AMP, you might write the following code to add the numbers and display the results.

```cpp
#include <iostream>

void StandardMethod() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    for (int idx = 0; idx < 5; idx++)
    {
        sumCPP[idx] = aCPP[idx] + bCPP[idx];
    }

    for (int idx = 0; idx < 5; idx++)
    {
        std::cout << sumCPP[idx] << "\n";
    }
}
```

The important parts of the code are as follows:

- Data: The data consists of three arrays. All have the same rank (one) and length (five).

- Iteration: The first **`for`** loop provides a mechanism for iterating through the elements in the arrays. The code that you want to execute to compute the sums is contained in the first **`for`** block.

- Index: The `idx` variable accesses the individual elements of the arrays.

Using C++ AMP, you might write the following code instead.

```cpp
#include <amp.h>
#include <iostream>
using namespace concurrency;

const int size = 5;

void CppAmpMethod() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[size];

    // Create C++ AMP objects.
    array_view<const int, 1> a(size, aCPP);
    array_view<const int, 1> b(size, bCPP);
    array_view<int, 1> sum(size, sumCPP);
    sum.discard_data();

    parallel_for_each(
        // Define the compute domain, which is the set of threads that are created.
        sum.extent,
        // Define the code to run on each thread on the accelerator.
        [=](index<1> idx) restrict(amp) {
            sum[idx] = a[idx] + b[idx];
        }
    );

    // Print the results. The expected output is "7, 9, 11, 13, 15".
    for (int i = 0; i < size; i++) {
        std::cout << sum[i] << "\n";
    }
}
```

The same basic elements are present, but C++ AMP constructs are used:

- Data: You use C++ arrays to construct three C++ AMP [array_view](../../parallel/amp/reference/array-view-class.md) objects. You supply four values to construct an `array_view` object: the data values, the rank, the element type, and the length of the `array_view` object in each dimension. The rank and type are passed as type parameters. The data and length are passed as constructor parameters. In this example, the C++ array that is passed to the constructor is one-dimensional. The rank and length are used to construct the rectangular shape of the data in the `array_view` object, and the data values are used to fill the array. The runtime library also includes the [array Class](../../parallel/amp/reference/array-class.md), which has an interface that resembles the `array_view` class and is discussed later in this article.

- Iteration: The [parallel_for_each Function (C++ AMP)](reference/concurrency-namespace-functions-amp.md#parallel_for_each) provides a mechanism for iterating through the data elements, or *compute domain*. In this example, the compute domain is specified by `sum.extent`. The code that you want to execute is contained in a lambda expression, or *kernel function*. The `restrict(amp)` indicates that only the subset of the C++ language that C++ AMP can accelerate is used.

- Index: The [index Class](../../parallel/amp/reference/index-class.md) variable, `idx`, is declared with a rank of one to match the rank of the `array_view` object. By using the index, you can access the individual elements of the `array_view` objects.

## Shaping and Indexing Data: index and extent

You must define the data values and declare the shape of the data before you can run the kernel code. All data is defined to be an array (rectangular), and you can define the array to have any rank (number of dimensions). The data can be any size in any of the dimensions.

### index Class

The [index Class](../../parallel/amp/reference/index-class.md) specifies a location in the `array` or `array_view` object by encapsulating the offset from the origin in each dimension into one object. When you access a location in the array, you pass an `index` object to the indexing operator, `[]`, instead of a list of integer indexes. You can access the elements in each dimension by using the [array::operator() Operator](reference/array-class.md#operator_call) or the [array_view::operator() Operator](reference/array-view-class.md#operator_call).

The following example creates a one-dimensional index that specifies the third element in a one-dimensional `array_view` object. The index is used to print the third element in the `array_view` object. The output is 3.

```cpp
int aCPP[] = {1, 2, 3, 4, 5};
array_view<int, 1> a(5, aCPP);

index<1> idx(2);

std::cout << a[idx] << "\n";
// Output: 3
```

The following example creates a two-dimensional index that specifies the element where the row = 1 and the column = 2 in a two-dimensional `array_view` object. The first parameter in the `index` constructor is the row component, and the second parameter is the column component. The output is 6.

```cpp
int aCPP[] = {1, 2, 3, 4, 5, 6};
array_view<int, 2> a(2, 3, aCPP);

index<2> idx(1, 2);

std::cout <<a[idx] << "\n";
// Output: 6
```

The following example creates a three-dimensional index that specifies the element where the depth = 0, the row = 1, and the column = 3 in a three-dimensional `array_view` object. Notice that the first parameter is the depth component, the second parameter is the row component, and the third parameter is the column component. The output is 8.

```cpp
int aCPP[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

array_view<int, 3> a(2, 3, 4, aCPP);

// Specifies the element at 3, 1, 0.
index<3> idx(0, 1, 3);

std::cout << a[idx] << "\n";
// Output: 8
```

### extent Class

The [extent Class](../../parallel/amp/reference/extent-class.md) specifies the length of the data in each dimension of the `array` or `array_view` object. You can create an extent and use it to create an `array` or `array_view` object. You can also retrieve the extent of an existing `array` or `array_view` object. The following example prints the length of the extent in each dimension of an `array_view` object.

```cpp
int aCPP[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
// There are 3 rows and 4 columns, and the depth is two.
array_view<int, 3> a(2, 3, 4, aCPP);

std::cout << "The number of columns is " << a.extent[2] << "\n";
std::cout << "The number of rows is " << a.extent[1] << "\n";
std::cout << "The depth is " << a.extent[0] << "\n";
std::cout << "Length in most significant dimension is " << a.extent[0] << "\n";
```

The following example creates an `array_view` object that has the same dimensions as the object in the previous example, but this example uses an `extent` object instead of using explicit parameters in the `array_view` constructor.

```cpp
int aCPP[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
extent<3> e(2, 3, 4);

array_view<int, 3> a(e, aCPP);

std::cout << "The number of columns is " << a.extent[2] << "\n";
std::cout << "The number of rows is " << a.extent[1] << "\n";
std::cout << "The depth is " << a.extent[0] << "\n";
```

## Moving Data to the Accelerator: array and array_view

Two data containers used to move data to the accelerator are defined in the runtime library. They are the [array Class](../../parallel/amp/reference/array-class.md) and the [array_view Class](../../parallel/amp/reference/array-view-class.md). The `array` class is a container class that creates a deep copy of the data when the object is constructed. The `array_view` class is a wrapper class that copies the data when the kernel function accesses the data. When the data is needed on the source device the data is copied back.

### array Class

When an `array` object is constructed, a deep copy of the data is created on the accelerator if you use a constructor that includes a pointer to the data set. The kernel function modifies the copy on the accelerator. When the execution of the kernel function is finished, you must copy the data back to the source data structure. The following example multiplies each element in a vector by 10. After the kernel function is finished, the `vector conversion operator` is used to copy the data back into the vector object.

```cpp
std::vector<int> data(5);

for (int count = 0; count <5; count++)
{
    data[count] = count;
}

array<int, 1> a(5, data.begin(), data.end());

parallel_for_each(
    a.extent,
    [=, &a](index<1> idx) restrict(amp) {
        a[idx] = a[idx]* 10;
    });

data = a;
for (int i = 0; i < 5; i++)
{
    std::cout << data[i] << "\n";
}
```

### array_view Class

The `array_view` has nearly the same members as the `array` class, but the underlying behavior is not the same. Data passed to the `array_view` constructor is not replicated on the GPU as it is with an `array` constructor. Instead, the data is copied to the accelerator when the kernel function is executed. Therefore, if you create two `array_view` objects that use the same data, both `array_view` objects refer to the same memory space. When you do this, you have to synchronize any multithreaded access. The main advantage of using the `array_view` class is that data is moved only if it is necessary.

### Comparison of array and array_view

The following table summarizes the similarities and differences between the `array` and `array_view` classes.

|Description|array class|array_view class|
|-----------------|-----------------|-----------------------|
|When rank is determined|At compile time.|At compile time.|
|When extent is determined|At run time.|At run time.|
|Shape|Rectangular.|Rectangular.|
|Data storage|Is a data container.|Is a data wrapper.|
|Copy|Explicit and deep copy at definition.|Implicit copy when it is accessed by the kernel function.|
|Data retrieval|By copying the array data back to an object on the CPU thread.|By direct access of the `array_view` object or by calling the [array_view::synchronize Method](reference/array-view-class.md#synchronize) to continue accessing the data on the original container.|

### Shared memory with array and array_view

Shared memory is memory that can be accessed by both the CPU and the accelerator. The use of shared memory eliminates or significantly reduces the overhead of copying data between the CPU and the accelerator. Although the memory is shared, it cannot be accessed concurrently by both the CPU and the accelerator, and doing so causes undefined behavior.

`array` objects can be used to specify fine-grained control over the use of shared memory if the associated accelerator supports it. Whether an accelerator supports shared memory is determined by the accelerator’s [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) property, which returns **`true`** when shared memory is supported. If shared memory is supported, the default [access_type Enumeration](reference/concurrency-namespace-enums-amp.md#access_type) for memory allocations on the accelerator is determined by the `default_cpu_access_type` property. By default, `array` and `array_view` objects take on the same `access_type` as the primary associated `accelerator`.

By setting the [array::cpu_access_type Data Member](reference/array-class.md#cpu_access_type) property of an `array` explicitly, you can exercise fine-grained control over how shared memory is used, so that you can optimize the app for the hardware’s performance characteristics, based on the memory access patterns of its computation kernels. An `array_view` reflects the same `cpu_access_type` as the `array` that it’s associated with; or, if the array_view is constructed without a data source, its `access_type` reflects the environment that first causes it to allocate storage. That is, if it’s first accessed by the host (CPU), then it behaves as if it were created over a CPU data source and shares the `access_type` of the `accelerator_view` associated by capture; however, if it's first accessed by an `accelerator_view`, then it behaves as if it were created over an `array` created on that `accelerator_view` and shares the `array`’s `access_type`.

The following code example shows how to determine whether the default accelerator supports shared memory, and then creates several arrays that have different cpu_access_type configurations.

```cpp
#include <amp.h>
#include <iostream>

using namespace Concurrency;

int main()
{
    accelerator acc = accelerator(accelerator::default_accelerator);

    // Early out if the default accelerator doesn’t support shared memory.
    if (!acc.supports_cpu_shared_memory)
    {
        std::cout << "The default accelerator does not support shared memory" << std::endl;
        return 1;
    }

    // Override the default CPU access type.
    acc.default_cpu_access_type = access_type_read_write

    // Create an accelerator_view from the default accelerator. The
    // accelerator_view inherits its default_cpu_access_type from acc.
    accelerator_view acc_v = acc.default_view;

    // Create an extent object to size the arrays.
    extent<1> ex(10);

    // Input array that can be written on the CPU.
    array<int, 1> arr_w(ex, acc_v, access_type_write);

    // Output array that can be read on the CPU.
    array<int, 1> arr_r(ex, acc_v, access_type_read);

    // Read-write array that can be both written to and read from on the CPU.
    array<int, 1> arr_rw(ex, acc_v, access_type_read_write);
}
```

## Executing Code over Data: parallel_for_each

The [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) function defines the code that you want to run on the accelerator against the data in the `array` or `array_view` object. Consider the following code from the introduction of this topic.

```cpp
#include <amp.h>
#include <iostream>
using namespace concurrency;

void AddArrays() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5] = {0, 0, 0, 0, 0};

    array_view<int, 1> a(5, aCPP);
    array_view<int, 1> b(5, bCPP);
    array_view<int, 1> sum(5, sumCPP);

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp)
        {
            sum[idx] = a[idx] + b[idx];
        }
    );

    for (int i = 0; i < 5; i++) {
        std::cout << sum[i] << "\n";
    }
}
```

The `parallel_for_each` method takes two arguments, a compute domain and a lambda expression.

The *compute domain* is an `extent` object or a `tiled_extent` object that defines the set of threads to create for parallel execution. One thread is generated for each element in the compute domain. In this case, the `extent` object is one-dimensional and has five elements. Therefore, five threads are started.

The *lambda expression* defines the code to run on each thread. The capture clause, `[=]`, specifies that the body of the lambda expression accesses all captured variables by value, which in this case are `a`, `b`, and `sum`. In this example, the parameter list creates a one-dimensional `index` variable named `idx`. The value of the `idx[0]` is 0 in the first thread and increases by one in each subsequent thread. The `restrict(amp)` indicates that only the subset of the C++ language that C++ AMP can accelerate is used.  The limitations on functions that have the restrict modifier are described in [restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md). For more information, see, [Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md).

The lambda expression can include the code to execute or it can call a separate kernel function. The kernel function must include the `restrict(amp)` modifier. The following example is equivalent to the previous example, but it calls a separate kernel function.

```cpp
#include <amp.h>
#include <iostream>
using namespace concurrency;

void AddElements(
    index<1> idx,
    array_view<int, 1> sum,
    array_view<int, 1> a,
    array_view<int, 1> b) restrict(amp) {
    sum[idx] = a[idx] + b[idx];
}

void AddArraysWithFunction() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5] = {0, 0, 0, 0, 0};

    array_view<int, 1> a(5, aCPP);
    array_view<int, 1> b(5, bCPP);
    array_view<int, 1> sum(5, sumCPP);

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp) {
            AddElements(idx, sum, a, b);
        }
    );

    for (int i = 0; i < 5; i++) {
        std::cout << sum[i] << "\n";
    }
}
```

## Accelerating Code: Tiles and Barriers

You can gain additional acceleration by using tiling. Tiling divides the threads into equal rectangular subsets or *tiles*. You determine the appropriate tile size based on your data set and the algorithm that you are coding. For each thread, you have access to the *global* location of a data element relative to the whole `array` or `array_view` and access to the *local* location relative to the tile. Using the local index value simplifies your code because you don't have to write the code to translate index values from global to local. To use tiling, call the [extent::tile Method](reference/extent-class.md#tile) on the compute domain in the `parallel_for_each` method, and use a [tiled_index](../../parallel/amp/reference/tiled-index-class.md) object in the lambda expression.

In typical applications, the elements in a tile are related in some way, and the code has to access and keep track of values across the tile. Use the [tile_static Keyword](../../cpp/tile-static-keyword.md) keyword and the [tile_barrier::wait Method](reference/tile-barrier-class.md#wait) to accomplish this. A variable that has the **tile_static** keyword has a scope across an entire tile, and an instance of the variable is created for each tile. You must handle synchronization of tile-thread access to the variable. The [tile_barrier::wait Method](reference/tile-barrier-class.md#wait) stops execution of the current thread until all the threads in the tile have reached the call to `tile_barrier::wait`. So you can accumulate values across the tile by using **tile_static** variables. Then you can finish any computations that require access to all the values.

The following diagram represents a two-dimensional array of sampling data that is arranged in tiles.

![Index values in a tiled extent](../../parallel/amp/media/camptiledgridexample.png "Index values in a tiled extent")

The following code example uses the sampling data from the previous diagram. The code replaces each value in the tile by the average of the values in the tile.

```cpp
// Sample data:
int sampledata[] = {
    2, 2, 9, 7, 1, 4,
    4, 4, 8, 8, 3, 4,
    1, 5, 1, 2, 5, 2,
    6, 8, 3, 2, 7, 2};

// The tiles:
// 2 2    9 7    1 4
// 4 4    8 8    3 4
//
// 1 5    1 2    5 2
// 6 8    3 2    7 2

// Averages:
int averagedata[] = {
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
};

array_view<int, 2> sample(4, 6, sampledata);

array_view<int, 2> average(4, 6, averagedata);

parallel_for_each(
    // Create threads for sample.extent and divide the extent into 2 x 2 tiles.
    sample.extent.tile<2,2>(),
        [=](tiled_index<2,2> idx) restrict(amp) {
        // Create a 2 x 2 array to hold the values in this tile.
        tile_static int nums[2][2];

        // Copy the values for the tile into the 2 x 2 array.
        nums[idx.local[1]][idx.local[0]] = sample[idx.global];

        // When all the threads have executed and the 2 x 2 array is complete, find the average.
        idx.barrier.wait();
        int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1];

        // Copy the average into the array_view.
        average[idx.global] = sum / 4;
    });

for (int i = 0; i <4; i++) {
    for (int j = 0; j <6; j++) {
        std::cout << average(i,j) << " ";
    }
    std::cout << "\n";
}

// Output:
// 3 3 8 8 3 3
// 3 3 8 8 3 3
// 5 5 2 2 4 4
// 5 5 2 2 4 4
```

## Math Libraries

C++ AMP includes two math libraries. The double-precision library in the [Concurrency::precise_math Namespace](../../parallel/amp/reference/concurrency-precise-math-namespace.md) provides support for double-precision functions. It also provides support for single-precision functions, although double-precision support on the hardware is still required. It complies with the [C99 Specification (ISO/IEC 9899)](https://go.microsoft.com/fwlink/p/?linkid=225887). The accelerator must support full double precision. You can determine whether it does by checking the value of the [accelerator::supports_double_precision Data Member](reference/accelerator-class.md#supports_double_precision). The fast math library,  in the [Concurrency::fast_math Namespace](../../parallel/amp/reference/concurrency-fast-math-namespace.md), contains another set of math functions. These functions, which support only **`float`** operands, execute more quickly but aren’t as precise as those in the double-precision math library. The functions are contained in the \<amp_math.h> header file and all are declared with `restrict(amp)`. The functions in the \<cmath> header file are imported into both the `fast_math` and `precise_math` namespaces. The **`restrict`** keyword is used to distinguish the \<cmath> version and the C++ AMP version. The following code calculates the base-10 logarithm, using the fast method, of each value that is in the compute domain.

```cpp
#include <amp.h>
#include <amp_math.h>
#include <iostream>
using namespace concurrency;

void MathExample() {

    double numbers[] = { 1.0, 10.0, 60.0, 100.0, 600.0, 1000.0 };
    array_view<double, 1> logs(6, numbers);

    parallel_for_each(
        logs.extent,
        [=] (index<1> idx) restrict(amp) {
            logs[idx] = concurrency::fast_math::log10(numbers[idx]);
        }
    );

    for (int i = 0; i < 6; i++) {
        std::cout << logs[i] << "\n";
    }
}
```

## Graphics Library

C++ AMP includes a graphics library that is designed for accelerated graphics programming. This library is used only on devices that support native graphics functionality. The methods are in the [Concurrency::graphics Namespace](../../parallel/amp/reference/concurrency-graphics-namespace.md) and are contained in the \<amp_graphics.h> header file. The key components of the graphics library are:

- [texture Class](../../parallel/amp/reference/texture-class.md): You can use the texture class to create textures from memory or from a file. Textures resemble arrays because they contain data, and they resemble containers in the C++ Standard Library with respect to assignment and copy construction. For more information, see [C++ Standard Library Containers](../../standard-library/stl-containers.md). The template parameters for the `texture` class are the element type and the rank. The rank can be 1, 2, or 3. The element type can be one of the short vector types that are described later in this article.

- [writeonly_texture_view Class](../../parallel/amp/reference/writeonly-texture-view-class.md): Provides write-only access to any texture.

- Short Vector Library: Defines a set of short vector types of length 2, 3, and 4 that are based on **`int`**, `uint`, **`float`**, **`double`**, [norm](../../parallel/amp/reference/norm-class.md), or [unorm](../../parallel/amp/reference/unorm-class.md).

## Universal Windows Platform (UWP) Apps

Like other C++ libraries, you can use C++ AMP in your UWP apps. These articles describe how to include C++ AMP code in apps that is created by using C++, C#, Visual Basic, or JavaScript:

- [Using C++ AMP in UWP Apps](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)

- [Walkthrough: Creating a basic Windows Runtime component in C++ and calling it from JavaScript](/previous-versions/windows/apps/hh755833(v=vs.140))

- [Bing Maps Trip Optimizer, a Window Store app in JavaScript and C++](/previous-versions/windows/apps/hh699893(v=vs.140))

- [How to use C++ AMP from C# using the Windows Runtime](https://devblogs.microsoft.com/pfxteam/how-to-use-c-amp-from-c-using-winrt/)

- [How to use C++ AMP from C#](https://devblogs.microsoft.com/pfxteam/how-to-use-c-amp-from-c/)

- [Calling Native Functions from Managed Code](../../dotnet/calling-native-functions-from-managed-code.md)

## C++ AMP and Concurrency Visualizer

The Concurrency Visualizer includes support for analyzing performance of C++ AMP code. These articles describe these features:

- [GPU Activity Graph](/visualstudio/profiling/gpu-activity-graph)

- [GPU Activity (Paging)](/visualstudio/profiling/gpu-activity-paging)

- [GPU Activity (This Process)](/visualstudio/profiling/gpu-activity-this-process)

- [GPU Activity (Other Processes)](/visualstudio/profiling/gpu-activity-other-processes)

- [Channels (Threads View)](/visualstudio/profiling/channels-threads-view)

- [Analyzing C++ AMP Code with the Concurrency Visualizer](/archive/blogs/nativeconcurrency/analyzing-c-amp-code-with-the-concurrency-visualizer)

## Performance Recommendations

Modulus and division of unsigned integers have significantly better performance than modulus and division of signed integers. We recommend that you use unsigned integers when possible.

## See also

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md)<br/>
[Reference (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)<br/>
[Parallel Programming in Native Code Blog](/archive/blogs/nativeconcurrency/)
