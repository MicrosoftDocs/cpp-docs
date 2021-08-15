---
description: "Learn more about: Using accelerator and accelerator_view Objects"
title: "Using accelerator and accelerator_view Objects"
ms.date: "11/04/2016"
ms.assetid: 18f0dc66-8236-4420-9f46-1a14f2c3fba1
---
# Using accelerator and accelerator_view Objects

You can use the [accelerator](../../parallel/amp/reference/accelerator-class.md) and [accelerator_view](../../parallel/amp/reference/accelerator-view-class.md) classes to specify the device or emulator to run your C++ AMP code on. A system might have several devices or emulators that differ by amount of memory, shared memory support, debugging support, or double-precision support. C++ Accelerated Massive Parallelism (C++ AMP) provides APIs that you can use to examine the available accelerators, set one as the default, specify multiple accelerator_views for multiple calls to parallel_for_each, and perform special debugging tasks.

## Using the Default Accelerator

The C++ AMP runtime picks a default accelerator, unless you write code to pick a specific one. The runtime chooses the default accelerator as follows:

1. If the app is running in debug mode, an accelerator that supports debugging.

2. Otherwise, the accelerator that's specified by the CPPAMP_DEFAULT_ACCELERATOR environment variable, if it's set.

3. Otherwise, a non-emulated device.

4. Otherwise, the device that has the greatest amount of available memory.

5. Otherwise, a device that's not attached to the display.

Additionally, the runtime specifies an `access_type` of `access_type_auto` for the default accelerator. This means that the default accelerator uses shared memory if it’s supported and if its performance characteristics (bandwidth and latency) are known to be the same as dedicated (non-shared) memory.

You can determine the properties of the default accelerator by constructing the default accelerator and examining its properties. The following code example prints the path, amount of accelerator memory, shared memory support, double-precision support, and limited double-precision support of the default accelerator.

```cpp
void default_properties() {
    accelerator default_acc;
    std::wcout << default_acc.device_path << "\n";
    std::wcout << default_acc.dedicated_memory << "\n";
    std::wcout << (accs[i].supports_cpu_shared_memory ?
        "CPU shared memory: true" : "CPU shared memory: false") << "\n";
    std::wcout << (accs[i].supports_double_precision ?
        "double precision: true" : "double precision: false") << "\n";
    std::wcout << (accs[i].supports_limited_double_precision ?
        "limited double precision: true" : "limited double precision: false") << "\n";
}
```

### CPPAMP_DEFAULT_ACCELERATOR Environment Variable

You can set the CPPAMP_DEFAULT_ACCELERATOR environment variable to specify the `accelerator::device_path` of the default accelerator. The path is hardware-dependent. The following code uses the `accelerator::get_all` function to retrieve a list of the available accelerators and then displays the path and characteristics of each accelerator.

```cpp
void list_all_accelerators()
{
    std::vector<accelerator> accs = accelerator::get_all();

    for (int i = 0; i <accs.size(); i++) {
        std::wcout << accs[i].device_path << "\n";
        std::wcout << accs[i].dedicated_memory << "\n";
        std::wcout << (accs[i].supports_cpu_shared_memory ?
            "CPU shared memory: true" : "CPU shared memory: false") << "\n";
        std::wcout << (accs[i].supports_double_precision ?
            "double precision: true" : "double precision: false") << "\n";
        std::wcout << (accs[i].supports_limited_double_precision ?
            "limited double precision: true" : "limited double precision: false") << "\n";
    }
}
```

## Selecting an Accelerator

To select an accelerator, use the `accelerator::get_all` method to retrieve a list of the available accelerators and then select one based on its properties. This example shows how to pick the accelerator that has the most memory:

```cpp
void pick_with_most_memory()
{
    std::vector<accelerator> accs = accelerator::get_all();
    accelerator acc_chosen = accs[0];

    for (int i = 0; i <accs.size(); i++) {
        if (accs[i].dedicated_memory> acc_chosen.dedicated_memory) {
            acc_chosen = accs[i];
        }
    }

    std::wcout << "The accelerator with the most memory is "
        << acc_chosen.device_path << "\n"
        << acc_chosen.dedicated_memory << ".\n";
}
```

> [!NOTE]
> One of the accelerators that are returned by `accelerator::get_all` is the CPU accelerator. You cannot execute code on the CPU accelerator. To filter out the CPU accelerator, compare the value of the [device_path](reference/accelerator-class.md#device_path) property of the accelerator that's returned by `accelerator::get_all` with the value of the [accelerator::cpu_accelerator](reference/accelerator-class.md#cpu_accelerator). For more information, see the "Special Accelerators" section in this article.

## Shared Memory

Shared memory is memory that can be accessed by both the CPU and the accelerator. The use of shared memory eliminates or significantly reduces the overhead of copying data between the CPU and the accelerator. Although the memory is shared, it cannot be accessed concurrently by both the CPU and the accelerator, and doing so causes undefined behavior. The accelerator property [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) returns **`true`** if the accelerator supports shared memory, and the [default_cpu_access_type](reference/accelerator-class.md#default_cpu_access_type) property gets the default [access_type](reference/concurrency-namespace-enums-amp.md#access_type) for memory allocated on the `accelerator`—for example, **array**s associated with the `accelerator`, or `array_view` objects accessed on the `accelerator`.

The C++ AMP runtime automatically chooses the best default `access_type` for each `accelerator`, but the performance characteristics (bandwidth and latency) of shared memory can be worse than those of dedicated (non-shared) accelerator memory when reading from the CPU, writing from the CPU, or both. If shared memory performs as well as dedicated memory for reading and writing from the CPU, the runtime defaults to `access_type_read_write`; otherwise, the runtime chooses a more conservative default `access_type`, and allows the app to override it if the memory access patterns of its computation kernels benefit from a different `access_type`.

The following code example shows how to determine whether the default accelerator supports shared memory, and then overrides its default access type and creates an `accelerator_view` from it.

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
    acc.set_default_cpu_access_type(access_type_read_write);

    // Create an accelerator_view from the default accelerator. The
    // accelerator_view reflects the default_cpu_access_type of the
    // accelerator it’s associated with.
    accelerator_view acc_v = acc.default_view;
}
```

An `accelerator_view` always reflects the `default_cpu_access_type` of the `accelerator` it’s associated with, and it provides no interface to override or change its `access_type`.

## Changing the Default Accelerator

You can change the default accelerator by calling the `accelerator::set_default` method. You can change the default accelerator only once per app execution and you must change it before any code is executed on the GPU. Any subsequent function calls to change the accelerator return **`false`**. If you want to use a different accelerator in a call to `parallel_for_each`, read the "Using Multiple Accelerators" section in this article. The following code example sets the default accelerator to one that is not emulated, is not connected to a display, and supports double-precision.

```cpp
bool pick_accelerator()
{
    std::vector<accelerator> accs = accelerator::get_all();
    accelerator chosen_one;

    auto result = std::find_if(accs.begin(), accs.end(),
        [] (const accelerator& acc) {
            return !acc.is_emulated &&
                acc.supports_double_precision &&
                !acc.has_display;
        });

    if (result != accs.end()) {
        chosen_one = *(result);
    }

    std::wcout <<chosen_one.description <<std::endl;
    bool success = accelerator::set_default(chosen_one.device_path);
    return success;
}
```

## Using Multiple Accelerators

There are two ways to use multiple accelerators in your app:

- You can pass `accelerator_view` objects to the calls to the [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) method.

- You can construct an **array** object using a specific `accelerator_view` object. The C+AMP runtime will pick up the `accelerator_view` object from the captured **array** object in the lambda expression.

## Special Accelerators

The device paths of three special accelerators are available as properties of the `accelerator` class:

- [accelerator::direct3d_ref Data Member](reference/accelerator-class.md#direct3d_ref): This single-threaded accelerator uses software on the CPU to emulate a generic graphics card. It's used by default for debugging, but it's not useful in production because it's slower than the hardware accelerators. Additionally, it's available only in the DirectX SDK and the Windows SDK, and it's unlikely to be installed on your customers' computers. For more information, see [Debugging GPU Code](/visualstudio/debugger/debugging-gpu-code).

- [accelerator::direct3d_warp Data Member](reference/accelerator-class.md#direct3d_warp): This accelerator provides a fallback solution for executing C++ AMP code on multi-core CPUs that use Streaming SIMD Extensions (SSE).

- [accelerator::cpu_accelerator Data Member](reference/accelerator-class.md#cpu_accelerator): You can use this accelerator for setting up staging arrays. It cannot execute C++ AMP code. For more information, see the [Staging Arrays in C++ AMP](/archive/blogs/nativeconcurrency/staging-arrays-in-c-amp) post on the Parallel Programming in Native Code blog.

## Interoperability

The C++ AMP runtime supports interoperability between the `accelerator_view` class and the Direct3D [ID3D11Device interface](/windows/win32/api/d3d11/nn-d3d11-id3d11device). The [create_accelerator_view](reference/concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view) method takes an `IUnknown` interface and returns an `accelerator_view` object. The [get_device](reference/concurrency-direct3d-namespace-functions-amp.md#get_device) method takes an `accelerator_view` object and returns an `IUnknown` interface.

## See also

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Debugging GPU Code](/visualstudio/debugger/debugging-gpu-code)<br/>
[accelerator_view Class](../../parallel/amp/reference/accelerator-view-class.md)
