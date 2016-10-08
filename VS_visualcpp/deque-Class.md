---
title: "deque Class"
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
ms.assetid: 64842ee5-057a-4063-8c16-4267a0332584
caps.latest.revision: 15
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
# deque Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Arranges elements of a given type in a linear arrangement and, like a vector, enables fast random access to any element, and efficient insertion and deletion at the back of the container. However, unlike a vector, the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> class also supports efficient insertion and deletion at the front of the container.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax language="unstlib">template &lt;
    class <parameterReference>Type</parameterReference>, 
    class <parameterReference>Allocator</parameterReference> <legacyBold>=allocator&lt;Type&gt; </legacyBold>
&gt;
    class deque</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>Type</parameterReference>
                </definedTerm>
                <definition>
                    <para>The element data type to be stored in the deque.</para>
                </definition>
                <definedTerm> <parameterReference>Allocator</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type that represents the stored allocator object that encapsulates details about the deque's allocation and deallocation of memory. This argument is optional, and the default value is <legacyBold>allocator&lt;Type&gt;</legacyBold>
                        <legacyItalic>.</legacyItalic>
                    </para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The choice of container type should be based in general on the type of searching and inserting required by the application. <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">Vectors</legacyLink> should be the preferred container for managing a sequence when random access to any element is at a premium and insertions or deletions of elements are only required at the end of a sequence. The performance of the <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</legacyLink> container is superior when efficient insertions and deletions (in constant time) at any location within the sequence is at a premium. Such operations in the middle of the sequence require element copies and assignments proportional to the number of elements in the sequence (linear time).</para>
            <para>Deque reallocation occurs when a member function must insert or erase elements of the sequence:  </para>
            <list class="bullet">
                <listItem>
                    <para>If an element is inserted into an empty sequence, or if an element is erased to leave an empty sequence, then iterators earlier returned by <legacyLink xlink:href="#deque__begin">begin</legacyLink> and <legacyLink xlink:href="#deque__end">end</legacyLink> become invalid.</para>
                </listItem>
                <listItem>
                    <para>If an element is inserted at the first position of the deque, then all iterators, but no references, that designate existing elements become invalid.</para>
                </listItem>
                <listItem>
                    <para>If an element is inserted at the end of the deque, then <legacyLink xlink:href="#deque__end">end</legacyLink> and all iterators, but no references, that designate existing elements become invalid.</para>
                </listItem>
                <listItem>
                    <para>If an element is erased at the front of the deque, only that iterator and references to the erased element become invalid.</para>
                </listItem>
                <listItem>
                    <para>If the last element is erased from the end of the deque, only that iterator to the final element and references to the erased element become invalid.</para>
                </listItem>
            </list>
            <para>Otherwise, inserting or erasing an element invalidates all iterators and references.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title/>
        <content/>
        <sections>
            <section>
                <title>Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__deque">deque</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>deque.</unmanagedCodeEntityReference> Several constructors are provided to set up the contents of the new <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> in different ways: empty; loaded with a specified number of empty elements; contents moved or copied from another <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>; contents copied or moved by using an iterator; and one element copied into the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> <parameterReference>_Count</parameterReference> times. Some of the constructors enable using a custom <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> to create elements.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Typedefs</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__allocator_type">allocator_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> class for the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__const_iterator">const_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can access and read elements in the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> as <languageKeyword>const</languageKeyword>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__const_pointer">const_pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a pointer to an element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> as a <languageKeyword>const.</languageKeyword>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__const_reference">const_reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to an element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> for reading and other operations as a <languageKeyword>const.</languageKeyword>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__const_reverse_iterator">const_reverse_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can access and read elements in the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> as <languageKeyword>const</languageKeyword>. The deque is viewed in reverse. For more information, see <link xlink:href="c0b34d04-ae9a-4999-9aff-28b313897ffa">reverse_iterator Class</link>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__difference_type">difference_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides the difference between two random-access iterators that refer to elements in the same <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__iterator">iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can read or modify any element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__pointer">pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a pointer to an element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__reference">reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to an element stored in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__reverse_iterator">reverse_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can read or modify an element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>. The deque is viewed in reverse order.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__size_type">size_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that counts the number of elements in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the data type stored in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Member Functions</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__assign">assign</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases elements from a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> and copies a new sequence of elements to the target <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__at">at</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the element at a specified location in the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__back">back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the last element of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__begin">begin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access  iterator addressing the first element in the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__cbegin">cbegin</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator to the first element in the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__cend">cend</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access <languageKeyword>const</languageKeyword> iterator that points just beyond the end of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__clear">clear</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases all the elements of a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__crbegin">crbegin</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access const iterator to the first element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> viewed in reverse order.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__crend">crend</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access const iterator to the first element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> viewed in reverse order.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__emplace">emplace</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element constructed in place into the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__emplace_back">emplace_back</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element constructed in place to the end of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__emplace_front">emplace_front</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element constructed in place to the start of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__empty">empty</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns <languageKeyword>true</languageKeyword> if the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> contains zero elements, and <languageKeyword>false</languageKeyword> if it contains one or more elements.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__end">end</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access iterator that points just beyond the end of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__erase">erase</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes an element or a range of elements in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> from specified positions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__front">front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the first element in a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__get_allocator">get_allocator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a copy of the <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> object that is used to construct the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__insert">insert</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element, several elements, or a range of elements into the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__max_size">max_size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the maximum possible length of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__pop_back">pop_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases the element at the end of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__pop_front">pop_front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases the element at the start of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__push_back">push_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the end of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__push_front">push_front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the start of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__rbegin">rbegin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access iterator to the first element in a reversed <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__rend">rend</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access iterator that points just beyond the last element in a reversed <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__resize">resize</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies a new size for a <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__shrink_to_fit">shrink_to_fit</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Discards excess capacity.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements in the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__swap">swap</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Exchanges the elements of two <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>s.</para>
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
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#deque__operator_at">operator[]</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> element at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#deque__operator_eq">operator=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces the elements of the <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference> with a copy of another <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header</legacyBold>: &lt;deque&gt;</para>
        </content>
    </requirements>
    <section address="deque__allocator_type">
        <!--f0fa0bf9-dcbe-40bd-a923-622765ba345a-->
        <title>deque::allocator_type</title>
        <content>
            <para>A type that represents the allocator class for the deque object.</para>
            <legacySyntax>typedef Allocator allocator_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <legacyBold>allocator_type </legacyBold>is a synonym for the template parameter <legacyBold>Allocator</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#deque__get_allocator">get_allocator</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__assign">
        <!--07b57b31-474d-486a-8e3f-9a015031860b-->
        <title>deque::assign</title>
        <content>
            <para>Erases elements from a deque and copies a new set of elements to the target deque.</para>
            <legacySyntax>template&lt;class InputIterator&gt;
    void assign(
    InputIterator <parameterReference>First</parameterReference>,
    InputIterator <parameterReference>Last</parameterReference>);
void assign(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
void assign(
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element in the range of elements to be copied from the argument deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element beyond the range of elements to be copied from the argument deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of copies of an element being inserted into the deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the element being inserted into the deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer_list being inserted into the deque.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After any existing elements in the target deque are erased, <unmanagedCodeEntityReference>assign</unmanagedCodeEntityReference> either inserts a specified range of elements from the original deque or from some other deque into the target deque, or inserts copies of a new element of a specified value into the target deque.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_assign.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;
#include &lt;initializer_list&gt;

int main()
{
    using namespace std;
    deque &lt;int&gt; c1, c2;
    deque &lt;int&gt;::const_iterator cIter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    deque&lt;int&gt; d1{ 1, 2, 3, 4 };
    initializer_list&lt;int&gt; iList{ 5, 6, 7, 8 };
    d1.assign(iList);

    cout &lt;&lt; "d1 = ";
    for (int i : d1)
        cout &lt;&lt; i;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c1 =";
    for (int i : c1)
        cout &lt;&lt; i;
    cout &lt;&lt; endl;

    c1.assign(++c2.begin(), c2.end());
    cout &lt;&lt; "c1 =";
    for (int i : c1)
        cout &lt;&lt; i;
    cout &lt;&lt; endl;

    c1.assign(7, 4);
    cout &lt;&lt; "c1 =";
    for (int i : c1)
        cout &lt;&lt; i;
    cout &lt;&lt; endl;

}
</code>
                            <computerOutput>d1 = 5678c1 =102030c1 =5060c1 =4444444</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__at">
        <!--4cc40ef3-04bb-4a4f-ac0d-2777febd644e-->
        <title>deque::at</title>
        <content>
            <para>Returns a reference to the element at a specified location in the deque.</para>
            <legacySyntax> <legacyBold>reference at(</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Pos</parameterReference> <legacyBold>);</legacyBold> <legacyBold>const_reference at(</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Pos</parameterReference> <legacyBold>) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Pos</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The subscript (or position number) of the element to reference in the deque.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If <parameterReference>_Pos</parameterReference> is greater than the size of the deque, <legacyBold>at</legacyBold> throws an exception. </para>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the return value of <legacyBold>at</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <legacyBold>at</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the deque object can be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_at.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );

   const int&amp; i = c1.at( 0 );
   int&amp; j = c1.at( 1 );
   cout &lt;&lt; "The first element is " &lt;&lt; i &lt;&lt; endl;
   cout &lt;&lt; "The second element is " &lt;&lt; j &lt;&lt; endl;
}</code>
                            <computerOutput>The first element is 10
The second element is 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__back">
        <!--81f8b210-324c-422e-b60c-e65dd1be93f9-->
        <title>deque::back</title>
        <content>
            <para>Returns a reference to the last element of the deque.</para>
            <legacySyntax> <legacyBold>reference back( );</legacyBold> <legacyBold>const_reference back( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The last element of the deque. If the deque is empty, the return value is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>back</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <legacyBold>back</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the deque object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty deque.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_back.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 11 );

   int&amp; i = c1.back( );
   const int&amp; ii = c1.front( );

   cout &lt;&lt; "The last integer of c1 is " &lt;&lt; i &lt;&lt; endl;
   i--;
   cout &lt;&lt; "The next-to-last integer of c1 is " &lt;&lt; ii &lt;&lt; endl;
}</code>
                            <computerOutput>The last integer of c1 is 11
The next-to-last integer of c1 is 10</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__begin">
        <!--0a7d5781-39ce-4df8-9914-4344a0a52b2b-->
        <title>deque::begin</title>
        <content>
            <para>Returns an iterator addressing the first element in the deque.</para>
            <legacySyntax> <legacyBold>const_iterator begin( ) const;</legacyBold> <legacyBold>iterator begin( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A random-access iterator addressing the first element in the deque or to the location succeeding an empty deque. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>begin</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <legacyBold>begin</legacyBold> is assigned to an <legacyBold>iterator</legacyBold>, the deque object can be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_begin.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   deque &lt;int&gt;::iterator c1_Iter;
   deque &lt;int&gt;::const_iterator c1_cIter;
   
   c1.push_back( 1 );
   c1.push_back( 2 );

   c1_Iter = c1.begin( );
   cout &lt;&lt; "The first element of c1 is " &lt;&lt; *c1_Iter &lt;&lt; endl;

   *c1_Iter = 20;
   c1_Iter = c1.begin( );
   cout &lt;&lt; "The first element of c1 is now " &lt;&lt; *c1_Iter &lt;&lt; endl;

   // The following line would be an error because iterator is const
   // *c1_cIter = 200;
}</code>
                            <computerOutput>The first element of c1 is 1
The first element of c1 is now 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__cbegin">
        <!--44073ad0-81f9-4fc5-9cde-4508bc83edcb-->
        <title>deque::cbegin</title>
        <content>
            <para>Returns a <languageKeyword>const</languageKeyword> iterator that addresses the first element in the range.</para>
            <legacySyntax>const_iterator cbegin() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <languageKeyword>const</languageKeyword> random-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, <codeInline>cbegin() == cend()</codeInline>).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>With the return value of <languageKeyword>cbegin</languageKeyword>, the elements in the range cannot be modified. </para>
                    <para>You can use this member function in place of the <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference> member function to guarantee that the return value is <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>. Typically, it's used in conjunction with the <legacyLink xlink:href="e9d495d7-601c-4547-b897-998389a311f4">auto</legacyLink> type deduction keyword, as shown in the following example. In the example, consider <codeInline>Container</codeInline> to be a modifiable (non- <languageKeyword>const</languageKeyword>) container of any kind that supports <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>cbegin()</unmanagedCodeEntityReference>.</para>
                    <code language="cpp">
auto i1 = Container.begin();  // i1 is                         <codeFeaturedElement>Container&lt;T&gt;::iterator</codeFeaturedElement> 
auto i2 = Container.cbegin(); // i2 is                         <codeFeaturedElement>Container&lt;T&gt;::const_iterator</codeFeaturedElement>
                    </code>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__cend">
        <!--321a9e83-8b2d-47cb-90f5-e67513aff6cd-->
        <title>deque::cend</title>
        <content>
            <para>Returns a <languageKeyword>const</languageKeyword> iterator that addresses the location just beyond the last element in a range.</para>
            <legacySyntax>const_iterator cend() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A random-access iterator that points just beyond the end of the range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <languageKeyword>cend</languageKeyword> is used to test whether an iterator has passed the end of its range.</para>
                    <para>You can use this member function in place of the <unmanagedCodeEntityReference>end()</unmanagedCodeEntityReference> member function to guarantee that the return value is <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>. Typically, it's used in conjunction with the <legacyLink xlink:href="e9d495d7-601c-4547-b897-998389a311f4">auto</legacyLink> type deduction keyword, as shown in the following example. In the example, consider <codeInline>Container</codeInline> to be a modifiable (non- <languageKeyword>const</languageKeyword>) container of any kind that supports <unmanagedCodeEntityReference>end()</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>cend()</unmanagedCodeEntityReference>.</para>
                    <code language="cpp">
auto i1 = Container.end();  // i1 is                         <codeFeaturedElement>Container&lt;T&gt;::iterator</codeFeaturedElement> 
auto i2 = Container.cend(); // i2 is                         <codeFeaturedElement>Container&lt;T&gt;::const_iterator</codeFeaturedElement>
                    </code>
                    <para>The value returned by <languageKeyword>cend</languageKeyword> should not be dereferenced.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__clear">
        <!--65cfa7a3-3c4b-4a84-ad26-46d552783dc1-->
        <title>deque::clear</title>
        <content>
            <para>Erases all the elements of a deque.</para>
            <legacySyntax> <legacyBold>void clear( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_clear.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   cout &lt;&lt; "The size of the deque is initially " &lt;&lt; c1.size( ) &lt;&lt; endl;
   c1.clear( );
   cout &lt;&lt; "The size of the deque after clearing is " &lt;&lt; c1.size( ) &lt;&lt; endl;
}</code>
                            <computerOutput>The size of the deque is initially 3
The size of the deque after clearing is 0</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__const_iterator">
        <!--4807ab3e-bd9a-4d8d-b339-69e0fb9e1e6c-->
        <title>deque::const_iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can access and read a <legacyBold>const</legacyBold> element in the deque.</para>
            <legacySyntax>typedef implementation-defined const_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference> cannot be used to modify the value of an element.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#deque__back">back</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__const_pointer">
        <!--a62daa94-4dd9-42e3-8fc1-845ea036cf8e-->
        <title>deque::const_pointer</title>
        <content>
            <para>Provides a pointer to a <languageKeyword>const</languageKeyword> element in a deque.</para>
            <legacySyntax language="unstlib"> <legacyBold>typedef typename Allocator::const_pointer const_pointer;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_pointer</unmanagedCodeEntityReference> cannot be used to modify the value of an element. An <legacyLink xlink:href="#deque__iterator">iterator</legacyLink> is more commonly used to access a deque element.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__const_reference">
        <!--011d16fb-7d29-4d4b-9bae-5a82d4826aa4-->
        <title>deque::const_reference</title>
        <content>
            <para>A type that provides a reference to a <legacyBold>const</legacyBold> element stored in a deque for reading and performing <legacyBold>const</legacyBold> operations.</para>
            <legacySyntax> <legacyBold>typedef typename Allocator::const_reference const_reference</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference> cannot be used to modify the value of an element.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_const_ref.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );

   const deque &lt;int&gt; c2 = c1;
   const int &amp;i = c2.front( );
   const int &amp;j = c2.back( );
   cout &lt;&lt; "The first element is " &lt;&lt; i &lt;&lt; endl;
   cout &lt;&lt; "The second element is " &lt;&lt; j &lt;&lt; endl;
   
   // The following line would cause an error as c2 is const
   // c2.push_back( 30 );
}</code>
                            <computerOutput>The first element is 10
The second element is 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__const_reverse_iterator">
        <!--c44561a2-0845-4316-80d2-a8cc99dde835-->
        <title>deque::const_reverse_iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read any <legacyBold>const </legacyBold>element in the deque.</para>
            <legacySyntax>typedef std::reverse_iterator&lt;const_iterator&gt; const_reverse_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference> cannot modify the value of an element and is used to iterate through the deque in reverse.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#deque__rbegin">rbegin</legacyLink> for an example of how to declare and use an iterator.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__crbegin">
        <!--c7a08d74-e8fd-433b-9a99-ba21bb9b072f-->
        <title>deque::crbegin</title>
        <content>
            <para>Returns a const iterator to the first element in a reversed deque.</para>
            <legacySyntax>const_reverse_iterator crbegin( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reverse random-access iterator addressing the first element in a reversed <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link> or addressing what had been the last element in the unreversed <languageKeyword>deque</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>With the return value of <languageKeyword>crbegin</languageKeyword>, the <languageKeyword>deque</languageKeyword> object cannot be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_crbegin.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   deque &lt;int&gt; v1;
   deque &lt;int&gt;::iterator v1_Iter;
   deque &lt;int&gt;::const_reverse_iterator v1_rIter;
   
   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout &lt;&lt; "The first element of deque is "
        &lt;&lt; *v1_Iter &lt;&lt; "." &lt;&lt; endl;

   v1_rIter = v1.crbegin( );
   cout &lt;&lt; "The first element of the reversed deque is "
        &lt;&lt; *v1_rIter &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element of deque is 1.
The first element of the reversed deque is 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__crend">
        <!--75c4377c-ae59-41ba-87c5-b2b1a002d159-->
        <title>deque::crend</title>
        <content>
            <para>Returns a const iterator that addresses the location succeeding the last element in a reversed deque.</para>
            <legacySyntax>const_reverse_iterator crend( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reverse random-access iterator that addresses the location succeeding the last element in a reversed <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link> (the location that had preceded the first element in the unreversed deque).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <languageKeyword>crend</languageKeyword> is used with a reversed <languageKeyword>deque</languageKeyword> just as <link xlink:href="fdfd43a5-b2b5-4b9e-991f-93bf10fb4293#array__cend">cend</link> is used with a <languageKeyword>deque</languageKeyword>.</para>
                    <para>With the return value of <languageKeyword>crend</languageKeyword> (suitably decremented), the <languageKeyword>deque</languageKeyword> object cannot be modified.</para>
                    <para> <languageKeyword>crend</languageKeyword> can be used to test to whether a reverse iterator has reached the end of its deque.</para>
                    <para>The value returned by <languageKeyword>crend</languageKeyword> should not be dereferenced.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_crend.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   deque &lt;int&gt; v1;
   deque &lt;int&gt;::const_reverse_iterator v1_rIter;
   
   v1.push_back( 1 );
   v1.push_back( 2 );

   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )
      cout &lt;&lt; *v1_rIter &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>2
1</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__deque">
        <!--99c87b88-63f4-4ab4-aee4-f4436b7427f1-->
        <title>deque::deque</title>
        <content>
            <para>Constructs a deque of a specific size, or with elements of a specific value, or with a specific allocator, or as a copy of all or part of some other deque.</para>
            <legacySyntax>deque( );
explicit deque(
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
explicit deque(
    size_type <parameterReference>Count</parameterReference>
);
deque(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
deque(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>,
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
deque(
    const deque&amp; <parameterReference>Right</parameterReference>
);
template&lt;class InputIterator&gt;
    deque(
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>
    );
template&lt;class InputIterator&gt;
    deque(
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>,
        const Allocator&amp; <parameterReference>Al</parameterReference>
    );
deque(
    initializer_list&lt;value_type&gt; <parameterReference>IList</parameterReference>,
        const Allocator&amp; <parameterReference>Al</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Al</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The allocator class to use with this object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Count</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The number of elements in the constructed deque.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the elements in the constructed deque.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Right</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The deque of which the constructed deque is to be a copy.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>First</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Position of the first element in the range of elements to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Last</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Position of the first element beyond the range of elements to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>IList</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The initializer_list to be copied.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>All constructors store an allocator object ( <parameterReference>Al</parameterReference>) and initialize the deque.</para>
                    <para>The first two constructors specify an empty initial deque; the second one also specifies the allocator type ( <parameterReference>_Al</parameterReference>) to be used. </para>
                    <para>The third constructor specifies a repetition of a specified number ( <parameterReference>_Count</parameterReference>) of elements of the default value for class <unmanagedCodeEntityReference>Type</unmanagedCodeEntityReference>.</para>
                    <para>The fourth and fifth constructors specify a repetition of ( <parameterReference>Count</parameterReference>) elements of value <parameterReference>_Val</parameterReference>.</para>
                    <para>The sixth constructor specifies a copy of the deque <parameterReference>Right</parameterReference>.</para>
                    <para>The seventh and eighth constructors copy the range <parameterReference>[First, Last)</parameterReference> of a deque.</para>
                    <para>The seventh constructor moves the deque <parameterReference>Right</parameterReference>.</para>
                    <para>The eighth constructor copies the contents of an initializer_list.</para>
                    <para>None of the constructors perform any interim reallocations.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>/ compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;
#include &lt;forward_list&gt;

int main()
{
    using namespace std;

    forward_list&lt;int&gt; f1{ 1, 2, 3, 4 };

    f1.insert_after(f1.begin(), { 5, 6, 7, 8 });


    deque &lt;int&gt;::iterator c1_Iter, c2_Iter, c3_Iter, c4_Iter, c5_Iter, c6_Iter;

    // Create an empty deque c0
    deque &lt;int&gt; c0;

    // Create a deque c1 with 3 elements of default value 0
    deque &lt;int&gt; c1(3);

    // Create a deque c2 with 5 elements of value 2
    deque &lt;int&gt; c2(5, 2);

    // Create a deque c3 with 3 elements of value 1 and with the 
    // allocator of deque c2
    deque &lt;int&gt; c3(3, 1, c2.get_allocator());

    // Create a copy, deque c4, of deque c2
    deque &lt;int&gt; c4(c2);

    // Create a deque c5 by copying the range c4[_First, _Last)
    c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    deque &lt;int&gt; c5(c4.begin(), c4_Iter);

    // Create a deque c6 by copying the range c4[_First, _Last) and 
    // c2 with the allocator of deque
    c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    c4_Iter++;
    deque &lt;int&gt; c6(c4.begin(), c4_Iter, c2.get_allocator());

    // Create a deque c8 by copying the contents of an initializer_list
    // using brace initialization
    deque&lt;int&gt; c8({ 1, 2, 3, 4 });

    initializer_list&lt;int&gt; iList{ 5, 6, 7, 8 };
    deque&lt;int&gt; c9( iList);

    cout &lt;&lt; "c1 = ";
    for (int i : c1)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c2 = ";
    for (int i : c2)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c3 = ";
    for (int i : c3)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c4 = ";
    for (int i : c4)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c5 = ";
    for (int i : c5)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c6 = ";
    for (int i : c6)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    // Move deque c6 to deque c7
    deque &lt;int&gt; c7(move(c6));
    deque &lt;int&gt;::iterator c7_Iter;

    cout &lt;&lt; "c7 =";
    for (int i : c7)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c8 = ";
    for (int i : c8)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c9 = ";
    for (int i : c9)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    int x = 3;
}
// deque_deque.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
    using namespace std;
   deque &lt;int&gt;::iterator c1_Iter, c2_Iter, c3_Iter, c4_Iter, c5_Iter, c6_Iter;

    // Create an empty deque c0
    deque &lt;int&gt; c0;

    // Create a deque c1 with 3 elements of default value 0
    deque &lt;int&gt; c1( 3 );

    // Create a deque c2 with 5 elements of value 2
    deque &lt;int&gt; c2( 5, 2 );

    // Create a deque c3 with 3 elements of value 1 and with the 
    // allocator of deque c2
    deque &lt;int&gt; c3( 3, 1, c2.get_allocator( ) );

    // Create a copy, deque c4, of deque c2
    deque &lt;int&gt; c4( c2 );

    // Create a deque c5 by copying the range c4[_First, _Last)
    c4_Iter = c4.begin( );
    c4_Iter++;
    c4_Iter++;
    deque &lt;int&gt; c5( c4.begin( ), c4_Iter );

    // Create a deque c6 by copying the range c4[_First, _Last) and 
    // c2 with the allocator of deque
    c4_Iter = c4.begin( );
   c4_Iter++;
   c4_Iter++;
   c4_Iter++;
   deque &lt;int&gt; c6( c4.begin( ), c4_Iter, c2.get_allocator( ) );

    // Create a deque c8 by copying the contents of an initializer_list
    // using brace initialization
    deque&lt;int&gt; c8({ 1, 2, 3, 4 });

        initializer_list&lt;int&gt; iList{ 5, 6, 7, 8 };
    deque&lt;int&gt; c9( iList);

    cout &lt;&lt; "c1 = ";
    for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
        cout &lt;&lt; *c1_Iter &lt;&lt; " ";
    cout &lt;&lt; endl;
   
    cout &lt;&lt; "c2 = ";
    for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
        cout &lt;&lt; *c2_Iter &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c3 = ";
    for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )
        cout &lt;&lt; *c3_Iter &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c4 = ";
    for ( c4_Iter = c4.begin( ); c4_Iter != c4.end( ); c4_Iter++ )
        cout &lt;&lt; *c4_Iter &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c5 = ";
    for ( c5_Iter = c5.begin( ); c5_Iter != c5.end( ); c5_Iter++ )
        cout &lt;&lt; *c5_Iter &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c6 = ";
    for ( c6_Iter = c6.begin( ); c6_Iter != c6.end( ); c6_Iter++ )
        cout &lt;&lt; *c6_Iter &lt;&lt; " ";
    cout &lt;&lt; endl;

    // Move deque c6 to deque c7
    deque &lt;int&gt; c7( move(c6) );
    deque &lt;int&gt;::iterator c7_Iter;
   
    cout &lt;&lt; "c7 =" ;
    for ( c7_Iter = c7.begin( ) ; c7_Iter != c7.end( ) ; c7_Iter++ )
        cout &lt;&lt; " " &lt;&lt; *c7_Iter;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c8 = ";
    for (int i : c8)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;

    cout &lt;&lt; "c9 = ";
    or (int i : c9)
        cout &lt;&lt; i &lt;&lt; " ";
    cout &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__difference_type">
        <!--f69c5618-96fa-494d-95aa-1b32c0450328-->
        <title>deque::difference_type</title>
        <content>
            <para>A type that provides the difference between two iterators that refer to elements within the same deque.</para>
            <legacySyntax>typedef typename Allocator::difference_type difference_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>difference_type</unmanagedCodeEntityReference> can also be described as the number of elements between two pointers.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_diff_type.cpp
// compile with: /EHsc
#include &lt;iostream&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;

int main( ) 
{
   using namespace std;

   deque &lt;int&gt; c1;
   deque &lt;int&gt;::iterator c1_Iter, c2_Iter;

   c1.push_back( 30 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 10 );
   c1.push_back( 30 );
   c1.push_back( 20 );

   c1_Iter = c1.begin( );
   c2_Iter = c1.end( );

   deque &lt;int&gt;::difference_type df_typ1, df_typ2, df_typ3;

   df_typ1 = count( c1_Iter, c2_Iter, 10 );
   df_typ2 = count( c1_Iter, c2_Iter, 20 );
   df_typ3 = count( c1_Iter, c2_Iter, 30 );
   cout &lt;&lt; "The number '10' is in c1 collection " &lt;&lt; df_typ1 &lt;&lt; " times.\n";
   cout &lt;&lt; "The number '20' is in c1 collection " &lt;&lt; df_typ2 &lt;&lt; " times.\n";
   cout &lt;&lt; "The number '30' is in c1 collection " &lt;&lt; df_typ3 &lt;&lt; " times.\n";
}</code>
                            <computerOutput>The number '10' is in c1 collection 1 times.
The number '20' is in c1 collection 2 times.
The number '30' is in c1 collection 3 times.</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__emplace">
        <!--b3ea8ce1-87f8-4a76-8881-c3f92fcae96f-->
        <title>deque::emplace</title>
        <content>
            <para>Inserts an element constructed in place into the deque at a specified position.</para>
            <legacySyntax>iterator emplace(
   const_iterator <parameterReference>_Where</parameterReference>,
   Type&amp;&amp; <parameterReference>_Val</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Where</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position in the <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link> where the first element is inserted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the element being inserted into the <languageKeyword>deque</languageKeyword>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The function returns an iterator that points to the position where the new element was inserted into the deque.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Any insertion operation can be expensive, see <languageKeyword>deque</languageKeyword> for a discussion of <languageKeyword>deque</languageKeyword> performance.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_emplace.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   deque &lt;int&gt; v1;
   deque &lt;int&gt;::iterator Iter;
   
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout &lt;&lt; "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

// initialize a deque of deques by moving v1
   deque &lt; deque &lt;int&gt; &gt; vv1;

   vv1.emplace( vv1.begin(), move( v1 ) );
   if ( vv1.size( ) != 0 &amp;&amp; vv1[0].size( ) != 0 )
      {
      cout &lt;&lt; "vv1[0] =";
      for (Iter = vv1[0].begin( ); Iter != vv1[0].end( ); Iter++ )
         cout &lt;&lt; " " &lt;&lt; *Iter;
      cout &lt;&lt; endl;
      }
}</code>
                    <!--SnipComment-->
                            <computerOutput>v1 = 10 20 30
vv1[0] = 10 20 30</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__emplace_back">
        <!--cb66115a-ec08-4a5d-b052-1462c6c93afb-->
        <title>deque::emplace_back</title>
        <content>
            <para>Adds an element constructed in place to the end of the deque.</para>
            <legacySyntax>void emplace_back(
   Type&amp;&amp; <legacyBold/> <parameterReference>_Val</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The element added to the end of the <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_emplace_back.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   deque &lt;int&gt; v1;
   
   v1.push_back( 1 );
   if ( v1.size( ) != 0 )
      cout &lt;&lt; "Last element: " &lt;&lt; v1.back( ) &lt;&lt; endl;

   v1.push_back( 2 );
   if ( v1.size( ) != 0 )
      cout &lt;&lt; "New last element: " &lt;&lt; v1.back( ) &lt;&lt; endl;

// initialize a deque of deques by moving v1
   deque &lt; deque &lt;int&gt; &gt; vv1;

   vv1.emplace_back( move( v1 ) );
   if ( vv1.size( ) != 0 &amp;&amp; vv1[0].size( ) != 0 )
      cout &lt;&lt; "Moved last element: " &lt;&lt; vv1[0].back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Last element: 1
New last element: 2
Moved last element: 2</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__emplace_front">
        <!--8cb7469e-b201-4d0f-bb50-d71a356b85ce-->
        <title>deque::emplace_front</title>
        <content>
            <para>Adds an element constructed in place to the end of the deque.</para>
            <legacySyntax>void emplace_front(
   Type&amp;&amp; <legacyBold/> <parameterReference>_Val</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The element added to the beginning of the <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_emplace_front.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   deque &lt;int&gt; v1;
   
   v1.push_back( 1 );
   if ( v1.size( ) != 0 )
      cout &lt;&lt; "Last element: " &lt;&lt; v1.back( ) &lt;&lt; endl;

   v1.push_back( 2 );
   if ( v1.size( ) != 0 )
      cout &lt;&lt; "New last element: " &lt;&lt; v1.back( ) &lt;&lt; endl;

// initialize a deque of deques by moving v1
   deque &lt; deque &lt;int&gt; &gt; vv1;

   vv1.emplace_front( move( v1 ) );
   if ( vv1.size( ) != 0 &amp;&amp; vv1[0].size( ) != 0 )
      cout &lt;&lt; "Moved last element: " &lt;&lt; vv1[0].back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Last element: 1
New last element: 2
Moved last element: 2</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__empty">
        <!--79355899-f427-4d6d-9a09-ac5450796378-->
        <title>deque::empty</title>
        <content>
            <para>Tests if a deque is empty.</para>
            <legacySyntax> <legacyBold>bool empty( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the deque is empty; <legacyBold>false</legacyBold> if the deque is not empty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_empty.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;

   c1.push_back( 10 );
   if ( c1.empty( ) )
      cout &lt;&lt; "The deque is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The deque is not empty." &lt;&lt; endl;
}</code>
                            <computerOutput>The deque is not empty.</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__end">
        <!--b6c81821-b5b7-446c-9374-9d982036762b-->
        <title>deque::end</title>
        <content>
            <para>Returns an iterator that addresses the location succeeding the last element in a deque.</para>
            <legacySyntax> <legacyBold>const_iterator end( ) const;</legacyBold> <legacyBold>iterator end( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A random-access iterator that addresses the location succeeding the last element in a deque. If the deque is empty, then deque::end == deque::begin.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <legacyBold>end</legacyBold> is used to test whether an iterator has reached the end of its deque.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_end.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   deque &lt;int&gt;::iterator c1_Iter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_Iter = c1.end( );
   c1_Iter--;
   cout &lt;&lt; "The last integer of c1 is " &lt;&lt; *c1_Iter &lt;&lt; endl;

   c1_Iter--;
   *c1_Iter = 400;
   cout &lt;&lt; "The new next-to-last integer of c1 is " &lt;&lt; *c1_Iter &lt;&lt; endl;

   // If a const iterator had been declared instead with the line:
   // deque &lt;int&gt;::const_iterator c1_Iter;
   // an error would have resulted when inserting the 400

   cout &lt;&lt; "The deque is now:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
}</code>
                            <computerOutput>The last integer of c1 is 30
The new next-to-last integer of c1 is 400
The deque is now: 10 400 30</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__erase">
        <!--e95bcb2e-2b08-4fbb-9bc0-2fe903c209bb-->
        <title>deque::erase</title>
        <content>
            <para>Removes an element or a range of elements in a deque from specified positions.</para>
            <legacySyntax> <legacyBold>iterator erase(</legacyBold> <legacyBold>   iterator </legacyBold> <parameterReference>_Where</parameterReference> <legacyBold>);</legacyBold> <legacyBold>iterator erase(</legacyBold> <legacyBold>   iterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   iterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Where</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the element to be removed from the deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element removed from the deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position just beyond the last element removed from the deque.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A random-access iterator that designates the first element remaining beyond any elements removed, or a pointer to the end of the deque if no such element exists.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information on <legacyBold>erase</legacyBold>, see <legacyLink xlink:href="a75cb683-b452-4403-9c27-6fc2e1bb0b3b">deque::erase and deque::clear</legacyLink>.</para>
                    <para> <legacyBold>erase</legacyBold> never throws an exception.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_erase.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   deque &lt;int&gt;::iterator Iter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 40 );
   c1.push_back( 50 );
   cout &lt;&lt; "The initial deque is: ";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout &lt;&lt; *Iter &lt;&lt; " ";
   cout &lt;&lt; endl;
   c1.erase( c1.begin( ) );
   cout &lt;&lt; "After erasing the first element, the deque becomes:  ";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout &lt;&lt; *Iter &lt;&lt; " ";
   cout &lt;&lt; endl;
   Iter = c1.begin( );
   Iter++;
   c1.erase( Iter, c1.end( ) );
   cout &lt;&lt; "After erasing all elements but the first, deque becomes: ";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout &lt;&lt; *Iter &lt;&lt; " ";
   cout &lt;&lt; endl;
}</code>
                            <computerOutput>The initial deque is: 10 20 30 40 50 
After erasing the first element, the deque becomes:  20 30 40 50 
After erasing all elements but the first, deque becomes: 20 </computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__front">
        <!--e9e72309-cce8-4665-8e65-1102ce662c0f-->
        <title>deque::front</title>
        <content>
            <para>Returns a reference to the first element in a deque.</para>
            <legacySyntax> <legacyBold>reference front( );</legacyBold> <legacyBold>const_reference front( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the deque is empty, the return is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <legacyBold>reference</legacyBold>, the deque object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty deque.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_front.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 11 );

   int&amp; i = c1.front( );
   const int&amp; ii = c1.front( );

   cout &lt;&lt; "The first integer of c1 is " &lt;&lt; i &lt;&lt; endl;
   i++;
   cout &lt;&lt; "The second integer of c1 is " &lt;&lt; ii &lt;&lt; endl;
}</code>
                            <computerOutput>The first integer of c1 is 10
The second integer of c1 is 11</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__get_allocator">
        <!--7af21772-458b-4bca-91fd-0de36cf26e32-->
        <title>deque::get_allocator</title>
        <content>
            <para>Returns a copy of the allocator object used to construct the deque.</para>
            <legacySyntax> <legacyBold>Allocator get_allocator( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The allocator used by the deque.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Allocators for the deque class specify how the class manages storage. The default allocators supplied with STL container classes are sufficient for most programming needs. Writing and using your own allocator class is an advanced C++ topic.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_get_allocator.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   // The following lines declare objects that use the default allocator.
   deque &lt;int&gt; c1;
   deque &lt;int, allocator&lt;int&gt; &gt; c2 = deque &lt;int, allocator&lt;int&gt; &gt;( allocator&lt;int&gt;( ) );

   // c3 will use the same allocator class as c1
   deque &lt;int&gt; c3( c1.get_allocator( ) );

   deque &lt;int&gt;::allocator_type xlst = c1.get_allocator( );
   // You can now call functions on the allocator class used by c1
}</code>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__insert">
        <!--e926d4c4-a1eb-42f1-a90a-0446f2fafefc-->
        <title>deque::insert</title>
        <content>
            <para>Inserts an element or a number of elements or a range of elements into the deque at a specified position.</para>
            <legacySyntax>iterator insert(
    const_iterator <parameterReference>Where</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
iterator insert(
    const_iterator <parameterReference>Where</parameterReference>,
    Type&amp;&amp; <parameterReference>Val</parameterReference>
);
void insert(
    iterator <parameterReference>Where</parameterReference>,
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
template&lt;class InputIterator&gt;
    void insert(
        iterator <parameterReference>Where</parameterReference>,
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>
    );
iterator insert(
    iterator <parameterReference>Where</parameterReference>,initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Where</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position in the target deque where the first element is inserted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the element being inserted into the deque.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Count</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The number of elements being inserted into the deque.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>First</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element in the range of elements in the argument deque to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Last</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element beyond the range of elements in the argument deque to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>IList</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The initializer_list of elements to insert.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first two insert functions return an iterator that points to the position where the new element was inserted into the deque.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Any insertion operation can be expensive.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__iterator">
        <!--4f4e9221-ffe3-4fe9-a09b-7e6e4b04f627-->
        <title>deque::iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read or modify any element in a deque.</para>
            <legacySyntax>typedef implementation-defined iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <legacyBold>iterator</legacyBold> can be used to modify the value of an element.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#deque__begin">begin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__max_size">
        <!--b1c5ee09-346f-4d4a-bf50-4c97f3f91932-->
        <title>deque::max_size</title>
        <content>
            <para>Returns the maximum length of the deque.</para>
            <legacySyntax> <legacyBold>size_type max_size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The maximum possible length of the deque.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_max_size.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   deque &lt;int&gt;::size_type i;

   i = c1.max_size( );
   cout &lt;&lt; "The maximum possible length of the deque is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__operator_at">
        <!--49e561ef-f3e6-4bd5-8fd6-2ee6c3e55485-->
        <title>deque::operator[]</title>
        <content>
            <para>Returns a reference to the deque element at a specified position.</para>
            <legacySyntax> <legacyBold>reference operator[](</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Pos</parameterReference> <legacyBold>);</legacyBold> <legacyBold>const_reference operator[](</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Pos</parameterReference> <legacyBold>) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Pos</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position of the deque element to be referenced.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the element whose position is specified in the argument. If the position specified is greater than the size of the deque, the result is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> is assigned to a <legacyBold>reference</legacyBold>, the deque object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element outside the bounds of the deque.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_op_ref.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;

   c1.push_back( 10 );
   c1.push_back( 20 );
   cout &lt;&lt; "The first integer of c1 is " &lt;&lt; c1[0] &lt;&lt; endl;
   int&amp; i = c1[1];
   cout &lt;&lt; "The second integer of c1 is " &lt;&lt; i &lt;&lt; endl;
   
}</code>
                            <computerOutput>The first integer of c1 is 10
The second integer of c1 is 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__operator_eq">
        <!--77db5b35-e6e8-4a5c-a4df-821a8e68b446-->
        <title>deque::operator=</title>
        <content>
            <para>Replaces the elements of this deque using the elements from another deque. </para>
            <legacySyntax>deque&amp; operator=(
   const deque&amp; <parameterReference>_Right</parameterReference>
);
deque&amp; operator=(
   deque&amp;&amp; <parameterReference>_Right</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Right</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The deque that provides the new content.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first override copies elements to this deque from <parameterReference>_Right</parameterReference>, the source of the assignment. The second override moves elements to this deque from <parameterReference>_Right</parameterReference>. </para>
                    <para>Elements that are contained in this deque before the operator executes are removed.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_operator_as.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;
using namespace std;

typedef deque&lt;int&gt; MyDeque;

template&lt;typename MyDeque&gt; struct S;

template&lt;typename MyDeque&gt; struct S&lt;MyDeque&amp;&gt; {
  static void show( MyDeque&amp; d ) {
    MyDeque::const_iterator iter;
    for (iter = d.cbegin(); iter != d.cend(); iter++)
       cout &lt;&lt; *iter &lt;&lt; " ";
    cout &lt;&lt; endl;
  }
};

template&lt;typename MyDeque&gt; struct S&lt;MyDeque&amp;&amp;&gt; {
  static void show( MyDeque&amp;&amp; d ) {
    MyDeque::const_iterator iter;
    for (iter = d.cbegin(); iter != d.cend(); iter++)
       cout &lt;&lt; *iter &lt;&lt; " ";
cout &lt;&lt; " via unnamed rvalue reference " &lt;&lt; endl;
  }
};

int main( )
{
   MyDeque d1, d2;

   d1.push_back(10);
   d1.push_back(20);
   d1.push_back(30);
   d1.push_back(40);
   d1.push_back(50);

   cout &lt;&lt; "d1 = " ;
   S&lt;MyDeque&amp;&gt;::show( d1 );

   d2 = d1;
   cout &lt;&lt; "d2 = ";
   S&lt;MyDeque&amp;&gt;::show( d2 );

   cout &lt;&lt; "     ";
   S&lt;MyDeque&amp;&amp;&gt;::show ( move&lt; MyDeque&amp; &gt; (d1) );
 }</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__pointer">
        <!--dfa214f2-392f-4881-b349-718f8c1cbef8-->
        <title>deque::pointer</title>
        <content>
            <para>Provides a pointer to an element in a <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link>.</para>
            <legacySyntax language="unstlib"> <legacyBold>typedef typename Allocator::pointer pointer;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <legacyBold>pointer</legacyBold> can be used to modify the value of an element. An <legacyLink xlink:href="#deque__iterator">iterator</legacyLink> is more commonly used to access a deque element.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__pop_back">
        <!--2035fe7b-ac3d-4493-b8b3-56a1ec5e36e4-->
        <title>deque::pop_back</title>
        <content>
            <para>Deletes the element at the end of the deque.</para>
            <legacySyntax> <legacyBold>void pop_back( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The last element must not be empty. <unmanagedCodeEntityReference>pop_back</unmanagedCodeEntityReference> never throws an exception.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_pop_back.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 1 );
   c1.push_back( 2 );
   cout &lt;&lt; "The first element is: " &lt;&lt; c1.front( ) &lt;&lt; endl;
   cout &lt;&lt; "The last element is: " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.pop_back( );
   cout &lt;&lt; "After deleting the element at the end of the deque, the "
      "last element is: " &lt;&lt; c1.back( ) &lt;&lt; endl;
}</code>
                            <computerOutput>The first element is: 1
The last element is: 2
After deleting the element at the end of the deque, the last element is: 1</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__pop_front">
        <!--dfc3008e-1ea4-4984-9cd4-38e8b37ffca3-->
        <title>deque::pop_front</title>
        <content>
            <para>Deletes the element at the beginning of the deque.</para>
            <legacySyntax> <legacyBold>void pop_front( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first element must not be empty. <unmanagedCodeEntityReference>pop_front</unmanagedCodeEntityReference> never throws an exception.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_pop_front.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 1 );
   c1.push_back( 2 );
   cout &lt;&lt; "The first element is: " &lt;&lt; c1.front( ) &lt;&lt; endl;
   cout &lt;&lt; "The second element is: " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.pop_front( );
   cout &lt;&lt; "After deleting the element at the beginning of the "
      "deque, the first element is: " &lt;&lt; c1.front( ) &lt;&lt; endl;
}</code>
                            <computerOutput>The first element is: 1
The second element is: 2
After deleting the element at the beginning of the deque, the first element is: 2</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__push_back">
        <!--caa61fbf-f015-4e2d-a59e-424ad7758519-->
        <title>deque::push_back</title>
        <content>
            <para>Adds an element to the end of the deque.</para>
            <legacySyntax>void push_back(
   const Type&amp; <parameterReference>_Val</parameterReference>
);
void push_back(
   Type&amp;&amp; _Val
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The element added to the end of the deque.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the deque is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__push_front">
        <!--4f602a35-aa21-412e-a708-36a133c6d736-->
        <title>deque::push_front</title>
        <content>
            <para>Adds an element to the beginning of the deque.</para>
            <legacySyntax> <legacyBold>void push_front(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
void push_front(
   Type&amp;&amp; _Val
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The element added to the beginning of the deque.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the deque is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_push_front.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_front( 1 );
   if ( c1.size( ) != 0 )
      cout &lt;&lt; "First element: " &lt;&lt; c1.front( ) &lt;&lt; endl;

   c1.push_front( 2 );
   if ( c1.size( ) != 0 )
      cout &lt;&lt; "New first element: " &lt;&lt; c1.front( ) &lt;&lt; endl;

// move initialize a deque of strings
   deque &lt;string&gt; c2;
   string str("a");

   c2.push_front( move( str ) );
   cout &lt;&lt; "Moved first element: " &lt;&lt; c2.front( ) &lt;&lt; endl;
}</code>
                            <computerOutput>First element: 1
New first element: 2
Moved first element: a</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__rbegin">
        <!--3248eded-ce82-4f04-b4a3-c78c6bfcb6f6-->
        <title>deque::rbegin</title>
        <content>
            <para>Returns an iterator to the first element in a reversed deque.</para>
            <legacySyntax> <legacyBold>const_reverse_iterator rbegin( ) const;</legacyBold> <legacyBold>reverse_iterator rbegin( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reverse random-access iterator addressing the first element in a reversed deque or addressing what had been the last element in the unreversed deque.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is used with a reversed deque just as <legacyLink xlink:href="#deque__begin">begin</legacyLink> is used with a deque.</para>
                    <para>If the return value of <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference>, the deque object can be modified.</para>
                    <para> <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> can be used to iterate through a deque backwards.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_rbegin.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   deque &lt;int&gt;::iterator c1_Iter;
   deque &lt;int&gt;::reverse_iterator c1_rIter;

   // If the following line had replaced the line above, an error 
   // would have resulted in the line modifying an element 
   // (commented below) because the iterator would have been const
   // deque &lt;int&gt;::const_reverse_iterator c1_rIter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_rIter = c1.rbegin( );
   cout &lt;&lt; "Last element in the deque is " &lt;&lt; *c1_rIter &lt;&lt; "." &lt;&lt; endl;

   cout &lt;&lt; "The deque contains the elements: ";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; *c1_Iter &lt;&lt; " ";
   cout &lt;&lt; "in that order.";
   cout &lt;&lt; endl;

   // rbegin can be used to iterate through a deque in reverse order
   cout &lt;&lt; "The reversed deque is: ";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout &lt;&lt; *c1_rIter &lt;&lt; " ";
   cout &lt;&lt; endl;

   c1_rIter = c1.rbegin( );
   *c1_rIter = 40;  // This would have caused an error if a 
                    // const_reverse iterator had been declared as 
                    // noted above
   cout &lt;&lt; "Last element in deque is now " &lt;&lt; *c1_rIter &lt;&lt; "." &lt;&lt; endl;
}</code>
                            <computerOutput>Last element in the deque is 30.
The deque contains the elements: 10 20 30 in that order.
The reversed deque is: 30 20 10 
Last element in deque is now 40.</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__reference">
        <!--3ee66c66-497c-4546-bf07-4c3ebc37df26-->
        <title>deque::reference</title>
        <content>
            <para>A type that provides a reference to an element stored in a deque.</para>
            <legacySyntax> <legacyBold>typedef typename Allocator::reference reference;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_reference.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );

   const int &amp;i = c1.front( );
   int &amp;j = c1.back( );
   cout &lt;&lt; "The first element is " &lt;&lt; i &lt;&lt; endl;
   cout &lt;&lt; "The second element is " &lt;&lt; j &lt;&lt; endl;
}</code>
                            <computerOutput>The first element is 10
The second element is 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__rend">
        <!--7b193566-e408-48d2-83f7-e014100510a2-->
        <title>deque::rend</title>
        <content>
            <para>Returns an iterator that addresses the location succeeding the last element in a reversed deque.</para>
            <legacySyntax> <legacyBold>const_reverse_iterator rend( ) const;</legacyBold> <legacyBold>reverse_iterator rend( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reverse random-access iterator that addresses the location succeeding the last element in a reversed deque (the location that had preceded the first element in the unreversed deque).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is used with a reversed deque just as <legacyLink xlink:href="#deque__end">end</legacyLink> is used with a deque.</para>
                    <para>If the return value of <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference>, the deque object cannot be modified. If the return value of <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference>, the deque object can be modified.</para>
                    <para> <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> can be used to test whether a reverse iterator has reached the end of its deque.</para>
                    <para>The value returned by <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> should not be dereferenced.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_rend.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;

   deque &lt;int&gt; c1;
   deque &lt;int&gt;::iterator c1_Iter;
   deque &lt;int&gt;::reverse_iterator c1_rIter;
   // If the following line had replaced the line above, an error
   // would have resulted in the line modifying an element
   // (commented below) because the iterator would have been const
   // deque &lt;int&gt;::const_reverse_iterator c1_rIter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_rIter = c1.rend( );
   c1_rIter --; // Decrementing a reverse iterator moves it forward 
                // in the deque (to point to the first element here)
   cout &lt;&lt; "The first element in the deque is: " &lt;&lt; *c1_rIter &lt;&lt; endl;

   cout &lt;&lt; "The deque is: ";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; *c1_Iter &lt;&lt; " ";
   cout &lt;&lt; endl;

   // rend can be used to test if an iteration is through all of 
   // the elements of a reversed deque
   cout &lt;&lt; "The reversed deque is: ";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout &lt;&lt; *c1_rIter &lt;&lt; " ";
   cout &lt;&lt; endl;

   c1_rIter = c1.rend( );
   c1_rIter--; // Decrementing the reverse iterator moves it backward 
               // in the reversed deque (to the last element here)
   *c1_rIter = 40; // This modification of the last element would 
                   // have caused an error if a const_reverse 
                   // iterator had been declared (as noted above)
   cout &lt;&lt; "The modified reversed deque is: ";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout &lt;&lt; *c1_rIter &lt;&lt; " ";
   cout &lt;&lt; endl;
}</code>
                            <computerOutput>The first element in the deque is: 10
The deque is: 10 20 30 
The reversed deque is: 30 20 10 
The modified reversed deque is: 30 20 40 </computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__resize">
        <!--8761c5d1-b5a9-4bbf-a30a-e1074343c5b1-->
        <title>deque::resize</title>
        <content>
            <para>Specifies a new size for a deque.</para>
            <legacySyntax> <legacyBold>void resize(</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Newsize</parameterReference> <legacyBold>);</legacyBold> <legacyBold>void resize(</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Newsize</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   Type </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Newsize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new size of the deque.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the new elements to be added to the deque if the new size is larger that the original size. If the value is omitted, the new elements are assigned the default value for the class.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the deque's size is less than the requested size, <parameterReference>_Newsize</parameterReference>, elements are added to the deque until it reaches the requested size.</para>
                    <para>If the deque's size is larger than the requested size, the elements closest to the end of the deque are deleted until the deque reaches the size <parameterReference>_Newsize</parameterReference>.</para>
                    <para>If the present size of the deque is the same as the requested size, no action is taken.</para>
                    <para> <legacyLink xlink:href="#deque__size">size</legacyLink> reflects the current size of the deque.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_resize.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{ 
   using namespace std;
   deque &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1.resize( 4,40 );
   cout &lt;&lt; "The size of c1 is: " &lt;&lt; c1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The value of the last element is " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.resize( 5 );
   cout &lt;&lt; "The size of c1 is now: " &lt;&lt; c1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The value of the last element is now " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.resize( 2 );
   cout &lt;&lt; "The reduced size of c1 is: " &lt;&lt; c1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The value of the last element is now " &lt;&lt; c1.back( ) &lt;&lt; endl;
}</code>
                            <computerOutput>The size of c1 is: 4
The value of the last element is 40
The size of c1 is now: 5
The value of the last element is now 0
The reduced size of c1 is: 2
The value of the last element is now 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__reverse_iterator">
        <!--ff4ed19a-5d92-4db7-85cc-6c42f91d08b6-->
        <title>deque::reverse_iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read or modify an element in a reversed deque.</para>
            <legacySyntax>typedef std::reverse_iterator&lt;iterator&gt; reverse_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference> is use to iterate through the deque.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__rbegin">rbegin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__shrink_to_fit">
        <!--3df4a2c1-eb32-42a9-9dc9-207bbc2ad8b6-->
        <title>deque::shrink_to_fit</title>
        <content>
            <para>Discards excess capacity.</para>
            <legacySyntax>void shrink_to_fit(
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>There is no portable way to determine if <languageKeyword>shrink_to_fit</languageKeyword> reduces the storage used by a <link xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// deque_shrink_to_fit.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   deque &lt;int&gt; v1;
   //deque &lt;int&gt;::iterator Iter;

   v1.push_back( 1 );
   v1.push_back( 2 );
   cout &lt;&lt; "Current size of v1 = " 
      &lt;&lt; v1.size( ) &lt;&lt; endl;
   v1.shrink_to_fit();
   cout &lt;&lt; "Current size of v1 = " 
      &lt;&lt; v1.size( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Current size of v1 = 1
Current size of v1 = 1</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__size">
        <!--2df4f143-4fbc-440e-92dd-62aabbfded47-->
        <title>deque::size</title>
        <content>
            <para>Returns the number of elements in the deque.</para>
            <legacySyntax> <legacyBold>size_type size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of the deque.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_size.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1;
   deque &lt;int&gt;::size_type i;
   
   c1.push_back( 1 );
   i = c1.size( );
   cout &lt;&lt; "The deque length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   c1.push_back( 2 );
   i = c1.size( );
   cout &lt;&lt; "The deque length is now " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                            <computerOutput>The deque length is 1.
The deque length is now 2.</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__size_type">
        <!--cc4b070a-a43f-4672-8a30-fcc79014ef35-->
        <title>deque::size_type</title>
        <content>
            <para>A type that counts the number of elements in a deque.</para>
            <legacySyntax>typedef typename Allocator::size_type size_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#deque__size">size</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__swap">
        <!--0c921dee-e67e-4e0d-a27b-b344c164e234-->
        <title>deque::swap</title>
        <content>
            <para>Exchanges the elements of two deques.</para>
            <legacySyntax> <legacyBold>void swap(</legacyBold> <legacyBold>   deque&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>friend void swap(</legacyBold> <legacyBold>   deque&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Left</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   deque&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>)</legacyBold> <legacyBold>template&lt;class Type, class Allocator&gt;</legacyBold> <legacyBold>void swap(</legacyBold> <legacyBold>   deque&lt; Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Left</parameterReference> <legacyBold>, </legacyBold> <legacyBold>   deque&lt; Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The deque providing the elements to be swapped, or the deque whose elements are to be exchanged with those of the deque <parameterReference>_Left</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A deque whose elements are to be exchanged with those of the deque <parameterReference>_Right</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_swap.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   deque &lt;int&gt; c1, c2, c3;
   deque &lt;int&gt;::iterator c1_Iter;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 3 );
   c2.push_back( 10 );
   c2.push_back( 20 );
   c3.push_back( 100 );

   cout &lt;&lt; "The original deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   c1.swap( c2 );

   cout &lt;&lt; "After swapping with c2, deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   swap( c1,c3 );

   cout &lt;&lt; "After swapping with c3, deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   swap&lt;&gt;(c1, c2);
   cout &lt;&lt; "After swapping with c2, deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
}</code>
                            <computerOutput>The original deque c1 is: 1 2 3
After swapping with c2, deque c1 is: 10 20
After swapping with c3, deque c1 is: 100
After swapping with c2, deque c1 is: 1 2 3</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="deque__value_type">
        <!--3dc9309f-373e-45f7-b478-044e45e161a5-->
        <title>deque::value_type</title>
        <content>
            <para>A type that represents the data type stored in a deque.</para>
            <legacySyntax>typedef typename Allocator::value_type value_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>value_type</unmanagedCodeEntityReference> is a synonym for the template parameter <ui>Type</ui>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// deque_value_type.cpp
// compile with: /EHsc
#include &lt;deque&gt;
#include &lt;iostream&gt;
int main( ) 
{
   using namespace std;
   deque&lt;int&gt;::value_type AnInt;
   AnInt = 44;
   cout &lt;&lt; AnInt &lt;&lt; endl;
}</code>
                            <computerOutput>44</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



