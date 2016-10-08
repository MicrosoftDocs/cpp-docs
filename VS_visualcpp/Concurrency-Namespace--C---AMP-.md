---
title: "Concurrency Namespace (C++ AMP)"
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
ms.assetid: b5aab265-3bac-42c5-8ead-f92ce05ef267
caps.latest.revision: 23
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Concurrency Namespace (C++ AMP)
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para conref="9e593b06-6e3c-43e9-8bae-6d89efdd39fc">Provides classes and functions that accelerate the execution of C++ code on data-parallel hardware. For more information, see <link xlink:href="9e593b06-6e3c-43e9-8bae-6d89efdd39fc">Overview (C++ AMP).</link></para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace Concurrency;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Namespaces</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="9566a2f1-4d5f-43e4-a3ac-676643d38420">direct3d Namespace</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides functions that support D3D interoperability. Enables seamless use of D3D resources for compute in AMP code and the use of resources created in AMP in D3D code, without creating redundant intermediate copies. You can use C++ AMP to incrementally accelerate the compute-intensive sections of your DirectX applications and use the D3D API on data produced from AMP computations.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="54fed939-9902-49db-9f29-e98fd9821508">Concurrency::fast_math Namespace</link>
                  </para>
                </TD>
                <TD>
                  <para>Functions in the <unmanagedCodeEntityReference>fast_math</unmanagedCodeEntityReference> namespace are not C99-compliant. Only single-precision versions of each function are provided. These functions use the DirectX intrinsic functions, which are faster than the corresponding functions in the <unmanagedCodeEntityReference>precise_math</unmanagedCodeEntityReference> namespace and do not require extended double-precision support on the accelerator, but they are less accurate. There are two versions of each function for source-level compatibility with C99 code; both versions take and return single-precision values.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="4529d3b1-d7da-4ffb-82bf-080915e0f23e">Concurrency::graphics Namespace</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides types and functions that are designed for graphics programming.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ba653308-dc28-4384-b2fd-6cd718a72f91">Concurrency::precise_math Namespace</link>
                  </para>
                </TD>
                <TD>
                  <para>Functions in the <unmanagedCodeEntityReference>precise_math</unmanagedCodeEntityReference> namespace are C99 compliant. Both single-precision and double-precision versions of each function are included. These functions—this includes the single-precision functions—require extended double-precision support on the accelerator.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an abstraction of a physical DP-optimized compute node.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="262446de-311c-454e-a5ed-e2aaced0d88a">Accelerator_view_removed Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The exception that is thrown when an underlying DirectX call fails due to the Windows timeout-detection-and-recovery mechanism.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A data aggregate on an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> in the grid domain. It is a collection of variables, one for each element in a grid domain. Each variable holds a value that corresponds to some C++ type. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a view into the data in an array&lt;T,N&gt;.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="1303c62e-546d-4b02-a578-251ed3fc0b6b">completion_future Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a future that corresponds to a C++ AMP asynchronous operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent Class  (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a vector of N integer values that specify the bounds of an N-dimensional space that has an origin of 0. The values in the coordinate vector are ordered from most significant to least significant. For example, in Cartesian 3-dimensional space, the extent vector (7,5,3) represents a space in which the z coordinate ranges from 0 to 7, the y coordinate ranges from 0 to 5, and the x coordinate ranges from 0 to 3.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines an N-dimensional index point.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ac7a7166-8bdb-4db1-8caf-ea129ab5117e">invalid_compute_domain Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The exception that's thrown when the runtime can't start a kernel by using the compute domain specified at the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> call site.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="3aa7e682-8f13-4ae6-9188-31fb423956e4">out_of_memory Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The exception that is thrown when a method fails because of a lack of system or device memory.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd">runtime_exception Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The base type for exceptions in the C++ AMP library.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="b4ccdccb-0032-4e11-b7bd-dc9d43445dee">tile_barrier Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A capability class that is only creatable by the system and is passed to a tiled <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> lambda as part of the <unmanagedCodeEntityReference>tiled_index</unmanagedCodeEntityReference> parameter. It provides one method, <unmanagedCodeEntityReference>wait()</unmanagedCodeEntityReference>, whose purpose is to synchronize execution of threads that are running in the thread group (tile).</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0">tiled_extent Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>tiled_extent</unmanagedCodeEntityReference> object is an <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object of one to three dimensions that subdivides the extent space into one-dimensional, two-dimensional, or three-dimensional tiles.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="0ce2ae26-f1bb-4436-b473-a9e1b619bb38">tiled_index Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides an index into a <unmanagedCodeEntityReference>tiled_grid</unmanagedCodeEntityReference> object. This class has properties to access element relative to the local tile origin and relative to the global origin.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6ae3c4e8-64a6-4511-a158-03be197b63af">uninitialized_object Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The exception that is thrown when an uninitialized object is used.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6b1ab917-df13-48c7-9648-7cb2465a0ff5">unsupported_feature Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The exception that is thrown when an unsupported feature is used.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Enumerations</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a1b2d084-38dd-4fb6-b268-48e3ab15d634">Access_type Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Specifies the data access type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="8c641054-906d-40b3-bbb4-f62af9356a14">queuing_mode Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Specifies the queuing modes that are supported on the accelerator.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Operators</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Operator</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="0da8fcf1-cd05-4b4b-9c34-4afaeb9a5980">operator== Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Determines whether the specified data structures are equal.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="747a979c-6ac2-49c6-a5f1-3a82080367f8">Operator!= Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Determines whether the specified data structures are unequal.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="0e2c3f7f-6788-4f42-ac53-68b50fe252df">operator+ Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Computes the component-wise sum of the specified arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="8a464144-a28a-426b-8875-06a70122ca29">operator- Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Computes the component-wise difference between the specified arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="15b7fafa-fac5-4a0a-8b2b-36a42a843c16">operator* Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Computes the component-wise product of the specified arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="1920286a-5de6-416e-8021-52adb0b5ea90">operator/ Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Computes the component-wise quotient of the specified arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="5c4ecba3-2aa3-4417-be1d-fd988d04c0be">operator% Operator (C++ AMP)</link>
                  </para>
                </TD>
                <TD>
                  <para>Computes the modulus of the first specified argument by the second specified argument.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="dba73687-b1c9-40b6-8ee6-1851e7e95236">all_memory_fence Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Blocks execution of all threads in a tile until all memory accesses have been completed. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6e6844b9-129f-4543-9c1c-e18e10c1d408">amp_uninitialize Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Uninitializes the C++ AMP runtime.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="3349f83f-ff21-48ee-8c91-09207877e98c">atomic_compare_exchange Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. If the value stored at the specified location compares equal to the first specified value, then the second specified value is stored in the same location as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="4ef0f6de-b32e-4b76-be07-fd8e0bd01333">atomic_exchange Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ff4d90a4-c07b-432a-a84f-8550025cdbfd">atomic_fetch_add Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the sum of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="52b4d8f8-dc6d-40f3-a7ce-06ad81ec05f8">atomic_fetch_and Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the bitwise <languageKeyword>and</languageKeyword> of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="0af9113f-6c31-47ab-a9bf-7170a965e982">atomic_fetch_dec Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Decrements the value stored at the specified location and stores the result in the same location as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="1101d9db-cf79-4110-b0e3-ffdb610c0285">atomic_fetch_inc Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Increments the value stored at the specified location and stores the result in the same location as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="09f54a53-fe36-4c98-a90a-51f89f347904">atomic_fetch_max Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the larger of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="7c655806-cc70-4222-886f-ae494e8d0cbe">atomic_fetch_min Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the smaller of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="35f3fa2a-1185-41c1-9f32-02ec83295fad">atomic_fetch_or Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the bitwise <languageKeyword>or</languageKeyword> of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="516cc457-30ec-45a6-9963-5243927ee92b">atomic_fetch_sub Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the difference of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="47d1fb7f-94fc-4815-8fe6-0879f13ab8fb">atomic_fetch_xor Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Sets the value stored at the specified location to the bitwise <languageKeyword>xor</languageKeyword> of that value and a specified value as an atomic operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="cf3cda4b-5c64-4083-a0aa-39de2b378802">copy Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Copies a C++ AMP object. All synchronous data transfer requirements are met. Data can't be copied when code is running code on an accelerator. The general form of this function is <codeInline>copy(src, dest)</codeInline>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6f06115b-1b85-43f4-a3b7-019af90748ec">copy_async Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Copies a C++ AMP object and returns <legacyLink xlink:href="1303c62e-546d-4b02-a578-251ed3fc0b6b">completion_future</legacyLink> that can be waited on. Data can't be copied when code is running on an accelerator. The general form of this function is <codeInline>copy(src, dest)</codeInline>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="efd40102-a2e8-4b84-b532-8dde5115e64b">direct3d_abort Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Aborts the execution of a function that has the <languageKeyword>restrict(amp)</languageKeyword> restriction clause.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a4098d87-6dec-416a-b271-21f2f19d44fd">direct3d_errorf Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Prints a formatted string to the Visual Studio <ui>Output</ui> window and raises a <legacyLink xlink:href="8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd">runtime_exception</legacyLink> exception that has the same formatting string.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="50fabec1-3c38-4718-87dc-0313cc96e61a">direct3d_printf Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Prints a formatted string to the Visual Studio <ui>Output</ui> window. It is called from a function that has the <languageKeyword>restrict(amp)</languageKeyword> restriction clause.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="3ea85d0d-3261-4e01-8c4f-593baf53bd24">Global_memory_fence Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Blocks execution of all threads in a tile until all global memory accesses have been completed.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="449013a2-5f16-4280-ac1a-0d850f7d5160">parallel_for_each Function (C++ Accelerated Massive Parallelism)</link>
                  </para>
                </TD>
                <TD>
                  <para>Runs a function across the compute domain.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="9d144a14-9b89-4764-8583-ae99194c6488">tile_static_memory_fence Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Blocks execution of all threads in a tile until <languageKeyword>tile_static</languageKeyword> memory accesses have been completed.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Constants</title>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Name</para>
            </TD>
            <TD>
              <para>Description</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>
                <link xlink:href="8b52bb0d-ab7a-4d1f-b9cf-c234391d69e4">HLSL_MAX_NUM_BUFFERS Constant</link>
              </para>
            </TD>
            <TD>
              <para>The maximum number of buffers allowed by DirectX.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="1cf462b8-d4dd-4ce6-9eaa-d54aaf01b2ae">MODULENAME_MAX_LENGTH Constant</link>
              </para>
            </TD>
            <TD>
              <para>Stores the maximum length of the module name. This value must be the same on the compiler and the runtime.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amp.h</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="372a8aed-8a53-48c9-996f-9c3cf09c9fa8">Reference (C++ Accelerated Massive Parallelism)</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>