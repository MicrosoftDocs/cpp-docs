---
description: "Learn more about: Using C++ AMP in UWP Apps"
title: "Using C++ AMP in UWP Apps"
ms.date: "11/04/2016"
ms.assetid: 85577298-2c28-4209-9470-eb21048615db
---
# Using C++ AMP in UWP Apps

You can use C++ AMP (C++ Accelerated Massive Parallelism) in your Universal Windows Platform (UWP) app to perform calculations on the GPU (Graphics Processing Unit) or other computational accelerators. However, C++ AMP doesn't provide APIs for working directly with Windows Runtime types, and the Windows Runtime doesn't provide a wrapper for C++ AMP. When you use Windows Runtime types in your code—including those that you've created yourself—you must convert them to types that are compatible with C++ AMP.

## Performance considerations

If you're using Visual C++ component extensions C++/CX to create your Universal Windows Platform (UWP) app, we recommend that you use plain-old-data (POD) types together with contiguous storage—for example, `std::vector` or C-style arrays—for data that will be used with C++ AMP. This can help you achieve higher performance than by using non-POD types or Windows RT containers because no marshaling has to occur.

In a C++ AMP kernel, to access data that’s stored in this way, just wrap the `std::vector` or array storage in a `concurrency::array_view` and then use the array view in a `concurrency::parallel_for_each` loop:

```cpp
// simple vector addition example
std::vector<int> data0(1024, 1);
std::vector<int> data1(1024, 2);
std::vector<int> data_out(data0.size(), 0);

concurrency::array_view<int, 1> av0(data0.size(), data0);
concurrency::array_view<int, 1> av1(data1.size(), data1);
concurrency::array_view<int, 1> av2(data_out.size(), data2);

av2.discard_data();

concurrency::parallel_for_each(av0.extent, [=](concurrency::index<1> idx) restrict(amp)
    {
        av2[idx] = av0[idx] + av1[idx];
    });
```

## Marshaling Windows Runtime types

When you work with Windows Runtime APIs, you might want to use C++ AMP on data that's stored in a Windows Runtime container such as a `Platform::Array<T>^` or in complex data types such as classes or structs that are declared by using the **ref** keyword or the **value** keyword. In these situations, you have to do some extra work to make the data available to C++ AMP.

### Platform::Array\<T>^, where T is a POD type

When you encounter a `Platform::Array<T>^` and T is a POD type, you can access its underlying storage just by using the `get` member function:

```cpp
Platform::Array<float>^ arr; // Assume that this was returned by a Windows Runtime API
concurrency::array_view<float, 1> av(arr->Length, &arr->get(0));
```

If T is not a POD type, use the technique that's described in the following section to use the data with C++ AMP.

### Windows Runtime types: ref classes and value classes

C++ AMP doesn't support complex data types. This includes non-POD types and any types that are declared by using the **ref** keyword or the **value** keyword. If an unsupported type is used in a `restrict(amp)` context, a compile-time error is generated.

When you encounter an unsupported type, you can copy interesting parts of its data into a `concurrency::array` object. In addition to making the data available for C++ AMP to consume, this manual-copy approach can also improve performance by maximizing data locality, and by ensuring that data that won't be used isn't copied to the accelerator. You can improve performance further by using a *staging array*, which is a special form of `concurrency::array` that provides a hint to the AMP runtime that the array should be optimized for frequent transfer between it and other arrays on the specified accelerator.

```cpp
// pixel_color.h
ref class pixel_color sealed
{
public:
    pixel_color(Platform::String^ color_name, int red, int green, int blue)
    {
        name = color_name;
        r = red;
        g = green;
        b = blue;
    }

    property Platform::String^ name;
    property int r;
    property int g;
    property int b;
};

// Some other file

std::vector<pixel_color^> pixels (256);

for (pixel_color ^pixel : pixels)
{
    pixels.push_back(ref new pixel_color("blue", 0, 0, 255));
}

// Create the accelerators
auto cpuAccelerator = concurrency::accelerator(concurrency::accelerator::cpu_accelerator);
auto devAccelerator = concurrency::accelerator(concurrency::accelerator::default_accelerator);

// Create the staging arrays
concurrency::array<float, 1> red_vec(256, cpuAccelerator.default_view, devAccelerator.default_view);
concurrency::array<float, 1>  blue_vec(256, cpuAccelerator.default_view, devAccelerator.default_view);

// Extract data from the complex array of structs into staging arrays.
concurrency::parallel_for(0, 256, [&](int i)
    {
        red_vec[i] = pixels[i]->r;
        blue_vec[i] = pixels[i]->b;
    });

// Array views are still used to copy data to the accelerator
concurrency::array_view<float, 1> av_red(red_vec);
concurrency::array_view<float, 1> av_blue(blue_vec);

// Change all pixels from blue to red.
concurrency::parallel_for_each(av_red.extent, [=](index<1> idx) restrict(amp)
    {
        av_red[idx] = 255;
        av_blue[idx] = 0;
    });
```

## See also

[Create your first UWP app using C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)<br/>
[Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
