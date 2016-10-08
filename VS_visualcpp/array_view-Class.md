---
title: "array_view Class"
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
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
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
# array_view Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Represents an N-dimensional view over the data held in another container.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>template &lt;
    typename _Value_type,
    int _Rank = 1
&gt;
class array_view : public _Array_view_base&lt; _Rank, sizeof(_Value_type)/sizeof(int)&gt;;

template &lt;
    typename _Value_type,
    int _Rank
&gt;
class array_view&lt;const _Value_type, _Rank&gt; : public _Array_view_base&lt; _Rank, sizeof(_Value_type)/sizeof(int)&gt;;</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>_Value_type</parameterReference>
                </definedTerm>
                <definition>
                    <para>The data type of the elements in the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                </definition>
                <definedTerm> <parameterReference>_Rank</parameterReference>
                </definedTerm>
                <definition>
                    <para>The rank of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#array_view__array_view_constructor">array_view::array_view Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Initializes a new instance of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> class. There is no default constructor for <codeInline>array&lt;T,N&gt;</codeInline>. All constructors are restricted to run on the CPU only and cannot be executed on a Direct3D target.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view___dtorarray_view_destructor">array_view::~array_view Destructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#array_view__copy_to_method">array_view::copy_to Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the contents of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object to the specified destination by calling <codeInline>copy(*this, dest)</codeInline>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__data_method">array_view::data Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the raw data of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__discard_data_method">array_view::discard_data</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Discards the current data underlying this view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__get_extent_method">array_view::get_extent Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the extent object of the array_view object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__get_ref_method">array_view::get_ref Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the indexed element.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__get_source_accelerator_view_method">Array_view::get_source_accelerator_view Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> where the data source of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> is located.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__refresh_method">array_view::refresh Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object that its bound memory has been modified outside the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> interface. A call to this method renders all cached information stale.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__reinterpret_as_method">array_view::reinterpret_as Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a one-dimensional array that contains all the elements in the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__section_method">array_view::section Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a subsection of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object that's at the specified origin and, optionally, that has the specified extent.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__synchronize_method">array_view::synchronize Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Synchronizes any modifications made to the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object back to its source data.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__synchronize_async_method">array_view::synchronize_async Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Asynchronously synchronizes any modifications made to the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object back to its source data.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__synchronize_to_method">array_view::synchronize_to Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Synchronizes any modifications made to the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object to the specified <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__synchronize_to_async_method">Array_view::synchronize_to_async Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Asynchronously synchronizes any modifications made to the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object to the specified <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__view_as_method">array_view::view_as Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Produces an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object of a different rank using this <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object’s data.</para>
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
                                    <para> <link xlink:href="#array_view__operator___operator">array_view::operator() Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the element that is specified by the parameter or parameters. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__operator_at_operator">array_view::operator[] Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the element that is specified by the parameters.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__operator_eq_operator">array_view::operator= Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the contents of the specified <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object into this one.</para>
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
                                    <para> <link xlink:href="#array_view__rank_constant">array_view::rank Constant</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Stores the rank of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Data Members</title>
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
                                    <para> <link xlink:href="#array_view__extent_data_member">array_view::extent Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object that defines the shape of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__source_accelerator_view_data_member">array_view::source_accelerator_view Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> where the data source of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> is located</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#array_view__value_type_data_member">array_view::value_type Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value type of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> and the bound array.</para>
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
            <para>The <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> class represents a view into the data that is contained in an <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> object or a subsection of an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object. </para>
            <para>You can access the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object where the source data is located (locally) or on a different accelerator or a coherence domain (remotely). When you access the object remotely, views are copied and cached as necessary. Except for the effects of automatic caching, <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects have a performance profile similar to that of <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> objects. There is a small performance penalty when you access the data through views.</para>
            <para>There are three remote usage scenarios:</para>
            <list class="bullet">
                <listItem>
                    <para>A view to a system memory pointer is passed by means of a <legacyLink xlink:href="concurrency_namespace__c++_amp__Functions#parallel_for_each_function__c_add_add_amp_">parallel_for_each</legacyLink> call to an accelerator and accessed on the accelerator.</para>
                </listItem>
                <listItem>
                    <para>A view to an array located on an accelerator is passed by means of a <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> call to another accelerator and is accessed there.</para>
                </listItem>
                <listItem>
                    <para>A view to an array located on an accelerator is accessed on the CPU.</para>
                </listItem>
            </list>
            <para>In any one of these scenarios, the referenced views are copied by the runtime to the remote location and, if modified by the calls to the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object, are copied back to the local location. The runtime might optimize the process of copying changes back, might copy only changed elements, or might copy unchanged portions also. Overlapping <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects on one data source are not guaranteed to maintain referential integrity in a remote location.</para>
            <para>You must synchronize any multithreaded access to the same data source.</para>
            <para>The runtime makes the following guarantees regarding the caching of data in <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects:</para>
            <list class="bullet">
                <listItem>
                    <para>All well-synchronized accesses to an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object and an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object on it in program order obey a serial happens-before relationship.</para>
                </listItem>
                <listItem>
                    <para>All well-synchronized accesses to overlapping <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects on the same accelerator on a single <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object are aliased through the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object. They induce a total occurs-before relationship which obeys program order. There is no caching. If the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects are executing on different accelerators, the order of access is undefined, creating a race condition.</para>
                </listItem>
            </list>
            <para>When you create an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object using a pointer in system memory, you must change the view <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object only through the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> pointer. Alternatively, you must call <codeInline>refresh()</codeInline> on one of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects that are attached to the system pointer, if the underlying native memory is changed directly, instead of through the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
            <para>Either action notifies the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object that the underlying native memory is changed and that any copies that are located on an accelerator are outdated. If you follow these guidelines, the pointer-based views are identical to those provided to views of data-parallel arrays.</para>
        </content>
    </section>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <unmanagedCodeEntityReference>_Array_view_shape</unmanagedCodeEntityReference>
            </para>
            <para> <unmanagedCodeEntityReference>_Array_view_base</unmanagedCodeEntityReference>
            </para>
            <para> <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>
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
    <section address="array_view___dtorarray_view_destructor">
        <!--18b99563-52e4-4c72-adeb-80931c12c60d-->
        <title>array_view::~array_view Destructor</title>
        <content>
            <para>Destroys the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object.</para>
            <legacySyntax>~array_view()restrict(amp,cpu);</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__array_view_constructor">
        <!--36ef935a-2fb0-443e-b9af-c23a248ea158-->
        <title>array_view::array_view Constructor</title>
        <content>
            <para>Initializes a new instance of the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> class. </para>
            <legacySyntax>array_view(
    array&lt;_Value_type, _Rank&gt;&amp; _Src )restrict(amp,cpu);


array_view(
    const array_view&amp; _Other )restrict(amp,cpu);


explicit array_view(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent
) restrict(cpu);


template &lt;
    typename _Container
&gt;
array_view(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent,
    _Container&amp; _Src ) restrict(cpu);


array_view(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent,
    _Value_type * _Src )restrict(amp,cpu);


explicit array_view(
    int _E0 ) restrict(cpu);


template &lt;
    typename _Container
&gt;
explicit array_view(
    _Container&amp; _Src,
    typename std::enable_if&lt;details::_Is_container&lt;_Container&gt;::type::value, void **&gt;::type = 0
) restrict(cpu);


template &lt;
    typename _Container
&gt;
explicit array_view(
    int _E0,
    _Container&amp; _Src ) restrict(cpu);


explicit array_view(
    int _E0,
    int _E1 ) __CPU_ONLY;

template &lt;
    typename _Container
&gt;
explicit array_view(
    int _E0,
    int _E1,
    _Container&amp; _Src ) restrict(cpu);


explicit array_view(
    int _E0,
    int _E1,
    int _E2 ) __CPU_ONLY;

template &lt;
    typename _Container
&gt;
explicit array_view(
    int _E0,
    int _E1,
    int _E2,
    _Container&amp; _Src );


explicit array_view(
    int _E0,
    _In_ _Value_type * _Src )restrict(amp,cpu);


template &lt;
    typename _Arr_type,
    int _Size
&gt;
explicit array_view(
    _In_ _Arr_type (&amp; _Src) [_Size]
) restrict(amp,cpu);


explicit array_view(
    int _E0,
    int _E1,
    _In_ _Value_type * _Src )restrict(amp,cpu);


explicit array_view(
    int _E0,
    int _E1,
    int _E2,
    _In_ _Value_type * _Src )restrict(amp,cpu);


array_view(
    const array&lt;_Value_type, _Rank&gt;&amp; _Src )restrict(amp,cpu);


array_view(
    const array_view&lt;_Value_type, _Rank&gt;&amp; _Src )restrict(amp,cpu);


array_view(
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src )restrict(amp,cpu);


template &lt;
    typename _Container
&gt;
array_view(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent,
    const _Container&amp; _Src ) restrict(cpu);


template &lt;
    typename _Container
&gt;
explicit array_view(
    const _Container&amp; _Src,
    typename std::enable_if&lt;details::_Is_container&lt;_Container&gt;::type::value, void **&gt;::type = 0
) restrict(cpu);


array_view(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Extent,
    const _Value_type * _Src )restrict(amp,cpu);


template &lt;
    typename _Arr_type,
    int _Size
&gt;
explicit array_view(
    const _In_ _Arr_type (&amp; _Src) [_Size]
) restrict(amp,cpu);


template &lt;
    typename _Container
&gt;
array_view(
    int _E0,
    const _Container&amp; _Src );


template &lt;
    typename _Container
&gt;
array_view(
    int _E0,
    int _E1,
    const _Container&amp; _Src );


template &lt;
    typename _Container
&gt;
array_view(
    int _E0,
    int _E1,
    int _E2,
    const _Container&amp; _Src );


array_view(
    int _E0,
    const _Value_type * _Src )restrict(amp,cpu);


array_view(
    int _E0,
    int _E1,
    const _Value_type * _Src ) restrict(amp,cpu);


array_view(
    int _E0,
    int _E1,
    int _E2,
    const _Value_type * _Src ) restrict(amp,cpu);

</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Arr_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The element type of a C-style array from which data is supplied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Container</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A template argument that must specify a linear container that supports <unmanagedCodeEntityReference>data()</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>size()</unmanagedCodeEntityReference> members.</para>
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
                        <definedTerm> <parameterReference>_Extent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The extent in each dimension of this <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An object of type <unmanagedCodeEntityReference>array_view&lt;T,N&gt;</unmanagedCodeEntityReference> from which to initialize the new <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size of a C-style array from which data is supplied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Src</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the source data that will be copied into the new array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__copy_to_method">
        <!--d0e55f3e-8fb8-4df5-afde-013cf72bed84-->
        <title>array_view::copy_to Method</title>
        <content>
            <para>Copies the contents of the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object to the specified destination object by calling <codeInline>copy(*this, dest)</codeInline>.</para>
            <legacySyntax>void copy_to(
    array&lt;_Value_type, _Rank&gt;&amp; _Dest ) const;

void copy_to(
    array_view&lt;_Value_type, _Rank&gt;&amp; _Dest ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The object to copy to.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__data_method">
        <!--5a834362-19e5-49be-88c0-25ddf978a2f4-->
        <title>array_view::data Method</title>
        <content>
            <para>Returns a pointer to the raw data of the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink>.</para>
            <legacySyntax>_Value_type* data() const restrict(amp,cpu);

             
const _Value_type* data() const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the raw data of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__discard_data_method">
        <!--a5647eb2-68a0-46a9-80ab-383007e55518-->
        <title>array_view::discard_data Method</title>
        <content>
            <para>Discards the current data underlying this view. This is an optimization hint to the runtime used to avoid copying the current contents of the view to a target <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> that it is accessed on, and its use is recommended if the existing content is not needed. This method is a no-op when used in a restrict(amp) context </para>
            <legacySyntax>void discard_data() const restrict(cpu);</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__extent_data_member">
        <!--0b9cf458-859e-4a29-b9b5-3d4eda722efd-->
        <title>array_view::extent Data Member</title>
        <content>
            <para>Gets the <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object that defines the shape of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object. </para>
            <legacySyntax>__declspec(property(get= get_extent)) Concurrency::extent&lt;_Rank&gt; extent;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__get_extent_method">
        <!--7998b599-501c-4c84-8610-ad280a88bb3f-->
        <title>array_view::get_extent Method</title>
        <content>
            <para>Returns the <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object of the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object.</para>
            <legacySyntax>Concurrency::extent&lt;_Rank&gt; get_extent() const restrict(cpu, amp);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__get_ref_method">
        <!--73b20d1a-b1a5-42d1-aa60-6de1ecef7a46-->
        <title>array_view::get_ref Method</title>
        <content>
            <para>Get a reference to the element indexed by _Index. Unlike the other indexing operators for accessing the array_view on the CPU, this method does not implicitly synchronize this array_view's contents to the CPU. After accessing the array_view on a remote location or performing a copy operation involving this array_view users are responsible to explicitly synchronize the array_view to the CPU before calling this method. Failure to do so results in undefined behavior.</para>
            <legacySyntax>value_type&amp; get_ref(
    const index&lt;_Rank&gt;&amp; _Index ) const restrict(amp, cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Index</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Reference to the element indexed by _Index </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__get_source_accelerator_view_method">
        <!--b84229ce-644d-4647-baea-5516f33d43ac-->
        <title>array_view::get_source_accelerator_view Method</title>
        <content>
            <para>Returns the accelerator_view where the data source of the array_view is located. If the array_view does not have a data source, this API throws a runtime_exception </para>
            <legacySyntax xml:space= "preserve">accelerator_view get_source_accelerator_view() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="array_view__operator___operator">
        <!--e83cbd21-b9bd-4b17-a654-8ae08296a8c2-->
        <title>array_view::operator() Operator</title>
        <content>
            <para>Returns the value of the element that is specified by the parameter or parameters.</para>
            <legacySyntax>value_type&amp;  operator() (
    const index&lt;_Rank&gt;&amp; _Index ) const restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Result_type operator() (
    int _I ) const restrict(amp,cpu);


value_type&amp;  operator() (
    int _I0,
    int _I1 ) const restrict(amp,cpu);


value_type&amp;  operator() (
    int _I0,
    int _I1,
    int _I2 ) const restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Const_result_type operator() (
    int _I ) const restrict(amp,cpu);</legacySyntax>
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
                            <para>The index in the first dimension.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index in the second dimension.</para>
                        </definition>
                        <definedTerm> <parameterReference>_I2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index in the third dimension.</para>
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
                    <para>The value of the element that is specified by the parameter or parameters.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__operator_at_operator">
        <!--aaad2e89-adc8-429f-8e8d-242d854a3b63-->
        <title>array_view::operator[] Operator</title>
        <content>
            <para>Returns the element that is specified by the parameters.</para>
            <legacySyntax>typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Const_result_type operator[] (
    int _I ) const restrict(amp,cpu);


value_type&amp;  operator[] (
    const index&lt;_Rank&gt;&amp; _Index ) const restrict(amp,cpu);</legacySyntax>
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
                    <para>The value of the element at the index, or an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> projected on the most-significant dimension.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__operator_eq_operator">
        <!--7c716b87-a34e-4130-b4ef-ba272830f612-->
        <title>array_view::operator= Operator</title>
        <content>
            <para>Copies the contents of the specified <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object to this one.</para>
            <legacySyntax>array_view&amp;  operator= (
    const array_view&amp; _Other ) restrict(amp,cpu);


array_view&amp;  operator= (
    const array_view&lt;_Value_type, _Rank&gt;&amp; _Other ) restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object to copy from.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to this <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__rank_constant">
        <!--2a91f90b-9c24-41ed-99d6-84843ea65220-->
        <title>array_view::rank Constant</title>
        <content>
            <para>Stores the rank of the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object.</para>
            <legacySyntax>static const int rank = _Rank;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__refresh_method">
        <!--8b029f8e-a7a7-40c6-83a7-ef8c9e5df0cd-->
        <title>array_view::refresh Method</title>
        <content>
            <para>Notifies the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object that its bound memory has been modified outside the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> interface. A call to this method renders all cached information stale.</para>
            <legacySyntax>void refresh() const restrict(cpu);</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__section_method">
        <!--a10f8914-2726-4b84-9a91-9f8749059630-->
        <title>array_view::section Method</title>
        <content>
            <para>Returns a subsection of the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object that's at the specified origin and, optionally, that has the specified extent.</para>
            <legacySyntax>array_view section(
    const Concurrency::index&lt;_Rank&gt;&amp; _Section_origin,
    const Concurrency::extent&lt;_Rank&gt;&amp; _Section_extent ) const restrict(amp,cpu);


array_view section(
    const Concurrency::index&lt;_Rank&gt;&amp; _Idx ) const restrict(amp,cpu);


array_view section(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Ext ) const restrict(amp,cpu);


array_view section(
    int _I0,
    int _E0 ) const restrict(amp,cpu);


array_view section(
    int _I0,
    int _I1,
    int _E0,
    int _E1 ) const restrict(amp,cpu);


array_view section(
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
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A subsection of the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object that's at the specified origin and, optionally, that has the specified extent. When only the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object is specified, the subsection contains all elements in the associated extent that have indexes that are larger than the indexes of the elements in the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__source_accelerator_view_data_member">
        <!--e1be171e-da89-4719-9a16-1b27a0ee1a04-->
        <title>array_view::source_accelerator_view Data Member</title>
        <content>
            <para>Gets the source accelerator_view that this array_view is associated with.</para>
            <legacySyntax>__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__synchronize_method">
        <!--124cc736-d511-42cb-8e2b-17bb75a6c2de-->
        <title>array_view::synchronize Method</title>
        <content>
            <para>Synchronizes any modifications made to the <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object back to its source data.</para>
            <legacySyntax>void synchronize(
    access_type _Access_type = access_type_read
) const restrict(cpu);


void synchronize() const restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Access_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The intended <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> on the target <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink>. This parameter has a default value of <unmanagedCodeEntityReference>access_type_read</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__synchronize_async_method">
        <!--c9a41b8e-9e71-44e8-b785-e1b7c46279ff-->
        <title>array_view::synchronize_async Method</title>
        <content>
            <para>Asynchronously synchronizes any modifications made to the <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object back to its source data.</para>
            <legacySyntax>concurrency::completion_future synchronize_async(
    access_type _Access_type = access_type_read
) const restrict(cpu);


concurrency::completion_future synchronize_async() const restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Access_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The intended <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> on the target <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink>. This parameter has a default value of <unmanagedCodeEntityReference>access_type_read</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A future upon which to wait for the operation to complete. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__synchronize_to_method">
        <!--f6ef8a8d-623e-4f6c-adb0-021d73fc815f-->
        <title>array_view::synchronize_to Method</title>
        <content>
            <para>Synchronizes any modifications made to this array_view to the specified accelerator_view.</para>
            <legacySyntax>void synchronize_to(
    const accelerator_view&amp; _Accl_view,
    access_type _Access_type = access_type_read
) const restrict(cpu);


void synchronize_to(
    const accelerator_view&amp; _Accl_view ) const restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Accl_view</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The target accelerator_view to synchronize to. </para>
                        </definition>
                        <definedTerm> <parameterReference>_Access_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__synchronize_to_async_method">
        <!--466d1966-cf6c-4f02-a799-57f0e59f1ce6-->
        <title>array_view::synchronize_to_async Method</title>
        <content>
            <para>Asynchronously synchronizes any modifications made to this array_view to the specified accelerator_view. </para>
            <legacySyntax>concurrency::completion_future synchronize_to_async(
    const accelerator_view&amp; _Accl_view,
    access_type _Access_type = access_type_read
) const restrict(cpu);


concurrency::completion_future synchronize_to_async(
    const accelerator_view&amp; _Accl_view ) const restrict(cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Accl_view</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The target accelerator_view to synchronize to. </para>
                        </definition>
                        <definedTerm> <parameterReference>_Access_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A future upon which to wait for the operation to complete. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="array_view__value_type_data_member">
        <!--7010e64d-4b93-4ea6-b40b-1ab7899929ca-->
        <title>array_view::value_type Data Member</title>
        <content>
            <para>The value type of the array_view and the bound array.</para>
            <legacySyntax>typedef typename_Value_type value_type;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="array_view__view_as_method">
        <!--c6ba6ad6-2a9b-4077-b82a-f1027ca945da-->
        <title>array_view::view_as Method</title>
        <content>
            <para>Reinterprets this <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> as an <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> of a different rank.</para>
            <legacySyntax>template &lt;
    int _New_rank
&gt;
array_view&lt;_Value_type,_New_rank&gt; view_as(
    const Concurrency::extent&lt; _New_rank&gt;&amp; _View_extent ) const restrict(amp,cpu);


template &lt;
    int _New_rank
&gt;
array_view&lt;const _Value_type,_New_rank&gt; view_as(
    const Concurrency::extent&lt; _New_rank&gt; _View_extent ) const restrict(amp,cpu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_New_rank</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The rank of the new <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>_View_extent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The reshaping <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Value_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The data type of the elements in both the original <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> object and the returned <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
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



