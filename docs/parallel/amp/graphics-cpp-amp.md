---
description: "Learn more about: Graphics (C++ AMP)"
title: "Graphics (C++ AMP)"
ms.date: "11/04/2016"
ms.assetid: 190a98a4-5f7d-442e-866b-b374ca74c16f
---
# Graphics (C++ AMP)

C++ AMP contains several APIs in the [Concurrency::graphics](../../parallel/amp/reference/concurrency-graphics-namespace.md) namespace that you can use to access the texture support on GPUs. Some common scenarios are:

- You can use the [texture](../../parallel/amp/reference/texture-class.md) class as a data container for computation and exploit the *spatial locality* of the texture cache and layouts of GPU hardware. Spatial locality is the property of data elements being physically close to each other.

- The runtime provides efficient interoperability with non-compute shaders. Pixel, vertex, tessellation, and hull shaders frequently consume or produce textures that you can use in your C++ AMP computations.

- The graphics APIs in C++ AMP provide alternative ways to access sub-word packed buffers. Textures that have formats that represent *texels* (texture elements) that are composed of 8-bit or 16-bit scalars allow access to such packed data storage.

## The norm and unorm Types

The `norm` and `unorm` types are scalar types that limit the range of **`float`** values; this is known as *clamping*. These types can be explicitly constructed from other scalar types. In casting, the value is first cast to **`float`** and then clamped to the respective region that's allowed by norm [-1.0, 1.0] or unorm [0.0, 1.0]. Casting from +/- infinity returns +/-1. Casting from NaN is undefined. A norm can be implicitly constructed from a unorm and there is no loss of data. The implicit conversion operator to float is defined on these types. Binary operators are defined between these types and other built-in scalar types such as **`float`** and **`int`**: +, -, \*, /, ==, !=, >, \<, >=, <=. The compound assignment operators are also supported: +=, -=, \*=, /=. The unary negation operator (-) is defined for norm types.

## Short Vector Library

The Short Vector Library provides some of the functionality of the [Vector Type](/windows/win32/direct3dhlsl/dx-graphics-hlsl-vector) that's defined in HLSL and is typically used to define texels. A short vector is a data structure that holds one to four values of the same type. The supported types are **`double`**, **`float`**, **`int`**, `norm`, `uint`, and `unorm`. The type names are shown in the following table. For each type, there is also a corresponding **`typedef`** that doesn't have an underscore in the name. The types that have the underscores are in the [Concurrency::graphics Namespace](../../parallel/amp/reference/concurrency-graphics-namespace.md). The types that don't have the underscores are in the [Concurrency::graphics::direct3d Namespace](../../parallel/amp/reference/concurrency-graphics-direct3d-namespace.md) so that they are clearly separated from the similarly-named fundamental types such as **`__int8`** and **`__int16`**.

|Type|Length 2|Length 3|Length 4|
|-|--------------|--------------|--------------|
|double|double_2<br /><br /> double2|double_3<br /><br /> double3|double_4<br /><br /> double4|
|float|float_2<br /><br /> float2|float_3<br /><br /> float3|float_4<br /><br /> float4|
|int|int_2<br /><br /> int2|int_3<br /><br /> int3|int_4<br /><br /> int4|
|norm|norm_2<br /><br /> norm2|norm_3<br /><br /> norm3|norm_4<br /><br /> norm4|
|uint|uint_2<br /><br /> uint2|uint_3<br /><br /> uint3|uint_4<br /><br /> uint4|
|unorm|unorm_2<br /><br /> unorm2|unorm_3<br /><br /> unorm3|unorm_4<br /><br /> unorm4|

### Operators

If an operator is defined between two short vectors, then it is also defined between a short vector and a scalar. Also, one of these must be true:

- The scalar’s type must be the same as the short vector’s element type.

- The scalar’s type can be implicitly converted to the vector’s element type by using only one user-defined conversion.

The operation is carried component-wise between each component of the short vector and the scalar. Here are the valid operators:

|Operator type|Valid types|
|-------------------|-----------------|
|Binary operators|Valid on all types: +, -, \*, /,<br /><br /> Valid on integer types: %, ^, &#124;, &, <\<, >><br /><br /> The two vectors must have the same size, and the result is a vector of the same size.|
|Relational operators|Valid on all types: == and !=|
|Compound assignment operator|Valid on all types: +=, -=, \*=, /=<br /><br /> Valid on integer types: %=, ^=, &#124;=, &=, <\<=, >>=|
|Increment and decrement operators|Valid on all types: ++, --<br /><br /> Both prefix and postfix are valid.|
|Bitwise NOT operator (~)|Valid on integer types.|
|Unary - operator|Valid on all types except `unorm` and `uint`.|

### Swizzling Expressions

The Short Vector Library supports the `vector_type.identifier` accessor construct to access the components of a short vector. The `identifier`, which is known as a *swizzling expression*, specifies the components of the vector. The expression can be an l-value or an r-value. Individual characters in the identifier may be: x, y, z, and w; or r, g, b, and a. "x" and "r" mean the zero-th component, "y" and "g" mean the first component, and so on. (Notice that "x" and "r" cannot be used in the same identifier.) Therefore, "rgba" and "xyzw" return the same result. Single-component accessors such as "x" and "y" are scalar value types. Multi-component accessors are short vector types. For example, if you construct an `int_4` vector that's named `fourInts` and has the values 2, 4, 6, and 8, then `fourInts.y` returns the integer 4 and `fourInts.rg` returns an `int_2` object that has the values 2 and 4.

## Texture Classes

Many GPUs have hardware and caches that are optimized to fetch pixels and texels and to render images and textures. The [texture\<T,N>](../../parallel/amp/reference/texture-class.md) class, which is a container class for texel objects, exposes the texture functionality of these GPUs. A texel can be:

- An **`int`**, `uint`, **`float`**, **`double`**, `norm`, or `unorm` scalar.

- A short vector that has two or four components. The only exception is `double_4`, which is not allowed.

The `texture` object can have a rank of 1, 2, or 3. The `texture` object can be captured only by reference in the lambda of a call to `parallel_for_each`. The texture is stored on the GPU as Direct3D texture objects. For more information about textures and texels in Direct3D, see [Introduction to Textures in Direct3D 11](/windows/win32/direct3d11/overviews-direct3d-11-resources-textures-intro).

The texel type you use might be one of the many texture formats that are used in graphics programming. For example, an RGBA format could use 32 bits, with 8 bits each for the R, G, B, and A scalar elements. The texture hardware of a graphics card can access the individual elements based on the format. For example, if you are using the RGBA format, the texture hardware can extract each 8-bit element into a 32-bit form. In C++ AMP, you can set the bits per scalar element of your texel so that you can automatically access the individual scalar elements in the code without using bit-shifting.

### Instantiating Texture Objects

You can declare a texture object without initialization. The following code example declares several texture objects.

```cpp
#include <amp.h>
#include <amp_graphics.h>
using namespace concurrency;
using namespace concurrency::graphics;

void declareTextures() {
    // Create a 16-texel texture of int.
    texture<int, 1> intTexture1(16);
    texture<int, 1> intTexture2(extent<1>(16));

    // Create a 16 x 32 texture of float_2.
    texture<float_2, 2> floatTexture1(16, 32);
    texture<float_2, 2> floatTexture2(extent<2>(16, 32));

    // Create a 2 x 4 x 8 texture of uint_4.
    texture<uint_4, 3> uintTexture1(2, 4, 8);
    texture<uint_4, 3> uintTexture2(extent<3>(2, 4, 8));
}
```

You can also use a constructor to declare and initialize a `texture` object. The following code example instantiates a `texture` object from a vector of `float_4` objects. The bits per scalar element is set to the default. You cannot use this constructor with `norm`, `unorm`, or the short vectors of `norm` and `unorm`, because they do not have a default bits per scalar element.

```cpp
#include <amp.h>
#include <amp_graphics.h>
#include <vector>
using namespace concurrency;
using namespace concurrency::graphics;

void initializeTexture() {
    std::vector<int_4> texels;
    for (int i = 0; i < 768 * 1024; i++) {
        int_4 i4(i, i, i, i);
        texels.push_back(i4);
    }

    texture<int_4, 2> aTexture(768, 1024, texels.begin(), texels.end());
}
```

You can also declare and initialize a `texture` object by using a constructor overload that takes a pointer to the source data, the size of source data in bytes, and the bits per scalar element.

```cpp
void createTextureWithBPC() { // Create the source data.
    float source[1024* 2];
    for (int i = 0; i <1024* 2; i++) {
        source[i] = (float)i;
    }
    // Initialize the texture by using the size of source in bytes // and bits per scalar element.
    texture<float_2, 1> floatTexture(1024, source, (unsigned int)sizeof(source), 32U);
}
```

The textures in these examples are created on the default view of the default accelerator. You can use other overloads of the constructor if you want to specify an `accelerator_view` object. You cannot create a texture object on a CPU accelerator.

There are limits on the size of each dimension of the `texture` object, as shown in the following table. A run-time error is generated if you exceed the limits.

|Texture|Size limitation per dimension|
|-------------|---------------------|
|texture\<T,1>|16384|
|texture\<T,2>|16384|
|texture\<T,3>|2048|

### Reading from Texture Objects

You can read from a `texture` object by using [texture::operator\[\]](reference/texture-class.md#operator_at), [texture::operator() Operator](reference/texture-class.md#operator_call), or [texture::get Method](reference/texture-class.md#get). The two operators return a value, not a reference. Therefore, you cannot write to a `texture` object by using `texture::operator\[\]`.

```cpp
void readTexture() {
    std::vector<int_2> src;
    for (int i = 0; i <16 *32; i++) {
        int_2 i2(i, i);

        src.push_back(i2);
    }

    std::vector<int_2> dst(16* 32);

    array_view<int_2, 2> arr(16, 32, dst);

    arr.discard_data();

    const texture<int_2, 2> tex9(16, 32, src.begin(), src.end());

    parallel_for_each(tex9.extent, [=, &tex9] (index<2> idx) restrict(amp) { // Use the subscript operator.
        arr[idx].x += tex9[idx].x; // Use the function () operator.
        arr[idx].x += tex9(idx).x; // Use the get method.
        arr[idx].y += tex9.get(idx).y; // Use the function () operator.
        arr[idx].y += tex9(idx[0], idx[1]).y;
    });

    arr.synchronize();
}
```

The following code example demonstrates how to store texture channels in a short vector, and then access the individual scalar elements as properties of the short vector.

```cpp
void UseBitsPerScalarElement() { // Create the image data. // Each unsigned int (32-bit) represents four 8-bit scalar elements(r,g,b,a values).
    const int image_height = 16;
    const int image_width = 16;
    std::vector<unsigned int> image(image_height* image_width);

    extent<2> image_extent(image_height, image_width);

    // By using uint_4 and 8 bits per channel, each 8-bit channel in the data source is // stored in one 32-bit component of a uint_4.
    texture<uint_4, 2> image_texture(image_extent, image.data(), image_extent.size()* 4U,  8U);

    // Use can access the RGBA values of the source data by using swizzling expressions of the uint_4.
    parallel_for_each(image_extent,
        [&image_texture](index<2> idx) restrict(amp)
        { // 4 bytes are automatically extracted when reading.
            uint_4 color = image_texture[idx];
            unsigned int r = color.r;
            unsigned int g = color.g;
            unsigned int b = color.b;
            unsigned int a = color.a;
        });
}
```

The following table lists the valid bits per channel for each sort vector type.

|Texture data type|Valid bits per scalar element|
|-----------------------|-----------------------------------|
|int, int_2, int_4<br /><br /> uint, uint_2, uint_4|8, 16, 32|
|int_3, uint_3|32|
|float, float_2, float_4|16, 32|
|float_3|32|
|double, double_2|64|
|norm, norm_2, norm_4<br /><br /> unorm, unorm_2, unorm, 4|8, 16|

### Writing to Texture Objects

Use the [texture::set](reference/texture-class.md#set) method to write to `texture` objects. A texture object can be readonly or read/write. For a texture object to be readable and writeable, the following conditions must be true:

- T has only one scalar component. (Short vectors are not allowed.)

- T is not **`double`**, `norm`, or `unorm`.

- The `texture::bits_per_scalar_element` property is 32.

If all three are not true, then the `texture` object is readonly. The first two conditions are checked during compilation. A compilation error is generated if you have code that tries to write to a `readonly` texture object. The condition for `texture::bits_per_scalar_element` is detected at run time, and the runtime generates the [unsupported_feature](../../parallel/amp/reference/unsupported-feature-class.md) exception if you try to write to a readonly `texture` object.

The following code example writes values to a texture object.

```cpp
void writeTexture() {
    texture<int, 1> tex1(16);

    parallel_for_each(tex1.extent, [&tex1] (index<1> idx) restrict(amp) {
        tex1.set(idx, 0);
    });
}
```

### Copying Texture Objects

You can copy between texture objects by using the [copy](reference/concurrency-namespace-functions-amp.md#copy) function or the [copy_async](reference/concurrency-namespace-functions-amp.md#copy_async) function, as shown in the following code example.

```cpp
void copyHostArrayToTexture() { // Copy from source array to texture object by using the copy function.
    float floatSource[1024* 2];
    for (int i = 0; i <1024* 2; i++) {
        floatSource[i] = (float)i;
    }
    texture<float_2, 1> floatTexture(1024);

    copy(floatSource, (unsigned int)sizeof(floatSource), floatTexture);

    // Copy from source array to texture object by using the copy function.
    char charSource[16* 16];
    for (int i = 0; i <16* 16; i++) {
        charSource[i] = (char)i;
    }
    texture<int, 2> charTexture(16, 16, 8U);

    copy(charSource, (unsigned int)sizeof(charSource), charTexture);
    // Copy from texture object to source array by using the copy function.
    copy(charTexture, charSource, (unsigned int)sizeof(charSource));
}
```

You can also copy from one texture to another by using the [texture::copy_to](reference/texture-class.md#copy_to) method. The two textures can be on different accelerator_views. When you copy to a `writeonly_texture_view` object, the data is copied to the underlying `texture` object. The bits per scalar element and the extent must be the same on the source and destination `texture` objects. If those requirements are not met, the runtime throws an exception.

## Texture View Classes

C++ AMP introduces the [texture_view Class](../../parallel/amp/reference/texture-view-class.md) in Visual Studio 2013. Texture views support the same texel types and ranks as the [texture Class](../../parallel/amp/reference/texture-class.md), but unlike textures, they provide access to additional hardware features such as texture sampling and mipmaps. Texture views support read-only, write-only, and read-write access to the underlying texture data.

- Read-only access is provided by the `texture_view<const T, N>` template specialization, which supports elements that have 1, 2, or 4 components, texture sampling, and dynamic access to a range of mipmap levels that are determined when the view is instantiated.

- Write-only access is provided by the non-specialized template class `texture_view<T, N>`, which supports elements that have either 2 or 4 components and can access one mipmap level that's determined when the view is instantiated. It does not support sampling.

- Read-write access is provided by the non-specialized template class `texture_view<T, N>`, which, like textures, supports elements that have only one component; the view can access one mipmap level that's determined when it is instantiated. It does not support sampling.

Texture views are analogous to array views, but do not provide the automatic data management and movement functionality that the [array_view Class](../../parallel/amp/reference/array-view-class.md) provides over the [array class](../../parallel/amp/reference/array-class.md). A `texture_view` can only be accessed on the accelerator view where the underlying texture data resides.

### writeonly_texture_view Deprecated

For Visual Studio 2013, C++ AMP introduces better support for hardware texture features such as sampling and mipmaps, which could not be supported by the [writeonly_texture_view Class](../../parallel/amp/reference/writeonly-texture-view-class.md). The newly introduced `texture_view` class supports a superset of the functionality in `writeonly_texture_view`; as a result, `writeonly_texture_view` is deprecated.

We recommend—at least for new code—that you use `texture_view` to access functionality that was formerly provided by `writeonly_texture_view`. Compare the following two code examples that write to a texture object that has two components (int_2). Notice that in both cases, the view, `wo_tv4`, must be captured by value in the lambda expression. Here is the example that uses the new `texture_view` class:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> tex4(16);

    texture_view<int_2, 1> wo_tv4(tex4);

    parallel_for_each(extent<1>(16), [=] (index<1> idx) restrict(amp) {
        wo_tv4.set(idx, int_2(1, 1));
    });
}
```

And here is the deprecated `writeonly_texture_view` class:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> tex4(16);

    writeonly_texture_view<int_2, 1> wo_tv4(tex4);

    parallel_for_each(extent<1>(16), [=] (index<1> idx) restrict(amp) {
        wo_tv4.set(idx, int_2(1, 1));
    });
}
```

As you can see, the two code examples are nearly identical when all you are doing is writing to the primary mipmap level. If you used `writeonly_texture_view` in existing code and you're not planning to enhance that code, you don't have to change it. However, if you're thinking about bringing that code forward, we suggest that you rewrite it to use `texture_view` because the enhancements in it support new hardware texture features. Read on for more information about these new capabilities.

For more information about the deprecation of `writeonly_texture_view`, see [Overview of the Texture View Design in C++ AMP](/archive/blogs/nativeconcurrency/overview-of-the-texture-view-design-in-c-amp) on the Parallel Programming in Native Code blog.

### Instantiating Texture View Objects

Declaring a `texture_view` is similar to declaring an `array_view` that's associated with an **array**. The following code example declares several `texture` objects and `texture_view` objects that are associated with them.

```cpp
#include <amp.h>
#include <amp_graphics.h>
using namespace concurrency;
using namespace concurrency::graphics;

void declareTextureViews()
{
    // Create a 16-texel texture of int, with associated texture_views.
    texture<int, 1> intTexture(16);
    texture_view<const int, 1> intTextureViewRO(intTexture);  // read-only
    texture_view<int, 1> intTextureViewRW(intTexture);        // read-write

    // Create a 16 x 32 texture of float_2, with associated texture_views.
    texture<float_2, 2> floatTexture(16, 32);
    texture_view<const float_2, 2> floatTextureViewRO(floatTexture);  // read-only
    texture_view<float_2, 2> floatTextureViewRO(floatTexture);        // write-only

    // Create a 2 x 4 x 8 texture of uint_4, with associated texture_views.
    texture<uint_4, 3> uintTexture(2, 4, 8);
    texture_view<const uint_4, 3> uintTextureViewRO(uintTexture);  // read-only
    texture_view<uint_4, 3> uintTextureViewWO(uintTexture);        // write-only
}
```

Notice how a texture view whose element type is non-const and has one component is read-write, but a texture view whose element type is non-const but has more than one componenent are write-only. Texture views of const element types are always read-only, but if the element type is non-const, then the number of components in the element determines whether it is read-write (1 component) or write-only (multiple components).

The element type of a `texture_view`—its const-ness and also the number of components it has—also plays a role in determining whether the view supports texture sampling, and how mipmap levels can be accessed:

|Type|Components|Read|Write|Sampling|Mipmap access|
|----------|----------------|----------|-----------|--------------|-------------------|
|texture_view\<const T, N>|1, 2, 4|Yes|No (1)|Yes|Yes, indexable. Range is determined at instantiation.|
|Texture_view\<T, N>|1<br /><br /> 2, 4|Yes<br /><br /> No (2)|Yes<br /><br /> Yes|No (1)<br /><br /> No (1)|Yes, one level. Level is determined at instantiation.<br /><br /> Yes, one level. Level is determined at instantiation.|

From this table, you can see that read-only texture views fully support the new capabilities in exchange for not being able to write to the view. Writable texture views are limited in that they can only access one mipmap level. Read-write texture views are even more specialized than writable ones, because they add the requirement that the element type of the texture view has only one component. Notice that sampling is not supported for writable texture views because it's a read-oriented operation.

### Reading from Texture View Objects

Reading unsampled texture data through a texture view is just like reading it from the texture itself, except that textures are captured by reference, whereas texture views are captured by value. The following two code examples demonstrate; first, by using `texture` only:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> text_data(16);

    parallel_for_each(extent<1>(16), [&] (index<1> idx) restrict(amp) {
        tex_data.set(idx, int_2(1, 1));
    });
}
```

And here is the same example, except it now uses the `texture_view` class:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> tex_data(16);

    texture_view<int_2, 1> tex_view(tex_data);

    parallel_for_each(extent<1>(16), [=] (index<1> idx) restrict(amp) {
        tex_view.set(idx, int_2(1, 1));
    });
}
```

Texture views whose elements are based on floating-point types—for example, float, float_2, or float_4—can also be read by using texture sampling to take advantage of hardware support for various filtering modes and addressing modes. C++ AMP supports the two filtering modes that are most common in compute scenarios—point-filtering (nearest-neighbor) and linear-filtering (weighted average)—and four addressing modes—wrapped, mirrored, clamped, and border. For more information about addressing modes, see [address_mode Enumeration](reference/concurrency-graphics-namespace-enums.md#address_mode).

In addition to modes that C++ AMP supports directly, you can access other filtering modes and addressing modes of the underlying platform by using the interop APIs to adopt a texture sampler that was created by using the platform APIs directly. For example, Direct3D supports other filtering modes such as anisotropic filtering, and can apply a different addressing mode to each dimension of a texture. You could create a texture sampler whose coordinates are wrapped vertically, mirrored horizontally, and sampled with anisotropic filtering by using the Direct3D APIs, and then leverage the sampler in your C++ AMP code by using the `make_sampler` interop API. For more information see [Texture Sampling in C++ AMP](/archive/blogs/nativeconcurrency/texture-sampling-in-c-amp) on the Parallel Programming in Native Code blog.

Texture views also support the reading of mipmaps. Read-only texture views (those that have a const element type) offer the most flexibility because a range of mip-levels that is determined at instantiation can be dynamically sampled, and because elements that have 1, 2, or 4 components are supported. Read-write texture views that have elements that have one component also support mipmaps, but only of a level that's determined at instantiation. For more information, see [Texture with Mipmaps](/archive/blogs/nativeconcurrency/texture-with-mipmaps) on the Parallel Programming in Native Code blog.

### Writing to Texture View Objects

Use the [texture_view::get Method](reference/texture-view-class.md#get) to write to the underlying `texture` through the `texture_view` object. A texture view can be read-only, read-write, or write-only. For a texture view to be writable it must have an element type that is non-const; for a texture view to be readable and writable, its element type must also have only one component. Otherwise, the texture view is read-only. You can only access one mipmap level of a texture at a time through a texture view, and the level is specified when the view is instantiated.

This example shows how to write to the second-most detailed mipmap level of a texture that has 4 mipmap levels. The most detailed mipmap level is level 0.

```cpp
// Create a texture that has 4 mipmap levels : 16x16, 8x8, 4x4, 2x2
texture<int, 2> tex(extent<2>(16, 16), 16U, 4);

// Create a writable texture view to the second mipmap level :4x4
texture_view<int, 2> w_view(tex, 1);

parallel_for_each(w_view.extent, [=](index<2> idx) restrict(amp)
{
    w_view.set(idx, 123);
});
```

## Interoperability

The C++ AMP runtime supports interoperability between `texture<T,1>` and the [ID3D11Texture1D interface](/windows/win32/api/d3d11/nn-d3d11-id3d11texture1d), between `texture<T,2>` and the [ID3D11Texture2D interface](/windows/win32/api/d3d11/nn-d3d11-id3d11texture2d), and between `texture<T,3>` and the [ID3D11Texture3D interface](/windows/win32/api/d3d11/nn-d3d11-id3d11texture3d). The [get_texture](reference/concurrency-graphics-direct3d-namespace-functions.md#get_texture) method takes a `texture` object and returns an `IUnknown` interface. The [make_texture](reference/concurrency-graphics-direct3d-namespace-functions.md#make_texture) method takes an `IUnknown` interface and an `accelerator_view` object and returns a `texture` object.

## See also

[double_2 Class](../../parallel/amp/reference/double-2-class.md)<br/>
[double_3 Class](../../parallel/amp/reference/double-3-class.md)<br/>
[double_4 Class](../../parallel/amp/reference/double-4-class.md)<br/>
[float_2 Class](../../parallel/amp/reference/float-2-class.md)<br/>
[float_3 Class](../../parallel/amp/reference/float-3-class.md)<br/>
[float_4 Class](../../parallel/amp/reference/float-4-class.md)<br/>
[int_2 Class](../../parallel/amp/reference/int-2-class.md)<br/>
[int_3 Class](../../parallel/amp/reference/int-3-class.md)<br/>
[int_4 Class](../../parallel/amp/reference/int-4-class.md)<br/>
[norm_2 Class](../../parallel/amp/reference/norm-2-class.md)<br/>
[norm_3 Class](../../parallel/amp/reference/norm-3-class.md)<br/>
[norm_4 Class](../../parallel/amp/reference/norm-4-class.md)<br/>
[short_vector Structure](../../parallel/amp/reference/short-vector-structure.md)<br/>
[short_vector_traits Structure](../../parallel/amp/reference/short-vector-traits-structure.md)<br/>
[uint_2 Class](../../parallel/amp/reference/uint-2-class.md)<br/>
[uint_3 Class](../../parallel/amp/reference/uint-3-class.md)<br/>
[uint_4 Class](../../parallel/amp/reference/uint-4-class.md)<br/>
[unorm_2 Class](../../parallel/amp/reference/unorm-2-class.md)<br/>
[unorm_3 Class](../../parallel/amp/reference/unorm-3-class.md)<br/>
[unorm_4 Class](../../parallel/amp/reference/unorm-4-class.md)
