---
title: "STL Containers"
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
ms.assetid: 8e915ca1-19ba-4f0d-93c8-e2c3bfd638eb
caps.latest.revision: 25
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
# STL Containers
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The Standard Library provides various type-safe containers for storing collections of related objects. The containers are class templates; when you declare a container variable, you specify the type of the elements that the container will hold. Containers can be constructed with initializer lists. They have member functions for adding and removing elements and performing other operations. </para>
    <para>You iterate over the elements in a container, and access the individual elements by using <legacyLink xlink:href="2f746be7-b37d-4bfc-bf05-be4336ca982f">iterators</legacyLink>. You can use iterators explicitly by using their member functions and operators as well as global functions. You can also use them implicitly, for example by using a range-for loop. Iterators for all STL containers have a common interface but each container defines its own specialized iterators.</para>
    <para>Containers can be divided into three categories: sequence containers, associative containers, and container adapters. </para>
  </introduction>
  <section address="sequence_containers">
    <title styleId="sequence_containers">Sequence Containers</title>
    <content>
      <para>Sequence containers maintain the ordering of inserted elements that you specify.</para>
      <para>A <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> container behaves like an array, but can automatically grow as required. It is random access and contiguously stored, and length is highly flexible. For these reasons and more, <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> is the preferred sequence container for most applications. When in doubt as to what kind of sequence container to use, start by using a vector! For more information, see <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</link>.</para>
      <para>An <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> container has some of the strengths of <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference>, but the length is not as flexible. For more information, see <link xlink:href="fdfd43a5-b2b5-4b9e-991f-93bf10fb4293">array Class</link>.</para>
      <para>A <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> (double-ended queue) container allows for fast insertions and deletions at the beginning and end of the container. It shares the random-access and flexible-length advantages of <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference>, but is not contiguous. For more information, see <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</link>.</para>
      <para>A <unmanagedCodeEntityReference>list</unmanagedCodeEntityReference> container is a doubly linked list that enables bidirectional access, fast insertions, and fast deletions anywhere in the container, but you cannot randomly access an element in the container. For more information, see <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list Class</link>.</para>
      <para>A <unmanagedCodeEntityReference>forward_list</unmanagedCodeEntityReference> container is a singly linked list—the forward-access version of <unmanagedCodeEntityReference>list</unmanagedCodeEntityReference>. For more information, see <link xlink:href="89a3b805-ab60-4858-b772-5855130c11b1">forward_list Class</link>.</para>
    </content>
  </section>
  <section>
    <title>Associative Containers</title>
    <content>
      <para>In associative containers, elements are inserted in a pre-defined order—for example, as sorted ascending. Unordered associative containers are also available. The associative containers can be grouped into two subsets: maps and sets. </para>
      <para>A <unmanagedCodeEntityReference>map</unmanagedCodeEntityReference>, sometimes referred to as a dictionary, consists of a key/value pair. The key is used to order the sequence, and the value is associated with that key. For example, a <unmanagedCodeEntityReference>map</unmanagedCodeEntityReference> might contain keys that represent every unique word in a text and corresponding values that represent the number of times that each word appears in the text. The unordered version of <unmanagedCodeEntityReference>map</unmanagedCodeEntityReference> is <unmanagedCodeEntityReference>unordered_map</unmanagedCodeEntityReference>. For more information, see <link xlink:href="7876f4c9-ebb4-4878-af1e-09364c43af0a">map Class</link> and <link xlink:href="7cf7cfa1-16e7-461c-a9b2-3b8d8ec24e0d">unordered_map Class</link>.</para>
      <para>A <unmanagedCodeEntityReference>set</unmanagedCodeEntityReference> is just an ascending container of unique elements—the value is also the key. The unordered version of <unmanagedCodeEntityReference>set</unmanagedCodeEntityReference> is <unmanagedCodeEntityReference>unordered_set</unmanagedCodeEntityReference>. For more information, see <link xlink:href="8991f9aa-5509-4440-adc1-371512d32018">set Class</link> and <link xlink:href="ac08084e-05a7-48c0-9ae4-d40c529922dd">unordered_set Class</link>.</para>
      <para>Both <unmanagedCodeEntityReference>map</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>set</unmanagedCodeEntityReference> only allow one instance of a key or element to be inserted into the container. If multiple instances of elements are required, use <unmanagedCodeEntityReference>multimap</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>multiset</unmanagedCodeEntityReference>. The unordered versions are <unmanagedCodeEntityReference>unordered_multimap</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>unordered_multiset</unmanagedCodeEntityReference>. For more information, see <link xlink:href="8796ae05-37c4-475a-9e61-75fde9d4a463">multimap Class</link>, <link xlink:href="4baead6c-5870-4b85-940f-a47d6b891c27">unordered_multimap Class</link>, <link xlink:href="630e8c10-0ce9-4ad9-8d79-9e91a600713f">multiset Class</link>, and <link xlink:href="70c8dfc5-492a-4af2-84f5-1aa9cb04b71c">unordered_multiset Class</link>.</para>
      <para>Ordered maps and sets support bi-directional iterators, and their unordered counterparts support forward iterators. For more information, see <link xlink:href="2f746be7-b37d-4bfc-bf05-be4336ca982f">Iterators</link>.</para>
    </content>
    <sections>
      <section>
        <title>Heterogeneous Lookup in Associative Containers (C++14)</title>
        <content>
          <para> The ordered associative containers (map, multimap, set and multiset) now support heterogeneous lookup, which means that you are no longer required to pass the exact same object type as the key or element in member functions such as <languageKeyword>find()</languageKeyword> and <languageKeyword>lower_bound()</languageKeyword>. Instead, you can pass any type for which an overloaded <languageKeyword>operator&lt;</languageKeyword> is defined that enables comparison to the key type.</para>
          <para>Heterogenous lookup is enabled on an opt-in basis when you specify the <languageKeyword>std::less&lt;&gt;</languageKeyword> or <languageKeyword>std::greater&lt;&gt;</languageKeyword> "diamond functor" comparator when declaring the container variable, as shown here: </para>
          <code>std::set&lt;BigObject, <codeFeaturedElement>std::less&lt;&gt;</codeFeaturedElement>&gt; myNewSet;</code>
          <para>If you use the default comparator, then the container behaves exactly as it did in C++11 and earlier. </para>
          <para>The following example shows how to overload <languageKeyword>operator&lt;</languageKeyword> in order to enable users of a <languageKeyword>std::set</languageKeyword> to do lookups simply by passing in a small string that can be compared to each object's <codeInline>BigObject::id</codeInline> member.</para>
          <code>#include &lt;set&gt;
#include &lt;string&gt;
#include &lt;iostream&gt;
#include &lt;functional&gt;

using namespace std;

class BigObject
{
public:
    string id;
    explicit BigObject(const string&amp; s) : id(s) {}
    bool operator&lt; (const BigObject&amp; other) const
    {
        return this-&gt;id &lt; other.id;
    }
    
    // Other members....
};

inline bool operator&lt;(const string&amp; otherId, const BigObject&amp; obj)
{
    return otherId &lt; obj.id;
}

inline bool operator&lt;(const BigObject&amp; obj, const string&amp; otherId)
{
    return obj.id &lt; otherId;
}

int main()
{
    // Use C++14 brace-init syntax to invoke BigObject(string).
    // The s suffix invokes string ctor. It is a C++14 user-defined
    // literal defined in &lt;string&gt;
    BigObject b1{ "42F"s }; 
    BigObject b2{ "52F"s };
    BigObject b3{ "62F"s };
    set&lt;BigObject, less&lt;&gt;&gt; myNewSet; // C++14
    myNewSet.insert(b1);
    myNewSet.insert(b2);
    myNewSet.insert(b3);
    auto it = myNewSet.find(string("62F"));
    if (it != myNewSet.end())
        cout &lt;&lt; "myNewSet element = " &lt;&lt; it-&gt;id &lt;&lt; endl; 
    else
        cout &lt;&lt; "element not found " &lt;&lt; endl;

    // Keep console open in debug mode:
    cout &lt;&lt; endl &lt;&lt; "Press Enter to exit.";
    string s;
    getline(cin, s);
    return 0;
}

//Output: myNewSet element = 62F
</code>
          <para>The following member functions in map, multimap, set and multiset have been overloaded to support heterogeneous lookup:</para>
          <list class="ordered">
            <listItem>
              <para>find</para>
            </listItem>
            <listItem>
              <para>count</para>
            </listItem>
            <listItem>
              <para>lower_bound</para>
            </listItem>
            <listItem>
              <para>upper_bound</para>
            </listItem>
            <listItem>
              <para>equal_range</para>
            </listItem>
          </list>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Container Adapters</title>
    <content>
      <para>A container adapter is a variation of a sequence or associative container that restricts the interface for simplicity and clarity. Container adapters do not support iterators.</para>
      <para>A <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference> container follows FIFO (first in, first out) semantics. The first element <newTerm>pushed</newTerm>—that is, inserted into the queue—is the first to be <newTerm>popped</newTerm>—that is, removed from the queue. For more information, see <link xlink:href="28c20ab0-3a72-4185-9e0f-5a44eea0e204">queue Class</link>.</para>
      <para>A <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> container is organized such that the element that has the highest value is always first in the queue. For more information, see <link xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue Class</link>.</para>
      <para>A <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference> container follows LIFO (last in, first out) semantics. The last element pushed on the stack is the first element popped. For more information, see <link xlink:href="02151c1e-eab0-41b8-be94-a839ead78ecf">stack Class</link>.</para>
      <para>Because container adapters do not support iterators, they cannot be used with the STL algorithms. For more information, see <link xlink:href="dec9b373-7d5c-46cc-b7d2-21a938ecd0a6">Algorithms</link>.</para>
    </content>
  </section>
  <section>
    <title>Requirements for Container Elements</title>
    <content>
      <para>In general, elements inserted into an STL container can be of just about any object type if they are copyable. Movable-only elements—for example, those such as <codeInline>vector&lt;unique_ptr&lt;T&gt;&gt;</codeInline> that are created by using <unmanagedCodeEntityReference>unique_ptr&lt;&gt;</unmanagedCodeEntityReference> will work as long as you don't call member functions that attempt to copy them. </para>
      <para>The destructor is not permitted to throw an exception. </para>
      <para>Ordered associative containers—described earlier in this article—must have a public comparison operator defined. (By default, the operator is <unmanagedCodeEntityReference>operator&lt;</unmanagedCodeEntityReference>, but even types that don't work with <unmanagedCodeEntityReference>operator&lt;</unmanagedCodeEntityReference> are supported. </para>
      <para>Some operations on containers might also require a public default constructor and a public equivalence operator. For example, the unordered associative containers require support for equality and hashing.</para>
    </content>
  </section>
  <section>
    <title>Accessing Container Elements</title>
    <content>
      <para>The elements of containers are accessed by using iterators. For more information, see <link xlink:href="2f746be7-b37d-4bfc-bf05-be4336ca982f">Iterators</link>.</para>
      <alert class="note">
        <para>You can also use <legacyLink xlink:href="5750ba1d-ba48-4236-a923-e32de8345c2d">range-based for loops</legacyLink> to iterate over STL collections.</para>
      </alert>
    </content>
  </section>
  <section>
    <title>Comparing containers</title>
    <content>
      <para>All containers overload the operator== for comparing two containers of the same type that have the same element type. You can use == to compare a vector&lt;string&gt; to another vector&lt;string&gt;, but you cannot use it to compare a vector&lt;string&gt; to a list&lt;string&gt; or a vector&lt;string&gt; to a vector&lt;char*&gt;.  In C++98/03 you can use <legacyLink xlink:href="56533afd-b696-40a0-8fa9-d366539e49ae">std::equal</legacyLink> or <legacyLink xlink:href="a9fe78f3-9a86-44dc-9400-0c2ed1083323">std::mismatch</legacyLink> to compare dissimilar container types and/or element types. In C++11 you can also use <legacyLink xlink:href="3384e786-e210-4648-b2bc-3896b5e14f1f">std::is_permutation</legacyLink>. But in all these cases the functions assume that the containers are the same length. If the second range is shorter than the first, then undefined behavior results. If the second range is longer, results can still be incorrect because the comparison never continues past the end of the first range.</para>
      <code />
    </content>
    <sections>
      <section>
        <title>Comparing dissimilar containers (C++14)</title>
        <content>
          <para>In C++14 and later, you can compare dissimilar containers and/or dissimilar elements types by using one of the <legacyLink xlink:href="56533afd-b696-40a0-8fa9-d366539e49ae">std::equal</legacyLink>, <legacyLink xlink:href="a9fe78f3-9a86-44dc-9400-0c2ed1083323">std::mismatch</legacyLink>, or <legacyLink xlink:href="3384e786-e210-4648-b2bc-3896b5e14f1f">std::is_permutation</legacyLink> function overloads that take two complete ranges. These overloads enable you to compare containers with different lengths. These overloads are much less susceptible to user error, and are optimized to return false in constant time when containers of dissimilar lengths are compared. Therefore, we recommend you use these overloads unless (1) you have a very clear reason not to, or (2) you are using a <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">std::list</legacyLink> container, which does not benefit from the dual-range optimizations.</para>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics>
    <link xlink:href="6e10b758-e928-4827-9c3f-86cafe54bf5b">Containers (Modern C++)</link>
    <link xlink:href="59F76CD1-CF9D-4802-B9EB-D4B9CBE015D9">Standard Template Library Conventions</link>
<link xlink:href="4ab3dcf9-49c3-4e49-b5d6-1ec573e2aee4">&lt;sample container&gt;</link>
<link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety In The Standard C++ Library</link></relatedTopics>
</developerReferenceWithoutSyntaxDocument>