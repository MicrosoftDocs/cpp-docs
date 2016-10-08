---
title: "Graphics (C++ AMP)"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 190a98a4-5f7d-442e-866b-b374ca74c16f
caps.latest.revision: 24
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Graphics (C++ AMP)
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>C++ AMP contains several APIs in the <legacyLink xlink:href="4529d3b1-d7da-4ffb-82bf-080915e0f23e">Concurrency::graphics</legacyLink> namespace that you can use to access the texture support on GPUs. Some common scenarios are:</para>
    <list class="bullet">
      <listItem>
        <para>You can use the <legacyLink xlink:href="16e85d4d-e80a-474a-995d-8bf63fbdf34c">texture</legacyLink> class as a data container for computation and exploit the <newTerm>spatial locality</newTerm> of the texture cache and layouts of GPU hardware. Spatial locality is the property of data elements being physically close to each other.</para>
      </listItem>
      <listItem>
        <para>The runtime provides efficient interoperability with non-compute shaders. Pixel, vertex, tessellation, and hull shaders frequently consume or produce textures that you can use in your C++ AMP computations. </para>
      </listItem>
      <listItem>
        <para>The graphics APIs in C++ AMP provide alternative ways to access sub-word packed buffers. Textures that have formats that represent <newTerm>texels</newTerm> (texture elements) that are composed of 8-bit or 16-bit scalars allow access to such packed data storage.</para>
      </listItem>
    </list>
  </introduction>
  <section>
    <title>The norm and unorm Types</title>
    <content>
      <para>The <languageKeyword>norm</languageKeyword> and <languageKeyword>unorm</languageKeyword> types are scalar types that limit the range of <languageKeyword>float</languageKeyword> values; this is known as <newTerm>clamping</newTerm>. These types can be explicitly constructed from other scalar types. In casting, the value is first cast to <languageKeyword>float</languageKeyword> and then clamped to the respective region that's allowed by norm [-1.0…1.0] or unorm [0.0…1.0]. Casting from +/- infinity returns +/-1. Casting from NaN is undefined. A norm can be implicitly constructed from a unorm and there is no loss of data. The implicit conversion operator to float is defined on these types. Binary operators are defined between these types and other built-in scalar types such as <languageKeyword>float</languageKeyword> and <languageKeyword>int</languageKeyword>: +, -, *, /, ==, !=, &gt;, &lt;, &gt;=, &lt;=. The compound assignment operators are also supported: +=, -=, *=, /=. The unary negation operator (-) is defined for norm types. </para>
    </content>
  </section>
  <section>
    <title>Short Vector Library</title>
    <content>
      <para>The Short Vector Library provides some of the functionality of the <externalLink><linkText>Vector Type</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=248500</linkUri></externalLink> that's defined in HLSL and is typically used to define texels. A short vector is a data structure that holds one to four values of the same type. The supported types are <languageKeyword>double</languageKeyword>, <languageKeyword>float</languageKeyword>, <languageKeyword>int</languageKeyword>, <languageKeyword>norm</languageKeyword>, <languageKeyword>uint</languageKeyword>, and <languageKeyword>unorm</languageKeyword>. The type names are shown in the following table. For each type, there is also a corresponding <languageKeyword>typedef</languageKeyword> that doesn't have an underscore in the name. The types that have the underscores are in the <link xlink:href="4529d3b1-d7da-4ffb-82bf-080915e0f23e">Concurrency::graphics Namespace</link>. The types that don't have the underscores are in the <link xlink:href="be283331-07cf-46e4-91a1-e8aa85d4ec8e">Concurrency::graphics::direct3d Namespace</link> so that they are clearly separated from the similarly-named fundamental types such as <unmanagedCodeEntityReference>__int8</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>__int16</unmanagedCodeEntityReference>.</para>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para />
            </TD>
            <TD>
              <para>Length 2</para>
            </TD>
            <TD>
              <para>Length 3</para>
            </TD>
            <TD>
              <para>Length 4</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>double</para>
            </TD>
            <TD>
              <para>double_2</para>
              <para>double2</para>
            </TD>
            <TD>
              <para>double_3</para>
              <para>double3</para>
            </TD>
            <TD>
              <para>double_4</para>
              <para>double4</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>float</para>
            </TD>
            <TD>
              <para>float_2</para>
              <para>float2</para>
            </TD>
            <TD>
              <para>float_3</para>
              <para>float3</para>
            </TD>
            <TD>
              <para>float_4</para>
              <para>float4</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>int</para>
            </TD>
            <TD>
              <para>int_2</para>
              <para>int2</para>
            </TD>
            <TD>
              <para>int_3</para>
              <para>int3</para>
            </TD>
            <TD>
              <para>int_4</para>
              <para>int4</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>norm</para>
            </TD>
            <TD>
              <para>norm_2</para>
              <para>norm2</para>
            </TD>
            <TD>
              <para>norm_3</para>
              <para>norm3</para>
            </TD>
            <TD>
              <para>norm_4</para>
              <para>norm4</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>uint</para>
            </TD>
            <TD>
              <para>uint_2</para>
              <para>uint2</para>
            </TD>
            <TD>
              <para>uint_3</para>
              <para>uint3</para>
            </TD>
            <TD>
              <para>uint_4</para>
              <para>uint4</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>unorm</para>
            </TD>
            <TD>
              <para>unorm_2</para>
              <para>unorm2</para>
            </TD>
            <TD>
              <para>unorm_3</para>
              <para>unorm3</para>
            </TD>
            <TD>
              <para>unorm_4</para>
              <para>unorm4</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
    <sections>
      <section>
        <title>Operators</title>
        <content>
          <para>If an operator is defined between two short vectors, then it is also defined between a short vector and a scalar. Also, one of these must be true: </para>
          <list class="bullet">
            <listItem>
              <para>The scalar’s type must be the same as the short vector’s element type.</para>
            </listItem>
            <listItem>
              <para>The scalar’s type can be implicitly converted to the vector’s element type by using only one user-defined conversion.</para>
            </listItem>
          </list>
          <para>The operation is carried component-wise between each component of the short vector and the scalar. Here are the valid operators: </para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Operator type</para>
                </TD>
                <TD>
                  <para>Valid types</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>Binary operators</para>
                </TD>
                <TD>
                  <para>Valid on all types: +, -, *, /,</para>
                  <para>Valid on integer types: %, ^, |, &amp;, &lt;&lt;, &gt;&gt;</para>
                  <para>The two vectors must have the same size, and the result is a vector of the same size.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Relational operators</para>
                </TD>
                <TD>
                  <para>Valid on all types: == and !=</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Compound assignment operator </para>
                </TD>
                <TD>
                  <para>Valid on all types: +=, -=, *=, /=</para>
                  <para>Valid on integer types: %=, ^=, |=, &amp;=, &lt;&lt;=, &gt;&gt;=</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Increment and decrement operators</para>
                </TD>
                <TD>
                  <para>Valid on all types: ++, --</para>
                  <para>Both prefix and postfix are valid.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Bitwise NOT operator (~)</para>
                </TD>
                <TD>
                  <para>Valid on integer types.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Unary - operator</para>
                </TD>
                <TD>
                  <para>Valid on all types except <languageKeyword>unorm</languageKeyword> and <languageKeyword>uint</languageKeyword>.</para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para> </para>
        </content>
      </section>
      <section>
        <title>Swizzling Expressions</title>
        <content>
          <para>The Short Vector Library supports the <languageKeyword>vector_type.identifier</languageKeyword> accessor construct to access the components of a short vector. The <languageKeyword>identifier</languageKeyword>, which is known as a <newTerm>swizzling expression</newTerm>, specifies the components of the vector. The expression can be an l-value or an r-value. Individual characters in the identifier may be: x, y, z, and w; or r, g, b, and a. "x" and "r" mean the zero-th component, "y" and "g" mean the first component, and so on. (Notice that "x" and "r" cannot be used in the same identifier.) Therefore, "rgba" and "xyzw" return the same result. Single-component accessors such as "x" and "y" are scalar value types. Multi-component accessors are short vector types. For example, if you construct an <unmanagedCodeEntityReference>int_4</unmanagedCodeEntityReference> vector that's named <codeInline>fourInts</codeInline> and has the values 2, 4, 6, and 8, then <codeInline>fourInts.y</codeInline> returns the integer 4 and <codeInline>fourInts.rg</codeInline> returns an <unmanagedCodeEntityReference>int_2</unmanagedCodeEntityReference> object that has the values 2 and 4.</para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Texture Classes</title>
    <content>
      <para>Many GPUs have hardware and caches that are optimized to fetch pixels and texels and to render images and textures. The <legacyLink xlink:href="16e85d4d-e80a-474a-995d-8bf63fbdf34c">texture&lt;T,N&gt;</legacyLink> class, which is a container class for texel objects, exposes the texture functionality of these GPUs. A texel can be: </para>
      <list class="bullet">
        <listItem>
          <para>An <languageKeyword>int</languageKeyword>, <languageKeyword>uint</languageKeyword>, <languageKeyword>float</languageKeyword>, <languageKeyword>double</languageKeyword>, <unmanagedCodeEntityReference>norm</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>unorm</unmanagedCodeEntityReference> scalar.</para>
        </listItem>
        <listItem>
          <para>A short vector that <?Comment MT: Tech Review: Or three? 2013-10-10T08:41:00Z  Id='0?>has two or four <?CommentEnd Id='0'
    ?>components. The only exception is <unmanagedCodeEntityReference>double_4</unmanagedCodeEntityReference>, which is not allowed.</para>
        </listItem>
      </list>
      <para>The <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object can have a rank of 1, 2, or 3. The <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object can be captured only by reference in the lambda of a call to <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference>. The texture is stored on the GPU as Direct3D texture objects. For more information about textures and texels in Direct3D, see <externalLink><linkText>Introduction to Textures in Direct3D 11</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=248502</linkUri></externalLink>.</para>
      <para>The texel type you use might be one of the many texture formats that are used in graphics programming. For example, an RGBA format could use 32 bits, with 8 bits each for the R, G, B, and A scalar elements. The texture hardware of a graphics card can access the individual elements based on the format. For example, if you are using the RGBA format, the texture hardware can extract each 8-bit element into a 32-bit form. In C++ AMP, you can set the bits per scalar element of your texel so that you can automatically access the individual scalar elements in the code without using bit-shifting.</para>
    </content>
    <sections>
      <section>
        <title>Instantiating Texture Objects</title>
        <content>
          <para>You can declare a texture object without initialization. The following code example declares several texture objects. </para>
          <code language="cpp">
#include &lt;amp.h&gt;
#include &lt;amp_graphics.h&gt;
using namespace concurrency;
using namespace concurrency::graphics;

void declareTextures() {

    // Create a 16-texel texture of int. 
    texture&lt;int, 1&gt; intTexture1(16);  
    texture&lt;int, 1&gt; intTexture2(extent&lt;1&gt;(16)); 

    // Create a 16 x 32 texture of float_2.  
    texture&lt;float_2, 2&gt; floatTexture1(16, 32);  
    texture&lt;float_2, 2&gt; floatTexture2(extent&lt;2&gt;(16, 32));   

    // Create a 2 x 4 x 8 texture of uint_4. 
    texture&lt;uint_4, 3&gt; uintTexture1(2, 4, 8);  
    texture&lt;uint_4, 3&gt; uintTexture2(extent&lt;3&gt;(2, 4, 8));
}
</code>
          <para>You can also use a constructor to declare and initialize a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object. The following code example instantiates a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object from a vector of <unmanagedCodeEntityReference>float_4</unmanagedCodeEntityReference> objects. The bits per scalar element is set to the default. You cannot use this constructor with <unmanagedCodeEntityReference>norm</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>unorm</unmanagedCodeEntityReference>, or the short vectors of <unmanagedCodeEntityReference>norm</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>unorm</unmanagedCodeEntityReference>, because they do not have a default bits per scalar element.</para>
          <code language="cpp">
#include &lt;amp.h&gt;
#include &lt;amp_graphics.h&gt;
#include &lt;vector&gt;
using namespace concurrency;
using namespace concurrency::graphics;

void initializeTexture() {

    std::vector&lt;int_4&gt; texels;
    for (int i = 0; i &lt; 768 * 1024; i++) {
        int_4 i4(i, i, i, i);
        texels.push_back(i4);
    }
    
texture&lt;int_4, 2&gt; aTexture(768, 1024, texels.begin(), texels.end());
}</code>
          <para>You can also declare and initialize a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object by using a constructor overload that takes a pointer to the source data, the size of source data in bytes, and the bits per scalar element.</para>
          <code language="cpp">
void createTextureWithBPC() {
    // Create the source data.
    float source[1024 * 2]; 
    for (int i = 0; i &lt; 1024 * 2; i++) {
        source[i] = (float)i;
    }

    // Initialize the texture by using the size of source in bytes
    // and bits per scalar element.
    texture&lt;float_2, 1&gt; floatTexture(1024, source, (unsigned int)sizeof(source), 32U); 
}</code>
          <para>The textures in these examples are created on the default view of the default accelerator. You can use other overloads of the constructor if you want to specify an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object. You cannot create a texture object on a CPU accelerator.</para>
          <para>There are limits on the size of each dimension of the <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object, as shown in the following table. A run-time error is generated if you exceed the limits.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Texture</para>
                </TD>
                <TD>
                  <para>Size limitation</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>texture&lt;T,1&gt;</para>
                </TD>
                <TD>
                  <para>16384</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>texture&lt;T,2&gt;</para>
                </TD>
                <TD>
                  <para>16384</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>texture&lt;T,2&gt;</para>
                </TD>
                <TD>
                  <para>2048</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Reading from Texture Objects</title>
        <content>
          <para>You can read from a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object by using <link xlink:href="a71de53c-9da9-4086-b56d-53b1ac4461db">texture::operator[] Operator</link>, <link xlink:href="831454d3-d1fa-4a82-a0c8-690155ae1ff0">texture::operator() Operator</link>, or <link xlink:href="78a2bfa3-8cfc-43ec-acb2-2140505849f1">texture::get Method</link>. <link xlink:href="a71de53c-9da9-4086-b56d-53b1ac4461db">texture::operator[] Operator</link> and <link xlink:href="831454d3-d1fa-4a82-a0c8-690155ae1ff0">texture::operator() Operator</link> return a value, not a reference. Therefore, you cannot write to a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object by using <link xlink:href="a71de53c-9da9-4086-b56d-53b1ac4461db">texture::operator[] Operator</link>.</para>
          <code language="cpp">
void readTexture() {
    std::vector&lt;int_2&gt; src;    
    for (int i = 0; i &lt; 16 *32; i++) {
        int_2 i2(i, i);
        src.push_back(i2);
    }

    std::vector&lt;int_2&gt; dst(16 * 32);  
    array_view&lt;int_2, 2&gt; arr(16, 32, dst);  
    arr.discard_data(); 

    const texture&lt;int_2, 2&gt; tex9(16, 32, src.begin(), src.end());  
    parallel_for_each(tex9.extent, [=, &amp;tex9] (index&lt;2&gt; idx) restrict(amp) {          
        // Use the subscript operator.      
        arr[idx].x += tex9[idx].x; 
        // Use the function () operator.      
        arr[idx].x += tex9(idx).x; 
        // Use the get method.
        arr[idx].y += tex9.get(idx).y; 
        // Use the function () operator.  
        arr[idx].y += tex9(idx[0], idx[1]).y; 
    });  

    arr.synchronize();
}
</code>
          <para>The following code example demonstrates how to store texture channels in a short vector, and then access the individual scalar elements as properties of the short vector.</para>
          <code language="cpp">
void UseBitsPerScalarElement() {
    // Create the image data. 
    // Each unsigned int (32-bit) represents four 8-bit scalar elements(r,g,b,a values).
    const int image_height = 16;
    const int image_width = 16;
    std::vector&lt;unsigned int&gt; image(image_height * image_width);

    extent&lt;2&gt; image_extent(image_height, image_width);

    // By using uint_4 and 8 bits per channel, each 8-bit channel in the data source is 
    // stored in one 32-bit component of a uint_4.
    texture&lt;uint_4, 2&gt; image_texture(image_extent, image.data(), image_extent.size() * 4U,  8U);

    // Use can access the RGBA values of the source data by using swizzling expressions of the uint_4.
    parallel_for_each(image_extent,  
         [&amp;image_texture](index&lt;2&gt; idx) restrict(amp) 
    { 
        // 4 bytes are automatically extracted when reading.
        uint_4 color = image_texture[idx]; 
        unsigned int r = color.r; 
        unsigned int g = color.g; 
        unsigned int b = color.b; 
        unsigned int a = color.a; 
    });
}
</code>
          <para>The following table lists the valid bits per channel for each sort vector type.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Texture data type</para>
                </TD>
                <TD>
                  <para>Valid bits per scalar element</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>int, int_2, int_4</para>
                  <para>uint, uint_2, uint_4</para>
                </TD>
                <TD>
                  <para>8, 16, 32</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>int_3, uint_3</para>
                </TD>
                <TD>
                  <para>32</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>float, float_2, float_4</para>
                </TD>
                <TD>
                  <para>16, 32</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>float_3</para>
                </TD>
                <TD>
                  <para>32</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>double, double_2</para>
                </TD>
                <TD>
                  <para>64</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>norm, norm_2, norm_4</para>
                  <para>unorm, unorm_2, unorm, 4</para>
                </TD>
                <TD>
                  <para>8, 16</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Writing to Texture Objects</title>
        <content>
          <para>Use the <legacyLink xlink:href="c518e29e-64f3-4d27-8e2c-3beb2ce2981c">texture::set</legacyLink> method to write to <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> objects. A texture object can be readonly or read/write. For a texture object to be readable and writeable, the following conditions must be true:</para>
          <list class="bullet">
            <listItem>
              <para>T has only one scalar component. (Short vectors are not allowed.)</para>
            </listItem>
            <listItem>
              <para>T is not <languageKeyword>double</languageKeyword>, <unmanagedCodeEntityReference>norm</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>unorm</unmanagedCodeEntityReference>.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>texture::bits_per_scalar_element</unmanagedCodeEntityReference> property is 32.</para>
            </listItem>
          </list>
          <para>If all three are not true, then the <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object is readonly. The first two conditions are checked during compilation. A compilation error is generated if you have code that tries to write to a <unmanagedCodeEntityReference>readonly</unmanagedCodeEntityReference> texture object. The condition for <unmanagedCodeEntityReference>texture::bits_per_scalar_element</unmanagedCodeEntityReference> is detected at run time, and the runtime generates the <legacyLink xlink:href="6b1ab917-df13-48c7-9648-7cb2465a0ff5">unsupported_feature</legacyLink> exception if you try to write to a readonly <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object. </para>
          <para>The following code example writes values to a texture object.</para>
          <code language="cpp">
void writeTexture() {
    texture&lt;int, 1&gt; tex1(16); 
    parallel_for_each(tex1.extent, [&amp;tex1] (index&lt;1&gt; idx) restrict(amp) {    
        tex1.set(idx, 0); 
    });

}
</code>
        </content>
      </section>
      <section>
        <title>Copying Texture Objects</title>
        <content>
          <para>You can copy between texture objects by using the <legacyLink xlink:href="cf3cda4b-5c64-4083-a0aa-39de2b378802">copy</legacyLink> function or the <legacyLink xlink:href="6f06115b-1b85-43f4-a3b7-019af90748ec">copy_async</legacyLink> function, as shown in the following code example.</para>
          <code language="cpp">
void copyHostArrayToTexture() {
    // Copy from source array to texture object by using the copy function.
    float floatSource[1024 * 2]; 
    for (int i = 0; i &lt; 1024 * 2; i++) {
        floatSource[i] = (float)i;
}
    texture&lt;float_2, 1&gt; floatTexture(1024);
    copy(floatSource, (unsigned int)sizeof(floatSource), floatTexture); 

    // Copy from source array to texture object by using the copy function.
    char charSource[16 * 16]; 
    for (int i = 0; i &lt; 16 * 16; i++) {
        charSource[i] = (char)i;
    }
    texture&lt;int, 2&gt; charTexture(16, 16, 8U);
    copy(charSource, (unsigned int)sizeof(charSource), charTexture); 
    // Copy from texture object to source array by using the copy function.
    copy(charTexture, charSource, (unsigned int)sizeof(charSource)); 
}

</code>
          <para conref="9507f6c3-32cf-41d7-b415-c659e7735d3f">You can also copy from one texture to another by using the <legacyLink xlink:href="9507f6c3-32cf-41d7-b415-c659e7735d3f">texture::copy_to</legacyLink> method. The two textures can be on different accelerator_views. When you copy to a <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference> object, the data is copied to the underlying <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object. The bits per scalar element and the extent must be the same on the source and destination <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> objects. If those requirements are not met, the runtime throws an exception. </para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Texture View Classes</title>
    <content>
      <para>C++ AMP introduces the <link xlink:href="6ec2e289-1626-4727-9592-07981cf1d27d">texture_view class</link> in <token>vs_dev12</token>. Texture views support the same texel types and ranks as the <link xlink:href="16e85d4d-e80a-474a-995d-8bf63fbdf34c">texture class</link>, but unlike textures, they provide access to additional hardware features such as texture sampling and mipmaps. Texture views support read-only, write-only, and read-write access to the underlying texture data.</para>
      <list class="bullet">
        <listItem>
          <para>Read-only access is provided by the <unmanagedCodeEntityReference>texture_view&lt;const T, N&gt;</unmanagedCodeEntityReference> template specialization, which supports elements that have 1, 2, or 4 components, texture sampling, and dynamic access to a range of mipmap levels that are determined when the view is instantiated.</para>
        </listItem>
        <listItem>
          <para>Write-only access is provided by the non-specialized template class <unmanagedCodeEntityReference>texture_view&lt;T, N&gt;</unmanagedCodeEntityReference>, which supports elements that have either 2 or 4 components and can access one mipmap level that's determined when the view is instantiated. It does not support sampling.</para>
        </listItem>
        <listItem>
          <para>Read-write access is provided by the non-specialized template class <unmanagedCodeEntityReference>texture_view&lt;T, N&gt;</unmanagedCodeEntityReference>, which, like textures, supports elements that have only one component; the view can access one mipmap level that's determined when it is instantiated. It does not support sampling.</para>
        </listItem>
      </list>
      <para>Texture views are analogous to array views, but do not provide the automatic data management and movement functionality that the <link xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view class</link> provides over the array class. A <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> can only be accessed on the accelerator view where the underlying texture data resides.</para>
    </content>
    <sections>
      <section>
        <title>writeonly_texture_view Deprecated</title>
        <content>
          <para>For <token>vs_dev12</token>, C++ AMP introduces better support for hardware texture features such as sampling and mipmaps, which could not be supported by the <link xlink:href="8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d">writeonly_texture_view class</link>. The newly introduced <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> class supports a superset of the functionality in <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference>; as a result, <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference> is deprecated.</para>
          <para>We recommend—at least for new code—that you use <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> to access functionality that was formerly provided by <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference>. Compare the following two code examples that write to a texture object that has two components (int_2). Notice that in both cases, the view, <codeInline>wo_tv4</codeInline>, must be captured by value in the lambda expression. Here is the example that uses the new <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> class:</para>
          <code language="cpp">void write2ComponentTexture() {
    texture&lt;int_2, 1&gt; tex4(16);
    <codeFeaturedElement>texture_view&lt;int_2, 1&gt; wo_tv4(tex4);</codeFeaturedElement> 
    parallel_for_each(extent&lt;1&gt;(16), [=] (index&lt;1&gt; idx) restrict(amp) {
        wo_tv4.set(idx, int_2(1, 1));
    });
}</code>
          <para>And here is the deprecated <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference> class:</para>
          <code>void write2ComponentTexture() {
    texture&lt;int_2, 1&gt; tex4(16); 
    <codeFeaturedElement>writeonly_texture_view&lt;int_2, 1&gt; wo_tv4(tex4);</codeFeaturedElement>
    parallel_for_each(extent&lt;1&gt;(16), [=] (index&lt;1&gt; idx) restrict(amp) {   
        wo_tv4.set(idx, int_2(1, 1)); 
    });
}</code>
          <para>As you can see, the two code examples are nearly identical when all you are doing is writing to the primary mipmap level. If you used <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference> in existing code and you're not planning to enhance that code, you don't have to change it. However, if you're thinking about bringing that code forward, we suggest that you rewrite it to use <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> because the enhancements in it support new hardware texture features. Read on for more information about these new capabilities.</para>
          <para>For more information about the deprecation of <unmanagedCodeEntityReference>writeonly_texture_view</unmanagedCodeEntityReference>, see <externalLink><linkText>Overview of the Texture View Design in C++ AMP</linkText><linkUri>http://blogs.msdn.com/b/nativeconcurrency/archive/2013/07/25/overview-of-the-texture-view-design-in-c-amp.aspx</linkUri></externalLink> on the Parallel Programming in Native Code blog.</para>
        </content>
      </section>
      <section>
        <title>Instantiating Texture View Objects</title>
        <content>
          <para>Declaring a <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> is similar to declaring an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> that's associated with an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>. The following code example declares several <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> objects and <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> objects that are associated with them.</para>
          <code>#include &lt;amp.h&gt;
#include &lt;amp_graphics.h&gt;
using namespace concurrency;
using namespace concurrency::graphics;

void declareTextureViews()
{
    // Create a 16-texel texture of int, with associated texture_views.
    texture&lt;int, 1&gt; intTexture(16);
    texture_view&lt;const int, 1&gt; intTextureViewRO(intTexture);  // read-only
    texture_view&lt;int, 1&gt; intTextureViewRW(intTexture);        // read-write

    // Create a 16 x 32 texture of float_2, with associated texture_views.
    texture&lt;float_2, 2&gt; floatTexture(16, 32);
    texture_view&lt;const float_2, 2&gt; floatTextureViewRO(floatTexture);  // read-only
    texture_view&lt;float_2, 2&gt; floatTextureViewRO(floatTexture);        // write-only


    // Create a 2 x 4 x 8 texture of uint_4, with associated texture_views.
    texture&lt;uint_4, 3&gt; uintTexture(2, 4, 8);
    texture_view&lt;const uint_4, 3&gt; uintTextureViewRO(uintTexture);  // read-only
    texture_view&lt;uint_4, 3&gt; uintTextureViewWO(uintTexture);        // write-only
}</code>
          <para>Notice how a texture view whose element type is non-const and has one component is read-write, but a texture view whose element type is non-const but has more than one componenent are write-only. Texture views of const element types are always read-only, but if the element type is non-const, then the number of components in the element determines whether it is read-write (1 component) or write-only (multiple components).</para>
          <para>The element type of a <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference>—its const-ness and also the number of components it has—also plays a role in determining whether the view supports texture sampling, and how mipmap levels can be accessed:</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Type</para>
                </TD>
                <TD>
                  <para>Components</para>
                </TD>
                <TD>
                  <para>Read</para>
                </TD>
                <TD>
                  <para>Write</para>
                </TD>
                <TD>
                  <para>Sampling</para>
                </TD>
                <TD>
                  <para>Mipmap access</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>texture_view&lt;const T, N&gt;</para>
                </TD>
                <TD>
                  <para>1, 2, 4</para>
                </TD>
                <TD>
                  <para>Yes</para>
                </TD>
                <TD>
                  <para>No (1)</para>
                </TD>
                <TD>
                  <para>Yes</para>
                </TD>
                <TD>
                  <para>Yes, indexable. Range is determined at instantiation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Texture_view&lt;T, N&gt;</para>
                </TD>
                <TD>
                  <para>1</para>
                  <para>2, 4</para>
                </TD>
                <TD>
                  <para>Yes</para>
                  <para>No (2)</para>
                </TD>
                <TD>
                  <para>Yes</para>
                  <para>Yes</para>
                </TD>
                <TD>
                  <para>No (1)</para>
                  <para>No (1)</para>
                </TD>
                <TD>
                  <para>Yes, one level. Level is determined at instantiation.</para>
                  <para>Yes, one level. Level is determined at instantiation.</para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>From this table, you can see that read-only texture views fully support the new capabilities in exchange for not being able to write to the view. Writable texture views are limited in that they can only access one mipmap level. Read-write texture views are even more specialized than writable ones, because they add the requirement that the element type of the texture view has only one component. Notice that sampling is not supported for writable texture views because it's a read-oriented operation.</para>
        </content>
      </section>
      <section>
        <title>Reading from Texture View Objects</title>
        <content>
          <para>Reading unsampled texture data through a texture view is just like reading it from the texture itself, except that textures are captured by reference, whereas texture views are captured by value. The following two code examples demonstrate; first, by using <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> only:</para>
          <code>void write2ComponentTexture() {
    texture&lt;int_2, 1&gt; text_data(16);
    parallel_for_each(extent&lt;1&gt;(16), [&amp;] (index&lt;1&gt; idx) restrict(amp) {
        tex_data.set(idx, int_2(1, 1));
    });
}</code>
          <para>And here is the same example, except it now uses the <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> class:</para>
          <code>void write2ComponentTexture() {
    texture&lt;int_2, 1&gt; tex_data(16);
    texture_view&lt;int_2, 1&gt; tex_view(tex_data);
    parallel_for_each(extent&lt;1&gt;(16), [=] (index&lt;1&gt; idx) restrict(amp) {
        tex_view.set(idx, int_2(1, 1));
    });
}</code>
          <para>Texture views whose elements are based on floating-point types—for example, float, float_2, or float_4—can also be read by using texture sampling to take advantage of hardware support for various filtering modes and addressing modes. C++ AMP supports the two filtering modes that are most common in compute scenarios—point-filtering (nearest-neighbor) and linear-filtering (weighted average)—and four addressing modes—wrapped, mirrored, clamped, and border. For more information about filtering modes, see <link xlink:href="ccf92beb-e324-44e4-81b0-6ef8799ee8b1">filter_mode Enumeration</link>; for more information about addressing modes, see <link xlink:href="01cad955-e7ad-429d-a911-9d38420ed544">address_mode Enumeration</link>.</para>
          <para>In addition to modes that C++ AMP supports directly, you can access other filtering modes and addressing modes of the underlying platform by using the interop APIs to adopt a texture sampler that was created by using the platform APIs directly. For example, Direct3D supports other filtering modes such as anisotropic filtering, and can apply a different addressing mode to each dimension of a texture. You could create a texture sampler whose coordinates are wrapped vertically, mirrored horizontally, and sampled with anisotropic filtering by using the Direct3D APIs, and then leverage the sampler in your C++ AMP code by using the <unmanagedCodeEntityReference>make_sampler</unmanagedCodeEntityReference> interop API. For more information see <externalLink><linkText>Texture Sampling in C++ AMP</linkText><linkUri>http://blogs.msdn.com/b/nativeconcurrency/archive/2013/07/18/texture-sampling-in-c-amp.aspx</linkUri></externalLink> on the Parallel Programming in Native Code blog.</para>
          <para>Texture views also support the reading of mipmaps. Read-only texture views (those that have a const element type) offer the most flexibility because a range of mip-levels that is determined at instantiation can be dynamically sampled, and because elements that have 1, 2, or 4 components are supported. Read-write texture views that have elements that have one component also support mipmaps, but only of a level that's determined at instantiation. For more information, see <externalLink><linkText>Texture with Mipmaps</linkText><linkUri>http://blogs.msdn.com/b/nativeconcurrency/archive/2013/08/22/texture-with-mipmaps.aspx</linkUri></externalLink> on the Parallel Programming in Native Code blog.</para>
        </content>
      </section>
      <section>
        <title>Writing to Texture View Objects</title>
        <content>
          <para>Use the <link xlink:href="8b4349c7-23fb-44be-b3f5-fad245e390e7">texture_view::set member function</link> to write to the underlying <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> through the <unmanagedCodeEntityReference>texture_view</unmanagedCodeEntityReference> object. A texture view can be read-only, read-write, or write-only. For a texture view to be writable it must have an element type that is non-const; for a texture view to be readable and writable, its element type must also have only one component. Otherwise, the texture view is read-only. You can only access one mipmap level of a texture at a time through a texture view, and the level is specified when the view is instantiated.</para>
          <para>This example shows how to write to the second-most detailed mipmap level of a texture that has 4 mipmap levels. The most detailed mipmap level is level 0.</para>
          <code>// Create a texture that has 4 mipmap levels : 16x16, 8x8, 4x4, 2x2
texture&lt;int, 2&gt; tex(extent&lt;2&gt;(16, 16), 16U, 4);

// Create a writable texture view to the second mipmap level :4x4
texture_view&lt;int, 2&gt; w_view(tex, 1);

parallel_for_each(w_view.extent, [=](index&lt;2&gt; idx) restrict(amp)
{
    w_view.set(idx, 123);
});</code>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Interoperability</title>
    <content>
      <para>The C++ AMP runtime supports interoperability between <unmanagedCodeEntityReference>texture&lt;T,1&gt;</unmanagedCodeEntityReference> and the <externalLink><linkText>ID3D11Texture1D interface</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=248503</linkUri></externalLink>, between <unmanagedCodeEntityReference>texture&lt;T,2&gt;</unmanagedCodeEntityReference> and the <externalLink><linkText>ID3D11Texture2D interface</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=255317</linkUri></externalLink>, and between <unmanagedCodeEntityReference>texture&lt;T,3&gt;</unmanagedCodeEntityReference> and the <externalLink><linkText>ID3D11Texture3D interface</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=255377</linkUri></externalLink>. The <legacyLink xlink:href="4f3354b8-3d5b-4feb-8825-95f32175d7e0">get_texture</legacyLink> method takes a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object and returns an <unmanagedCodeEntityReference>IUnknown</unmanagedCodeEntityReference> interface. The <legacyLink xlink:href="abf23804-dac7-455b-826e-c50f57e8f4b7">make_texture</legacyLink> method takes an <unmanagedCodeEntityReference>IUnknown</unmanagedCodeEntityReference> interface and an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object and returns a <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> object. </para>
    </content>
  </section>
  <relatedTopics>
    <link xlink:href="c19c2d21-3cbf-4ce5-b460-3b8253688f82">double_2 Class</link>
    <link xlink:href="baeb3ff0-2862-4c81-857e-b1a4c085be25">double_3 Class</link>
    <link xlink:href="a81c1595-24c6-4b3f-9574-d5942275e5e8">double_4 Class</link>
    <link xlink:href="b3ebd48e-f8c8-4f00-a640-357f702f0cae">float_2 Class</link>
    <link xlink:href="209df7a5-08d7-48b4-8ba5-77603642cdd8">float_3 Class</link>
    <link xlink:href="10f92170-e58c-4afc-8198-fc5778d56038">float_4 Class</link>
    <link xlink:href="258b02e9-f1ee-46c2-8edd-dc9f69184846">int_2 Class</link>
    <link xlink:href="d4af182f-30f1-455c-b16d-aa99cd314038">int_3 Class</link>
    <link xlink:href="01768c28-23a8-4965-8267-96834864f4eb">int_4 Class</link>
    <link xlink:href="80703f9b-61f4-414a-93fd-bc774f7d3393">norm_2 Class</link>
    <link xlink:href="17081060-14ce-477e-a71a-9801b0f1d9e4">norm_3 Class</link>
    <link xlink:href="d628b2bf-2cdb-4dbb-95c6-cd778f5e991f">norm_4 Class</link>
    <link xlink:href="e4f50b8f-1150-437d-b58c-79c5fb883708">short_vector Structure</link>
    <link xlink:href="cd9492da-9e02-4a6e-9d50-b61252cdb460">short_vector_traits Structure</link>
    <link xlink:href="9fcc9129-72b1-4da7-9012-4d3be15f1c52">uint_2 Class</link>
    <link xlink:href="5e22c277-9d4f-4a3a-b38c-a83d5fcab33c">uint_3 Class</link>
    <link xlink:href="1cda9e2c-5970-4ced-ae54-d7ff3c6746f4">uint_4 Class</link>
    <link xlink:href="62e88ea7-e29f-4f62-95ce-61a1f39f5e34">unorm_2 Class</link>
    <link xlink:href="ea4e7a17-5256-464c-af28-8b01962564c0">unorm_3 Class</link>
    <link xlink:href="dd216a9d-95f7-4978-8e78-6cb9c781a7e9">unorm_4 Class</link>
  </relatedTopics>
</developerConceptualDocument>