---
title: "array Class"
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
ms.assetid: 0832b6c1-40f0-421d-9104-6b1baa0c63a7
caps.latest.revision: 27
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
# array Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Represents a data container used to move data to an accelerator. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>template &lt;
    typename _Value_type,
    int _Rank
&gt;
friend class array;</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>_Value_type</parameterReference>
                </definedTerm>
                <definition>
                    <para>The element type of the data.</para>
                </definition>
                <definedTerm> <parameterReference>_Rank</parameterReference>
                </definedTerm>
                <definition>
                    <para>The rank of the array.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
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
                                    <para> <link xlink:href="#array__array_constructor">array::array Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Initializes a new instance of the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> class.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array___dtorarray_destructor">array::~array Destructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
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
                                    <para> <link xlink:href="#array__copy_to_method">array::copy_to Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the contents of the array to another array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__data_method">array::data Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the raw data of the array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__get_accelerator_view_method">array::get_accelerator_view Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144" DisplayType="both">accelerator_view</legacyLink> object that represents the location where the array is allocated. This property can be accessed only on the CPU.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__get_associated_accelerator_view_method">array::get_associated_accelerator_view Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the second <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__get_cpu_access_type_method">array::get_cpu_access_type Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> of the array. This method can be accessed only on the CPU.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__get_extent_method">array::get_extent Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object of the array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__reinterpret_as_method">array::reinterpret_as Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a one-dimensional array that contains all the elements in the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__section_method">array::section Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a subsection of the "array" object that is at the specified origin and, optionally, that has the specified extent.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__view_as_method">array::view_as Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object that is constructed from the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Operators</title>
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
                                    <para> <link xlink:href="#array__operator_std__vector_lt__value_type_gt__operator">array::operator std::vector&lt;_Value_type&gt; Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Uses <codeInline>copy(*this, vector)</codeInline> to implicitly convert the array to a std::"vector" object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__operator___operator">array::operator() Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the element value that is specified by the parameters.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__operator_at_operator">array::operator[] Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the element that is at the specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__operator_eq_operator">array::operator= Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the contents of the specified <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object into this one.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Constants</title>
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
                                    <para> <link xlink:href="#array__rank_constant">array::rank Constant</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Stores the rank of the array.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Data Members</title>
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
                                    <para> <link xlink:href="#array__accelerator_view_data_member">array::accelerator_view Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that represents the location where the array is allocated. This property can be accessed only on the CPU.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__associated_accelerator_view_data_member">array::associated_accelerator_view Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the second <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__cpu_access_type_data_member">array::cpu_access_type Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> that represents how the CPU can access the storage of the array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array__extent_data_member">array::extent Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the extent that defines the shape of the array. </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section>
        <title>Remarks</title>
        <content>
            <para>The type <codeInline>array&lt;T,N&gt;</codeInline> represents a dense and regular (not jagged)                 <placeholder>N</placeholder>-dimensional array that is located in a specific location, such as an accelerator or the CPU. The data type of the elements in the array is <codeInline>T</codeInline>, which must be of a type that is compatible with the target accelerator. Although the rank, <codeInline>N</codeInline>, (of the array is determined statically and is part of the type, the extent of the array is determined by the runtime and is expressed by using class <codeInline>extent&lt;N&gt;</codeInline>.</para>
            <para>An array can have any number of dimensions, although some functionality is specialized for <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> objects with rank one, two, and three. If you omit the dimension argument, the default is 1.</para>
            <para>Array data is laid out contiguously in memory. Elements that differ by one in the least significant dimension are adjacent in memory.</para>
            <para>Arrays are logically considered to be value types, because when an array is copied to another array, a deep copy is performed. Two arrays never point to the same data.</para>
            <para>The <codeInline>array&lt;T,N&gt;</codeInline> type is used in several scenarios:</para>
            <list class="bullet">
                <listItem>
                    <para>As a data container that can be used in computations on an accelerator.</para>
                </listItem>
                <listItem>
                    <para>As a data container to hold memory on the host CPU (that can be used to copy to and from other arrays).</para>
                </listItem>
                <listItem>
                    <para>As a staging object to act as a fast intermediary in host-to-device copies.</para>
                </listItem>
            </list>
        </content>
    </section>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>
            </para>
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
    <section address="array___dtorarray_destructor">
        <!--5f41d0c8-3651-474a-919b-93b5f1ae3f57-->
        <title>array::~array Destructor</title>
        <content>
            <para>Destroys the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>~array() restrict(cpu);</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array__accelerator_view_data_member">
        <!--13f04d13-ab25-437e-8213-711377d3a701-->
        <title>array::accelerator_view Data Member</title>
        <content>
            <para>Gets the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that represents the location where the array is allocated. This property can be accessed only on the CPU.</para>
            <legacySyntax xml:space= "preserve">__declspec(property(get= get_accelerator_view)) Concurrency::accelerator_view accelerator_view;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array__array_constructor">
        <!--9d9c6b28-6f75-4b61-8694-586683891aba-->
        <title>array::array Constructor</title>
        <content>
            <para>Initializes a new instance of the "array class". There is no default constructor for <codeInline>array&lt;T,N&gt;</codeInline>. All constructors are run on the CPU only. They cannot be executed on a Direct3D target.</para>
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
        </content>
        <sections>
            <section>
                <title>Parameters</title>
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
                            <para>The desired <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> for the array on the CPU. This parameter has a default value of <unmanagedCodeEntityReference>access_type_auto</unmanagedCodeEntityReference> leaving the CPU <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> determination to the runtime. The actual CPU <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> for the array can be queried using the <unmanagedCodeEntityReference>get_cpu_access_type</unmanagedCodeEntityReference> method.</para>
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
            </section>
        </sections>
    </section>
    <section address="array__associated_accelerator_view_data_member">
        <!--159e41e0-86b7-454a-a249-ffd530032d10-->
        <title>array::associated_accelerator_view Data Member</title>
        <content>
            <para>Gets the second <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.</para>
            <legacySyntax>__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array__copy_to_method">
        <!--10f08975-2156-4b75-b836-e50b5b9f150c-->
        <title>array::copy_to Method</title>
        <content>
            <para>Copies the contents of the "array" to another <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>.</para>
            <legacySyntax>void copy_to(
    array&lt;_Value_type, _Rank&gt;&amp; _Dest ) const ;

void copy_to(
    array_view&lt;_Value_type, _Rank&gt;&amp; _Dest ) const ;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object to copy to.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__cpu_access_type_data_member">
        <!--1f012ae2-4adf-4ea1-8f25-a33e20665ae8-->
        <title>array::cpu_access_type Data Member</title>
        <content>
            <para>Gets the CPU access_type allowed for this array.</para>
            <legacySyntax>__declspec(property(get= get_cpu_access_type)) access_type cpu_access_type;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array__data_method">
        <!--bd40c7cf-44af-41a9-8bd9-151ac3d807c2-->
        <title>array::data Method</title>
        <content>
            <para>Returns a pointer to the raw data of the "array".</para>
            <legacySyntax>_Value_type* data() restrict(amp,cpu);


const _Value_type* data() const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the raw data of the array.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__extent_data_member">
        <!--21aff595-69df-4f42-a797-f51398fb7362-->
        <title>array::extent Data Member</title>
        <content>
            <para>Gets the <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object that defines the shape of the "array". </para>
            <legacySyntax>__declspec(property(get= get_extent)) Concurrency::extent&lt;_Rank&gt; extent;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array__get_accelerator_view_method">
        <!--fc06031a-4a3b-4869-acae-05f219022832-->
        <title>array::get_accelerator_view Method</title>
        <content>
            <para>Returns the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that represents the location where the "array" object is allocated. This property can be accessed only on the CPU.</para>
            <legacySyntax>Concurrency::accelerator_view get_accelerator_view() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object that represents the location where the "array" object is allocated.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__get_associated_accelerator_view_method">
        <!--2756737e-29a9-4721-8205-e8a945253ae8-->
        <title>array::get_associated_accelerator_view Method</title>
        <content>
            <para>Gets the second <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.</para>
            <legacySyntax>Concurrency::accelerator_view get_associated_accelerator_view() const ;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The second <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object passed to the staging constructor.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__get_cpu_access_type_method">
        <!--e72dce3e-e9e4-4458-b09a-9bedd59d191e-->
        <title>array::get_cpu_access_type Method</title>
        <content>
            <para>Returns the CPU access_type that's allowed for this array.</para>
            <legacySyntax>access_type get_cpu_access_type() const restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="array__get_extent_method">
        <!--624f2d27-3d2b-44b4-803a-403bf124b57d-->
        <title>array::get_extent Method</title>
        <content>
            <para>Returns the <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object of the "array".</para>
            <legacySyntax>Concurrency::extent&lt;_Rank&gt; get_extent() const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object of the "array".</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__operator_std__vector_lt__value_type_gt__operator">
        <!--085af058-e29f-4f29-ade6-669f07d2ee81-->
        <title>array::operator std::vector&amp;lt;_Value_type&amp;gt; Operator</title>
        <content>
            <para>Uses <codeInline>copy(*this, vector)</codeInline> to implicitly convert the array to a std::vector object.</para>
            <legacySyntax>operator std::vector&lt; _Value_type&gt;() const restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Value_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The data type of the elements of the vector.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An object of type <unmanagedCodeEntityReference>vector&lt;T&gt;</unmanagedCodeEntityReference> that contains a copy of the data that is contained in the array.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__operator___operator">
        <!--aea59605-4038-4826-9dfb-99babc971ac3-->
        <title>array::operator() Operator</title>
        <content>
            <para>Returns the element value that is specified by the parameters.</para>
            <legacySyntax>value_type&amp;  operator() (const index&lt;_Rank&gt;&amp; _Index) restrict(amp,cpu);


const value_type&amp;  operator() (const index&lt;_Rank&gt;&amp; _Index) const restrict(amp,cpu);


value_type&amp;  operator() (int _I0, int _I1) restrict(amp,cpu);


const value_type&amp;  operator() (int _I0, int _I1) const restrict(amp,cpu);


value_type&amp;  operator() (int _I0, int _I1, int _I2) restrict(amp,cpu);


const value_type&amp;  operator() (int _I0, int _I1, int _I2) const restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Result_type operator()(int _I) restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Const_result_type operator()(int _I) const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Index</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The location of the element.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I0</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The most significant component of the origin of this section.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The next-to-most-significant component of the origin of this section. </para>
                        </definition>
                        <definedTerm> <parameterReference>_I2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The least significant component of the origin of this section.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The location of the element.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The element value specified by the parameters.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__operator_at_operator">
        <!--8a04e8cf-a73e-4e5d-8806-c783671cf324-->
        <title>array::operator[] Operator</title>
        <content>
            <para>Returns the element that is at the specified index.</para>
            <legacySyntax>value_type&amp;  operator[] (
    const index&lt;_Rank&gt;&amp; _Index ) restrict(amp,cpu);


const value_type&amp;  operator[] (
    const index&lt;_Rank&gt;&amp; _Index ) const restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Result_type operator[](int _I) restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Const_result_type operator[](int _I) const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Index</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The element that is at the specified index.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__operator_eq_operator">
        <!--a0438058-2f3c-4e03-aeab-a95b4fcdb756-->
        <title>array::operator= Operator</title>
        <content>
            <para>Copies the contents of the specified "array" object.</para>
            <legacySyntax>array &amp;  operator= (
    const array &amp; _Other ) restrict(cpu);


array &amp;  operator= (
    array &amp;&amp; _Other ) restrict(cpu);


array&amp;  operator= (
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src ) restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object to copy from.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Src</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object to copy from.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to this <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__rank_constant">
        <!--b96b7e1f-4937-4785-a762-9e790a45c083-->
        <title>array::rank Constant</title>
        <content>
            <para>Stores the rank of the "array".</para>
            <legacySyntax>static const int rank = _Rank;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array__section_method">
        <!--18cb537a-de02-404a-808a-2d52014f74f1-->
        <title>array::section Method</title>
        <content>
            <para>Returns a subsection of the "array" object that is at the specified origin and, optionally, that has the specified extent.</para>
            <legacySyntax>array_view&lt;_Value_type,_Rank&gt; section(
    const Concurrency::index&lt;_Rank&gt;&amp; _Section_origin,
    const Concurrency::extent&lt;_Rank&gt;&amp; _Section_extent ) restrict(amp,cpu);


array_view&lt;const _Value_type,_Rank&gt; section(
    const Concurrency::index&lt;_Rank&gt;&amp; _Section_origin,
    const Concurrency::extent&lt;_Rank&gt;&amp; _Section_extent ) const restrict(amp,cpu);


array_view&lt;_Value_type,_Rank&gt; section(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Ext ) restrict(amp,cpu);


array_view&lt;const _Value_type,_Rank&gt; section(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Ext ) const restrict(amp,cpu);


array_view&lt;_Value_type,_Rank&gt; section(
    const index&lt;_Rank&gt;&amp; _Idx ) restrict(amp,cpu);


array_view&lt;const _Value_type,_Rank&gt; section(
    const index&lt;_Rank&gt;&amp; _Idx ) const restrict(amp,cpu);


array_view&lt;_Value_type,1&gt; section(
    int _I0,
    int _E0 ) restrict(amp,cpu);


array_view&lt;const _Value_type,1&gt; section(
    int _I0,
    int _E0 ) const restrict(amp,cpu);


array_view&lt;_Value_type,2&gt; section(
    int _I0,
    int _I1,
    int _E0,
    int _E1 ) restrict(amp,cpu);


array_view&lt;const _Value_type,2&gt; section(
    int _I0,
    int _I1,
    int _E0,
    int _E1 ) const restrict(amp,cpu);


array_view&lt;_Value_type,3&gt; section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2 ) restrict(amp,cpu);


array_view&lt;const _Value_type,3&gt; section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2 ) const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
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
                        <definedTerm> <parameterReference>_Ext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object that specifies the extent of the section. The origin is 0.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Idx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <legacyLink xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index</legacyLink> object that specifies the location of the origin. The subsection is the rest of the extent.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I0</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The most significant component of the origin of this section.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The next-to-most-significant component of the origin of this section. </para>
                        </definition>
                        <definedTerm> <parameterReference>_I2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The least significant component of the origin of this section.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Rank</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The rank of the section.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Section_extent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object that specifies the extent of the section.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Section_origin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <legacyLink xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index</legacyLink> object that specifies the location of the origin.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Value_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The data type of the elements that are copied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a subsection of the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object that is at the specified origin and, optionally, that has the specified extent. When only the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object is specified, the subsection contains all elements in the associated grid that have indexes that are larger than the indexes of the elements in the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array__view_as_method">
        <!--a13aa5fb-7836-436a-8311-270d459b7e74-->
        <title>array::view_as Method</title>
        <content>
            <para>Reinterprets this array as an <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> of a different rank.</para>
            <legacySyntax>template &lt;
    int _New_rank
&gt;
array_view&lt;_Value_type,_New_rank&gt; view_as(
    const Concurrency::extent&lt; _New_rank&gt;&amp; _View_extent ) restrict(amp,cpu);


template &lt;
    int _New_rank
&gt;
array_view&lt;const _Value_type,_New_rank&gt; view_as(
    const Concurrency::extent&lt; _New_rank&gt;&amp; _View_extent ) const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_New_rank</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The rank of the <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object passed as a parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>_View_extent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The extent that is used to construct the new <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Value_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The data type of the elements in both the original "array" object and the returned <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object that is constructed.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="b5aab265-3bac-42c5-8ead-f92ce05ef267">Concurrency Namespace (C++ Accelerated Massive Parallelism)</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



