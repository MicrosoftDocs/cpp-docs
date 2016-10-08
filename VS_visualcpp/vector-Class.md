---
title: "vector Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d
caps.latest.revision: 17
manager: ghogen
translation.priority.mt: 
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
# vector Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The STL vector class is a template class of sequence containers that arrange elements of a given type in a linear arrangement and allow fast random access to any element. They should be the preferred container for a sequence when random-access performance is at a premium.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax> <legacyBold>template &lt;</legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Type</parameterReference> <legacyBold>, </legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Allocator</parameterReference> <legacyBold> = allocator&lt;</legacyBold> <parameterReference>Type</parameterReference> <legacyBold>&gt; </legacyBold> <legacyBold>&gt;</legacyBold> <legacyBold>class vector</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>
                    <legacyItalic>Type</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The element data type to be stored in the vector</para>
                </definition>
                <definedTerm> <parameterReference>Allocator</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type that represents the stored allocator object that encapsulates details about the vector's allocation and deallocation of memory. This argument is optional and the default value is <legacyBold>allocator</legacyBold>
                        <legacyItalic>&lt;Type&gt;.</legacyItalic>
                    </para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>Vectors allow constant time insertions and deletions at the end of the sequence. Inserting or deleting elements in the middle of a vector requires linear time. The performance of the <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</legacyLink> container is superior with respect to insertions and deletions at the beginning and end of a sequence. The <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list Class</legacyLink> container is superior with respect to insertions and deletions at any location within a sequence. </para>
            <para>Vector reallocation occurs when a member function must increase the sequence contained in the vector object beyond its current storage capacity. Other insertions and erasures may alter various storage addresses within the sequence. In all such cases, iterators or references that point at altered portions of the sequence become invalid. If no reallocation happens, only iterators and references before the insertion/deletion point remain valid.</para>
            <para>The <legacyLink xlink:href="8028c8ed-ac9c-4f06-aba1-5de45c00aafb">vector&lt;bool&gt; Class</legacyLink> is a full specialization of the template class vector for elements of type bool with an allocator for the underlying type used by the specialization.</para>
            <para>The <legacyLink xlink:href="8028c8ed-ac9c-4f06-aba1-5de45c00aafb#vector_lt_bool_gt___reference_class">vector&lt;bool&gt; reference Class</legacyLink> is a nested class whose objects are able to provide references to elements (single bits) within a vector&lt;bool&gt; object.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__vector">vector</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a vector of a specific size or with elements of a specific value or with a specific <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> or as a copy of some other vector.</para>
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
                                    <para> <legacyLink xlink:href="#vector__allocator_type">allocator_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> class for the vector object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__const_iterator">const_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can read a <languageKeyword>const</languageKeyword> element in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__const_pointer">const_pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a pointer to a <languageKeyword>const</languageKeyword> element in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__const_reference">const_reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to a <languageKeyword>const</languageKeyword> element stored in a vector for reading and performing <languageKeyword>const</languageKeyword> operations.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__const_reverse_iterator">const_reverse_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can read any <languageKeyword>const</languageKeyword> element in the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__difference_type">difference_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides the difference between the addresses of two elements in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__iterator">iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can read or modify any element in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__pointer">pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a pointer to an element in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__reference">reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to an element stored in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__reverse_iterator">reverse_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a random-access iterator that can read or modify any element in a reversed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__size_type">size_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that counts the number of elements in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the data type stored in a vector.</para>
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
                                    <para> <legacyLink xlink:href="#vector__assign">assign</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases a vector and copies the specified elements to the empty vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__at">at</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the element at a specified location in the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__back">back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the last element of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__begin">begin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access iterator to the first element in the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__capacity">capacity</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements that the vector could contain without allocating more storage.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__cbegin">cbegin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access const iterator to the first element in the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__cend">cend</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access const iterator that points just beyond the end of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__crbegin">crbegin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator to the first element in a reversed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__crend">crend</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const iterator to the end of a reversed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__clear">clear</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases the elements of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__data">data</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the first element in the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__emplace">emplace</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element constructed in place into the vector at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__emplace_back">emplace_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element constructed in place to the end of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__empty">empty</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tests if the vector container is empty.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__end">end</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a random-access iterator that points to the end of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__erase">erase</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes an element or a range of elements in a vector from specified positions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__front">front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the first element in a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__get_allocator">get_allocator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an object to the <unmanagedCodeEntityReference>allocator</unmanagedCodeEntityReference> class used by a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__insert">insert</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element or a number of elements into the vector at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__max_size">max_size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the maximum length of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__pop_back">pop_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes the element at the end of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__push_back">push_back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Add an element to the end of the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__rbegin">rbegin</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an iterator to the first element in a reversed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__rend">rend</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an iterator to the end of a reversed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__reserve">reserve</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reserves a minimum length of storage for a vector object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__resize">resize</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies a new size for a vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__shrink_to_fit">shrink_to_fit</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Discards excess capacity.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements in the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__swap">swap</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Exchanges the elements of two vectors.</para>
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
                                    <para> <legacyLink xlink:href="#vector__operator_at">operator[]</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the vector element at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector__operator_eq">operator=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces the elements of the vector with a copy of another vector.</para>
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
            <para> <legacyBold>Header:</legacyBold> &lt;vector&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="vector__allocator_type">
        <!--a7f8f2da-68ce-4ac3-8046-ba5ad61ba0ba-->
        <title>vector::allocator_type</title>
        <content>
            <para>A type that represents the allocator class for the vector object.</para>
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
                            <para>See the example for <legacyLink xlink:href="#vector__get_allocator">get_allocator</legacyLink> for an example that uses <unmanagedCodeEntityReference>allocator_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__assign">
        <!--ab241740-3ea8-4c77-98da-ef4dc0a2c00b-->
        <title>vector::assign</title>
        <content>
            <para>Erases a vector and copies the specified elements to the empty vector.</para>
            <legacySyntax>void assign(
   size_type <parameterReference>Count</parameterReference>,
   const Type&amp; <parameterReference>Val</parameterReference>
);
void assign(
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>
);
template&lt;class InputIterator&gt;
   void assign(
      InputIterator <parameterReference>First</parameterReference>,
      InputIterator <parameterReference>Last</parameterReference>
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
                            <para>Position of the first element in the range of elements to be copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Position of the first element beyond the range of elements to be copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of copies of an element being inserted into the vector.</para>
                        </definition>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the element being inserted into the vector.</para>
                        </definition>
                        <definedTerm> <parameterReference>IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer_list containing the elements to insert.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After erasing any existing elements in a vector, assign either inserts a specified range of elements from the original vector into a vector or inserts copies of a new element of a specified value into a vector.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>/ vector_assign.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    vector&lt;int&gt; v1, v2, v3;
    
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout &lt;&lt; "v1 = ";
    for (auto&amp; v : v1){
        cout &lt;&lt; v &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    v2.assign(v1.begin(), v1.end());
    cout &lt;&lt; "v2 = ";
    for (auto&amp; v : v2){
        cout &lt;&lt; v &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    v3.assign(7, 4);
    cout &lt;&lt; "v3 = ";
    for (auto&amp; v : v3){
        cout &lt;&lt; v &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    v3.assign({ 5, 6, 7 });
    for (auto&amp; v : v3){
        cout &lt;&lt; v &lt;&lt; " ";
    }
    cout &lt;&lt; endl;
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__at">
        <!--46e9fc71-2cf7-4342-b88a-2e30b1c4899a-->
        <title>vector::at</title>
        <content>
            <para>Returns a reference to the element at a specified location in the vector.</para>
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
                            <para>The subscript or position number of the element to reference in the vector.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the element subscripted in the argument. If <parameterReference>_Off</parameterReference> is greater than the size of the vector, <legacyBold>at</legacyBold> throws an exception. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>at</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the vector object cannot be modified. If the return value of <legacyBold>at</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the vector object can be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_at.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   
   v1.push_back( 10 );
   v1.push_back( 20 );

   const int &amp;i = v1.at( 0 );
   int &amp;j = v1.at( 1 );
   cout &lt;&lt; "The first element is " &lt;&lt; i &lt;&lt; endl;
   cout &lt;&lt; "The second element is " &lt;&lt; j &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element is 10
The second element is 20</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__back">
        <!--755299c4-8696-4f09-ade1-d01756eafcf1-->
        <title>vector::back</title>
        <content>
            <para>Returns a reference to the last element of the vector.</para>
            <legacySyntax> <legacyBold>reference back( );</legacyBold> <legacyBold>const_reference back( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The last element of the vector. If the vector is empty, the return value is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>back</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the vector object cannot be modified. If the return value of <legacyBold>back</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the vector object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty vector.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_back.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;   
   vector &lt;int&gt; v1;
   
   v1.push_back( 10 );
   v1.push_back( 11 );

   int&amp; i = v1.back( );
   const int&amp; ii = v1.front( );

   cout &lt;&lt; "The last integer of v1 is " &lt;&lt; i &lt;&lt; endl;
   i--;
   cout &lt;&lt; "The next-to-last integer of v1 is "&lt;&lt; ii &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__begin">
        <!--5ab4af74-ab67-41f0-93dc-716a1d23e8cc-->
        <title>vector::begin</title>
        <content>
            <para>Returns a random-access iterator to the first element in the vector.</para>
            <legacySyntax>const_iterator begin() const;
iterator begin();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A random-access iterator addressing the first element in the <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> or to the location succeeding an empty <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference>. You should always compare the value returned with <link xlink:href="#vector__end">vector::end</link> to ensure it is valid.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>begin</unmanagedCodeEntityReference> is assigned to a <link xlink:href="#vector__const_iterator">vector::const_iterator</link>, the <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> object cannot be modified. If the return value of <unmanagedCodeEntityReference>begin</unmanagedCodeEntityReference> is assigned to an <link xlink:href="#vector__iterator">vector::iterator</link>, the <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> object can be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_begin.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    vector&lt;int&gt; c1;
    vector&lt;int&gt;::iterator c1_Iter;
    vector&lt;int&gt;::const_iterator c1_cIter;

    c1.push_back(1);
    c1.push_back(2);

    cout &lt;&lt; "The vector c1 contains elements:";
    c1_Iter = c1.begin();
    for (; c1_Iter != c1.end(); c1_Iter++)
    {
        cout &lt;&lt; " " &lt;&lt; *c1_Iter;
    }
    cout &lt;&lt; endl;

    cout &lt;&lt; "The vector c1 now contains elements:";
    c1_Iter = c1.begin();
    *c1_Iter = 20;
    for (; c1_Iter != c1.end(); c1_Iter++)
    {
        cout &lt;&lt; " " &lt;&lt; *c1_Iter;
    }
    cout &lt;&lt; endl;

    // The following line would be an error because iterator is const
    // *c1_cIter = 200;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The vector c1 contains elements: 1 2
The vector c1 now contains elements: 20 2</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__capacity">
        <!--e7c9a9e1-7fcd-43eb-b93e-27ee80064739-->
        <title>vector::capacity</title>
        <content>
            <para>Returns the number of elements that the vector could contain without allocating more storage.</para>
            <legacySyntax> <legacyBold>size_type capacity( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of storage allocated for the vector.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function <legacyLink xlink:href="#vector__resize">resize</legacyLink> will be more efficient if sufficient memory is allocated to accommodate it. Use the member function <legacyLink xlink:href="#vector__reserve">reserve</legacyLink> to specify the amount of memory allocated.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_capacity.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   
   v1.push_back( 1 );
   cout &lt;&lt; "The length of storage allocated is "
        &lt;&lt; v1.capacity( ) &lt;&lt; "." &lt;&lt; endl;

   v1.push_back( 2 );
   cout &lt;&lt; "The length of storage allocated is now "
        &lt;&lt; v1.capacity( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The length of storage allocated is 1.
The length of storage allocated is now 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__cbegin">
        <!--45beb131-427c-4aa0-b33e-8c61a34636d3-->
        <title>vector::cbegin</title>
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
    <section address="vector__cend">
        <!--fe1e35f5-f9a5-4823-823b-3dd6628da8d2-->
        <title>vector::cend</title>
        <content>
            <para>Returns a <languageKeyword>const</languageKeyword> iterator that addresses the location just beyond the last element in a range.</para>
            <legacySyntax>const_iterator cend() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <languageKeyword>const</languageKeyword> random-access iterator that points just beyond the end of the range.</para>
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
    <section address="vector__clear">
        <!--8257c33c-893a-41a7-87dc-ad9c7c93c5c9-->
        <title>vector::clear</title>
        <content>
            <para>Erases the elements of the vector.</para>
            <legacySyntax> <legacyBold>void clear( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_clear.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout &lt;&lt; "The size of v1 is " &lt;&lt; v1.size( ) &lt;&lt; endl;
   v1.clear( );
   cout &lt;&lt; "The size of v1 after clearing is " &lt;&lt; v1.size( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The size of v1 is 3
The size of v1 after clearing is 0</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__const_iterator">
        <!--6431d5a4-f7cf-44a6-be0d-ff2b2d21d374-->
        <title>vector::const_iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read a <legacyBold>const </legacyBold>element in a vector.</para>
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
                            <para>See the example for <legacyLink xlink:href="#vector__back">back</legacyLink> for an example that uses <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__const_pointer">
        <!--a747fadc-0ea8-4468-999e-e75b56edbe37-->
        <title>vector::const_pointer</title>
        <content>
            <para>A type that provides a pointer to a <legacyBold>const </legacyBold>element in a vector.</para>
            <legacySyntax> <legacyBold>typedef typename Allocator::const_pointer const_pointer;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_pointer</unmanagedCodeEntityReference> cannot be used to modify the value of an element.</para>
                    <para>An <legacyLink xlink:href="#vector__iterator">iterator</legacyLink> is more commonly used to access a vector element.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__const_reference">
        <!--89f80d68-3dcb-4c2f-8860-7a30a9a49352-->
        <title>vector::const_reference</title>
        <content>
            <para>A type that provides a reference to a <legacyBold>const </legacyBold>element stored in a vector for reading and performing <legacyBold>const </legacyBold>operations.</para>
            <legacySyntax>typedef typename Allocator::const_reference const_reference;</legacySyntax>
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
                    <code>// vector_const_ref.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   
   v1.push_back( 10 );
   v1.push_back( 20 );

   const vector &lt;int&gt; v2 = v1;
   const int &amp;i = v2.front( );
   const int &amp;j = v2.back( );
   cout &lt;&lt; "The first element is " &lt;&lt; i &lt;&lt; endl;
   cout &lt;&lt; "The second element is " &lt;&lt; j &lt;&lt; endl;
   
   // The following line would cause an error as v2 is const
   // v2.push_back( 30 );
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element is 10
The second element is 20</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__const_reverse_iterator">
        <!--148d93b0-e228-41bc-b4e9-b9378936aabc-->
        <title>vector::const_reverse_iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read any <legacyBold>const </legacyBold>element in the vector.</para>
            <legacySyntax>typedef std::reverse_iterator&lt;const_iterator&gt; const_reverse_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference> cannot modify the value of an element and is used to iterate through the vector in reverse.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See <legacyLink xlink:href="#vector__rbegin">rbegin</legacyLink> for an example of how to declare and use an iterator.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__crbegin">
        <!--1c8145cf-b4dc-4189-ab56-3894655085fd-->
        <title>vector::crbegin</title>
        <content>
            <para>Returns a const iterator to the first element in a reversed vector.</para>
            <legacySyntax>const_reverse_iterator crbegin( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reverse random-access iterator addressing the first element in a reversed <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</link> or addressing what had been the last element in the unreversed <languageKeyword>vector</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>With the return value of <languageKeyword>crbegin</languageKeyword>, the <languageKeyword>vector</languageKeyword> object cannot be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_crbegin.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter;
   vector &lt;int&gt;::const_reverse_iterator v1_rIter;
   
   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout &lt;&lt; "The first element of vector is "
        &lt;&lt; *v1_Iter &lt;&lt; "." &lt;&lt; endl;

   v1_rIter = v1.crbegin( );
   cout &lt;&lt; "The first element of the reversed vector is "
        &lt;&lt; *v1_rIter &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element of vector is 1.
The first element of the reversed vector is 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__crend">
        <!--d71945d6-63de-49f1-a3b1-cd004b5b117e-->
        <title>vector::crend</title>
        <content>
            <para>Returns a const iterator that addresses the location succeeding the last element in a reversed vector.</para>
            <legacySyntax>const_reverse_iterator crend( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reverse random-access iterator that addresses the location succeeding the last element in a reversed <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</link> (the location that had preceded the first element in the unreversed <languageKeyword>vector</languageKeyword>).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <languageKeyword>crend</languageKeyword> is used with a reversed <languageKeyword>vector</languageKeyword> just as <link xlink:href="#vector__cend">cend</link> is used with a <languageKeyword>vector</languageKeyword>.</para>
                    <para>With the return value of <languageKeyword>crend</languageKeyword> (suitably decremented), the <languageKeyword>vector</languageKeyword> object cannot be modified.</para>
                    <para> <languageKeyword>crend</languageKeyword> can be used to test to whether a reverse iterator has reached the end of its <languageKeyword>vector</languageKeyword>.</para>
                    <para>The value returned by <languageKeyword>crend</languageKeyword> should not be dereferenced.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_crend.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::const_reverse_iterator v1_rIter;
   
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
    <section address="vector__data">
        <!--6526d864-a5c8-4dbe-957b-4ca0d2768511-->
        <title>vector::data</title>
        <content>
            <para>Returns a pointer to the first element in the vector. </para>
            <legacySyntax>const_pointer data() const;
pointer data();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the first element in the <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</link> or to the location succeeding an empty <languageKeyword>vector</languageKeyword>. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_data.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    vector&lt;int&gt; c1;
    vector&lt;int&gt;::pointer c1_Ptr;
    vector&lt;int&gt;::const_pointer c1_cPtr;

    c1.push_back(1);
    c1.push_back(2);

    cout &lt;&lt; "The vector c1 contains elements:";
    c1_cPtr = c1.data();
    for (size_t n = c1.size(); 0 &lt; n; --n, c1_cPtr++)
    {
        cout &lt;&lt; " " &lt;&lt; *c1_cPtr;
    }
    cout &lt;&lt; endl;

    cout &lt;&lt; "The vector c1 now contains elements:";
    c1_Ptr = c1.data();
    *c1_Ptr = 20;
    for (size_t n = c1.size(); 0 &lt; n; --n, c1_Ptr++)
    {
        cout &lt;&lt; " " &lt;&lt; *c1_Ptr;
    }
    cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The vector c1 contains elements: 1 2
The vector c1 now contains elements: 20 2</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__difference_type">
        <!--e9f0f0aa-ac7e-4b3d-9443-c81d902cb16f-->
        <title>vector::difference_type</title>
        <content>
            <para>A type that provides the difference between two iterators that refer to elements within the same vector.</para>
            <legacySyntax>typedef typename Allocator::difference_type difference_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>difference_type</unmanagedCodeEntityReference> can also be described as the number of elements between two pointers, because a pointer to an element contains its address.</para>
                    <para>An <legacyLink xlink:href="#vector__iterator">iterator</legacyLink> is more commonly used to access a vector element.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_diff_type.cpp
// compile with: /EHsc
#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;algorithm&gt;

int main( )
{
   using namespace std;

   vector &lt;int&gt; c1;
   vector &lt;int&gt;::iterator c1_Iter, c2_Iter;

   c1.push_back( 30 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 10 );
   c1.push_back( 30 );
   c1.push_back( 20 );

   c1_Iter = c1.begin( );
   c2_Iter = c1.end( );

   vector &lt;int&gt;::difference_type   df_typ1, df_typ2, df_typ3;

   df_typ1 = count( c1_Iter, c2_Iter, 10 );
   df_typ2 = count( c1_Iter, c2_Iter, 20 );
   df_typ3 = count( c1_Iter, c2_Iter, 30 );
   cout &lt;&lt; "The number '10' is in c1 collection " &lt;&lt; df_typ1 &lt;&lt; " times.\n";
   cout &lt;&lt; "The number '20' is in c1 collection " &lt;&lt; df_typ2 &lt;&lt; " times.\n";
   cout &lt;&lt; "The number '30' is in c1 collection " &lt;&lt; df_typ3 &lt;&lt; " times.\n";
}</code>
                    <!--SnipComment-->
                            <computerOutput>The number '10' is in c1 collection 1 times.
The number '20' is in c1 collection 2 times.
The number '30' is in c1 collection 3 times.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__emplace">
        <!--3bbd498e-aa3e-48a8-9926-1a0d4d6479e1-->
        <title>vector::emplace</title>
        <content>
            <para>Inserts an element constructed in place into the vector at a specified position.</para>
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
                                    <para>The position in the <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</link> where the first element is inserted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the element being inserted into the <languageKeyword>vector</languageKeyword>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The function returns an iterator that points to the position where the new element was inserted into the <languageKeyword>vector</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Any insertion operation can be expensive, see <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink> for a discussion of <languageKeyword>vector</languageKeyword> performance.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_emplace.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter;
   
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout &lt;&lt; "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

// initialize a vector of vectors by moving v1
   vector &lt; vector &lt;int&gt; &gt; vv1;

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
    <section address="vector__emplace_back">
        <!--c2d38929-04b0-4e4d-8663-82810d8aa9aa-->
        <title>vector::emplace_back</title>
        <content>
            <para>Adds an element constructed in place to the end of the vector.</para>
            <legacySyntax>template &lt;class... Types&gt;    void emplace_back(        Types&amp;&amp;... <parameterReference>_Args</parameterReference>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Args</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructor arguments. The function infers which constructor overload to invoke based on the arguments provided.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">
#include &lt;vector&gt;
struct obj
{
   obj(int, double) {}
};

int main()
{
   std::vector&lt;obj&gt; v;
   v.emplace_back(1, 3.14); // obj in created in place in the vector
}
</code>
                    <!--pass2snip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__empty">
        <!--e9d8ef6d-3ee2-4959-a4f1-cd1c5583cde4-->
        <title>vector::empty</title>
        <content>
            <para>Tests if the vector is empty.</para>
            <legacySyntax> <legacyBold>bool empty( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the vector is empty; <legacyBold>false</legacyBold> if the vector is not empty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_empty.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;

   v1.push_back( 10 );

   if ( v1.empty( ) )
      cout &lt;&lt; "The vector is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The vector is not empty." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The vector is not empty.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__end">
        <!--6a11275b-81c1-4fb3-a053-b8cf5f5e4bbc-->
        <title>vector::end</title>
        <content>
            <para>Returns the past-the-end iterator.</para>
            <legacySyntax> <legacyBold>iterator end( );</legacyBold> <legacyBold>const_iterator end( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The past-the-end iterator for the vector. If the vector is empty, <codeInline>vector::end() == vector::begin()</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>end</legacyBold> is assigned to a variable of type <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>, the vector object cannot be modified. If the return value of <legacyBold>end</legacyBold> is assigned to a variable of type <legacyBold>iterator</legacyBold>, the vector object can be modified. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_end.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;
int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter;
   
   v1.push_back( 1 );
   v1.push_back( 2 );

   for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )
      cout &lt;&lt; *v1_Iter &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>1
2</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__erase">
        <!--0b7065d2-da9f-4649-8784-31d8a5edc6bd-->
        <title>vector::erase</title>
        <content>
            <para>Removes an element or a range of elements in a vector from specified positions.</para>
            <legacySyntax>iterator erase(
   const_iterator <legacyBold/> <parameterReference>_Where</parameterReference>
);
iterator erase(
   const_iterator <parameterReference>_First</parameterReference>,
   const_iterator <legacyBold/> <parameterReference>_Last</parameterReference>
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
                                    <para>Position of the element to be removed from the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_First</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Position of the first element removed from the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Last</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Position just beyond the last element removed from the vector.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An iterator that designates the first element remaining beyond any elements removed, or a pointer to the end of the vector if no such element exists.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_erase.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter;
   
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );
   v1.push_back( 40 );
   v1.push_back( 50 );

   cout &lt;&lt; "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

   v1.erase( v1.begin( ) );
   cout &lt;&lt; "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

   v1.erase( v1.begin( ) + 1, v1.begin( ) + 3 );
   cout &lt;&lt; "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>v1 = 10 20 30 40 50
v1 = 20 30 40 50
v1 = 20 50</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__front">
        <!--469e5cda-cbaa-4492-98a0-5562f0c06970-->
        <title>vector::front</title>
        <content>
            <para>Returns a reference to the first element in a vector.</para>
            <legacySyntax> <legacyBold>reference front( );</legacyBold> <legacyBold>const_reference front( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the first element in the vector object. If the vector is empty, the return is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the vector object cannot be modified. If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <legacyBold>reference</legacyBold>, the vector object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty vector.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_front.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   
   v1.push_back( 10 );
   v1.push_back( 11 );

   int&amp; i = v1.front( );
   const int&amp; ii = v1.front( );

   cout &lt;&lt; "The first integer of v1 is "&lt;&lt; i &lt;&lt; endl;
   // by incrementing i, we move the the front reference to the second element
   i++;
   cout &lt;&lt; "Now, the first integer of v1 is "&lt;&lt; i &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__get_allocator">
        <!--1570bc99-914a-486b-8846-fb0a6ed289a4-->
        <title>vector::get_allocator</title>
        <content>
            <para>Returns a copy of the allocator object used to construct the vector.</para>
            <legacySyntax> <legacyBold>Allocator get_allocator( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The allocator used by the vector.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Allocators for the vector class specify how the class manages storage. The default allocators supplied with STL container classes are sufficient for most programming needs. Writing and using your own allocator class is an advanced C++ topic.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_get_allocator.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   // The following lines declare objects that use the default allocator.
   vector&lt;int&gt; v1;
   vector&lt;int, allocator&lt;int&gt; &gt; v2 = vector&lt;int, allocator&lt;int&gt; &gt;(allocator&lt;int&gt;( )) ;

   // v3 will use the same allocator class as v1
   vector &lt;int&gt; v3( v1.get_allocator( ) );

   vector&lt;int&gt;::allocator_type xvec = v3.get_allocator( );
   // You can now call functions on the allocator class used by vec
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__insert">
        <!--de278aeb-61df-459e-bd14-35bfde4511a2-->
        <title>vector::insert</title>
        <content>
            <para>Inserts an element or a number of elements or a range of elements into the vector at a specified position.</para>
            <legacySyntax>iterator insert(
   const_iterator <parameterReference>_Where</parameterReference>,
   const Type&amp; <parameterReference>_Val</parameterReference>
);
iterator insert(
   const_iterator <parameterReference>_Where</parameterReference>,
   Type&amp;&amp; <parameterReference>_Val</parameterReference>
);
void insert(
   const_iterator <parameterReference>_Where</parameterReference>,
   size_type <parameterReference>_Count</parameterReference>,
   const Type&amp; <parameterReference>_Val</parameterReference>
);
template&lt;class InputIterator&gt;
   void insert(
      const_iterator <parameterReference>_Where</parameterReference>,
      InputIterator <parameterReference>_First</parameterReference>,
      InputIterator <parameterReference>_Last</parameterReference>
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
                                    <para>The position in the vector where the first element is inserted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the element being inserted into the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Count</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The number of elements being inserted into the vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_First</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element in the range of elements to be copied.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Last</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the first element beyond the range of elements to be copied.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first two <languageKeyword>insert</languageKeyword> functions return an iterator that points to the position where the new element was inserted into the vector.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Any insertion operation can be expensive, see <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink> for a discussion of <languageKeyword>vector</languageKeyword> performance.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_insert.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter;
   
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout &lt;&lt; "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

   v1.insert( v1.begin( ) + 1, 40 );
   cout &lt;&lt; "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;
   v1.insert( v1.begin( ) + 2, 4, 50 );

   cout &lt;&lt; "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

   v1.insert( v1.begin( )+1, v1.begin( )+2, v1.begin( )+4 );
   cout &lt;&lt; "v1 =";
   for (Iter = v1.begin( ); Iter != v1.end( ); Iter++ )
      cout &lt;&lt; " " &lt;&lt; *Iter;
   cout &lt;&lt; endl;

// initialize a vector of vectors by moving v1
   vector &lt; vector &lt;int&gt; &gt; vv1;

   vv1.insert( vv1.begin(), move( v1 ) );
   if ( vv1.size( ) != 0 &amp;&amp; vv1[0].size( ) != 0 )
      {
      vector &lt; vector &lt;int&gt; &gt;::iterator Iter;
      cout &lt;&lt; "vv1[0] =";
      for (Iter = vv1[0].begin( ); Iter != vv1[0].end( ); Iter++ )
         cout &lt;&lt; " " &lt;&lt; *Iter;
      cout &lt;&lt; endl;
      }
}</code>
                    <!--SnipComment-->
                            <computerOutput>v1 = 10 20 30
v1 = 10 40 20 30
v1 = 10 40 50 50 50 50 20 30
v1 = 10 50 50 40 50 50 50 50 20 30
vv1[0] = 10 50 50 40 50 50 50 50 20 30</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__iterator">
        <!--34ab8f69-4df6-4e2d-ab30-5fa8c15879f7-->
        <title>vector::iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read or modify any element in a vector.</para>
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
                            <para>See the example for <legacyLink xlink:href="#vector__begin">begin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__max_size">
        <!--348807aa-dced-4531-9e77-7657bcdc3d80-->
        <title>vector::max_size</title>
        <content>
            <para>Returns the maximum length of the vector.</para>
            <legacySyntax> <legacyBold>size_type max_size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The maximum possible length of the vector.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_max_size.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::size_type i;

   i = v1.max_size( );   
   cout &lt;&lt; "The maximum possible length of the vector is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__operator_at">
        <!--9f19d479-152d-40c6-aab8-d7e5b62a41ed-->
        <title>vector::operator[]</title>
        <content>
            <para>Returns a reference to the vector element at a specified position.</para>
            <legacySyntax>reference operator[](size_type <parameterReference>Pos</parameterReference>);
const_reference operator[](size_type <legacyBold/> <parameterReference>Pos</parameterReference>) const;</legacySyntax>
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
                                    <para> <parameterReference>Pos</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The position of the vector element.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the position specified is greater than or equal to the size of the container, the result is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the vector object cannot be modified. If the return value of <unmanagedCodeEntityReference>operator[]</unmanagedCodeEntityReference> is assigned to a reference, the vector object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1 (controlled with <legacyLink xlink:href="718549cd-a9a9-4ab3-867b-aac00b321e67">_ITERATOR_DEBUG_LEVEL</legacyLink>), a runtime error will occur if you attempt to access an element outside the bounds of the vector.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// vector_op_ref.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;

   v1.push_back( 10 );
   v1.push_back( 20 );

   int&amp; i = v1[1];
   cout &lt;&lt; "The second integer of v1 is " &lt;&lt; i &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__operator_eq">
        <!--c529e30f-476d-499f-a33e-3d2b1c8c191b-->
        <title>vector::operator=</title>
        <content>
            <para>Replaces the elements of the vector with a copy of another vector.</para>
            <legacySyntax>vector&amp; operator=(
   const vector&amp; <parameterReference>_Right</parameterReference>
);
vector&amp; operator=(
   vector&amp;&amp; <parameterReference>_Right</parameterReference>
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
                                    <para>The <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</link> being copied into the <languageKeyword>vector</languageKeyword>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After erasing any existing elements in a <languageKeyword>vector</languageKeyword>, <languageKeyword>operator=</languageKeyword> either copies or moves the contents of <parameterReference>_Right</parameterReference> into the <languageKeyword>vector</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_operator_as.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   vector&lt;int&gt; v1, v2, v3;
   vector&lt;int&gt;::iterator iter;

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
   v2 = move(v1);
   cout &lt;&lt; "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout &lt;&lt; *iter &lt;&lt; " ";
   cout &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__pointer">
        <!--b2e8aaec-c12c-4074-9c05-3dbc33dd8994-->
        <title>vector::pointer</title>
        <content>
            <para>A type that provides a pointer to an element in a vector.</para>
            <legacySyntax> <legacyBold>typedef typename Allocator::pointer pointer;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <legacyBold>pointer</legacyBold> can be used to modify the value of an element.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_pointer.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   vector&lt;int&gt; v;
   v.push_back( 11 );
   v.push_back( 22 );

   vector&lt;int&gt;::pointer ptr = &amp;v[0];
   cout &lt;&lt; *ptr &lt;&lt; endl;
   ptr++;
   cout &lt;&lt; *ptr &lt;&lt; endl;
   *ptr = 44;
   cout &lt;&lt; *ptr &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>11
22
44</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__pop_back">
        <!--eea7c58c-2bb3-4d9b-bda0-9f5659955cc9-->
        <title>vector::pop_back</title>
        <content>
            <para>Deletes the element at the end of the vector.</para>
            <legacySyntax> <legacyBold>void pop_back( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For a code example, see <legacyLink xlink:href="#vector__push_back">vector::push_back()</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__push_back">
        <!--d63f0648-25f2-4272-b3a3-466e2cf7e570-->
        <title>vector::push_back</title>
        <content>
            <para>Adds an element to the end of the vector.</para>
            <legacySyntax>void push_back(const T&amp; Val);

void push_back(T&amp;&amp; Val);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to assign to the element added to the end of the vector.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// compile with: /EHsc /W4
#include &lt;vector&gt;
#include &lt;iostream&gt;

using namespace std;

template &lt;typename T&gt; void print_elem(const T&amp; t) {
    cout &lt;&lt; "(" &lt;&lt; t &lt;&lt; ") ";
}

template &lt;typename T&gt; void print_collection(const T&amp; t) {
    cout &lt;&lt; "  " &lt;&lt; t.size() &lt;&lt; " elements: ";

    for (const auto&amp; p : t) {
        print_elem(p);
    }
    cout &lt;&lt; endl;
}

int main()
{
    vector&lt;int&gt; v;
    for (int i = 0; i &lt; 10; ++i) {
        v.push_back(10 + i);
    }

    cout &lt;&lt; "vector data: " &lt;&lt; endl;
    print_collection(v);

    // pop_back() until it's empty, printing the last element as we go
    while (v.begin() != v.end()) { 
        cout &lt;&lt; "v.back(): "; print_elem(v.back()); cout &lt;&lt; endl;
        v.pop_back();
    }
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__rbegin">
        <!--15678651-44b3-4960-b54a-df3123f2b1de-->
        <title>vector::rbegin</title>
        <content>
            <para>Returns an iterator to the first element in a reversed vector.</para>
            <legacySyntax> <legacyBold>reverse_iterator rbegin( );</legacyBold> <legacyBold>const_reverse_iterator rbegin( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reverse random-access iterator addressing the first element in a reversed vector or addressing what had been the last element in the unreversed vector.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference>, the vector object cannot be modified. If the return value of <unmanagedCodeEntityReference>rbegin</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference>, the vector object can be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_rbegin.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter;
   vector &lt;int&gt;::reverse_iterator v1_rIter;
   
   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout &lt;&lt; "The first element of vector is "
        &lt;&lt; *v1_Iter &lt;&lt; "." &lt;&lt; endl;

   v1_rIter = v1.rbegin( );
   cout &lt;&lt; "The first element of the reversed vector is "
        &lt;&lt; *v1_rIter &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The first element of vector is 1.
The first element of the reversed vector is 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__reference">
        <!--dcaaca16-3095-400c-8eb1-893449f20474-->
        <title>vector::reference</title>
        <content>
            <para>A type that provides a reference to an element stored in a vector.</para>
            <legacySyntax>typedef typename Allocator::reference reference;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See <legacyLink xlink:href="#vector__at">at</legacyLink> for an example of how to use <legacyBold>reference</legacyBold> in the vector class.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__rend">
        <!--7df7e1d7-6319-4bd8-bd3c-0da0e76784d6-->
        <title>vector::rend</title>
        <content>
            <para>Returns an iterator that addresses the location succeeding the last element in a reversed vector.</para>
            <legacySyntax> <legacyBold>const_reverse_iterator rend( ) const;</legacyBold> <legacyBold>reverse_iterator rend( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reverse random-access iterator that addresses the location succeeding the last element in a reversed vector (the location that had preceded the first element in the unreversed vector).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is used with a reversed vector just as <legacyLink xlink:href="#vector__end">end</legacyLink> is used with a vector.</para>
                    <para>If the return value of <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reverse_iterator</unmanagedCodeEntityReference>, then the vector object cannot be modified. If the return value of <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference>, then the vector object can be modified.</para>
                    <para> <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> can be used to test to whether a reverse iterator has reached the end of its vector.</para>
                    <para>The value returned by <unmanagedCodeEntityReference>rend</unmanagedCodeEntityReference> should not be dereferenced.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_rend.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::reverse_iterator v1_rIter;
   
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
    <section address="vector__reserve">
        <!--895d78f5-ad8a-4cbb-b386-4beea4bd1688-->
        <title>vector::reserve</title>
        <content>
            <para>Reserves a minimum length of storage for a vector object, allocating space if necessary.</para>
            <legacySyntax> <legacyBold>void reserve(</legacyBold> <legacyBold>   size_type </legacyBold> <parameterReference>_Count</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The minimum length of storage to be allocated for the vector.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_reserve.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   //vector &lt;int&gt;::iterator Iter;

   v1.push_back( 1 );
   cout &lt;&lt; "Current capacity of v1 = " 
      &lt;&lt; v1.capacity( ) &lt;&lt; endl;
   v1.reserve( 20 );
   cout &lt;&lt; "Current capacity of v1 = " 
      &lt;&lt; v1.capacity( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Current capacity of v1 = 1
Current capacity of v1 = 20</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__resize">
        <!--c1cb7b49-74bc-4044-aab6-d3d0628a535f-->
        <title>vector::resize</title>
        <content>
            <para>Specifies a new size for a vector.</para>
            <legacySyntax>void resize( size_type <parameterReference>Newsize</parameterReference> );
void resize( size_type <parameterReference>Newsize</parameterReference>, Type <parameterReference>Val</parameterReference> );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Newsize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new size of the vector.</para>
                        </definition>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initialization value of new elements added to the vector if the new size is larger that the original size. If the value is omitted, the new objects use their default constructor.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the container's size is less than the requested size, <parameterReference>Newsize</parameterReference>, elements are added to the vector until it reaches the requested size. If the container's size is larger than the requested size, the elements closest to the end of the container are deleted until the container reaches the size <parameterReference>Newsize</parameterReference>. If the present size of the container is the same as the requested size, no action is taken.</para>
                    <para> <legacyLink xlink:href="#vector__size">size</legacyLink> reflects the current size of the vector.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// vectorsizing.cpp
// compile with: /EHsc /W4
// Illustrates vector::reserve, vector::max_size,
// vector::resize, vector::resize, and vector::capacity.
//
// Functions:
//
//    vector::max_size - Returns maximum number of elements vector could
//                       hold.
//
//    vector::capacity - Returns number of elements for which memory has
//                       been allocated.
//
//    vector::size - Returns number of elements in the vector.
//
//    vector::resize - Reallocates memory for vector, preserves its
//                     contents if new size is larger than existing size.
//
//    vector::reserve - Allocates elements for vector to ensure a minimum
//                      size, preserving its contents if the new size is
//                      larger than existing size.
//
//    vector::push_back - Appends (inserts) an element to the end of a
//                        vector, allocating memory for it if necessary.
//
//////////////////////////////////////////////////////////////////////

// The debugger cannot handle symbols more than 255 characters long.
// STL often creates symbols longer than that.
// The warning can be disabled:
//#pragma warning(disable:4786)

#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;string&gt;

using namespace std;

template &lt;typename C&gt; void print(const string&amp; s, const C&amp; c) {
    cout &lt;&lt; s;

    for (const auto&amp; e : c) {
        cout &lt;&lt; e &lt;&lt; " ";
    }
    cout &lt;&lt; endl;
}

void printvstats(const vector&lt;int&gt;&amp; v) {
    cout &lt;&lt; "   the vector's size is: " &lt;&lt; v.size() &lt;&lt; endl;
    cout &lt;&lt; "   the vector's capacity is: " &lt;&lt; v.capacity() &lt;&lt; endl;
    cout &lt;&lt; "   the vector's maximum size is: " &lt;&lt; v.max_size() &lt;&lt; endl;
}

int main()
{
    // declare a vector that begins with 0 elements.
    vector&lt;int&gt; v;

    // Show statistics about vector.
    cout &lt;&lt; endl &lt;&lt; "After declaring an empty vector:" &lt;&lt; endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    // Add one element to the end of the vector.
    v.push_back(-1);
    cout &lt;&lt; endl &lt;&lt; "After adding an element:" &lt;&lt; endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    for (int i = 1; i &lt; 10; ++i) {
        v.push_back(i);
    }
    cout &lt;&lt; endl &lt;&lt; "After adding 10 elements:" &lt;&lt; endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    v.resize(6);
    cout &lt;&lt; endl &lt;&lt; "After resizing to 6 elements without an initialization value:" &lt;&lt; endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    v.resize(9, 999);
    cout &lt;&lt; endl &lt;&lt; "After resizing to 9 elements with an initialization value of 999:" &lt;&lt; endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    v.resize(12);
    cout &lt;&lt; endl &lt;&lt; "After resizing to 12 elements without an initialization value:" &lt;&lt; endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    // Ensure there's room for at least 1000 elements.
    v.reserve(1000);
    cout &lt;&lt; endl &lt;&lt; "After vector::reserve(1000):" &lt;&lt; endl;
    printvstats(v);

    // Ensure there's room for at least 2000 elements.
    v.resize(2000);
    cout &lt;&lt; endl &lt;&lt; "After vector::resize(2000):" &lt;&lt; endl;
    printvstats(v);
}</code>
                    <!--pass2snip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__reverse_iterator">
        <!--e894bdf8-48a2-4af0-b00d-2de127411313-->
        <title>vector::reverse_iterator</title>
        <content>
            <para>A type that provides a random-access iterator that can read or modify any element in a reversed vector.</para>
            <legacySyntax>typedef std::reverse_iterator&lt;iterator&gt; reverse_iterator;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A type <unmanagedCodeEntityReference>reverse_iterator</unmanagedCodeEntityReference> is used to iterate through the vector in reverse.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#vector__rbegin">rbegin</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__shrink_to_fit">
        <!--bef7342b-48f2-4979-b85d-63e6ae7b44ba-->
        <title>vector::shrink_to_fit</title>
        <content>
            <para>Discards excess capacity.</para>
            <legacySyntax>void shrink_to_fit(
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_shrink_to_fit.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   //vector &lt;int&gt;::iterator Iter;

   v1.push_back( 1 );
   cout &lt;&lt; "Current capacity of v1 = " 
      &lt;&lt; v1.capacity( ) &lt;&lt; endl;
   v1.reserve( 20 );
   cout &lt;&lt; "Current capacity of v1 = " 
      &lt;&lt; v1.capacity( ) &lt;&lt; endl;
   v1.shrink_to_fit();
   cout &lt;&lt; "Current capacity of v1 = " 
      &lt;&lt; v1.capacity( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Current capacity of v1 = 1
Current capacity of v1 = 20
Current capacity of v1 = 1</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__size">
        <!--df1e9e24-8d4d-4967-9cbe-6bdd108b46cb-->
        <title>vector::size</title>
        <content>
            <para>Returns the number of elements in the vector.</para>
            <legacySyntax> <legacyBold>size_type size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of the vector.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_size.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::size_type i;
   
   v1.push_back( 1 );
   i = v1.size( );
   cout &lt;&lt; "Vector length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   v1.push_back( 2 );
   i = v1.size( );
   cout &lt;&lt; "Vector length is now " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector length is 1.
Vector length is now 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__size_type">
        <!--53781296-5428-460e-b7b8-bc7e5ca64c0a-->
        <title>vector::size_type</title>
        <content>
            <para>A type that counts the number of elements in a vector.</para>
            <legacySyntax>typedef typename Allocator::size_type size_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#vector__capacity">capacity</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__swap">
        <!--c0d84486-3ac0-4820-8446-7ba6c4547a2c-->
        <title>vector::swap</title>
        <content>
            <para>Exchanges the elements of two vectors.</para>
            <legacySyntax>void swap(
   vector&lt;Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
);
friend void swap(
   vector&lt;Type, Allocator &gt;&amp; <parameterReference>_Left</parameterReference>,
   vector&lt;Type, Allocator &gt;&amp; <parameterReference>_Right</parameterReference>
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
                            <para>A vector providing the elements to be swapped, or a vector whose elements are to be exchanged with those of the vector <parameterReference>_Left</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A vector whose elements are to be exchanged with those of the vector <parameterReference>_Right</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// vector_swap.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;   
   vector &lt;int&gt; v1, v2;

   v1.push_back( 1 );
   v1.push_back( 2 );
   v1.push_back( 3 );

   v2.push_back( 10 );
   v2.push_back( 20 );

   cout &lt;&lt; "The number of elements in v1 = " &lt;&lt; v1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The number of elements in v2 = " &lt;&lt; v2.size( ) &lt;&lt; endl;
   cout &lt;&lt; endl;

   v1.swap( v2 );

   cout &lt;&lt; "The number of elements in v1 = " &lt;&lt; v1.size( ) &lt;&lt; endl;
   cout &lt;&lt; "The number of elements in v2 = " &lt;&lt; v2.size( ) &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The number of elements in v1 = 3
The number of elements in v2 = 2

The number of elements in v1 = 2
The number of elements in v2 = 3</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__value_type">
        <!--9316559a-a13f-4f4f-83e4-f926da4e8f7b-->
        <title>vector::value_type</title>
        <content>
            <para>A type that represents the data type stored in a vector.</para>
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
                    <code>// vector_value_type.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   vector&lt;int&gt;::value_type AnInt;
   AnInt = 44;
   cout &lt;&lt; AnInt &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>44</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="vector__vector">
        <!--24b14024-3af3-4f4b-89a5-0291744a9f83-->
        <title>vector::vector</title>
        <content>
            <para>Constructs a vector of a specific size or with elements of a specific value or with a specific allocator or as a copy of all or part of some other vector.</para>
            <legacySyntax>vector( ); 
explicit vector(
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
explicit vector(
    size_type <parameterReference>Count</parameterReference>
);
vector(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>
);
vector(
    size_type <parameterReference>Count</parameterReference>,
    const Type&amp; <parameterReference>Val</parameterReference>,
    const Allocator&amp; <parameterReference>Al</parameterReference>
);
vector(
    const vector&amp; <parameterReference>Right</parameterReference>
); 
vector(
    vector&amp;&amp; <parameterReference>Right</parameterReference>
);
vector(
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>,
    const _Allocator&amp; <parameterReference>Al</parameterReference>
);
template&lt;class InputIterator&gt;
    vector(
        InputIterator <parameterReference>First</parameterReference>,
        InputIterator <parameterReference>Last</parameterReference>
    );
template&lt;class InputIterator&gt;
    vector(
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
                                    <para>The allocator class to use with this object. <legacyLink xlink:href="#vector__get_allocator">get_allocator</legacyLink> returns the allocator class for the object. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Count</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The number of elements in the constructed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Val</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The value of the elements in the constructed vector.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>Right</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The vector of which the constructed vector is to be a copy.</para>
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
                                    <para>The initializer_list containing the elmeents to copy.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>All constructors store an allocator object ( <parameterReference>Al</parameterReference>) and initialize the vector.</para>
                    <para>The first two constructors specify an empty initial vector. The second explicitly specifies the allocator type ( <parameterReference>Al</parameterReference>) to be used.</para>
                    <para>The third constructor specifies a repetition of a specified number ( <parameterReference>Count</parameterReference>) of elements of the default value for class <languageKeyword>Type</languageKeyword>.</para>
                    <para>The fourth and fifth constructors specify a repetition of ( <parameterReference>Count</parameterReference>) elements of value <parameterReference>Val</parameterReference>.</para>
                    <para>The sixth constructor specifies a copy of the vector <parameterReference>Right</parameterReference>.</para>
                    <para>The seventh constructor moves the vector <parameterReference>Right</parameterReference>.</para>
                    <para>The eighth constructor uses an initializer_list to specify the elements.</para>
                    <para>The ninth and tenth constructors copy the range [ <parameterReference>First</parameterReference>, <parameterReference>Last</parameterReference>) of a vector.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// vector_ctor.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    vector &lt;int&gt;::iterator v1_Iter, v2_Iter, v3_Iter, v4_Iter, v5_Iter, v6_Iter;

    // Create an empty vector v0
    vector &lt;int&gt; v0;

    // Create a vector v1 with 3 elements of default value 0
    vector &lt;int&gt; v1(3);

    // Create a vector v2 with 5 elements of value 2
    vector &lt;int&gt; v2(5, 2);

    // Create a vector v3 with 3 elements of value 1 and with the allocator 
    // of vector v2
    vector &lt;int&gt; v3(3, 1, v2.get_allocator());

    // Create a copy, vector v4, of vector v2
    vector &lt;int&gt; v4(v2);

    // Create a new temporary vector for demonstrating copying ranges
    vector &lt;int&gt; v5(5);
    for (auto i : v5) {
        v5[i] = i;
    }

    // Create a vector v6 by copying the range v5[_First, _Last)
    vector &lt;int&gt; v6(v5.begin() + 1, v5.begin() + 3);

    cout &lt;&lt; "v1 =";
    for (auto&amp; v : v1){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;

    cout &lt;&lt; "v2 =";
    for (auto&amp; v : v2){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;

    cout &lt;&lt; "v3 =";
    for (auto&amp; v : v3){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;
    cout &lt;&lt; "v4 =";
    for (auto&amp; v : v4){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;

    cout &lt;&lt; "v5 =";
    for (auto&amp; v : v5){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;

    cout &lt;&lt; "v6 =";
    for (auto&amp; v : v6){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;

    // Move vector v2 to vector v7
    vector &lt;int&gt; v7(move(v2));
    vector &lt;int&gt;::iterator v7_Iter;

    cout &lt;&lt; "v7 =";
    for (auto&amp; v : v7){
        cout &lt;&lt; " " &lt;&lt; v;
    }
    cout &lt;&lt; endl;

    vector&lt;int&gt; v8{ { 1, 2, 3, 4 } };
    for (auto&amp; v : v8){
        cout &lt;&lt; " " &lt;&lt; v ;
    }
    cout &lt;&lt; endl;
}
</code>
                    <!--SnipComment-->
                            <computerOutput>v1 = 0 0 0v2 = 2 2 2 2 2v3 = 1 1 1v4 = 2 2 2 2 2v5 = 0 1 2 3 4v6 = 1 2v7 = 2 2 2 2 21 2 3 4</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



