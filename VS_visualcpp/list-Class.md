---
title: "list Class"
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
ms.assetid: d3707f4a-10fd-444f-b856-f9ca2077c1cd
caps.latest.revision: 13
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
# list Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The STL list class is a template class of sequence containers that maintain their elements in a linear arrangement and allow efficient insertions and deletions at any location within the sequence. The sequence is stored as a bidirectional linked list of elements, each containing a member of some type             <legacyItalic>Type</legacyItalic>.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax language="cpp"> <legacyBold>template &lt;</legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Type</parameterReference> <legacyBold>, </legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Allocator=</parameterReference> <legacyBold>allocator&lt;</legacyBold> <parameterReference>Type</parameterReference> <legacyBold>&gt; </legacyBold> <legacyBold>&gt;</legacyBold> <legacyBold>class list</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>
                    <legacyItalic>Type</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The element data type to be stored in the list.</para>
                </definition>
                <definedTerm> <parameterReference>Allocator</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type that represents the stored allocator object that encapsulates details about the list's allocation and deallocation of memory. This argument is optional, and the default value is <legacyBold>allocator</legacyBold>&lt;                        <legacyItalic>Type</legacyItalic>&gt;                        <legacyItalic>.</legacyItalic>
                    </para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The choice of container type should be based in general on the type of searching and inserting required by the application. Vectors should be the preferred container for managing a sequence when random access to any element is at a premium and insertions or deletions of elements are only required at the end of a sequence. The performance of the class deque container is superior when random access is needed and insertions and deletions at both the beginning and the end of a sequence are at a premium.</para>
            <para>The list member functions <legacyLink xlink:href="#list__merge">merge</legacyLink>, <legacyLink xlink:href="#list__reverse">reverse</legacyLink>, <legacyLink xlink:href="#list__unique">unique</legacyLink>, <legacyLink xlink:href="#list__remove">remove</legacyLink>, and <legacyLink xlink:href="#list__remove_if">remove_if</legacyLink> have been optimized for operation on list objects and offer a high-performance alternative to their generic counterparts.</para>
            <para>List reallocation occurs when a member function must insert or erase elements of the list. In all such cases, only iterators or references that point at erased portions of the controlled sequence become invalid.</para>
            <para>Include the STL standard header &lt;list&gt; to define the <legacyLink xlink:href="8e915ca1-19ba-4f0d-93c8-e2c3bfd638eb">container</legacyLink> template class list and several supporting templates.</para>
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
                                    <para> <legacyLink xlink:href="#list__list">list</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a list of a specific size or with elements of a specific value or with a specific <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> or as a copy of some other list.</para>
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
                                    <para> <legacyLink xlink:href="#list__allocator_type">allocator_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> class for a list object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__const_iterator">const_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a bidirectional iterator that can read a <languageKeyword>const</languageKeyword> element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__const_pointer">const_pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a pointer to a <languageKeyword>const</languageKeyword> element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__const_reference">const_reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to a <languageKeyword>const</languageKeyword> element stored in a list for reading and performing <languageKeyword>const</languageKeyword> operations.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__const_reverse_iterator">const_reverse_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a bidirectional iterator that can read any <languageKeyword>const</languageKeyword> element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__difference_type">difference_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides the difference between two iterators that refer to elements within the same list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__iterator">iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a bidirectional iterator that can read or modify any element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__pointer">pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a pointer to an element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__reference">reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to a <languageKeyword>const</languageKeyword> element stored in a list for reading and performing <languageKeyword>const</languageKeyword> operations.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__reverse_iterator">reverse_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a bidirectional iterator that can read or modify an element in a reversed list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__size_type">size_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that counts the number of elements in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the data type stored in a list.</para>
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
                                    <para> <legacyLink xlink:href="#list__assign">assign</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases elements from a list and copies a new set of elements to the target list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__back">back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the last element of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__begin">begin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an iterator addressing the first element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__cbegin">cbegin</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator addressing the first element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__cend">cend</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator that addresses the location succeeding the last element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__clear">clear</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases all the elements of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__crbegin">crbegin</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator addressing the first element in a reversed list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__crend">crend</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator that addresses the location succeeding the last element in a reversed list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__emplace">emplace</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element constructed in place into a list at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__emplace_back">emplace_back</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element constructed in place to the end of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#list__emplace_front">lemplace_front</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element constructed in place to the beginning of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__empty">empty</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tests if a list is empty.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__end">end</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an iterator that addresses the location succeeding the last element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__erase">erase</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes an element or a range of elements in a list from specified positions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__front">front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the first element in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__get_allocator">get_allocator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a copy of the <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> object used to construct a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__insert">insert</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element or a number of elements or a range of elements into a list at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__max_size">max_size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the maximum length of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__merge">merge</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes the elements from the argument list, inserts them into the target list, and orders the new, combined set of elements in ascending order or in some other specified order.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__pop_back">pop_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes the element at the end of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__pop_front">pop_front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes the element at the beginning of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__push_back">push_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the end of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__push_front">push_front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the beginning of a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__rbegin">rbegin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an iterator addressing the first element in a reversed list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__remove">remove</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases elements in a list that match a specified value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__remove_if">remove_if</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases elements from the list for which a specified predicate is satisfied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__rend">rend</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an iterator that addresses the location succeeding the last element in a reversed list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__resize">resize</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies a new size for a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__reverse">reverse</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reverses the order in which the elements occur in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements in a list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__sort">sort</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Arranges the elements of a list in ascending order or with respect to some other order relation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__splice">splice</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes elements from the argument list and inserts them into the target list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__swap">swap</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Exchanges the elements of two lists.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#list__unique">unique</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes adjacent duplicate elements or adjacent elements that satisfy some other binary predicate from the list.</para>
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
                                    <para> <link xlink:href="#list__operator_eq">operator=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces the elements of the list with a copy of another list.</para>
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
            <para> <legacyBold>Header</legacyBold>: &lt;list&gt;</para>
        </content>
    </requirements>
    <section address="list__allocator_type">
        <!--f8a200df-9356-4656-8161-1fe796c813a9-->
        <title>list::allocator_type</title>
        <content>
            <para>A type that represents the allocator class for a list object.</para>
            <legacySyntax>typedef Allocator allocator_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>allocator_type</unmanagedCodeEntityReference> is a synonym for the template parameter <legacyBold>Allocator.</legacyBold>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#list__get_allocator">get_allocator</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__assign">
        <!--11910f04-6827-48c8-97a3-01043b566df7-->
        <title>list::assign</title>
        <content>
            <para>Erases elements from a list and copies a new set of elements to a target list.</para>
            <legacySyntax>void assign(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
void assign
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>
);
template&lt;class InputIterator&gt;
    void assign(
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>
    );
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element in the range of elements to be copied from the argument list.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element just beyond the range of elements to be copied from the argument list.</para>
                        </definition>
                        <definedTerm> <parameterReference>Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of copies of an element being inserted into the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the element being inserted into the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer_list that contains the elements to be inserted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After erasing any existing elements in the target list, assign either inserts a specified range of elements from the original list or from some other list into the target list or inserts copies of a new element of a specified value into the target list</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_assign.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    list&lt;int&gt; c1, c2;
    list&lt;int&gt;::const_iterator cIter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    c1.assign(++c2.begin(), c2.end());
    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    c1.assign(7, 4);
    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    c1.assign({ 10, 20, 30, 40 });
    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;
}</code>
                            <computerOutput>c1 = 10 20 30c1 = 50 60c1 = 4 4 4 4 4 4 4c1 = 10 20 30 40</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__back">
        <!--e4033055-0557-4048-814f-b49407573d6a-->
        <title>list::back</title>
        <content>
            <para>Returns a reference to the last element of a list.</para>
            <legacySyntax> <legacyBold>reference back( );</legacyBold> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reference back( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The last element of the list. If the list is empty, the return value is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>back</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the list object cannot be modified. If the return value of <legacyBold>back</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the list object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty list.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_back.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
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
    <section address="list__begin">
        <!--ef8c4030-3746-4c81-a6ee-e3ed4b4c8204-->
        <title>list::begin</title>
        <content>
            <para>Returns an iterator addressing the first element in a list.</para>
            <legacySyntax> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator begin( ) const;</legacyBold> <legacyBold>iterator begin( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A bidirectional iterator addressing the first element in the list or to the location succeeding an empty list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>begin</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>, the elements in the list object cannot be modified. If the return value of <legacyBold>begin</legacyBold> is assigned to an <legacyBold>iterator</legacyBold>, the elements in the list object can be modified. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_begin.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter;
   list &lt;int&gt;::const_iterator c1_cIter;
   
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
    <section address="list__cbegin">
        <!--d6c864fb-8157-4746-85b9-1528fb032d32-->
        <title>list::cbegin</title>
        <content>
            <para>Returns a <languageKeyword>const</languageKeyword> iterator that addresses the first element in the range.</para>
            <legacySyntax>const_iterator cbegin() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <languageKeyword>const</languageKeyword> bidirectional-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, <codeInline>cbegin() == cend()</codeInline>).</para>
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
    <section address="list__cend">
        <!--a64ffce6-56df-4eaf-850e-065d73bc5015-->
        <title>list::cend</title>
        <content>
            <para>Returns a <languageKeyword>const</languageKeyword> iterator that addresses the location just beyond the last element in a range.</para>
            <legacySyntax>const_iterator cend() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <languageKeyword>const</languageKeyword> bidirectional-access iterator that points just beyond the end of the range.</para>
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
    <section address="list__clear">
        <!--acf7fab4-b895-4f23-9f3a-25147d680432-->
        <title>list::clear</title>
        <content>
            <para>Erases all the elements of a list.</para>
            <legacySyntax> <legacyBold>void clear( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_clear.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   cout &lt;&lt; "The size of the list is initially " &lt;&lt; c1.size( ) &lt;&lt; endl;
   c1.clear( );
   cout &lt;&lt; "The size of list after clearing is " &lt;&lt; c1.size( ) &lt;&lt; endl;
}</code>
                            <computerOutput>The size of the list is initially 3
The size of list after clearing is 0</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__const_iterator">
        <!--7eea723c-ed18-4da8-8875-ada5ec0113c2-->
        <title>list::const_iterator</title>
        <content>
            <para>A type that provides a bidirectional iterator that can read a <legacyBold>const</legacyBold> element in a list.</para>
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
                            <para>See the example for <legacyLink xlink:href="#list__back">back</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__const_pointer">
        <!--e3bea75d-ca75-476f-83e4-a91b17785fd5-->
        <title>list::const_pointer</title>
        <content>
            <para>Provides a pointer to a <languageKeyword>const</languageKeyword> element in a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>typedef typename Allocator::const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>pointer const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>pointer;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_pointer</unmanagedCodeEntityReference> cannot be used to modify the value of an element.</para>
                    <para>In most cases, an <legacyLink xlink:href="#list__iterator">iterator</legacyLink> should be used to access the elements in a list object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="list__const_reference">
        <!--58c6b43b-9070-43f8-92a4-be009f9824cd-->
        <title>list::const_reference</title>
        <content>
            <para>A type that provides a reference to a <legacyBold>const</legacyBold> element stored in a list for reading and performing <legacyBold>const</legacyBold> operations.</para>
            <legacySyntax> <legacyBold>typedef typename Allocator::const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reference const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reference</legacyBold>;</legacySyntax>
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
                            <code>// list_const_ref.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );

   const list &lt;int&gt; c2 = c1;
   const int &amp;i = c2.front( );
   const int &amp;j = c2.back( );
   cout &lt;&lt; "The first element is " &lt;&lt; i &lt;&lt; endl;
   cout &lt;&lt; "The second element is " &lt;&lt; j &lt;&lt; endl;
   
   // The following line would cause an error because c2 is const
   // c2.push_back( 30 );
}</code>
                            <computerOutput>The first element is 10
The second element is 20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__const_reverse_iterator">
        <!--6ed5190a-b1d5-4507-8d5d-36d41a8078ef-->
        <title>list::const_reverse_iterator</title>
        <content>
            <para>A type that provides a bidirectional iterator that can read any <legacyBold>const</legacyBold> element in a list.</para>
            <legacySyntax>typedef std::reverse_iterator&lt;const_iterator&gt; const_reverse_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference> cannot modify the value of an element and is used to iterate through the list in reverse.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#list__rbegin">rbegin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__crbegin">
        <!--aa7957d8-1030-46bf-8075-190ba79cb830-->
        <title>list::crbegin</title>
        <content>
            <para>Returns a const iterator addressing the first element in a reversed list.</para>
            <legacySyntax> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reverse</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator rbegin( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reverse bidirectional iterator addressing the first element in a reversed <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</link> (or addressing what had been the last element in the unreversed <languageKeyword>list</languageKeyword>).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <languageKeyword>crbegin</languageKeyword> is used with a reversed list just as <link xlink:href="#list__begin">begin</link> is used with a <languageKeyword>list</languageKeyword>. </para>
                    <para>With the return value of <languageKeyword>crbegin</languageKeyword>, the list object cannot be modified. <link xlink:href="#list__rbegin">list::rbegin</link> can be used to iterate through a list backwards.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_crbegin.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::const_reverse_iterator c1_crIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1_crIter = c1.crbegin( );
   cout &lt;&lt; "The last element in the list is " &lt;&lt; *c1_crIter &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The last element in the list is 30.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__crend">
        <!--60922007-b4df-4716-b309-4f4ea40fb570-->
        <title>list::crend</title>
        <content>
            <para>Returns a const iterator that addresses the location succeeding the last element in a reversed list.</para>
            <legacySyntax> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reverse</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator rend( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reverse bidirectional iterator that addresses the location succeeding the last element in a reversed <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</link> (the location that had preceded the first element in the unreversed <languageKeyword>list</languageKeyword>).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <languageKeyword>crend</languageKeyword> is used with a reversed list just as <link xlink:href="#list__end">end</link> is used with a <languageKeyword>list</languageKeyword>.</para>
                    <para>With the return value of <languageKeyword>crend</languageKeyword>, the <languageKeyword>list</languageKeyword> object cannot be modified.</para>
                    <para> <languageKeyword>crend</languageKeyword> can be used to test to whether a reverse iterator has reached the end of its <languageKeyword>list</languageKeyword>.</para>
                    <para>The value returned by <languageKeyword>crend</languageKeyword> should not be dereferenced.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_crend.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::const_reverse_iterator c1_crIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_crIter = c1.crend( );
   c1_crIter --;  // Decrementing a reverse iterator moves it forward in 
                 // the list (to point to the first element here)
   cout &lt;&lt; "The first element in the list is: " &lt;&lt; *c1_crIter &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element in the list is: 10</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__difference_type">
        <!--9f24f38c-9e70-4a7d-8a32-02378cf7a345-->
        <title>list::difference_type</title>
        <content>
            <para>A signed integer type that can be used to represent the number of elements of a list in a range between elements pointed to by iterators.</para>
            <legacySyntax>typedef typename Allocator::difference_type difference_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>difference_type</unmanagedCodeEntityReference> is the type returned when subtracting or incrementing through iterators of the container. The <unmanagedCodeEntityReference>difference_type</unmanagedCodeEntityReference> is typically used to represent the number of elements in the range [ <parameterReference>_First</parameterReference>, <parameterReference>_Last</parameterReference>) between the iterators <parameterReference>_First</parameterReference> and <parameterReference>_Last</parameterReference>, includes the element pointed to by <parameterReference>_First</parameterReference> and the range of elements up to, but not including, the element pointed to by <parameterReference>_Last</parameterReference>.</para>
                    <para>Note that although <unmanagedCodeEntityReference>difference_type</unmanagedCodeEntityReference> is available for all iterators that satisfy the requirements of an input iterator, which includes the class of bidirectional iterators supported by reversible containers like set, subtraction between iterators is only supported by random-access iterators provided by a random-access container, such as <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_diff_type.cpp
// compile with: /EHsc
#include &lt;iostream&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;

int main( ) 
{
   using namespace std;

   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator   c1_Iter, c2_Iter;

   c1.push_back( 30 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 10 );
   c1.push_back( 30 );
   c1.push_back( 20 );

   c1_Iter = c1.begin( );
   c2_Iter = c1.end( );

    list &lt;int&gt;::difference_type df_typ1, df_typ2, df_typ3;

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
    <section address="list__emplace">
        <!--26648a45-6402-4299-9682-516ebd089b44-->
        <title>list::emplace</title>
        <content>
            <para>Inserts an element constructed in place into a list at a specified position.</para>
            <legacySyntax> <legacyBold>void emplace_back(</legacyBold> <legacyBold>   iterator </legacyBold> <parameterReference>_Where</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   Type&amp;&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
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
                                    <para>The position in the target <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</link> where the first element is inserted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The element added to the end of the <languageKeyword>list</languageKeyword>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the <languageKeyword>list</languageKeyword> is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_emplace.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main( ) 
{
   using namespace std;
   list &lt;string&gt; c2;
   string str("a");

   c2.emplace(c2.begin(), move( str ) );
   cout &lt;&lt; "Moved first element: " &lt;&lt; c2.back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Moved first element: a</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__emplace_back">
        <!--8768150a-3d3a-4a6f-8dd6-d381f48ae532-->
        <title>list::emplace_back</title>
        <content>
            <para>Adds an element constructed in place to the beginning of a list.</para>
            <legacySyntax> <legacyBold>void emplace_back(</legacyBold> <legacyBold>   Type&amp;&amp; _Val</legacyBold> <legacyBold>);</legacyBold>
            </legacySyntax>
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
                                    <para>The element added to the end of the <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</link>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the <languageKeyword>list</languageKeyword> is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_emplace_back.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main( ) 
{
   using namespace std;
   list &lt;string&gt; c2;
   string str("a");

   c2.emplace_back( move( str ) );
   cout &lt;&lt; "Moved first element: " &lt;&lt; c2.back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Moved first element: a</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__emplace_front">
        <!--a1684be9-b564-49ab-9b2d-38a0d56f4247-->
        <title>list::emplace_front</title>
        <content>
            <para>Adds an element constructed in place to the beginning of a list.</para>
            <legacySyntax> <legacyBold>void emplace_front(</legacyBold> <legacyBold>   Type&amp;&amp; _Val</legacyBold> <legacyBold>);</legacyBold>
            </legacySyntax>
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
                                    <para>The element added to the beginning of the <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</link>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the <languageKeyword>list</languageKeyword> is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_emplace_front.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main( ) 
{
   using namespace std;
   list &lt;string&gt; c2;
   string str("a");

   c2.emplace_front( move( str ) );
   cout &lt;&lt; "Moved first element: " &lt;&lt; c2.front( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Moved first element: a</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__empty">
        <!--20f9ab36-2275-4ff0-a3b4-da3b3701b982-->
        <title>list::empty</title>
        <content>
            <para>Tests if a list is empty.</para>
            <legacySyntax> <legacyBold>bool empty( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the list is empty; <legacyBold>false</legacyBold> if the list is not empty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_empty.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   list &lt;int&gt; c1;

   c1.push_back( 10 );
   if ( c1.empty( ) )
      cout &lt;&lt; "The list is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The list is not empty." &lt;&lt; endl;
}</code>
                            <computerOutput>The list is not empty.</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__end">
        <!--49414c45-de0c-4738-8dad-8363732a3c0e-->
        <title>list::end</title>
        <content>
            <para>Returns an iterator that addresses the location succeeding the last element in a list.</para>
            <legacySyntax> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator end( ) const;</legacyBold> <legacyBold>iterator end( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A bidirectional iterator that addresses the location succeeding the last element in a list. If the list is empty, then <languageKeyword>list::end == list::begin</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <legacyBold>end</legacyBold> is used to test whether an iterator has reached the end of its list.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_end.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_Iter = c1.end( );
   c1_Iter--;
   cout &lt;&lt; "The last integer of c1 is " &lt;&lt; *c1_Iter &lt;&lt; endl;

   c1_Iter--;
   *c1_Iter = 400;
   cout &lt;&lt; "The new next-to-last integer of c1 is "
        &lt;&lt; *c1_Iter &lt;&lt; endl;

   // If a const iterator had been declared instead with the line:
   // list &lt;int&gt;::const_iterator c1_Iter;
   // an error would have resulted when inserting the 400

   cout &lt;&lt; "The list is now:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
}</code>
                            <computerOutput>The last integer of c1 is 30
The new next-to-last integer of c1 is 400
The list is now: 10 400 30</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__erase">
        <!--45d5440e-a3e2-45ff-b5de-a9906288bfec-->
        <title>list::erase</title>
        <content>
            <para>Removes an element or a range of elements in a list from specified positions.</para>
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
                            <para>Position of the element to be removed from the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element removed from the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position just beyond the last element removed from the list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A bidirectional iterator that designates the first element remaining beyond any elements removed, or a pointer to the end of the list if no such element exists.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>No reallocation occurs, so iterators and references become invalid only for the erased elements.</para>
                    <para> <legacyBold>erase</legacyBold> never throws an exception.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_erase.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator Iter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 40 );
   c1.push_back( 50 );
   cout &lt;&lt; "The initial list is:";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

   c1.erase( c1.begin( ) );
   cout &lt;&lt; "After erasing the first element, the list becomes:";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;
   Iter = c1.begin( );
   Iter++;
   c1.erase( Iter, c1.end( ) );
   cout &lt;&lt; "After erasing all elements but the first, the list becomes: ";
   for (Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;
}</code>
                            <computerOutput>The initial list is: 10 20 30 40 50
After erasing the first element, the list becomes: 20 30 40 50
After erasing all elements but the first, the list becomes:  20</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__front">
        <!--b90b417c-1927-4b34-ba8d-67a5f9140def-->
        <title>list::front</title>
        <content>
            <para>Returns a reference to the first element in a list.</para>
            <legacySyntax> <legacyBold>reference front( );</legacyBold> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reference front( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the list is empty, the return is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the list object cannot be modified. If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <legacyBold>reference</legacyBold>, the list object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty list.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_front.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   list &lt;int&gt; c1;

   c1.push_back( 10 );

   int&amp; i = c1.front();
   const int&amp; ii = c1.front();

   cout &lt;&lt; "The first integer of c1 is " &lt;&lt; i &lt;&lt; endl;
   i++;
   cout &lt;&lt; "The first integer of c1 is " &lt;&lt; ii &lt;&lt; endl;
}</code>
                            <computerOutput>The first integer of c1 is 10
The first integer of c1 is 11</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__get_allocator">
        <!--fc21c988-7193-46cf-821d-ec97012332c4-->
        <title>list::get_allocator</title>
        <content>
            <para>Returns a copy of the allocator object used to construct a list.</para>
            <legacySyntax> <legacyBold>Allocator get</legacyBold> <parameterReference>_</parameterReference> <legacyBold>allocator( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The allocator used by the list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Allocators for the list class specify how the class manages storage. The default allocators supplied with STL container classes are sufficient for most programming needs. Writing and using your own allocator class is an advanced C++ topic.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_get_allocator.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   // The following lines declare objects 
   // that use the default allocator.
   list &lt;int&gt; c1;
   list &lt;int, allocator&lt;int&gt; &gt; c2 = list &lt;int, allocator&lt;int&gt; &gt;( allocator&lt;int&gt;( ) );

   // c3 will use the same allocator class as c1
   list &lt;int&gt; c3( c1.get_allocator( ) );

   list&lt;int&gt;::allocator_type xlst = c1.get_allocator( );
   // You can now call functions on the allocator class used by c1
}</code>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__insert">
        <!--9df9f43b-30cd-43a5-b349-c43f741edd4b-->
        <title>list::insert</title>
        <content>
            <para>Inserts an element or a number of elements or a range of elements into a list at a specified position.</para>
            <legacySyntax>iterator insert(
    iterator <parameterReference>Where</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
iterator insert(
    iterator <parameterReference>Where</parameterReference>,
    Type&amp;&amp; <parameterReference>Val</parameterReference>
);
void insert(
    iterator <parameterReference>Where</parameterReference>,
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
iterator insert(
    iterator <parameterReference>Where</parameterReference>,
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>
);
template&lt;class InputIterator&gt;
    void insert(
        iterator <parameterReference>Where</parameterReference>,
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>
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
                                    <para> <parameterReference>Where</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position in the target list where the first element is inserted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the element being inserted into the list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Count</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The number of elements being inserted into the list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>First</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element in the range of elements in the argument list to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Last</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element beyond the range of elements in the argument list to be copied.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first two insert functions return an iterator that points to the position where the new element was inserted into the list.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_class_insert.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main()
{
    using namespace std;
    list &lt;int&gt; c1, c2;
    list &lt;int&gt;::iterator Iter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    Iter = c1.begin();
    Iter++;
    c1.insert(Iter, 100);
    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    Iter = c1.begin();
    Iter++;
    Iter++;
    c1.insert(Iter, 2, 200);

    cout &lt;&lt; "c1 =";
    for(auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    c1.insert(++c1.begin(), c2.begin(), --c2.end());

    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    // initialize a list of strings by moving
    list &lt; string &gt; c3;
    string str("a");

    c3.insert(c3.begin(), move(str));
    cout &lt;&lt; "Moved first element: " &lt;&lt; c3.front() &lt;&lt; endl;

    // Assign with an initializer_list
    list &lt;int&gt; c4{ {1, 2, 3, 4} };
    c4.insert(c4.begin(), { 5, 6, 7, 8 });

    cout &lt;&lt; "c4 =";
    for (auto c : c4)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="list__iterator">
        <!--fb415377-3233-4ab6-9951-266d46d75a94-->
        <title>list::iterator</title>
        <content>
            <para>A type that provides a bidirectional iterator that can read or modify any element in a list.</para>
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
                            <para>See the example for <legacyLink xlink:href="#list__begin">begin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__list">
        <!--415ff234-ff4e-4236-a7fe-0aa1ec7300a2-->
        <title>list::list</title>
        <content>
            <para>Constructs a list of a specific size or with elements of a specific value or with a specific allocator or as a copy of all or part of some other list.</para>
            <legacySyntax>list( );
explicit list(
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
explicit list(
    size_type <parameterReference>Count</parameterReference>
);
list(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
list(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>,
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
list(
    const list&amp; <parameterReference>Right</parameterReference>
);
list(
    list&amp;&amp; <parameterReference>Right</parameterReference>
);
list(
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>,
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
template&lt;class InputIterator&gt;
    list(
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>
    );
template&lt;class InputIterator &gt;
    list(
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>,
        const Allocator&amp; <parameterReference>Al</parameterReference>
    );
</legacySyntax>
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
                                    <para>The number of elements in the list constructed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the elements in the list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Right</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The list of which the constructed list is to be a copy.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>First</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element in the range of elements to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Last</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element beyond the range of elements to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>IList</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The initializer_list that contains the elements to be copied.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>All constructors store an allocator object ( <parameterReference>Al</parameterReference>) and initialize the list.</para>
                    <para> <legacyLink xlink:href="#list__get_allocator">get_allocator</legacyLink> returns a copy of the allocator object used to construct a list.</para>
                    <para>The first two constructors specify an empty initial list, the second specifying the allocator type ( <parameterReference>Al</parameterReference>) to be used. </para>
                    <para>The third constructor specifies a repetition of a specified number ( <parameterReference>Count</parameterReference>) of elements of the default value for class <ui>Type</ui>.</para>
                    <para>The fourth and fifth constructors specify a repetition of ( <parameterReference>Count</parameterReference>) elements of value <parameterReference>Val</parameterReference>.</para>
                    <para>The sixth constructor specifies a copy of the list <parameterReference>Right</parameterReference>.</para>
                    <para>The seventh constructor moves the list <parameterReference>Right</parameterReference>.</para>
                    <para>The eighth constructor uses an initializer_list to specify the elements.</para>
                    <para>The next two constructors copy the range <parameterReference>[First, Last)</parameterReference> of a list.</para>
                    <para>None of the constructors perform any interim reallocations.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// list_class_list.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    // Create an empty list c0
    list &lt;int&gt; c0;

    // Create a list c1 with 3 elements of default value 0
    list &lt;int&gt; c1(3);

    // Create a list c2 with 5 elements of value 2
    list &lt;int&gt; c2(5, 2);

    // Create a list c3 with 3 elements of value 1 and with the 
    // allocator of list c2
    list &lt;int&gt; c3(3, 1, c2.get_allocator());

    // Create a copy, list c4, of list c2
    list &lt;int&gt; c4(c2);

    // Create a list c5 by copying the range c4[_First, _Last)
    list &lt;int&gt;::iterator c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    list &lt;int&gt; c5(c4.begin(), c4_Iter);

    // Create a list c6 by copying the range c4[_First, _Last) and with 
    // the allocator of list c2
    c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    c4_Iter++;
    list &lt;int&gt; c6(c4.begin(), c4_Iter, c2.get_allocator());

    cout &lt;&lt; "c1 =";
    for (auto c : c1)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c2 =";
    for (auto c : c2)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c3 =";
    for (auto c : c3)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c4 =";
    for (auto c : c4)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c5 =";
    for (auto c : c5)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    cout &lt;&lt; "c6 =";
    for (auto c : c6)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    // Move list c6 to list c7
    list &lt;int&gt; c7(move(c6));
    cout &lt;&lt; "c7 =";
    for (auto c : c7)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;

    // Construct with initializer_list
    list&lt;int&gt; c8({ 1, 2, 3, 4 });
    cout &lt;&lt; "c8 =";
    for (auto c : c8)
        cout &lt;&lt; " " &lt;&lt; c;
    cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>c1 = 0 0 0c2 = 2 2 2 2 2c3 = 1 1 1c4 = 2 2 2 2 2c5 = 2 2c6 = 2 2 2c7 = 2 2 2c8 = 1 2 3 4</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__max_size">
        <!--dd9a64bf-60ce-4913-9f8e-82bcb1f3bf56-->
        <title>list::max_size</title>
        <content>
            <para>Returns the maximum length of a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>size</legacyBold> <parameterReference>_</parameterReference> <legacyBold>type max</legacyBold> <parameterReference>_</parameterReference> <legacyBold>size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The maximum possible length of the list.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_max_size.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::size_type i;

   i = c1.max_size( );
   cout &lt;&lt; "Maximum possible length of the list is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="list__merge">
        <!--14bc887b-7f14-4986-9000-d180b521db05-->
        <title>list::merge</title>
        <content>
            <para>Removes the elements from the argument list, inserts them into the target list, and orders the new, combined set of elements in ascending order or in some other specified order.</para>
            <legacySyntax>void merge(
   list&lt;Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
);
template&lt;class Traits&gt;
   void merge(
      list&lt;Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>, 
      Traits <parameterReference>_Comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The argument list to be merged with the target list.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The comparison operator used to order the elements of the target list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The argument list <parameterReference>_Right</parameterReference> is merged with the target list.</para>
                    <para>Both argument and target lists must be ordered with the same comparison relation by which the resulting sequence is to be ordered. The default order for the first member function is ascending order. The second member function imposes the user-specified comparison operation <parameterReference>_Comp</parameterReference> of class <legacyBold>Traits</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_merge.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1, c2, c3;
   list &lt;int&gt;::iterator c1_Iter, c2_Iter, c3_Iter;
   
   c1.push_back( 3 );
   c1.push_back( 6 );
   c2.push_back( 2 );
   c2.push_back( 4 );
   c3.push_back( 5 );
   c3.push_back( 1 );

   cout &lt;&lt; "c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   cout &lt;&lt; "c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c2_Iter;
   cout &lt;&lt; endl;

   c2.merge( c1 );  // Merge c1 into c2 in (default) ascending order
   c2.sort( greater&lt;int&gt;( ) );
   cout &lt;&lt; "After merging c1 with c2 and sorting with &gt;: c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c2_Iter;
   cout &lt;&lt; endl;

   cout &lt;&lt; "c3 =";
   for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c3_Iter;
   cout &lt;&lt; endl;

   c2.merge( c3, greater&lt;int&gt;( ) );
   cout &lt;&lt; "After merging c3 with c2 according to the '&gt;' comparison relation: c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c2_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>c1 = 3 6
c2 = 2 4
After merging c1 with c2 and sorting with &gt;: c2 = 6 4 3 2
c3 = 5 1
After merging c3 with c2 according to the '&gt;' comparison relation: c2 = 6 5 4 3 2 1</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__operator_eq">
        <!--c4e4f312-8a93-4366-8df6-fc78a499d250-->
        <title>list::operator=</title>
        <content>
            <para>Replaces the elements of the list with a copy of another list.</para>
            <legacySyntax>list&amp; operator=(
   const list&amp; <parameterReference>_Right</parameterReference>
);
list&amp; operator=(
   list&amp;&amp; <parameterReference>_Right</parameterReference>
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
                                    <para>The <link xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</link> being copied into the <languageKeyword>list</languageKeyword>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After erasing any existing elements in a <languageKeyword>list</languageKeyword>, the operator either copies or moves the contents of <parameterReference>_Right</parameterReference> into the <languageKeyword>list</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_operator_as.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   list&lt;int&gt; v1, v2, v3;
   list&lt;int&gt;::iterator iter;

   v1.push_back(10);
   v1.push_back(20);
   v1.push_back(30);
   v1.push_back(40);
   v1.push_back(50);

   cout &lt;&lt; "v1 = " ;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout &lt;&lt; *iter &lt;&lt; " ";
   cout &lt;&lt; endl;

   v2 = v1;
   cout &lt;&lt; "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout &lt;&lt; *iter &lt;&lt; " ";
   cout &lt;&lt; endl;

// move v1 into v2
   v2.clear();
   v2 = forward&lt; list&lt;int&gt; &gt;(v1);
   cout &lt;&lt; "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout &lt;&lt; *iter &lt;&lt; " ";
   cout &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="list__pointer">
        <!--d18d9843-2d03-4c8b-91c9-4f8aab8810b1-->
        <title>list::pointer</title>
        <content>
            <para>Provides a pointer to an element in a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>typedef typename Allocator::pointer pointer;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <legacyBold>pointer</legacyBold> can be used to modify the value of an element.</para>
                    <para>In most cases, an <legacyLink xlink:href="#list__iterator">iterator</legacyLink> should be used to access the elements in a list object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="list__pop_back">
        <!--441a4b8a-68e6-4b46-a112-fab7e8a56efd-->
        <title>list::pop_back</title>
        <content>
            <para>Deletes the element at the end of a list. </para>
            <legacySyntax language="unstlib"> <legacyBold>void pop</legacyBold> <parameterReference>_</parameterReference> <legacyBold>back( );</legacyBold>
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
                    <code>// list_pop_back.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 1 );
   c1.push_back( 2 );
   cout &lt;&lt; "The first element is: " &lt;&lt; c1.front( ) &lt;&lt; endl;
   cout &lt;&lt; "The last element is: " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.pop_back( );
   cout &lt;&lt; "After deleting the element at the end of the list, "
           "the last element is: " &lt;&lt; c1.back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element is: 1
The last element is: 2
After deleting the element at the end of the list, the last element is: 1</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__pop_front">
        <!--ff984298-33bd-4f37-92cd-34b7717e14c3-->
        <title>list::pop_front</title>
        <content>
            <para>Deletes the element at the beginning of a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>void pop</legacyBold> <parameterReference>_</parameterReference> <legacyBold>front( );</legacyBold>
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
                    <code>// list_pop_front.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 1 );
   c1.push_back( 2 );
   cout &lt;&lt; "The first element is: " &lt;&lt; c1.front( ) &lt;&lt; endl;
   cout &lt;&lt; "The second element is: " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.pop_front( );
   cout &lt;&lt; "After deleting the element at the beginning of the list, "
         "the first element is: " &lt;&lt; c1.front( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element is: 1
The second element is: 2
After deleting the element at the beginning of the list, the first element is: 2</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__push_back">
        <!--50322b7d-a27c-4795-8dcc-89980745293f-->
        <title>list::push_back</title>
        <content>
            <para>Adds an element to the end of a list.</para>
            <legacySyntax> <legacyBold>void push</legacyBold> <parameterReference>_</parameterReference> <legacyBold>back(</legacyBold> <legacyBold>void push_back(</legacyBold> <legacyBold>   Type&amp;&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
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
                                    <para>The element added to the end of the list.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the list is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_push_back.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 1 );
   if ( c1.size( ) != 0 )
      cout &lt;&lt; "Last element: " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.push_back( 2 );
   if ( c1.size( ) != 0 )
      cout &lt;&lt; "New last element: " &lt;&lt; c1.back( ) &lt;&lt; endl;

// move initialize a list of strings
   list &lt;string&gt; c2;
   string str("a");

   c2.push_back( move( str ) );
   cout &lt;&lt; "Moved first element: " &lt;&lt; c2.back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Last element: 1
New last element: 2
Moved first element: a</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__push_front">
        <!--33a0126c-3b7b-4e30-abbc-a4e79259ddb6-->
        <title>list::push_front</title>
        <content>
            <para>Adds an element to the beginning of a list.</para>
            <legacySyntax> <legacyBold>void push</legacyBold> <parameterReference>_</parameterReference> <legacyBold>front(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold> <legacyBold>void push_front(</legacyBold> <legacyBold>   Type&amp;&amp; _Val</legacyBold> <legacyBold>);</legacyBold>
            </legacySyntax>
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
                                    <para>The element added to the beginning of the list.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an exception is thrown, the list is left unaltered and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_push_front.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_front( 1 );
   if ( c1.size( ) != 0 )
      cout &lt;&lt; "First element: " &lt;&lt; c1.front( ) &lt;&lt; endl;

   c1.push_front( 2 );
   if ( c1.size( ) != 0 )
      cout &lt;&lt; "New first element: " &lt;&lt; c1.front( ) &lt;&lt; endl;

// move initialize a list of strings
   list &lt;string&gt; c2;
   string str("a");

   c2.push_front( move( str ) );
   cout &lt;&lt; "Moved first element: " &lt;&lt; c2.front( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>First element: 1
New first element: 2
Moved first element: a</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__rbegin">
        <!--4861d7f9-9bed-48f6-bfa1-4357a4f2f985-->
        <title>list::rbegin</title>
        <content>
            <para>Returns an iterator that addresses the first element in a reversed list.</para>
            <legacySyntax language="unstlib"> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reverse</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator rbegin( ) const;</legacyBold> <legacyBold>reverse</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator rbegin( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reverse bidirectional iterator addressing the first element in a reversed list (or addressing what had been the last element in the unreversed list).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is used with a reversed list just as <legacyLink xlink:href="#list__begin">begin</legacyLink> is used with a list.</para>
                    <para>If the return value of <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference>, the list object cannot be modified. If the return value of <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference>, the list object can be modified.</para>
                    <para> <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> can be used to iterate through a list backwards.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_rbegin.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter;
   list &lt;int&gt;::reverse_iterator c1_rIter;

   // If the following line replaced the line above, *c1_rIter = 40;
   // (below) would be an error
   //list &lt;int&gt;::const_reverse_iterator c1_rIter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1_rIter = c1.rbegin( );
   cout &lt;&lt; "The last element in the list is " &lt;&lt; *c1_rIter &lt;&lt; "." &lt;&lt; endl;

   cout &lt;&lt; "The list is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   // rbegin can be used to start an iteration through a list in 
   // reverse order
   cout &lt;&lt; "The reversed list is:";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_rIter;
   cout &lt;&lt; endl;

   c1_rIter = c1.rbegin( );
   *c1_rIter = 40;
   cout &lt;&lt; "The last element in the list is now " &lt;&lt; *c1_rIter &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The last element in the list is 30.
The list is: 10 20 30
The reversed list is: 30 20 10
The last element in the list is now 40.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__reference">
        <!--34077aa2-81e5-4ac6-9a8e-c9282bdd381b-->
        <title>list::reference</title>
        <content>
            <para>A type that provides a reference to an element stored in a list.</para>
            <legacySyntax> <legacyBold>typedef typename Allocator::reference reference;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_ref.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );

   int &amp;i = c1.front( );
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
    <section address="list__remove">
        <!--a12297b0-ce4b-4138-9f26-a948e29eb4de-->
        <title>list::remove</title>
        <content>
            <para>Erases elements in a list that match a specified value.</para>
            <legacySyntax language="unstlib"> <legacyBold>void remove(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value which, if held by an element, will result in that element's removal from the list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The order of the elements remaining is not affected.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_remove.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter, c2_Iter;
   
   c1.push_back( 5 );
   c1.push_back( 100 );
   c1.push_back( 5 );
   c1.push_back( 200 );
   c1.push_back( 5 );
   c1.push_back( 300 );

   cout &lt;&lt; "The initial list is c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
   
   list &lt;int&gt; c2 = c1;
   c2.remove( 5 );
   cout &lt;&lt; "After removing elements with value 5, the list becomes c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c2_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The initial list is c1 = 5 100 5 200 5 300
After removing elements with value 5, the list becomes c2 = 100 200 300</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__remove_if">
        <!--d8ac1b03-7689-4866-8088-cfb9dd5d454d-->
        <title>list::remove_if</title>
        <content>
            <para>Erases elements from a list for which a specified predicate is satisfied.</para>
            <legacySyntax language="unstlib"> <legacyBold>template&lt;class Predicate&gt;</legacyBold> <legacyBold>void remove</legacyBold> <parameterReference>_</parameterReference> <legacyBold>if(</legacyBold> <legacyBold>   Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>)</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The unary predicate which, if satisfied by an element, results in the deletion of that element from the list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_remove_if.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

template &lt;class T&gt; class is_odd : public std::unary_function&lt;T, bool&gt; 
{
public:
   bool operator( ) ( T&amp; val ) 
   {
   return ( val % 2 ) == 1;
   }
};

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter, c2_Iter;
   
   c1.push_back( 3 );
   c1.push_back( 4 );
   c1.push_back( 5 );
   c1.push_back( 6 );
   c1.push_back( 7 );
   c1.push_back( 8 );

   cout &lt;&lt; "The initial list is c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
   
   list &lt;int&gt; c2 = c1;
   c2.remove_if( is_odd&lt;int&gt;( ) );

   cout &lt;&lt; "After removing the odd elements, "
        &lt;&lt; "the list becomes c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c2_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The initial list is c1 = 3 4 5 6 7 8
After removing the odd elements, the list becomes c2 = 4 6 8</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__rend">
        <!--c88ed87d-5e06-4bbf-99dd-096f74387bdc-->
        <title>list::rend</title>
        <content>
            <para>Returns an iterator that addresses the location that follows the last element in a reversed list.</para>
            <legacySyntax language="unstlib"> <legacyBold>const</legacyBold> <parameterReference>_</parameterReference> <legacyBold>reverse</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator rend( ) const;</legacyBold> <legacyBold>reverse</legacyBold> <parameterReference>_</parameterReference> <legacyBold>iterator rend( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reverse bidirectional iterator that addresses the location succeeding the last element in a reversed list (the location that had preceded the first element in the unreversed list).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is used with a reversed list just as <legacyLink xlink:href="#list__end">end</legacyLink> is used with a list.</para>
                    <para>If the return value of <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference>, the list object cannot be modified. If the return value of <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference>, the list object can be modified.</para>
                    <para> <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> can be used to test to whether a reverse iterator has reached the end of its list.</para>
                    <para>The value returned by <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> should not be dereferenced.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_rend.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter;
   list &lt;int&gt;::reverse_iterator c1_rIter;

   // If the following line had replaced the line above, an error would 
   // have resulted in the line modifying an element (commented below)
   // because the iterator would have been const
   // list &lt;int&gt;::const_reverse_iterator c1_rIter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_rIter = c1.rend( );
   c1_rIter --;  // Decrementing a reverse iterator moves it forward in 
                 // the list (to point to the first element here)
   cout &lt;&lt; "The first element in the list is: " &lt;&lt; *c1_rIter &lt;&lt; endl;

   cout &lt;&lt; "The list is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   // rend can be used to test if an iteration is through all of the 
   // elements of a reversed list
   cout &lt;&lt; "The reversed list is:";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_rIter;
   cout &lt;&lt; endl;

   c1_rIter = c1.rend( );
   c1_rIter--;  // Decrementing the reverse iterator moves it backward 
                // in the reversed list (to the last element here)

   *c1_rIter = 40;  // This modification of the last element would have 
                    // caused an error if a const_reverse iterator had 
                    // been declared (as noted above)

   cout &lt;&lt; "The modified reversed list is:";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_rIter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element in the list is: 10
The list is: 10 20 30
The reversed list is: 30 20 10
The modified reversed list is: 30 20 40</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__resize">
        <!--4a69f5ae-8125-4753-aead-1a500b917d78-->
        <title>list::resize</title>
        <content>
            <para>Specifies a new size for a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>void resize(</legacyBold> <legacyBold>   size</legacyBold> <parameterReference>_</parameterReference> <legacyBold>type </legacyBold> <parameterReference>_Newsize</parameterReference> <legacyBold>);</legacyBold> <legacyBold>void resize(</legacyBold> <legacyBold>   size</legacyBold> <parameterReference>_</parameterReference> <legacyBold>type </legacyBold> <parameterReference>_Newsize</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   Type </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>The new size of the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the new elements to be added to the list if the new size is larger that the original size. If the value is omitted, the new elements are assigned the default value for the class.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the list's size is less than the requested size, <parameterReference>_Newsize</parameterReference>, elements are added to the list until it reaches the requested size.</para>
                    <para>If the list's size is larger than the requested size, the elements closest to the end of the list are deleted until the list reaches the size <parameterReference>_Newsize</parameterReference>.</para>
                    <para>If the present size of the list is the same as the requested size, no action is taken.</para>
                    <para> <legacyLink xlink:href="#list__size">size</legacyLink> reflects the current size of the list.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_resize.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{ 
   using namespace std;
   list &lt;int&gt; c1;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1.resize( 4,40 );
   cout &lt;&lt; "The size of c1 is " &lt;&lt; c1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The value of the last element is " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.resize( 5 );
   cout &lt;&lt; "The size of c1 is now " &lt;&lt; c1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The value of the last element is now " &lt;&lt; c1.back( ) &lt;&lt; endl;

   c1.resize( 2 );
   cout &lt;&lt; "The reduced size of c1 is: " &lt;&lt; c1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The value of the last element is now " &lt;&lt; c1.back( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The size of c1 is 4
The value of the last element is 40
The size of c1 is now 5
The value of the last element is now 0
The reduced size of c1 is: 2
The value of the last element is now 20</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__reverse">
        <!--e5b78533-cc8f-42a8-b9ff-b74467b45276-->
        <title>list::reverse</title>
        <content>
            <para>Reverses the order in which the elements occur in a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>void reverse( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_reverse.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter;
   
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   cout &lt;&lt; "c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   c1.reverse( );
   cout &lt;&lt; "Reversed c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>c1 = 10 20 30
Reversed c1 = 30 20 10</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__reverse_iterator">
        <!--8f80ec94-c7c2-4fb0-9f0d-56590caf138e-->
        <title>list::reverse_iterator</title>
        <content>
            <para>A type that provides a bidirectional iterator that can read or modify an element in a reversed list.</para>
            <legacySyntax>typedef std::reverse_iterator&lt;iterator&gt; reverse_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference> is used to iterate through the list in reverse.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#list__rbegin">rbegin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__size">
        <!--a8021f82-ff4f-48de-83ab-13b470dd65ac-->
        <title>list::size</title>
        <content>
            <para>Returns the number of elements in a list.</para>
            <legacySyntax language="unstlib"> <legacyBold>size</legacyBold> <parameterReference>_</parameterReference> <legacyBold>type size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of the list.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_size.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::size_type i;
   
   c1.push_back( 5 );
   i = c1.size( );
   cout &lt;&lt; "List length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   c1.push_back( 7 );
   i = c1.size( );
   cout &lt;&lt; "List length is now " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>List length is 1.
List length is now 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__size_type">
        <!--5536f25a-24f3-4862-a931-d42df5c31fb9-->
        <title>list::size_type</title>
        <content>
            <para>A type that counts the number of elements in a list.</para>
            <legacySyntax>typedef typename Allocator::size_type size_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#list__size">size</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__sort">
        <!--6155dcdd-1fd7-40b3-bf8a-64013ff6a873-->
        <title>list::sort</title>
        <content>
            <para>Arranges the elements of a list in ascending order or with respect to some other user-specified order.</para>
            <legacySyntax language="unstlib"> <legacyBold>void sort( );</legacyBold> <legacyBold>template&lt;class Traits&gt; </legacyBold> <legacyBold>   void sort(</legacyBold> <legacyBold>      Traits </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The comparison operator used to order successive elements.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first member function puts the elements in ascending order by default.</para>
                    <para>The member template function orders the elements according to the user-specified comparison operation <parameterReference>_Comp</parameterReference> of class <legacyBold>Traits</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_sort.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter;
   
   c1.push_back( 20 );
   c1.push_back( 10 );
   c1.push_back( 30 );

   cout &lt;&lt; "Before sorting: c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   c1.sort( );
   cout &lt;&lt; "After sorting c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   c1.sort( greater&lt;int&gt;( ) );
   cout &lt;&lt; "After sorting with 'greater than' operation, c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Before sorting: c1 = 20 10 30
After sorting c1 = 10 20 30
After sorting with 'greater than' operation, c1 = 30 20 10</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__splice">
        <!--40420837-597b-434f-b865-bc36dbe7d59f-->
        <title>list::splice</title>
        <content>
            <para>Removes elements from a source list and inserts them into a destination list.</para>
            <legacySyntax>// insert the entire source list
void splice( const_iterator Where, list&lt;Type, Allocator&gt;&amp; Source );
void splice( const_iterator Where, list&lt;Type, Allocator&gt;&amp;&amp; Source );

// insert one element of the source list
void splice( const_iterator Where, list&lt;Type, Allocator&gt;&amp; Source, const_iterator Iter );
void splice( const_iterator Where, list&lt;Type, Allocator&gt;&amp;&amp; Source, const_iterator Iter );

// insert a range of elements from the source list
void splice( const_iterator Where, list&lt;Type, Allocator&gt;&amp; Source, const_iterator First, const_iterator Last );
 void splice( const_iterator Where, list&lt;Type, Allocator&gt;&amp;&amp; Source, const_iterator First, const_iterator Last );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Where</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position in the destination list before which to insert.</para>
                        </definition>
                        <definedTerm> <parameterReference>Source</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The source list that is to be inserted into the destination list.</para>
                        </definition>
                        <definedTerm> <parameterReference>Iter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The element to be inserted from the source list.</para>
                        </definition>
                        <definedTerm> <parameterReference>First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first element in the range to be inserted from the source list.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first position beyond the last element in the range to be inserted from the source list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first pair of member functions inserts all elements in the source list into the destination list before the position referred to by <parameterReference>Where</parameterReference> and removes all elements from the source list. ( <codeInline>&amp;Source</codeInline> must not equal <codeInline>this</codeInline>.)</para>
                    <para>The second pair of member functions inserts the element referred to by <parameterReference>Iter</parameterReference> before the position in the destination list referred to by <parameterReference>Where</parameterReference> and removes <parameterReference>Iter</parameterReference> from the source list. (If <codeInline>Where == Iter || Where == ++Iter</codeInline>, no change occurs.)</para>
                    <para>The third pair of member functions inserts the range designated by [ <parameterReference>First</parameterReference>, <parameterReference>Last</parameterReference>) before the element in the destination list referred to by <parameterReference>Where</parameterReference> and removes that range of elements from the source list. (If <codeInline>&amp;Source == this</codeInline>, the range <codeInline>[First, Last)</codeInline> must not include the element pointed to by <codeInline>Where</codeInline>.)</para>
                    <para>If the ranged splice inserts <codeInline>N</codeInline> elements, and <codeInline>&amp;Source != this</codeInline>, an object of class <legacyLink xlink:href="89a3b805-ab60-4858-b772-5855130c11b1#forward_list__iterator">iterator</legacyLink> is incremented <codeInline>N</codeInline> times. </para>
                    <para>In all cases iterators, pointers, or references that refer to spliced elements remain valid and are transferred to the destination container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// list_splice.cpp
// compile with: /EHsc /W4
#include &lt;list&gt;
#include &lt;iostream&gt;

using namespace std;

template &lt;typename S&gt; void print(const S&amp; s) {
    cout &lt;&lt; s.size() &lt;&lt; " elements: ";

    for (const auto&amp; p : s) {
        cout &lt;&lt; "(" &lt;&lt; p &lt;&lt; ") ";
    }

    cout &lt;&lt; endl;
}

int main()
{
    list&lt;int&gt; c1{10,11};
    list&lt;int&gt; c2{20,21,22};
    list&lt;int&gt; c3{30,31};
    list&lt;int&gt; c4{40,41,42,43};

    list&lt;int&gt;::iterator where_iter;
    list&lt;int&gt;::iterator first_iter;
    list&lt;int&gt;::iterator last_iter;

    cout &lt;&lt; "Beginning state of lists:" &lt;&lt; endl;
    cout &lt;&lt; "c1 = ";
    print(c1);
    cout &lt;&lt; "c2 = ";
    print(c2);
    cout &lt;&lt; "c3 = ";
    print(c3);
    cout &lt;&lt; "c4 = ";
    print(c4);

    where_iter = c2.begin();
    ++where_iter; // start at second element
    c2.splice(where_iter, c1);
    cout &lt;&lt; "After splicing c1 into c2:" &lt;&lt; endl;
    cout &lt;&lt; "c1 = ";
    print(c1);
    cout &lt;&lt; "c2 = ";
    print(c2);

    first_iter = c3.begin();
    c2.splice(where_iter, c3, first_iter);
    cout &lt;&lt; "After splicing the first element of c3 into c2:" &lt;&lt; endl;
    cout &lt;&lt; "c3 = ";
    print(c3);
    cout &lt;&lt; "c2 = ";
    print(c2);

    first_iter = c4.begin();
    last_iter = c4.end();
    // set up to get the middle elements
    ++first_iter;
    --last_iter;
    c2.splice(where_iter, c4, first_iter, last_iter);
    cout &lt;&lt; "After splicing a range of c4 into c2:" &lt;&lt; endl;
    cout &lt;&lt; "c4 = ";
    print(c4);
    cout &lt;&lt; "c2 = ";
    print(c2);
}
</code>
                    <!--SnipComment-->
                            <computerOutput>Beginning state of lists:c1 = 2 elements: (10) (11)c2 = 3 elements: (20) (21) (22)c3 = 2 elements: (30) (31)c4 = 4 elements: (40) (41) (42) (43)After splicing c1 into c2:c1 = 0 elements:c2 = 5 elements: (20) (10) (11) (21) (22)After splicing the first element of c3 into c2:c3 = 1 elements: (31)c2 = 6 elements: (20) (10) (11) (30) (21) (22)After splicing a range of c4 into c2:c4 = 2 elements: (40) (43)c2 = 8 elements: (20) (10) (11) (30) (41) (42) (21) (22)</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__swap">
        <!--df65e322-3c67-4962-82c1-296929942f48-->
        <title>list::swap</title>
        <content>
            <para>Exchanges the elements of two lists.</para>
            <legacySyntax language="unstlib"> <legacyBold>void swap(</legacyBold> <legacyBold>   list&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>friend void swap(</legacyBold> <legacyBold>   list&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Left</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   list&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>)</legacyBold>
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
                            <para>The list providing the elements to be swapped, or the list whose elements are to be exchanged with those of the list <parameterReference>_Left</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A list whose elements are to be exchanged with those of the list <parameterReference>_Right</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_swap.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   list &lt;int&gt; c1, c2, c3;
   list &lt;int&gt;::iterator c1_Iter;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 3 );
   c2.push_back( 10 );
   c2.push_back( 20 );
   c3.push_back( 100 );

   cout &lt;&lt; "The original list c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   c1.swap( c2 );

   cout &lt;&lt; "After swapping with c2, list c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;

   swap( c1,c3 );

   cout &lt;&lt; "After swapping with c3, list c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The original list c1 is: 1 2 3
After swapping with c2, list c1 is: 10 20
After swapping with c3, list c1 is: 100</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__unique">
        <!--12527583-6d1a-4d8b-bee4-ef1deabc4b79-->
        <title>list::unique</title>
        <content>
            <para>Removes adjacent duplicate elements or adjacent elements that satisfy some other binary predicate from a list.</para>
            <legacySyntax>void unique( );
template&lt;class BinaryPredicate&gt;
   void unique(
      BinaryPredicate <parameterReference>_Pred</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The binary predicate used to compare successive elements.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function assumes that the list is sorted, so that all duplicate elements are adjacent. Duplicates that are not adjacent will not be deleted.</para>
                    <para>The first member function removes every element that compares equal to its preceding element.</para>
                    <para>The second member function removes every element that satisfies the predicate function <parameterReference>_Pred</parameterReference> when compared with its preceding element. You can use any of the binary function objects declared in the <unmanagedCodeEntityReference>&lt;functional&gt;</unmanagedCodeEntityReference>header for the argument _Pred or you can create your own.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// list_unique.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   list &lt;int&gt; c1;
   list &lt;int&gt;::iterator c1_Iter, c2_Iter,c3_Iter;
   not_equal_to&lt;int&gt; mypred;
   
   c1.push_back( -10 );
   c1.push_back( 10 );
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 20 );
   c1.push_back( -10 );

   cout &lt;&lt; "The initial list is c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c1_Iter;
   cout &lt;&lt; endl;
   
   list &lt;int&gt; c2 = c1;
   c2.unique( );
   cout &lt;&lt; "After removing successive duplicate elements, c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c2_Iter;
   cout &lt;&lt; endl;

   list &lt;int&gt; c3 = c2;
   c3.unique( mypred );
   cout &lt;&lt; "After removing successive unequal elements, c3 =";
   for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *c3_Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The initial list is c1 = -10 10 10 20 20 -10
After removing successive duplicate elements, c2 = -10 10 20 -10
After removing successive unequal elements, c3 = -10 -10</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="list__value_type">
        <!--7f7a9fda-ed6f-45c8-adb7-e8586e43c2f2-->
        <title>list::value_type</title>
        <content>
            <para>A type that represents the data type stored in a list.</para>
            <legacySyntax>typedef typename Allocator::value_type value_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>value_type</unmanagedCodeEntityReference> is a synonym for the template parameter <legacyBold> Type</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <code>// list_value_type.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   list&lt;int&gt;::value_type AnInt;
   AnInt = 44;
   cout &lt;&lt; AnInt &lt;&lt; endl;
}</code>
                            <computerOutput>44</computerOutput>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="2345823b-5612-44d8-95d3-aa96ed076d17">&lt;list&gt;</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



