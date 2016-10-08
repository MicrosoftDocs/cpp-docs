---
title: "Parallel Containers and Objects"
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
ms.assetid: 90ab715c-29cd-48eb-8e76-528619aab466
caps.latest.revision: 30
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
# Parallel Containers and Objects
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The Parallel Patterns Library (PPL) includes several containers and objects that provide thread-safe access to their elements.</para>
    <para>A <newTerm>concurrent container</newTerm> provides concurrency-safe access to the most important operations. The functionality of these containers resembles those that are provided by the Standard Template Library (STL). For example, the <legacyLink xlink:href="a217b4ac-af2b-4d41-94eb-09a75ee28622">concurrency::concurrent_vector</legacyLink> class resembles the <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> class, except that the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class lets you append elements in parallel. Use concurrent containers when you have parallel code that requires both read and write access to the same container.</para>
    <para>A <newTerm>concurrent object</newTerm> is shared concurrently among components. A process that computes the state of a concurrent object in parallel produces the same result as another process that computes the same state serially. The <legacyLink xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">concurrency::combinable</legacyLink> class is one example of a concurrent object type. The <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class lets you perform computations in parallel, and then combine those computations into a final result. Use concurrent objects when you would otherwise use a synchronization mechanism, for example, a mutex, to synchronize access to a shared variable or resource.</para>
  </introduction>
  <section address="top">
    <title>Sections</title>
    <content>
      <para>This topic describes the following parallel containers and objects in detail.</para>
      <para>Concurrent containers:</para>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#vector">concurrent_vector Class</legacyLink>
          </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#vector-differences">Differences Between concurrent_vector and vector</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#vector-safety">Concurrency-Safe Operations</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#vector-exceptions">Exception Safety</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#queue">concurrent_queue Class</legacyLink>
          </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#queue-differences">Differences Between concurrent_queue and queue</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#queue-safety">Concurrency-Safe Operations</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#queue-iterators">Iterator Support</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#unordered_map">concurrent_unordered_map Class</legacyLink>
          </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#map-differences">Differences Between concurrent_unordered_map and unordered_map</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#map-safety">Concurrency-Safe Operations</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#unordered_multimap">concurrent_unordered_multimap Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#unordered_set">concurrent_unordered_set Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#unordered_multiset">concurrent_unordered_multiset Class</legacyLink>
          </para>
        </listItem>
      </list>
      <para>Concurrent objects:</para>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#combinable">combinable Class</legacyLink>
          </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#combinable-features">Methods and Features</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#combinable-examples">Examples</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
      </list>
    </content>
  </section>
  <section address="vector">
    <title>concurrent_vector Class</title>
    <content>
      <para>The <legacyLink xlink:href="a217b4ac-af2b-4d41-94eb-09a75ee28622">concurrency::concurrent_vector</legacyLink> class is a sequence container class that, just like the <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> class, lets you randomly access its elements. The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class enables concurrency-safe append and element access operations. Append operations do not invalidate existing pointers or iterators. Iterator access and traversal operations are also concurrency-safe.</para>
    </content>
    <sections>
      <section address="vector-differences">
        <title>Differences Between concurrent_vector and vector</title>
        <content>
          <para>The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class closely resembles the <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> class. The complexity of append, element access, and iterator access operations on a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object are the same as for a <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> object. The following points illustrate where <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> differs from <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference>:</para>
          <list class="bullet">
            <listItem>
              <para>Append, element access, iterator access, and iterator traversal operations on a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object are concurrency-safe.</para>
            </listItem>
            <listItem>
              <para>You can add elements only to the end of a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object. The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class does not provide the <unmanagedCodeEntityReference>insert</unmanagedCodeEntityReference> method.</para>
            </listItem>
            <listItem>
              <para>A <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object does not use <legacyLink xlink:href="eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d">move semantics</legacyLink> when you append to it.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class does not provide the <unmanagedCodeEntityReference>erase</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>pop_back</unmanagedCodeEntityReference> methods. As with <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference>, use the <legacyLink xlink:href="a54a5b8e-eee6-4d41-9192-76c88a3e484a">clear</legacyLink> method to remove all elements from a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class does not store its elements contiguously in memory. Therefore, you cannot use the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class in all the ways that you can use an array. For example, for a variable named <unmanagedCodeEntityReference>v</unmanagedCodeEntityReference> of type <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference>, the expression <codeInline>&amp;v[0]+2</codeInline> produces undefined behavior.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class defines the <legacyLink xlink:href="3aef8f98-e5a8-40a6-8db8-91315f41dadc">grow_by</legacyLink> and <legacyLink xlink:href="d514c0d3-3d22-44b5-b651-1290ffac7c40">grow_to_at_least</legacyLink> methods. These methods resemble the <legacyLink xlink:href="7338d31b-ee0b-46b7-a9f4-2c6c255f29e3">resize</legacyLink> method, except that they are concurrency-safe.</para>
            </listItem>
            <listItem>
              <para>A <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object does not relocate its elements when you append to it or resize it. This enables existing pointers and iterators to remain valid during concurrent operations.</para>
            </listItem>
            <listItem>
              <para>The runtime does not define a specialized version of <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> for type <languageKeyword>bool</languageKeyword>.</para>
            </listItem>
          </list>
        </content>
      </section>
      <section address="vector-safety">
        <title>Concurrency-Safe Operations</title>
        <content>
          <para>All methods that append to or increase the size of a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object, or access an element in a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object, are concurrency-safe. The exception to this rule is the <unmanagedCodeEntityReference>resize</unmanagedCodeEntityReference> method.</para>
          <para>The following table shows the common <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> methods and operators that are concurrency-safe.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="c3663c3a-1342-4f56-86ef-3f33d19af211">at</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="a8e71845-f5a4-4333-9598-8a1732cb8724">end</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="1875880f-643b-4d60-ab59-a27f480313e5">operator[]</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="fd3a7972-420e-4622-928c-60d97da55953">begin</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="8cd9c8b9-895c-4153-b22a-bafca902b93c">front</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="d85745f0-7e1a-4000-8a99-5710d4f05103">push_back</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="fa42a458-b358-4037-b65b-e48b21a1609d">back</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="3aef8f98-e5a8-40a6-8db8-91315f41dadc">grow_by</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="ae710418-a6cb-4370-b71b-a4915ee2e709">rbegin</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="99ac661c-09b7-43a4-a331-7baf0bdee6a5">capacity</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="d514c0d3-3d22-44b5-b651-1290ffac7c40">grow_to_at_least</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="6582437f-942f-4fa7-bad6-60de775afb1e">rend</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="e9f9bee2-d482-44ba-9eb4-0a3205baf6c8">empty</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="4f064522-5e52-4e3b-ba40-4aa432c56ba8">max_size</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="3231e1e5-546d-449a-b7b4-fadaa0bb817d">size</legacyLink>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>Operations that the runtime provides for compatibility with the STL, for example, <unmanagedCodeEntityReference>reserve</unmanagedCodeEntityReference>, are not concurrency-safe. The following table shows the common methods and operators that are not concurrency-safe.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="cd9aa3dc-8845-4bd9-a0b8-0fda4a19da6a">assign</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="3f531d7f-87ce-4a8c-aff2-daa00b14edd6">reserve</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="a54a5b8e-eee6-4d41-9192-76c88a3e484a">clear</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="7338d31b-ee0b-46b7-a9f4-2c6c255f29e3">resize</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="8547f316-2473-439f-8fee-39180d7843e5">operator=</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="b5b67a00-6198-4feb-8b78-de1ee29e4229">shrink_to_fit</legacyLink>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>Operations that modify the value of existing elements are not concurrency-safe. Use a synchronization object such as a <legacyLink xlink:href="91a59cd2-ca05-4b74-8398-d826d9f86736">reader_writer_lock</legacyLink> object to synchronize concurrent read and write operations to the same data element. For more information about synchronization objects, see <link xlink:href="d612757d-e4b7-4019-a627-f853af085b8b">Synchronization Data Structures</link>.</para>
          <para>When you convert existing code that uses <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> to use <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference>, concurrent operations can cause the behavior of your application to change. For example, consider the following program that concurrently performs two tasks on a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object. The first task appends additional elements to a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object. The second task computes the sum of all elements in the same object.</para>
          <codeReference>concrt-vector-safety#1</codeReference>
          <para>Although the <unmanagedCodeEntityReference>end</unmanagedCodeEntityReference> method is concurrency-safe, a concurrent call to the <legacyLink xlink:href="d85745f0-7e1a-4000-8a99-5710d4f05103">push_back</legacyLink> method causes the value that is returned by <unmanagedCodeEntityReference>end</unmanagedCodeEntityReference> to change. The number of elements that the iterator traverses is indeterminate. Therefore, this program can produce a different result each time that you run it.</para>
        </content>
      </section>
      <section address="vector-exceptions">
        <title>Exception Safety</title>
        <content>
          <para>If a growth or assignment operation throws an exception, the state of the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object becomes invalid. The behavior of a <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object that is in an invalid state is undefined unless stated otherwise. However, the destructor always frees the memory that the object allocates, even if the object is in an invalid state.</para>
          <para>The data type of the vector elements, <parameterReference>_Ty</parameterReference>, must meet the following requirements. Otherwise, the behavior of the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class is undefined.</para>
          <list class="bullet">
            <listItem>
              <para>The destructor must not throw.</para>
            </listItem>
            <listItem>
              <para>If the default or copy constructor throws, the destructor must not be declared by using the <languageKeyword>virtual</languageKeyword> keyword and it must work correctly with zero-initialized memory.</para>
            </listItem>
          </list>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="queue">
    <title>concurrent_queue Class</title>
    <content>
      <para>The <legacyLink xlink:href="c2218996-d0ea-40e9-b002-e9a15b085f51">concurrency::concurrent_queue</legacyLink> class, just like the <legacyLink xlink:href="28c20ab0-3a72-4185-9e0f-5a44eea0e204">std::queue</legacyLink> class, lets you access its front and back elements. The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class enables concurrency-safe enqueue and dequeue operations. The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class also provides iterator support that is not concurrency-safe.</para>
    </content>
    <sections>
      <section address="queue-differences">
        <title>Differences Between concurrent_queue and queue</title>
        <content>
          <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class closely resembles the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference> class. The following points illustrate where <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> differs from <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>:</para>
          <list class="bullet">
            <listItem>
              <para>Enqueue and dequeue operations on a <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> object are concurrency-safe.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class provides iterator support that is not concurrency-safe.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class does not provide the <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>pop</unmanagedCodeEntityReference> methods. The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class replaces these methods by defining the <legacyLink xlink:href="cae07ea0-5fe0-468d-90c9-641a953b755b">try_pop</legacyLink> method.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class does not provide the <unmanagedCodeEntityReference>back</unmanagedCodeEntityReference> method. Therefore, you cannot reference the end of the queue.</para>
            </listItem>
            <listItem>
              <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class provides the <legacyLink xlink:href="cea93331-3c14-4db3-96ca-3a3f8ed75c9b">unsafe_size</legacyLink> method instead of the <unmanagedCodeEntityReference>size</unmanagedCodeEntityReference> method. The <unmanagedCodeEntityReference>unsafe_size</unmanagedCodeEntityReference> method is not concurrency-safe.</para>
            </listItem>
          </list>
        </content>
      </section>
      <section address="queue-safety">
        <title>Concurrency-Safe Operations</title>
        <content>
          <para>All methods that enqueue to or dequeue from a <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> object are concurrency-safe. </para>
          <para>The following table shows the common <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> methods and operators that are concurrency-safe.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="6e50bf38-1be9-4c1d-a6d9-9c7195543cbf">empty</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="a0013721-3a3b-4307-a29e-710d8c39d8a9">push</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="7f8e77ba-cf82-45ca-ba99-437e7bf763c9">get_allocator</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="cae07ea0-5fe0-468d-90c9-641a953b755b">try_pop</legacyLink>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>Although the <unmanagedCodeEntityReference>empty</unmanagedCodeEntityReference> method is concurrency-safe, a concurrent operation may cause the queue to grow or shrink before the <unmanagedCodeEntityReference>empty</unmanagedCodeEntityReference> method returns.</para>
          <para>The following table shows the common methods and operators that are not concurrency-safe.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="9318f907-95f3-4e09-bc26-ba7218854e23">clear</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="498dbad1-b8e2-4487-98e9-0d0ddcfc9fbb">unsafe_end</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="91524d7e-689c-4837-b8d8-00c00e6d7816">unsafe_begin</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="cea93331-3c14-4db3-96ca-3a3f8ed75c9b">unsafe_size</legacyLink>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section address="queue-iterators">
        <title>Iterator Support</title>
        <content>
          <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> provides iterators that are not concurrency-safe. We recommend that you use these iterators for debugging only.</para>
          <para>A <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> iterator traverses elements in the forward direction only. The following table shows the operators that each iterator supports.</para>
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
                    <legacyLink xlink:href="4cfdd07e-927a-42f8-aaa0-d6881687f413">operator++</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Advances to next item in the queue. This operator is overloaded to provide both pre-increment and post-increment semantics.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="a0e671fc-76e6-4fb4-b95c-ced4dd2b2017">operator*</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Retrieves a reference to the current item.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="41fa393d-ae1e-4a38-bb4b-19e8df709ca9">operator-&gt;</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Retrieves a pointer to the current item.</para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="unordered_map">
    <title>
      <?Comment TP: Review: For the examples for the 4 new concurrent containers, is it OK that they all exercise basically the same thing? (Ilikethat they do so you can compare them). However, is itOKthat they basically just exerciseinsert()? 2012-03-06T11:11:00Z  Id='8?>concurrent_unordered_map Class<?CommentEnd Id='8'
    ?></title>
    <content>
      <para>The <legacyLink xlink:href="b2d879dd-87ef-4af9-a266-a5443fd538b8"> HYPERLINK "file:///C:\\Users\\thompet\\AppData\\Local\\Temp\\DxEditor\\DduePreview\\Default\\798d7037-df37-4310-858b-6f590bbf6ebf\\HTM\\html\\a217b4ac-af2b-4d41-94eb-09a75ee28622" concurrency::concurrent_unordered_map</legacyLink> class is an associative container class that, just like the <legacyLink xlink:href="7cf7cfa1-16e7-461c-a9b2-3b8d8ec24e0d">std::unordered_map</legacyLink> class, controls a varying-length sequence of elements of type <legacyLink xlink:href="539d3d67-80a2-4170-b347-783495d42109">std::pair&lt;const Key, Ty&gt;</legacyLink>. Think of an unordered map as a dictionary that you can add a key and value pair to or look up a value by key. This class is useful when you have multiple threads or tasks that have to concurrently access a shared container, insert into it, or update it.</para>
      <para>The following example shows the basic structure for using <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference>. This example inserts character keys in the range ['a', 'i']. Because the order of operations is undetermined, the final value for each key is also undetermined. However, it is safe to perform the insertions in parallel.</para>
      <codeReference>concrt-unordered-map-structure#1</codeReference>
      <para>For an example that uses <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> to perform a map and reduce operation in parallel, see <link xlink:href="9d19fac0-4ab6-4380-a375-3b18eeb87720">How to: Perform Map and Reduce Operations in Parallel</link>.</para>
    </content>
    <sections>
      <section address="map-differences">
        <title>Differences Between concurrent_unordered_map and unordered_map</title>
        <content>
          <para>The <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> class closely resembles the <unmanagedCodeEntityReference>unordered_map</unmanagedCodeEntityReference> class. The following points illustrate where <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> differs from <unmanagedCodeEntityReference>unordered_map</unmanagedCodeEntityReference>:</para>
          <list class="bullet">
            <listItem>
              <para>The <unmanagedCodeEntityReference>erase</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>bucket</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>bucket_count</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>bucket_size</unmanagedCodeEntityReference> methods are named <unmanagedCodeEntityReference>unsafe_erase</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>unsafe_bucket</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>unsafe_bucket_count</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>unsafe_bucket_size</unmanagedCodeEntityReference>, respectively. The <unmanagedCodeEntityReference>unsafe_</unmanagedCodeEntityReference> naming convention indicates that these methods are not concurrency-safe. For more information about concurrency safety, see <legacyLink xlink:href="#map-safety">Concurrency-Safe Operations</legacyLink>.</para>
            </listItem>
            <listItem>
              <para>Insert operations do not invalidate existing pointers or iterators, nor do they change the order of items that already exist in the map. Insert and traverse operations can occur concurrently.</para>
            </listItem>
            <listItem>
              <para>
                <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> supports forward iteration only.</para>
            </listItem>
            <listItem>
              <para>Insertion does not invalidate or update the iterators that are returned by <unmanagedCodeEntityReference>equal_range</unmanagedCodeEntityReference>. Insertion can append unequal items to the end of the range. The begin iterator points to an equal item.</para>
            </listItem>
          </list>
          <para>To help avoid deadlock, no method of <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> holds a lock when it calls <?Comment TP: Review: is this correct? 2012-02-22T16:16:00Z  Id='11?>the memory allocator, hash functions<?CommentEnd Id='11'
    ?>, or other user-defined code. Also, you must ensure that the hash function always evaluates equal keys to the same value. The best hash functions distribute keys uniformly across the hash code space.</para>
        </content>
      </section>
      <section address="map-safety">
        <title>Concurrency-Safe Operations</title>
        <content>
          <para>The <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> class enables concurrency-safe insert and element-access operations. Insert operations do not invalidate existing pointers or iterators. Iterator access and traversal operations are also concurrency-safe. <?Comment TP: Fix links after fixing bug369133. 2012-02-22T16:16:00Z  Id='12?>The following table <?CommentEnd Id='12'
    ?>shows the commonly used <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> methods and operators that are concurrency-safe.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="e64bf194-8ea3-4344-bbbd-73d528394654">at</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>count</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>find</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="86357e58-500c-4f22-9cdb-8dfe1ce8cd3f">key_eq</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>begin</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>empty</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>get_allocator</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>max_size</unmanagedCodeEntityReference>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>cbegin</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>end</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>hash_function</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="e2179a8f-fe44-4239-8c4b-7ed5dfc2c668">operator[]</legacyLink>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>cend</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>equal_range</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="d729352a-5292-400c-8f89-c7cd805bb6fa">insert</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>size</unmanagedCodeEntityReference>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>Although the <unmanagedCodeEntityReference>count</unmanagedCodeEntityReference> method can be called safely from concurrently running threads, different threads can receive different results if a new value is simultaneously inserted into the container.</para>
          <para>The <?Comment TP: Fix links after fixing bug369133. 2012-02-22T16:16:00Z  Id='13?>following table <?CommentEnd Id='13'
    ?>shows the commonly used methods and operators that are not concurrency-safe.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>clear</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>max_load_factor</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>rehash</unmanagedCodeEntityReference>
                  </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>load_factor</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="9f1a017d-886e-4419-9494-55f937779422">operator=</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>
                    <legacyLink xlink:href="115aa8a0-c542-4874-8bf5-c7dedb26ca95">swap</legacyLink>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>In addition to these methods, any method that begins with <unmanagedCodeEntityReference>unsafe_</unmanagedCodeEntityReference> is also not concurrency-safe.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="unordered_multimap">
    <title>concurrent_unordered_multimap Class</title>
    <content>
      <para>The <legacyLink xlink:href="4dada5d7-15df-4382-b9c9-348e75b2f3c1">concurrency::concurrent_unordered_multimap</legacyLink> class closely resembles the <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> class except that it allows for multiple values to map to the same key. It also differs from <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> in the following ways:</para>
      <list class="bullet">
        <listItem>
          <para>The <legacyLink xlink:href="6da233d1-1809-42c6-a8ab-75959c3891c1">concurrent_unordered_multimap::insert</legacyLink> method returns an iterator instead of <unmanagedCodeEntityReference>std::pair&lt;iterator, bool&gt;</unmanagedCodeEntityReference>.</para>
        </listItem>
        <listItem>
          <para>The <unmanagedCodeEntityReference>concurrent_unordered_multimap</unmanagedCodeEntityReference> class does not provide <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> nor the <unmanagedCodeEntityReference>at</unmanagedCodeEntityReference> method.</para>
        </listItem>
      </list>
      <para>The following example shows the basic structure for using <unmanagedCodeEntityReference>concurrent_unordered_multimap</unmanagedCodeEntityReference>. This example inserts character keys in the range ['a', 'i']. <unmanagedCodeEntityReference>concurrent_unordered_multimap</unmanagedCodeEntityReference> enables a key to have multiple values.</para>
      <codeReference>concrt-unordered-multimap-structure#1</codeReference>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="unordered_set">
    <title>concurrent_unordered_set Class</title>
    <content>
      <para>The <legacyLink xlink:href="c61f9a9a-4fd9-491a-9251-e300737ecf4b">concurrency::concurrent_unordered_set</legacyLink> class closely resembles the <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> class except that it manages values instead of key and value pairs. The <unmanagedCodeEntityReference>concurrent_unordered_set</unmanagedCodeEntityReference> class does not provide <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> nor the <unmanagedCodeEntityReference>at</unmanagedCodeEntityReference> method.</para>
      <para>The following example shows the basic structure for using <unmanagedCodeEntityReference>concurrent_unordered_set</unmanagedCodeEntityReference>. This example inserts character values in the range ['a', 'i']. It is safe to perform the insertions in parallel.</para>
      <codeReference>concrt-unordered-set#1</codeReference>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="unordered_multiset">
    <title>concurrent_unordered_multiset Class</title>
    <content>
      <para>The <legacyLink xlink:href="219d7d67-1ff0-45f4-9400-e9cc272991a4">concurrency::concurrent_unordered_multiset</legacyLink> class closely resembles the <unmanagedCodeEntityReference>concurrent_unordered_set</unmanagedCodeEntityReference> class except that it allows for duplicate values. It also differs from <unmanagedCodeEntityReference>concurrent_unordered_set</unmanagedCodeEntityReference> in the following ways:</para>
      <list class="bullet">
        <listItem>
          <para>The <legacyLink xlink:href="0aefda94-617d-4754-ae3c-7cdc52b01933">concurrent_unordered_multiset::insert</legacyLink> method returns an iterator instead of <unmanagedCodeEntityReference>std::pair&lt;iterator, bool&gt;</unmanagedCodeEntityReference>.</para>
        </listItem>
        <listItem>
          <para>The <unmanagedCodeEntityReference>concurrent_unordered_multiset</unmanagedCodeEntityReference> class does not provide <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> nor the <unmanagedCodeEntityReference>at</unmanagedCodeEntityReference> method.</para>
        </listItem>
      </list>
      <para>The following example shows the basic structure for using <unmanagedCodeEntityReference>concurrent_unordered_multiset</unmanagedCodeEntityReference>. This example inserts character values in the range ['a', 'i']. <unmanagedCodeEntityReference>concurrent_unordered_multiset</unmanagedCodeEntityReference> enables a value to occur multiple times.</para>
      <codeReference>concrt-unordered-multiset#1</codeReference>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="combinable">
    <title>combinable Class</title>
    <content>
      <para>The <legacyLink xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">concurrency::combinable</legacyLink> class provides reusable, thread-local storage that lets you perform fine-grained computations and then merge those computations into a final result. You can think of a <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> object as a reduction variable.</para>
      <para>The <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class is useful when you have a resource that is shared among several threads or tasks. The <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class helps you eliminate shared state by providing access to shared resources in a lock-free manner. Therefore, this class provides an alternative to using a synchronization mechanism, for example, a mutex, to synchronize access to shared data from multiple threads.</para>
    </content>
    <sections>
      <section address="combinable-features">
        <title>Methods and Features</title>
        <content>
          <para>The following table shows some of the important methods of the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class. For more information about all the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class methods, see <link xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">combinable Class</link>.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Method</para>
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
                    <legacyLink xlink:href="496c298e-f159-44f3-8c25-ebf8f5b175be">local</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Retrieves a reference to the local variable that is associated with the current thread context.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="e5f0de02-0557-4876-b4f5-244580536d60">clear</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Removes all thread-local variables from the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <legacyLink xlink:href="492e55cc-c1f8-4e0e-8356-2636f25563de">combine</legacyLink>
                  </para>
                  <para>
                    <legacyLink xlink:href="ac44fbc7-69b5-44dc-86f8-b772dab6729b">combine_each</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Uses the provided combine function to generate a final value from the set of all thread-local computations.</para>
                </TD>
              </tr>
            </tbody>
          </table>
          <para>The <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class is a template class that is parameterized on the final merged result. If you call the default constructor, the <parameterReference>_Ty</parameterReference> template parameter type must have a default constructor and a copy constructor. If the <parameterReference>_Ty</parameterReference> template parameter type does not have a default constructor, call the overloaded version of the constructor that takes an initialization function as its parameter.</para>
          <para>You can store additional data in a <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> object after you call the <legacyLink xlink:href="492e55cc-c1f8-4e0e-8356-2636f25563de">combine</legacyLink> or <legacyLink xlink:href="ac44fbc7-69b5-44dc-86f8-b772dab6729b">combine_each</legacyLink> methods. You can also call the <unmanagedCodeEntityReference>combine</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>combine_each</unmanagedCodeEntityReference> methods multiple times. If no local value in a <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> object changes, the <unmanagedCodeEntityReference>combine</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>combine_each</unmanagedCodeEntityReference> methods produce the same result every time that they are called.</para>
        </content>
      </section>
      <section address="combinable-examples">
        <title>Examples</title>
        <content>
          <para>For examples about how to use the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class, see the following topics:</para>
          <list class="bullet">
            <listItem>
              <para>
                <link xlink:href="fa730580-1c94-4b2d-8aec-57c91dc0497e">How to: Use combinable to Improve Performance</link>
              </para>
            </listItem>
            <listItem>
              <para>
                <link xlink:href="66ffe8e3-6bbb-4e9f-b790-b612922a68a7">How to: Use combinable to Combine Sets</link>
              </para>
            </listItem>
          </list>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Related Topics</title>
    <content>
      <definitionTable>
        <definedTerm>
          <link xlink:href="bd00046d-e9b6-4ae1-b661-3995f671b867">How-to: Use Parallel Containers</link>
        </definedTerm>
        <definition>
          <para>Shows how to use parallel containers to efficiently store and access data in parallel.</para>
        </definition>
        <definedTerm>
          <link xlink:href="fa730580-1c94-4b2d-8aec-57c91dc0497e">How to: Use combinable to Improve Performance</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class to eliminate shared state, and thereby improve performance.</para>
        </definition>
        <definedTerm>
          <link xlink:href="66ffe8e3-6bbb-4e9f-b790-b612922a68a7">How to: Use combinable to Combine Sets</link>
        </definedTerm>
        <definition>
          <para>Shows how to use a <unmanagedCodeEntityReference>combine</unmanagedCodeEntityReference> function to merge thread-local sets of data.</para>
        </definition>
        <definedTerm>
          <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link>
        </definedTerm>
        <definition>
          <para>Describes the PPL, which provides an imperative programming model that promotes scalability and ease-of-use for developing concurrent applications.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <section>
    <title>Reference</title>
    <content>
      <para>
        <link xlink:href="a217b4ac-af2b-4d41-94eb-09a75ee28622">concurrent_vector Class</link>
      </para>
      <para>
        <link xlink:href="c2218996-d0ea-40e9-b002-e9a15b085f51">concurrent_queue Class</link>
      </para>
      <para>
        <link xlink:href="b2d879dd-87ef-4af9-a266-a5443fd538b8">concurrent_unordered_map Class</link>
      </para>
      <para>
        <link xlink:href="4dada5d7-15df-4382-b9c9-348e75b2f3c1">concurrent_unordered_multimap Class</link>
      </para>
      <para>
        <link xlink:href="c61f9a9a-4fd9-491a-9251-e300737ecf4b">concurrent_unordered_set Class</link>
      </para>
      <para>
        <link xlink:href="219d7d67-1ff0-45f4-9400-e9cc272991a4">concurrent_unordered_multiset Class</link>
      </para>
      <para>
        <link xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">combinable Class</link>
      </para>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>