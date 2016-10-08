---
title: "priority_queue Class"
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
ms.assetid: 69fca9cc-a449-4be4-97b7-02ca5db9cbb2
caps.latest.revision: 18
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
# priority_queue Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A template container adaptor class that provides a restriction of functionality limiting access to the top element of some underlying container type, which is always the largest or of the highest priority. New elements can be added to the priority_queue and the top element of the priority_queue can be inspected or removed.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax> <legacyBold>template &lt;</legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Type</parameterReference> <legacyBold>, </legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Container=</parameterReference> <legacyBold>vector</legacyBold> <parameterReference>&lt;Type&gt;,</parameterReference> <legacyBold>class</legacyBold> <parameterReference>Compare=</parameterReference> <legacyBold>less</legacyBold> <parameterReference>&lt;</parameterReference> <legacyBold>typename</legacyBold> <parameterReference> Container</parameterReference> <legacyBold>::value_type</legacyBold> <parameterReference>&gt; </parameterReference> <legacyBold>&gt;</legacyBold> <legacyBold>class priority_queue</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>
                    <legacyItalic>Type</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The element data type to be stored in the priority_queue.</para>
                </definition>
                <definedTerm> <parameterReference>Container</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type of the underlying container used to implement the priority_queue.</para>
                </definition>
                <definedTerm>
                    <legacyItalic>Compare</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The type that provides a function object that can compare two element values as sort keys to determine their relative order in the priority_queue. This argument is optional and the binary predicate <legacyBold>less</legacyBold>
                        <legacyItalic>&lt;</legacyItalic> <legacyBold>typename</legacyBold>
                        <legacyItalic> Container</legacyItalic> <legacyBold>::value_type</legacyBold>
                        <legacyItalic>&gt;</legacyItalic> is the default value.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The elements of class <ui>Type</ui> stipulated in the first template parameter of a queue object are synonymous with <legacyLink xlink:href="#priority_queue__value_type">value_type</legacyLink> and must match the type of element in the underlying container class <legacyBold>Container</legacyBold> stipulated by the second template parameter. The <ui>Type</ui> must be assignable, so that it is possible to copy objects of that type and to assign values to variables of that type.</para>
            <para>The priority_queue orders the sequence it controls by calling a stored function object of class <legacyBold>Traits</legacyBold>. In general, the elements need be merely less than comparable to establish this order: so that, given any two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. On a more technical note, the comparison function is a binary predicate that induces a strict weak ordering in the standard mathematical sense. </para>
            <para>Suitable underlying container classes for priority_queue include <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</legacyLink> and the default <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink> or any other sequence container that supports the operations of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>push_back</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>pop_back</unmanagedCodeEntityReference> and a random-access iterator. The underlying container class is encapsulated within the container adaptor, which exposes only the limited set of the sequence container member functions as a public interface.</para>
            <para>Adding elements to and removing elements from a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> both have logarithmic complexity. Accessing elements in a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> has constant complexity.</para>
            <para>There are three types of container adaptors defined by the STL: stack, queue, and priority_queue. Each restricts the functionality of some underlying container class to provide a precisely controlled interface to a standard data structure.   </para>
            <list class="bullet">
                <listItem>
                    <para>The <legacyLink xlink:href="02151c1e-eab0-41b8-be94-a839ead78ecf">stack class</legacyLink> supports a last-in, first-out (LIFO) data structure. A good analogue to keep in mind would be a stack of plates. Elements (plates) may be inserted, inspected, or removed only from the top of the stack, which is the last element at the end of the base container. The restriction to accessing only the top element is the reason for using the stack class.</para>
                </listItem>
                <listItem>
                    <para>The <legacyLink xlink:href="28c20ab0-3a72-4185-9e0f-5a44eea0e204">queue class</legacyLink> supports a first-in, first-out (FIFO) data structure. A good analogue to keep in mind would be people lining up for a bank teller. Elements (people) may be added to the back of the line and are removed from the front of the line. Both the front and the back of a line may be inspected. The restriction to accessing only the front and back elements in this way is the reason for using the queue class.</para>
                </listItem>
                <listItem>
                    <para>The priority_queue class orders its elements so that the largest element is always at the top position. It supports insertion of an element and the inspection and removal of the top element. A good analogue to keep in mind would be people lining up where they are arranged by age, height, or some other criterion.</para>
                </listItem>
            </list>
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
                                    <para> <legacyLink xlink:href="#priority_queue__priority_queue">priority_queue</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> that is empty or that is a copy of a range of a base container object or of other <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference>.</para>
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
                                    <para> <legacyLink xlink:href="#priority_queue__container_type">container_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides the base container to be adapted by a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#priority_queue__size_type">size_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>An unsigned integer type that can represent the number of elements in a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#priority_queue__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the type of object stored as an element in a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference>.</para>
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
                                    <para> <legacyLink xlink:href="#priority_queue__empty">empty</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tests if the <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> is empty.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#priority_queue__pop">pop</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes the largest element of the <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> from the top position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#priority_queue__push">push</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the priority queue based on the priority of the element from operator&lt;.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#priority_queue__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements in the <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#priority_queue__top">top</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a const reference to the largest element at the top of the <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference>.</para>
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
            <para> <legacyBold>Header:</legacyBold> &lt;queue&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="priority_queue__container_type">
        <!--025e3488-24cd-4e9c-930d-a546c9e912c2-->
        <title>priority_queue::container_type</title>
        <content>
            <para>A type that provides the base container to be adapted.</para>
            <legacySyntax> <legacyBold>typedef Container</legacyBold> <legacyBold>container_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the template parameter <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference>. The STL sequence container class deque and the default class vector meet the requirements to be used as the base container for a priority_queue object. User-defined types satisfying the requirements may also be used.</para>
                    <para>For more information on <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference>, see the Remarks section of the <link xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue Class</link> topic.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#priority_queue__priority_queue">priority_queue</legacyLink> for an example of how to declare and use <unmanagedCodeEntityReference>container_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__empty">
        <!--a551d62d-3569-477e-a629-2d8b8388c4c1-->
        <title>priority_queue::empty</title>
        <content>
            <para>Tests if a priority_queue is empty.</para>
            <legacySyntax> <legacyBold>bool empty( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the priority_queue is empty; <legacyBold>false</legacyBold> if the priority_queue is nonempty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_empty.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue &lt;int&gt; q1, s2;

   q1.push( 1 );

   if ( q1.empty( ) )
      cout &lt;&lt; "The priority_queue q1 is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The priority_queue q1 is not empty." &lt;&lt; endl;

   if ( s2.empty( ) )
      cout &lt;&lt; "The priority_queue s2 is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The priority_queue s2 is not empty." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The priority_queue q1 is not empty.
The priority_queue s2 is empty.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__pop">
        <!--07f96fb8-d838-4321-9342-96daa3e130cf-->
        <title>priority_queue::pop</title>
        <content>
            <para>Removes the largest element of the priority_queue from the top position.</para>
            <legacySyntax> <legacyBold>void pop( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The priority_queue must be nonempty to apply the member function. The top of the priority_queue is always occupied by the largest element in the container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_pop.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   priority_queue &lt;int&gt; q1, s2;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   priority_queue &lt;int&gt;::size_type i, iii;
   i = q1.size( );
   cout &lt;&lt; "The priority_queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   const int&amp; ii = q1.top( );
   cout &lt;&lt; "The element at the top of the priority_queue is "
        &lt;&lt; ii &lt;&lt; "." &lt;&lt; endl;

   q1.pop( );

   iii = q1.size( );
   cout &lt;&lt; "After a pop, the priority_queue length is " 
        &lt;&lt; iii &lt;&lt; "." &lt;&lt; endl;

   const int&amp; iv = q1.top( );
   cout &lt;&lt; "After a pop, the element at the top of the "
        &lt;&lt; "priority_queue is " &lt;&lt; iv &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The priority_queue length is 3.
The element at the top of the priority_queue is 30.
After a pop, the priority_queue length is 2.
After a pop, the element at the top of the priority_queue is 20.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__priority_queue">
        <!--1761ee2e-4e18-4f39-bf9f-910404d46a2c-->
        <title>priority_queue::priority_queue</title>
        <content>
            <para>Constructs a priority_queue that is empty or that is a copy of a range of a base container object or of another priority_queue. </para>
            <legacySyntax> <legacyBold>priority_queue( );</legacyBold> <legacyBold>explicit priority_queue(</legacyBold> <legacyBold>   const Traits&amp; </legacyBold> <parameterReference>__Comp</parameterReference> <legacyBold>);</legacyBold> <legacyBold>priority_queue(</legacyBold> <legacyBold>   const Traits&amp; </legacyBold> <parameterReference>__Comp</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   const container_type&amp; </legacyBold> <parameterReference>_Cont</parameterReference> <legacyBold>);</legacyBold> <legacyBold>priority_queue(</legacyBold> <legacyBold>   const priority_queue&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator&gt;</legacyBold> <legacyBold>   priority_queue(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator&gt;</legacyBold> <legacyBold>   priority_queue(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Traits&amp; </legacyBold> <parameterReference>__Comp</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator&gt;</legacyBold> <legacyBold>   priority_queue(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Traits&amp; </legacyBold> <parameterReference>__Comp</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const container_type&amp; </legacyBold> <parameterReference>_Cont</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>__Comp</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The comparison function of type <legacyBold>const</legacyBold> <legacyBold>Traits</legacyBold> used to order the elements in the priority_queue, which defaults to compare function of the base container.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The base container of which the constructed priority_queue is to be a copy.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The priority_queue of which the constructed set is to be a copy.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position of the first element in the range of elements to be copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position of the first element beyond the range of elements to be copied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Each of the first three constructors specifies an empty initial priority_queue, the second also specifying the type of comparison function ( <parameterReference>_Comp</parameterReference>) to be used in establishing the order of the elements and the third explicitly specifying the <unmanagedCodeEntityReference>container_type</unmanagedCodeEntityReference> ( <parameterReference>_Cont</parameterReference>) to be used. The keyword <legacyBold>explicit</legacyBold> suppresses certain kinds of automatic type conversion.</para>
                    <para>The fourth constructor specifies a copy of the priority_queue <parameterReference>_Right</parameterReference>.</para>
                    <para>The last three constructors copy the range [                        <legacyItalic>_First, _Last</legacyItalic>) of some container and use the values to initialize a priority_queue with increasing explicitness in specifying the type of comparison function of class <legacyBold>Traits</legacyBold> and <unmanagedCodeEntityReference>container_type</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_ctor.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   // The first member function declares priority_queue
   // with a default vector base container
   priority_queue &lt;int&gt; q1;
   cout &lt;&lt; "q1 = ( ";
   while ( !q1.empty( ) )
   {
      cout &lt;&lt; q1.top( ) &lt;&lt; " ";
      q1.pop( );
   }
   cout &lt;&lt; ")" &lt;&lt; endl;

   // Explicitly declares a priority_queue with nondefault
   // deque base container
   priority_queue &lt;int, deque &lt;int&gt; &gt; q2;
   q2.push( 5 );
   q2.push( 15 );
   q2.push( 10 );
   cout &lt;&lt; "q2 = ( ";
   while ( !q2.empty( ) )
   {
      cout &lt;&lt; q2.top( ) &lt;&lt; " ";
      q2.pop( );
   }
   cout &lt;&lt; ")" &lt;&lt; endl;

   // This method of printing out the elements of a priority_queue
   // removes the elements from the priority queue, leaving it empty
   cout &lt;&lt; "After printing, q2 has " &lt;&lt; q2.size( ) &lt;&lt; " elements." &lt;&lt; endl;

   // The third member function declares a priority_queue 
   // with a vector base container and specifies that the comparison 
   // function greater is to be used for ordering elements
   priority_queue &lt;int, vector&lt;int&gt;, greater&lt;int&gt; &gt; q3;
   q3.push( 2 );
   q3.push( 1 );
   q3.push( 3 );
   cout &lt;&lt; "q3 = ( ";
   while ( !q3.empty( ) )
   {
      cout &lt;&lt; q3.top( ) &lt;&lt; " ";
      q3.pop( );
   }
   cout &lt;&lt; ")" &lt;&lt; endl;

   // The fourth member function declares a priority_queue and
   // initializes it with elements copied from another container:
   // first, inserting elements into q1, then copying q1 elements into q4
   q1.push( 100 );
   q1.push( 200 );
   priority_queue &lt;int&gt; q4( q1 );
   cout &lt;&lt; "q4 = ( ";   
   while ( !q4.empty( ) )
   {
      cout &lt;&lt; q4.top( ) &lt;&lt; " ";
      q4.pop( );
   }
   cout &lt;&lt; ")" &lt;&lt; endl;

   // Creates an auxiliary vector object v5 to be used to initialize q5
   vector &lt;int&gt; v5;
   vector &lt;int&gt;::iterator v5_Iter;
   v5.push_back( 10 );
   v5.push_back( 30 );
   v5.push_back( 20 );
   cout &lt;&lt; "v5 = ( " ;
   for ( v5_Iter = v5.begin( ) ; v5_Iter != v5.end( ) ; v5_Iter++ )
      cout &lt;&lt; *v5_Iter &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // The fifth member function declares and
   // initializes a priority_queue q5 by copying the
   // range v5[_First, _Last) from vector v5
   priority_queue &lt;int&gt; q5( v5.begin( ), v5.begin( ) + 2 );
   cout &lt;&lt; "q5 = ( ";
   while ( !q5.empty( ) )
   {
      cout &lt;&lt; q5.top( ) &lt;&lt; " ";
      q5.pop( );
   }
   cout &lt;&lt; ")" &lt;&lt; endl;

   // The sixth member function declares a priority_queue q6
   // with a comparison function greater and initializes q6
   // by copying the range v5[_First, _Last) from vector v5
   priority_queue &lt;int, vector&lt;int&gt;, greater&lt;int&gt; &gt; 
      q6( v5.begin( ), v5.begin( ) + 2 );
   cout &lt;&lt; "q6 = ( ";
   while ( !q6.empty( ) )
   {
      cout &lt;&lt; q6.top( ) &lt;&lt; " ";
      q6.pop( );
   }
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__push">
        <!--a938ff06-6891-4a01-bc39-8d557d1349bc-->
        <title>priority_queue::push</title>
        <content>
            <para>Adds an element to the priority queue based on the priority of the element from operator&lt;.</para>
            <legacySyntax> <legacyBold>void push(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>The element added to the top of the priority_queue.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The top of the priority_queue is the position occupied by the largest element in the container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_push.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   priority_queue&lt;int&gt; q1;

   q1.push( 10 );
   q1.push( 30 );
   q1.push( 20 );

   priority_queue&lt;int&gt;::size_type i;
   i = q1.size( );
   cout &lt;&lt; "The priority_queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   const int&amp; ii = q1.top( );
   cout &lt;&lt; "The element at the top of the priority_queue is "
        &lt;&lt; ii &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The priority_queue length is 3.
The element at the top of the priority_queue is 30.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__size">
        <!--c93ef447-1026-4a0e-9cf5-74a0c79d1223-->
        <title>priority_queue::size</title>
        <content>
            <para>Returns the number of elements in the priority_queue.</para>
            <legacySyntax> <legacyBold>size_type size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of the priority_queue.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_size.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   priority_queue &lt;int&gt; q1, q2;
   priority_queue &lt;int&gt;::size_type i;

   q1.push( 1 );
   i = q1.size( );
   cout &lt;&lt; "The priority_queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   q1.push( 2 );
   i = q1.size( );
   cout &lt;&lt; "The priority_queue length is now " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The priority_queue length is 1.
The priority_queue length is now 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__size_type">
        <!--fef76a3e-71fe-4a6c-838b-b36b6fa4d31f-->
        <title>priority_queue::size_type</title>
        <content>
            <para>An unsigned integer type that can represent the number of elements in a priority_queue.</para>
            <legacySyntax> <legacyBold>typedef typename Container::size_type</legacyBold> <legacyBold>size_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the <unmanagedCodeEntityReference>size_type</unmanagedCodeEntityReference> of the base container adapted by the priority_queue.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#priority_queue__size">size</legacyLink> for an example of how to declare and use <unmanagedCodeEntityReference>size_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__top">
        <!--f2345dfc-fd43-4dbe-9066-8cbcaa126b9f-->
        <title>priority_queue::top</title>
        <content>
            <para>Returns a const reference to the largest element at the top of the priority_queue.</para>
            <legacySyntax>const_reference top( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the largest element, as determined by the <legacyBold>Traits </legacyBold>function, object of the priority_queue.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The priority_queue must be nonempty to apply the member function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_top.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   priority_queue&lt;int&gt; q1;

   q1.push( 10 );
   q1.push( 30 );
   q1.push( 20 );

   priority_queue&lt;int&gt;::size_type i;
   i = q1.size( );
   cout &lt;&lt; "The priority_queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   const int&amp; ii = q1.top( );
   cout &lt;&lt; "The element at the top of the priority_queue is "
        &lt;&lt; ii &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The priority_queue length is 3.
The element at the top of the priority_queue is 30.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="priority_queue__value_type">
        <!--a41cd4f9-8e70-4748-8c86-7fa7967653b4-->
        <title>priority_queue::value_type</title>
        <content>
            <para>A type that represents the type of object stored as an element in a priority_queue.</para>
            <legacySyntax>typedef typename Container::value_type value_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the <unmanagedCodeEntityReference>value_type</unmanagedCodeEntityReference> of the base container adapted by the priority_queue.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// pqueue_value_type.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue&lt;int&gt;::value_type AnInt;
   
   AnInt = 69;
   cout &lt;&lt; "The value_type is AnInt = " &lt;&lt; AnInt &lt;&lt; endl;

   priority_queue&lt;int&gt; q1;
   q1.push( AnInt );
   cout &lt;&lt; "The element at the top of the priority_queue is "
        &lt;&lt; q1.top( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The value_type is AnInt = 69
The element at the top of the priority_queue is 69.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



