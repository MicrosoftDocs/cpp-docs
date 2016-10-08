---
title: "Sample Container Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5b1451f2-c708-45da-bbf0-9e42fd687a1a
caps.latest.revision: 6
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
# Sample Container Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <alert class="note">
      <para>This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see <legacyLink xlink:href="8E915CA1-19BA-4F0D-93C8-E2C3BFD638EB">STL Containers</legacyLink>.</para>
    </alert>
    <para>Describes an object that controls a varying-length sequence of elements, typically of type <legacyBold>Ty</legacyBold>. The sequence is stored in different ways, depending on the actual container.</para>
    <para>A container constructor or member function may find occasion to call the constructor <legacyBold>Ty</legacyBold>(<legacyBold>const Ty&amp;</legacyBold>) or the function <legacyBold>Ty::operator=</legacyBold>(<legacyBold>const Ty&amp;</legacyBold>). If such a call throws an exception, the container object is obliged to maintain its integrity, and to rethrow any exception it catches. You can safely swap, assign to, erase, or destroy a container object after it throws one of these exceptions. In general, however, you cannot otherwise predict the state of the sequence controlled by the container object.</para>
    <para>A few additional caveats:  </para>
    <list class="bullet">
      <listItem>
        <para>If the expression <legacyBold>~Ty</legacyBold> throws an exception, the resulting state of the container object is undefined.</para>
      </listItem>
      <listItem>
        <para>If the container stores an allocator object <legacyItalic>al</legacyItalic>, and <legacyItalic>al</legacyItalic> throws an exception other than as a result of a call to <legacyItalic>al</legacyItalic><legacyBold>.allocate</legacyBold>, the resulting state of the container object is undefined.</para>
      </listItem>
      <listItem>
        <para>If the container stores a function object <legacyItalic>comp</legacyItalic>, to determine how to order the controlled sequence, and <legacyItalic>comp</legacyItalic> throws an exception of any kind, the resulting state of the container object is undefined.</para>
      </listItem>
    </list>
    <para>The container classes defined by STL satisfy several additional requirements, as described in the following paragraphs.</para>
    <para>Container template class <legacyLink xlink:href="D3707F4A-10FD-444F-B856-F9CA2077C1CD">list</legacyLink> provides deterministic, and useful, behavior even in the presence of the exceptions described above. For example, if an exception is thrown during the insertion of one or more elements, the container is left unaltered and the exception is rethrown.</para>
    <para>For <legacyItalic>all</legacyItalic> the container classes defined by STL, if an exception is thrown during calls to the following member functions:</para>
    <code>&lt;A NAME="vclrfcontainerinsert"&gt;&lt;/A&gt;insert // single element inserted
&lt;A NAME="vclrfcontainerpushback"&gt;&lt;/A&gt;push_back
&lt;A NAME="vclrfcontainerpushfront"&gt;&lt;/A&gt;push_front</code>
    <para>the container is left unaltered and the exception is rethrown.</para>
    <para>For <legacyItalic>all</legacyItalic> the container classes defined by STL, no exception is thrown during calls to the following member functions:</para>
    <code>&lt;A NAME="vclrfcontainerpopback"&gt;&lt;/A&gt;pop_back
&lt;A NAME="vclrfcontainerpopfront"&gt;&lt;/A&gt;pop_front</code>
    <para>The member function <legacyLink xlink:href="ABC091C5-5A80-4BD8-93A8-A2D9BDE2EFEC">erase</legacyLink> throws an exception only if a copy operation (assignment or copy construction) throws an exception.</para>
    <para>Moreover, no exception is thrown while copying an iterator returned by a member function.</para>
    <para>The member function <legacyLink xlink:href="898C219C-BC8E-4D14-A149-6240426C693F">swap</legacyLink> makes additional promises for <legacyItalic>all</legacyItalic> container classes defined by STL:  </para>
    <list class="bullet">
      <listItem>
        <para>The member function throws an exception only if the container stores an allocator object al, and <codeInline>al</codeInline> throws an exception when copied.</para>
      </listItem>
      <listItem>
        <para>References, pointers, and iterators that designate elements of the controlled sequences being swapped remain valid.</para>
      </listItem>
    </list>
    <para>An object of a container class defined by STL allocates and frees storage for the sequence it controls through a stored object of type <unmanagedCodeEntityReference>Alloc</unmanagedCodeEntityReference>, which is typically a template parameter. Such an allocator object must have the same external interface as an object of class <legacyBold>allocator&lt;Ty&gt;</legacyBold>. In particular, <unmanagedCodeEntityReference>Alloc</unmanagedCodeEntityReference> must be the same type as <legacyBold>Alloc::rebind&lt;value_type&gt;::other</legacyBold></para>
    <para>For <legacyItalic>all</legacyItalic> container classes defined by STL, the member function <legacyBold>Alloc get_allocator const; </legacyBold>returns a copy of the stored allocator object. Note that the stored allocator object is <legacyItalic>not</legacyItalic> copied when the container object is assigned. All constructors initialize the value stored in <legacyBold>allocator</legacyBold>, to <unmanagedCodeEntityReference>Alloc</unmanagedCodeEntityReference> if the constructor contains no allocator parameter.</para>
    <para>According to the C++ Standard, a container class defined by STL can assume that:  </para>
    <list class="bullet">
      <listItem>
        <para>All objects of class <unmanagedCodeEntityReference>Alloc</unmanagedCodeEntityReference> compare equal.</para>
      </listItem>
      <listItem>
        <para>Type <legacyBold>Alloc::const_pointer</legacyBold> is the same as <legacyBold>const Ty *</legacyBold>.</para>
      </listItem>
      <listItem>
        <para>Type <legacyBold>Alloc::const_reference</legacyBold> is the same as <legacyBold>const Ty&amp;</legacyBold>.</para>
      </listItem>
      <listItem>
        <para>Type <legacyBold>Alloc::pointer</legacyBold> is the same as <legacyBold>Ty *</legacyBold>.</para>
      </listItem>
      <listItem>
        <para>Type <legacyBold>Alloc::reference</legacyBold> is the same as <legacyBold>Ty&amp;</legacyBold>.</para>
      </listItem>
    </list>
    <para>In this implementation, however, containers do not make such simplifying assumptions. Thus, they work properly with allocator objects that are more ambitious:  </para>
    <list class="bullet">
      <listItem>
        <para>All objects of class <unmanagedCodeEntityReference>Alloc</unmanagedCodeEntityReference> does not need to compare equal. (You can maintain multiple pools of storage.)</para>
      </listItem>
      <listItem>
        <para>Type <legacyBold>Alloc::const_pointer</legacyBold> does not need to be the same as <legacyBold>const Ty *</legacyBold>. (A const pointer can be a class.)</para>
      </listItem>
      <listItem>
        <para>Type <legacyBold>Alloc::pointer</legacyBold> does not need to be the same as <legacyBold>Ty *</legacyBold>. (A pointer can be a class.)</para>
      </listItem>
    </list>
  </introduction>
  <section>
    <title>Requirements</title>
    <content>
      <para>
        <legacyBold>Header</legacyBold>: &lt;sample container&gt;</para>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="4AB3DCF9-49C3-4E49-B5D6-1EC573E2AEE4">&lt;sample container&gt;</link>
</relatedTopics>
</developerReferenceWithoutSyntaxDocument>