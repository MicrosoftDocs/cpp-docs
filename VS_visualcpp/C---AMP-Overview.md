---
title: "C++ AMP Overview"
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
ms.assetid: 9e593b06-6e3c-43e9-8bae-6d89efdd39fc
caps.latest.revision: 56
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
# C++ AMP Overview
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>C++ Accelerated Massive Parallelism (C++ AMP) accelerates execution of C++ code by taking advantage of data-parallel hardware such as a graphics processing unit (GPU) on a discrete graphics card. By using C++ AMP, you can code multi-dimensional data algorithms so that execution can be accelerated by using parallelism on heterogeneous hardware. The C++ AMP programming model includes multidimensional arrays, indexing, memory transfer, tiling, and a mathematical function library. You can use C++ AMP language extensions to control how data is moved from the CPU to the GPU and back, so that you can improve performance.</para>
  </introduction>
  <section>
    <title>System Requirements</title>
    <content>
      <list class="bullet">
        <listItem>
          <para>
            <token>win7</token>, <token>win8</token>, <token>winsvr08_r2</token>, or <token>winserver8</token></para>
        </listItem>
        <listItem>
          <para>DirectX 11 Feature Level 11.0 or later hardware</para>
        </listItem>
        <listItem>
          <para>For debugging on the software emulator, <token>win8</token> or <token>winserver8</token> is required. For debugging on the hardware, you must install the drivers for your graphics card. For more information, see <link xlink:href="c7e77a5a-cb57-4b11-9187-ecc89acc8775">Debugging GPU Code</link>.</para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>Introduction</title>
    <content>
      <para>The following two examples illustrate the primary components of C++ AMP. Assume that you want to add the corresponding elements of two one-dimensional arrays. For example, you might want to add <codeInline>{1, 2, 3, 4, 5}</codeInline> and <codeInline>{6, 7, 8, 9, 10}</codeInline> to obtain <codeInline>{7, 9, 11, 13, 15}</codeInline>. Without using C++ AMP, you might write the following code to add the numbers and display the results.</para>
      <code language="cpp">
#include &lt;iostream&gt;

void StandardMethod() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    for (int idx = 0; idx &lt; 5; idx++)
    {
        sumCPP[idx] = aCPP[idx] + bCPP[idx];
    }

    for (int idx = 0; idx &lt; 5; idx++)
    {
        std::cout &lt;&lt; sumCPP[idx] &lt;&lt; "\n";
    }
}
</code>
      <para>The important parts of the code are as follows:</para>
      <list class="bullet">
        <listItem>
          <para>Data: The data consists of three arrays. All have the same rank (one) and length (five).</para>
        </listItem>
        <listItem>
          <para>Iteration: The first <languageKeyword>for</languageKeyword> loop provides a mechanism for iterating through the elements in the arrays. The code that you want to execute to compute the sums is contained in the first <languageKeyword>for</languageKeyword> block.</para>
        </listItem>
        <listItem>
          <para>Index: The <codeInline>idx</codeInline> variable accesses the individual elements of the arrays.</para>
        </listItem>
      </list>
      <para>Using C++ AMP, you might write the following code instead.</para>
      <code language="cpp">
#include &lt;amp.h&gt;
#include &lt;iostream&gt;
using namespace concurrency;

const int size = 5;

void CppAmpMethod() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[size];
    
    // Create C++ AMP objects.
    array_view&lt;const int, 1&gt; a(size, aCPP);
    array_view&lt;const int, 1&gt; b(size, bCPP);
    array_view&lt;int, 1&gt; sum(size, sumCPP);
    sum.discard_data();

    parallel_for_each( 
        // Define the compute domain, which is the set of threads that are created.
        sum.extent, 
        // Define the code to run on each thread on the accelerator.
        [=](index&lt;1&gt; idx) restrict(amp)
    {
        sum[idx] = a[idx] + b[idx];
    }
    );

    // Print the results. The expected output is "7, 9, 11, 13, 15".
    for (int i = 0; i &lt; size; i++) {
        std::cout &lt;&lt; sum[i] &lt;&lt; "\n";
    }
}
</code>
      <para>The same basic elements are present, but C++ AMP constructs are used:</para>
      <list class="bullet">
        <listItem>
          <para>Data: You use C++ arrays to construct three C++ AMP <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> objects. You supply four values to construct an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object: the data values, the rank, the element type, and the length of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object in each dimension. The rank and type are passed as type parameters. The data and length are passed as constructor parameters. In this example, the C++ array that is passed to the constructor is one-dimensional. The rank and length are used to construct the rectangular shape of the data in the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object, and the data values are used to fill the array. The runtime library also includes the <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link>, which has an interface that resembles the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> class and is discussed later in this article.</para>
        </listItem>
        <listItem>
          <para>Iteration: The <link xlink:href="449013a2-5f16-4280-ac1a-0d850f7d5160">parallel_for_each Function (C++ Accelerated Massive Parallelism)</link> provides a mechanism for iterating through the data elements, or <newTerm>compute domain</newTerm>. In this example, the compute domain is specified by <codeInline>sum.extent</codeInline>. The code that you want to execute is contained in a lambda expression, or <newTerm>kernel function</newTerm>. The <codeInline>restrict(amp)</codeInline> indicates that only the subset of the C++ language that C++ AMP can accelerate is used.</para>
        </listItem>
        <listItem>
          <para>Index: The <link xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index Structure</link> variable, <codeInline>idx</codeInline>, is declared with a rank of one to match the rank of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. By using the index, you can access the individual elements of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects.</para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>Shaping and Indexing Data: index and extent</title>
    <content>
      <para>You must define the data values and declare the shape of the data before you can run the kernel code. All data is defined to be an array (rectangular), and you can define the array to have any rank (number of dimensions). The data can be any size in any of the dimensions.</para>
    </content>
    <sections>
      <section>
        <title>index Class</title>
        <content>
          <para>The <link xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index Structure</link> specifies a location in the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object by encapsulating the offset from the origin in each dimension into one object. When you access a location in the array, you pass an <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object to the indexing operator, <codeInline>[]</codeInline>, instead of a list of integer indexes. You can access the elements in each dimension by using the <link xlink:href="aea59605-4038-4826-9dfb-99babc971ac3">array::operator() Operator</link> or the <link xlink:href="e83cbd21-b9bd-4b17-a654-8ae08296a8c2">array_view::operator() Operator</link>.</para>
          <para>The following example creates a one-dimensional index that specifies the third element in a one-dimensional <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. The index is used to print the third element in the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. The output is 3.</para>
          <code language="cpp">    
int aCPP[] = {1, 2, 3, 4, 5};
array_view&lt;int, 1&gt; a(5, aCPP);
index&lt;1&gt; idx(2);
std::cout &lt;&lt; a[idx] &lt;&lt; "\n";  
// Output: 3
</code>
          <para>The following example creates a two-dimensional index that specifies the element where the row = 1 and the column = 2 in a two-dimensional <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. The first parameter in the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> constructor is the row component, and the second parameter is the column component. The output is 6.</para>
          <code language="cpp">
int aCPP[] = {1, 2, 3,
              4, 5, 6};
array_view&lt;int, 2&gt; a(2, 3, aCPP);
index&lt;2&gt; idx(1, 2);
std::cout &lt;&lt; a[idx] &lt;&lt; "\n";
// Output: 6
</code>
          <para>The following example creates a three-dimensional index that specifies the element  where the depth = 0, the row = 1, and the column = 3 in a three-dimensional <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. Notice that the first parameter is the depth component, the second parameter is the row component, and the third parameter is the column component. The output is 8.</para>
          <code language="cpp">
int aCPP[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

array_view&lt;int, 3&gt; a(2, 3, 4, aCPP); 
// Specifies the element at 3, 1, 0.
index&lt;3&gt; idx(0, 1, 3);               
std::cout &lt;&lt; a[idx] &lt;&lt; "\n";

// Output: 8
</code>
        </content>
      </section>
      <section>
        <title>extent Class</title>
        <content>
          <para>The <link xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent Structure</link> specifies the length of the data in each dimension of the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. You can create an extent and use it to create an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. You can also retrieve the extent of an existing <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. The following example prints the length of the extent in each dimension of an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
          <code language="cpp">
int aCPP[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
// There are 3 rows and 4 columns, and the depth is two.
array_view&lt;int, 3&gt; a(2, 3, 4, aCPP); 
std::cout &lt;&lt; "The number of columns is " &lt;&lt; a.extent[2] &lt;&lt; "\n";
std::cout &lt;&lt; "The number of rows is " &lt;&lt; a.extent[1] &lt;&lt; "\n";
std::cout &lt;&lt; "The depth is " &lt;&lt; a.extent[0]&lt;&lt; "\n";
std::cout &lt;&lt; "Length in most significant dimension is " &lt;&lt; a.extent[0] &lt;&lt; "\n";
</code>
          <para>The following example creates an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object that has the same dimensions as the object in the previous example, but this example uses an <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object instead of using explicit parameters in the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> constructor.</para>
          <code language="cpp">
int aCPP[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
extent&lt;3&gt; e(2, 3, 4);
array_view&lt;int, 3&gt; a(e, aCPP);
std::cout &lt;&lt; "The number of columns is " &lt;&lt; a.extent[2] &lt;&lt; "\n";
std::cout &lt;&lt; "The number of rows is " &lt;&lt; a.extent[1] &lt;&lt; "\n";
std::cout &lt;&lt; "The depth is " &lt;&lt; a.extent[0] &lt;&lt; "\n";
</code>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Moving Data to the Accelerator: array and array_view</title>
    <content>
      <para>Two data containers used to move data to the accelerator are defined in the runtime library. They are the <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link> and the <link xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view Class</link>. The <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> class is a container class that creates a deep copy of the data when the object is constructed. The <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> class is a wrapper class that copies the data when the kernel function accesses the data. When the data is needed on the source device the data is copied back.</para>
    </content>
    <sections>
      <section>
        <title>array Class</title>
        <content>
          <para>When an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object is constructed, a deep copy of the data is created on the accelerator if you use a constructor that includes a pointer to the data set. The kernel function modifies the copy on the accelerator. When the execution of the kernel function is finished, you must copy the data back to the source data structure. The following example multiplies each element in a vector by 10. After the kernel function is finished, the <?Comment RR: Rewrite to use the copy function instead. Did not work. 2013-08-29T20:59:00Z  Id='0?><legacyLink xlink:href="085af058-e29f-4f29-ade6-669f07d2ee81">vector conversion operator</legacyLink> <?CommentEnd Id='0'
    ?>is used to copy the data back into the vector object.</para>
          <code language="cpp">
std::vector&lt;int&gt; data(5);
for (int count = 0; count &lt; 5; count++) 
{
     data[count] = count;
}

array&lt;int, 1&gt; a(5, data.begin(), data.end());

parallel_for_each(
    a.extent, 
    [=, &amp;a](index&lt;1&gt; idx) restrict(amp)
    {
        a[idx] = a[idx] * 10;
    }
);

data = a;
for (int i = 0; i &lt; 5; i++) 
{
    std::cout &lt;&lt; data[i] &lt;&lt; "\n";
}
</code>
        </content>
      </section>
      <section>
        <title>array_view Class</title>
        <content>
          <para>The <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> has nearly the same members as the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> class, but the underlying behavior is not the same. Data passed to the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> constructor is not replicated on the GPU as it is with an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> constructor. Instead, the data is copied to the accelerator when the kernel function is executed. Therefore, if you create two <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects that use the same data, both <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects refer to the same memory space. When you do this, you have to synchronize any multithreaded access. The main advantage of using the <languageKeyword>array_view</languageKeyword> class is that data is moved only if it is necessary. </para>
        </content>
      </section>
      <section>
        <title>Comparison of array and array_view</title>
        <content>
          <para>The following table summarizes the similarities and differences between the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> classes.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Description</para>
                </TD>
                <TD>
                  <para>array class</para>
                </TD>
                <TD>
                  <para>array_view class</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>When rank is determined</para>
                </TD>
                <TD>
                  <para>At compile time.</para>
                </TD>
                <TD>
                  <para>At compile time.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>When extent is determined</para>
                </TD>
                <TD>
                  <para>At run time.</para>
                </TD>
                <TD>
                  <para>At run time.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Shape</para>
                </TD>
                <TD>
                  <para>Rectangular.</para>
                </TD>
                <TD>
                  <para>Rectangular.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Data storage</para>
                </TD>
                <TD>
                  <para>Is a data container.</para>
                </TD>
                <TD>
                  <para>Is a data wrapper.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Copy</para>
                </TD>
                <TD>
                  <para>Explicit and deep copy at definition.</para>
                </TD>
                <TD>
                  <para>Implicit copy when it is accessed by the kernel function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Data retrieval</para>
                </TD>
                <TD>
                  <para>By copying the array data back to an object on the CPU thread.</para>
                </TD>
                <TD>
                  <para>By direct access of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object or by calling the <link xlink:href="124cc736-d511-42cb-8e2b-17bb75a6c2de">array_view::synchronize Method</link> to continue accessing the data on the original container. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Shared memory with array and array_view</title>
        <content>
          <para>Shared memory is memory that can be accessed by both the CPU and the accelerator. The use of shared memory eliminates or significantly reduces the overhead of copying data between the CPU and the accelerator. Although the memory is shared, it cannot be accessed concurrently by both the CPU and the accelerator, and doing so causes undefined behavior.</para>
          <para>
            <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> objects can be used to specify fine-grained control over the use of shared memory if the associated accelerator supports it. Whether an accelerator supports shared memory is determined by the accelerator’s <legacyLink xlink:href="ce1961f7-7a5c-4f62-ac92-4b890f961340">supports_cpu_shared_memory</legacyLink> property, which returns <languageKeyword>true</languageKeyword> when shared memory is supported. If shared memory is supported, the default <link xlink:href="a1b2d084-38dd-4fb6-b268-48e3ab15d634">access_type</link> for memory allocations on the accelerator is determined by the <unmanagedCodeEntityReference>default_cpu_access_type</unmanagedCodeEntityReference> property. By default, <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects take on the same <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> as the primary associated <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>. </para>
          <para>
            <?Comment MT: Needs careful TR, this iskindahinky. 2013-08-29T20:59:00Z  Id='1?>By setting the <link xlink:href="1f012ae2-4adf-4ea1-8f25-a33e20665ae8">cpu_access_type</link> property of an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> explicitly, you can exercise fine-grained control over how shared memory is used, so that you can optimize the app for the hardware’s performance characteristics, based on the memory access patterns of its computation kernels. An <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> reflects the same <unmanagedCodeEntityReference>cpu_access_type</unmanagedCodeEntityReference> as the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> that it’s associated with; or, if the array_view is constructed without a data source, its <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> reflects the environment that first causes it to allocate storage. That is, if it’s first accessed by the host (CPU), then it behaves as if it were created over a CPU data source and shares the <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> of the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> associated by capture; however, if it's first accessed by an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference>, then it behaves as if it were created over an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> created on that <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> and shares the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>’s <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference>.<?CommentEnd Id='1'
    ?></para>
          <para>The following code example shows how to determine whether the default accelerator supports shared memory, and then creates several arrays that have different cpu_access_type configurations.</para>
          <code language="cpp">#include &lt;amp.h&gt;
#include &lt;iostream&gt;

using namespace Concurrency;

int main()
{
  accelerator acc = accelerator(accelerator::default_accelerator);

  // Early out if the default accelerator doesn’t support shared memory.
  if (!acc.supports_cpu_shared_memory)
  {
    std::cout &lt;&lt; "The default accelerator does not support shared memory" &lt;&lt; std::endl;
    return 1;
  }

  // Override the default CPU access type.
  acc.default_cpu_access_type = access_type_read_write

  // Create an accelerator_view from the default accelerator. The
  // accelerator_view inherits its default_cpu_access_type from acc.
  accelerator_view acc_v = acc.default_view;

  // Create an extent object to size the arrays.
  extent&lt;1&gt; ex(10);

  // Input array that can be written on the CPU.
  array&lt;int, 1&gt; arr_w(ex, acc_v, access_type_write);

  // Output array that can be read on the CPU.
  array&lt;int, 1&gt; arr_r(ex, acc_v, access_type_read);

  // Read-write array that can be both written to and read from on the CPU.
  array&lt;int, 1&gt; arr_rw(ex, acc_v, access_type_read_write);
}
</code>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Executing Code over Data: parallel_for_each</title>
    <content>
      <para>The <legacyLink xlink:href="449013a2-5f16-4280-ac1a-0d850f7d5160">parallel_for_each</legacyLink> function defines the code that you want to run on the accelerator against the data in the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. Consider the following code from the introduction of this topic.</para>
      <code language="cpp">
#include &lt;amp.h&gt;
#include &lt;iostream&gt;
using namespace concurrency;

void AddArrays() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5] = {0, 0, 0, 0, 0};

    array_view&lt;int, 1&gt; a(5, aCPP);
    array_view&lt;int, 1&gt; b(5, bCPP);
    array_view&lt;int, 1&gt; sum(5, sumCPP);

    parallel_for_each(
        sum.extent, 
        [=](index&lt;1&gt; idx) restrict(amp)
        {
            sum[idx] = a[idx] + b[idx];
        }
    );

    for (int i = 0; i &lt; 5; i++) {
        std::cout &lt;&lt; sum[i] &lt;&lt; "\n";
    }
}
</code>
      <para>The <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> method takes two arguments, a compute domain and a lambda expression.</para>
      <para>The <newTerm>compute domain</newTerm> is an <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object or a <unmanagedCodeEntityReference>tiled_extent</unmanagedCodeEntityReference> object that defines the set of threads to create for parallel execution. One thread is generated for each element in the compute domain. In this case, the <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object is one-dimensional and has five elements. Therefore, five threads are started.</para>
      <para>The <newTerm>lambda expression</newTerm> defines the code to run on each thread. The capture clause, <codeInline>[=]</codeInline>, specifies that the body of the lambda expression accesses all captured variables by value, which in this case are <command>a</command>, <command>b</command>, and <codeInline>sum</codeInline>. In this example, the parameter list creates a one-dimensional <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> variable named <codeInline>idx</codeInline>. The value of the <codeInline>idx[0]</codeInline> is 0 in the first thread and increases by one in each subsequent thread. The <codeInline>restrict(amp)</codeInline> indicates that only the subset of the C++ language that C++ AMP can accelerate is used.  The limitations on functions that have the restrict modifier are described in <link xlink:href="07d3291f-7edf-456b-8828-283ac8673661">Restriction Clause (C++ Accelerated Massive Parallelism)</link>. For more information, see, <link xlink:href="5d6154a4-f34d-4a15-970d-7e7de45f54e9">Lambda Expression Syntax</link>. </para>
      <para>The lambda expression can include the code to execute or it can call a separate kernel function. The kernel function must include the <codeInline>restrict(amp)</codeInline> modifier. The following example is equivalent to the previous example, but it calls a separate kernel function.</para>
      <code language="cpp">
#include &lt;amp.h&gt;
#include &lt;iostream&gt;
using namespace concurrency;

void AddElements(index&lt;1&gt; idx, array_view&lt;int, 1&gt; sum, array_view&lt;int, 1&gt; a, array_view&lt;int, 1&gt; b) restrict(amp)
{
    sum[idx] = a[idx] + b[idx];
}


void AddArraysWithFunction() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5] = {0, 0, 0, 0, 0};

    array_view&lt;int, 1&gt; a(5, aCPP);
    array_view&lt;int, 1&gt; b(5, bCPP);
    array_view&lt;int, 1&gt; sum(5, sumCPP);

    parallel_for_each(
        sum.extent, 
        [=](index&lt;1&gt; idx) restrict(amp)
        {
            AddElements(idx, sum, a, b);
        }
    );

    for (int i = 0; i &lt; 5; i++) {
        std::cout &lt;&lt; sum[i] &lt;&lt; "\n";
    }
}
</code>
    </content>
  </section>
  <section>
    <title> Accelerating Code: Tiles and Barriers</title>
    <content>
      <para>You can gain additional acceleration by using tiling. Tiling divides the threads into equal rectangular subsets or <newTerm>tiles</newTerm>. You determine the appropriate tile size based on your data set and the algorithm that you are coding. For each thread, you have access to the <newTerm>global</newTerm> location of a data element relative to the whole <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> and access to the <newTerm>local</newTerm> location relative to the tile. Using the local index value simplifies your code because you don't have to write the code to translate index values from global to <?Comment RR: Also mention the tile andtile_originvalues. (During RTM) 2013-08-29T20:59:00Z  Id='3?>local<?CommentEnd Id='3'
    ?>. To use tiling, call the <link xlink:href="208390e6-dfe8-4abf-9d4c-54f2405d8b35">extent::tile Method</link> on the compute domain in the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> method, and use a  <legacyLink xlink:href="0ce2ae26-f1bb-4436-b473-a9e1b619bb38">tiled_index</legacyLink> object in the lambda expression.</para>
      <para>In typical applications, the elements in a tile are related in some way, and the code has to access and keep track of values across the tile. Use the <link xlink:href="d78384d4-65d9-45cf-b3df-7e904f489d06">tile_static</link> keyword and the <link xlink:href="98aa8ef0-ed25-49c1-90ab-c6516c3a7a8f">tile_barrier::wait Method</link> to accomplish this. A variable that has the <languageKeyword>tile_static</languageKeyword> keyword has a scope across an entire tile, and an instance of the variable is created for each tile. You must handle <?Comment RR: Tech review:Any handy tips here? SeeWeirong’sblog post. (During RTM) 2013-08-29T20:59:00Z  Id='4?>synchronization of <?CommentEnd Id='4'
    ?>tile-thread access to the variable. The <link xlink:href="98aa8ef0-ed25-49c1-90ab-c6516c3a7a8f">tile_barrier::wait Method</link> stops execution of the current thread until all the threads in the tile have reached the call to <languageKeyword>tile_barrier::wait</languageKeyword>. So you can accumulate values across the tile by using <languageKeyword>tile_static</languageKeyword> variables. Then you can finish any computations that require access to all the values.</para>
      <para>The following diagram represents a two-dimensional array of sampling data that is arranged in tiles. </para>
      <mediaLink>
        <image xlink:href="ecc5aa7c-7f5c-4916-a763-d5d42001e84f" />
      </mediaLink>
      <para>The following code example uses the sampling data from the previous diagram. The code replaces each value in the tile by the average of the values in the tile.</para>
      <code language="cpp">
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

array_view&lt;int, 2&gt; sample(4, 6, sampledata);
array_view&lt;int, 2&gt; average(4, 6, averagedata);

parallel_for_each(
    // Create threads for sample.extent and divide the extent into 2 x 2 tiles.
    sample.extent.tile&lt;2,2&gt;(),
    [=](tiled_index&lt;2,2&gt; idx) restrict(amp)
    {
        // Create a 2 x 2 array to hold the values in this tile.
        tile_static int nums[2][2];
        // Copy the values for the tile into the 2 x 2 array.
        nums[idx.local[1]][idx.local[0]] = sample[idx.global];
        // When all the threads have executed and the 2 x 2 array is complete, find the average.
        idx.barrier.wait();
        <?Comment RR: I believe this line of code is execute four times, making this not the most efficient example. But I am looking for a dead simple example with a minimum of variables and indexing. 2013-08-29T20:59:00Z  Id='5?>int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1];<?CommentEnd Id='5'
    ?>
        // Copy the average into the array_view.
        average[idx.global] = sum / 4;
      }
);

for (int i = 0; i &lt; 4; i++) {
    for (int j = 0; j &lt; 6; j++) {
        std::cout &lt;&lt; average(i,j) &lt;&lt; " ";
    }
    std::cout &lt;&lt; "\n";
}

// Output:
// 3 3 8 8 3 3
// 3 3 8 8 3 3
// 5 5 2 2 4 4
// 5 5 2 2 4 4
</code>
    </content>
  </section>
  <section>
    <title>Math Libraries</title>
    <content>
      <para>C++ AMP includes two math libraries. The double-precision library in the <link xlink:href="ba653308-dc28-4384-b2fd-6cd718a72f91">Concurrency::precise_math Namespace</link> provides support for double-precision functions. It also provides support for single-precision functions, although double-precision support on the hardware is still required. It complies with the <externalLink><linkText>C99 Specification (ISO/IEC 9899)</linkText><linkUri>http://go.microsoft.com/fwlink/?LinkId=225887</linkUri></externalLink>. The accelerator must support full double precision. You can determine whether it does by checking the value of the <link xlink:href="8d075a9b-b202-4ba2-be82-bd43222287e9">accelerator::supports_double_precision Data Member</link>. The fast math library,  in the <link xlink:href="54fed939-9902-49db-9f29-e98fd9821508">Concurrency::fast_math Namespace</link>, contains another set of math functions. These functions, which support only <languageKeyword>float</languageKeyword> operands, execute more quickly but aren’t as precise as those in the double-precision math library. The functions are contained in the &lt;amp_math.h&gt; header file and all are declared with <languageKeyword>restrict(amp)</languageKeyword>. The functions in the &lt;cmath&gt; header file are imported into both the <unmanagedCodeEntityReference>fast_math</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>precise_math</unmanagedCodeEntityReference> namespaces. The <languageKeyword>restrict</languageKeyword> keyword is used to distinguish the &lt;cmath&gt; version and the C++ AMP version. The following code calculates the base-10 logarithm, using the fast method, of each value that is in the compute domain.</para>
      <code language="cpp">
#include &lt;amp.h&gt;
#include &lt;amp_math.h&gt;
#include &lt;iostream&gt;
using namespace concurrency;


void MathExample() {

    double numbers[] = { 1.0, 10.0, 60.0, 100.0, 600.0, 1000.0 };
    array_view&lt;double, 1&gt; logs(6, numbers);

    parallel_for_each(
        logs.extent,
         [=] (index&lt;1&gt; idx) restrict(amp) {
            logs[idx] = concurrency::fast_math::log10(logs[idx]);
        }
    );

    for (int i = 0; i &lt; 6; i++) {
        std::cout &lt;&lt; logs[i] &lt;&lt; "\n";
    }
}
</code>
    </content>
  </section>
  <section>
    <title>Graphics Library</title>
    <content>
      <para>C++ AMP includes a graphics library that is designed for accelerated graphics programming. This library is used only on devices that support native graphics functionality. The methods are in the <link xlink:href="4529d3b1-d7da-4ffb-82bf-080915e0f23e">Concurrency::graphics Namespace</link> and are contained in the &lt;amp_graphics.h&gt; header file. The key components of the graphics library are:</para>
      <list class="bullet">
        <listItem>
          <para>
            <link xlink:href="16e85d4d-e80a-474a-995d-8bf63fbdf34c">texture Class</link>: You can use the texture class to create textures from memory or from a file. Textures resemble arrays because they contain data, and they resemble containers in the Standard Template Library (STL) with respect to assignment and copy construction. For more information, see <link xlink:href="8e915ca1-19ba-4f0d-93c8-e2c3bfd638eb">STL Containers</link>. The template parameters for the <unmanagedCodeEntityReference>texture</unmanagedCodeEntityReference> class are the element type and the rank. The rank can be 1, 2, or 3. The element type can be one of the short vector types that are described later in this article.</para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d">writeonly_texture_view Class</link>: Provides write-only access to any texture.</para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="4c4f5bed-c396-493b-a238-c347563f645f">Short Vector Library</legacyLink>: Defines a set of short vector types of length 2, 3, and 4 that are based on <languageKeyword>int</languageKeyword>, <languageKeyword>uint</languageKeyword>, <languageKeyword>float</languageKeyword>, <languageKeyword>double</languageKeyword>, <legacyLink xlink:href="73002f3d-c25e-4119-bcd3-4c46c9b6abf1">norm</legacyLink>, or <legacyLink xlink:href="bc30bd20-6452-4d5f-9158-3b11c4c16ed2">unorm</legacyLink>.</para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>
      <token>win8_appname_long</token> Apps</title>
    <content>
      <para>Like other C++ libraries, you can use C++ AMP in your <token>win8_appname_long</token> apps. These articles describe how to include C++ AMP code in apps that is created by using C++, C#, Visual Basic, or JavaScript:</para>
      <list class="bullet">
        <listItem>
          <para>
            <link xlink:href="85577298-2c28-4209-9470-eb21048615db">Using C++ AMP in Windows Store Apps</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <externalLink>
              <linkText>Walkthrough: Creating a basic Windows Runtime component in C++ and calling it from JavaScript</linkText>
              <linkUri>http://go.microsoft.com/fwlink/p/?LinkId=249077</linkUri>
            </externalLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <externalLink>
              <linkText>Bing Maps Trip Optimizer, a Window Store app in JavaScript and C++</linkText>
              <linkUri>http://go.microsoft.com/fwlink/p/?LinkId=249078</linkUri>
            </externalLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <externalLink>
              <linkText>How to use C++ AMP from C# using the Windows Runtime</linkText>
              <linkUri>http://go.microsoft.com/fwlink/p/?LinkId=249080</linkUri>
            </externalLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <externalLink>
              <linkText>How to use C++ AMP from C#</linkText>
              <linkUri>http://go.microsoft.com/fwlink/p/?LinkId=249081</linkUri>
            </externalLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="982cef18-20d9-42b4-8242-a77fa65f2e36">Calling Native Functions from Managed Code</link>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>C++ AMP and Concurrency Visualizer</title>
    <content>
      <para>The Concurrency Visualizer includes support for analyzing performance of C++ AMP code. These articles describe these features:</para>
      <list class="bullet">
        <listItem>
          <para>
            <link xlink:href="d7c769af-95fb-49a3-b5ab-deafecee46fa">GPU Activity Graph</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="95284ac5-3492-4f7b-a79f-7d2840a07679">GPU Activity (Paging)</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="0956edbf-9bcd-4afe-9287-fda628648ca0">GPU Activity (This Process)</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="8a68df65-eb63-452f-9285-fb4ffc92f2b2">GPU Activity (Other Processes)</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="2f798c17-2363-42a4-be94-a5751d208eac">Channels (Threads View)</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <externalLink>
              <linkText>Analyzing C++ AMP Code with the Concurrency Visualizer</linkText>
              <linkUri>http://go.microsoft.com/fwlink/?LinkID=253987&amp;clcid=0x409</linkUri>
            </externalLink>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>Performance Recommendations</title>
    <content>
      <para>Modulus and division of unsigned integers have significantly better performance than modulus and division of signed integers. We recommend that you use unsigned integers when possible.</para>
    </content>
  </section>
  <relatedTopics>
    <link xlink:href="e27824cb-3167-409b-8c3f-a0e476d8f349">C++ AMP (C++ Accelerated Massive Parallelism)</link>
    <link xlink:href="5d6154a4-f34d-4a15-970d-7e7de45f54e9">Lambda Expression Syntax</link>
    <link xlink:href="372a8aed-8a53-48c9-996f-9c3cf09c9fa8">Reference (C++ AMP)</link>
    <externalLink>
      <linkText>Parallel Programming in Native Code Blog</linkText>
      <linkUri>http://go.microsoft.com/fwlink/p/?LinkId=238472</linkUri>
    </externalLink>
  </relatedTopics>
</developerConceptualDocument>