---
title: "array::array Constructor"
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
ms.assetid: 9d9c6b28-6f75-4b61-8694-586683891aba
caps.latest.revision: 16
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
# array::array Constructor
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Initializes a new instance of the <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> class. There is no default constructor for <codeInline>array&lt;T,N&gt;</codeInline>. All constructors are run on the CPU only. They cannot be executed on a Direct3D target.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>explicit array(
    const Concurrency::extent&lt;_Rank&gt; &amp; _Extent ) restrict(cpu);


explicit array(
    int _E0 ) restrict(cpu);


explicit array(
    int _E0,
    int _E1 ) restrict(cpu);


explicit array(
    int _E0,
    int _E1,
    int _E2 ) restrict(cpu);


array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


array(
    int _E0,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


array(
    int _E0,
    int _E1,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


array(
    int _E0,
    int _E1,
    int _E2,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


array(
    int _E0,
    accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


array(
    int _E0,
    int _E1,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


array(
    int _E0,
    int _E1,
    int _E2,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent, _InputIterator _Src_first ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0, _InputIterator _Src_first ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1, _InputIterator _Src_first ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


template &lt;
    typename _InputIterator
&gt;
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);


explicit array(
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src ) restrict(cpu);


array(
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src,
    accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto
) restrict(cpu);


array(
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src,
    accelerator_view _Av,
    accelerator_view _Associated_Av ) restrict(cpu);


array(
    const array&amp; _Other ) restrict(cpu);


array(
    array &amp;&amp; _Other ) restrict(cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Associated_Av</parameterReference>
        </definedTerm>
        <definition>
          <para>An accelerator_view which specifies the preferred target location of the array.</para>
        </definition>
        <definedTerm> <parameterReference>_Av</parameterReference>
        </definedTerm>
        <definition>
          <para>An <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that specifies the location of the array.</para>
        </definition>
        <definedTerm> <parameterReference>_Cpu_access_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The desired <legacyLink xlink:href="a1b2d084-38dd-4fb6-b268-48e3ab15d634">access_type</legacyLink> for the array on the CPU. This parameter has a default value of <unmanagedCodeEntityReference>access_type_auto</unmanagedCodeEntityReference> leaving the CPU <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> determination to the runtime. The actual CPU <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> for the array can be queried using the <unmanagedCodeEntityReference>get_cpu_access_type</unmanagedCodeEntityReference> method.</para>
        </definition>
        <definedTerm> <parameterReference>_Extent</parameterReference>
        </definedTerm>
        <definition>
          <para>The extent in each dimension of the array.</para>
        </definition>
        <definedTerm> <parameterReference>_E0</parameterReference>
        </definedTerm>
        <definition>
          <para>The most significant component of the extent of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_E1</parameterReference>
        </definedTerm>
        <definition>
          <para>The next-to-most-significant component of the extent of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_E2</parameterReference>
        </definedTerm>
        <definition>
          <para>The least significant component of the extent of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_InputIterator</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the input interator.</para>
        </definition>
        <definedTerm> <parameterReference>_Src</parameterReference>
        </definedTerm>
        <definition>
          <para>To object to copy.</para>
        </definition>
        <definedTerm> <parameterReference>_Src_first</parameterReference>
        </definedTerm>
        <definition>
          <para>A beginning iterator into the source container.</para>
        </definition>
        <definedTerm> <parameterReference>_Src_last</parameterReference>
        </definedTerm>
        <definition>
          <para>An ending iterator into the source container.</para>
        </definition>
        <definedTerm> <parameterReference>_Other</parameterReference>
        </definedTerm>
        <definition>
          <para>Other data source.</para>
        </definition>
        <definedTerm> <parameterReference>_Rank</parameterReference>
        </definedTerm>
        <definition>
          <para>The rank of the section.</para>
        </definition>
        <definedTerm> <parameterReference>_Value_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The data type of the elements that are copied.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <section>
    <title>Remarks</title>
    <content>
      <para>Staging constructors have two <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> objects as constructor parameters. Staging arrays are used as a hint to optimize repeated copies between two accelerators (between the CPU and a Direct3D accelerator). Staging arrays are optimized for data transfer and do not have stable user-space memory. They are backed by DirectX staging buffers that have the correct hardware alignment to make sure there is an efficient Direct Memory Access (DMA) transfer between the CPU and the accelerator. The <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> property of a staging array returns the value of the first accelerator argument that it was constructed with. You can't change or examine the contents of a staging array when it is involved in a transfer operation, as demonstrated in the following code. </para>
      <code>class SimulationServer 
{ 
    array&lt;float,2&gt; acceleratorArray; 
    array&lt;float,2&gt; stagingArray; 
public: 
    SimulationServer(const accelerator_view&amp; av) 
        :acceleratorArray(extent&lt;2&gt;(1000,1000), av), 
         stagingArray(extent&lt;2&gt;(1000,1000), accelerator("cpu"), 
         accelerator("gpu")) 
    { 
    } 
 
    void OnCompute() 
    { 
        array&lt;float,2&gt; &amp;a = acceleratorArray; 
        ApplyNetworkChanges(stagingArray.data()); 
        
        // Starting here, you can't change or examine contents.
        a = stagingArray; 
        parallel_for_each(a.extents, [&amp;](index&lt;2&gt; idx) 
        { 
           // Update a[idx] according to simulation. 
        } 
        stagingArray = a; 
        
        // Starting here, you can change or examine contents.
        SendToClient(stagingArray.data()); 
     } 
}; 
</code>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amp.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

