---
title: "back_insert_iterator Class"
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
ms.assetid: a1ee07f2-cf9f-46a1-8608-cfaf207f9713
caps.latest.revision: 14
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
# back_insert_iterator Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Describes an iterator adaptor that satisfies the requirements of an output iterator. It inserts, rather than overwrites, elements into the back end of a sequence and thus provides semantics that are different from the overwrite semantics provided by the iterators of the C++ sequence containers. The             <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> class is templatized on the type of container.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>template &lt;class             <parameterReference>Container</parameterReference>&gt; class back_insert_iterator;</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>
                    <parameterReference>Container</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type of container into the back of which elements are to be inserted by a                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference>.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The container must satisfy the requirements for a back insertion sequence where is it possible to insert elements at the end of the sequence in amortized constant time. STL sequence containers defined by the                 <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</legacyLink>,                 <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list Class</legacyLink> and                 <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink> provide the needed                 <unmanagedCodeEntityReference>push_back</unmanagedCodeEntityReference> member function and satisfy these requirements. These three containers as well as strings may each be adapted to use with                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference>s. A                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> must always be initialized with its container.</para>
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
                                    <para>
                                        <legacyLink xlink:href="#back_insert_iterator__back_insert_iterator">back_insert_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a                                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> that inserts elements after the last element in a container.</para>
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
                                    <para>
                                        <legacyLink xlink:href="#back_insert_iterator__container_type">container_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a container for the                                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#back_insert_iterator__reference">reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference for the                                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference>.</para>
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
                                    <para>
                                        <legacyLink xlink:href="#back_insert_iterator__operator_star">operator*</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Dereferencing operator used to implement the output iterator expression *                                        <parameterReference>i</parameterReference> =                                         <parameterReference>x</parameterReference> for a back insertion.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#back_insert_iterator__operator_add_add">operator++</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Increments the                                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> to the next location into which a value may be stored.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#back_insert_iterator__operator_eq">operator=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Assignment operator used to implement the output iterator expression *                                        <parameterReference>i</parameterReference> =                                         <parameterReference>x</parameterReference> for a back insertion.</para>
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
            <para>
                <legacyBold>Header</legacyBold>: &lt;iterator&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="back_insert_iterator__back_insert_iterator">
        <!--074128fd-d376-4f02-930f-d6cfe1bfc4f8-->
        <title>back_insert_iterator::back_insert_iterator</title>
        <content>
            <para>Constructs a                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> that inserts elements after the last element in a container.</para>
            <legacySyntax>
                <legacyBold>explicit back_insert_iterator(</legacyBold>
                <legacyBold>   Container&amp; </legacyBold>
                <parameterReference>_Cont</parameterReference>
                <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>_Cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The container that the                                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> is to insert an element into.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> for the parameter container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// back_insert_iterator_back_insert_iterator.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for ( i = 1 ; i &lt; 4 ; ++i )  
   {
      vec.push_back ( i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The initial vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Insertions with member function
   back_inserter ( vec ) = 40;
   back_inserter ( vec ) = 50;

   // Alternatively, insertions can be done with template function
   back_insert_iterator&lt;vector&lt;int&gt; &gt; backiter ( vec );
   *backiter = 600;
   backiter++;
   *backiter = 700;

   cout &lt;&lt; "After the insertions, the vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The initial vector vec is: ( 1 2 3 ).
After the insertions, the vector vec is: ( 1 2 3 40 50 600 700 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="back_insert_iterator__container_type">
        <!--791678bf-72e3-4b51-829b-66053aa343e7-->
        <title>back_insert_iterator::container_type</title>
        <content>
            <para>A type that provides a container for the                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>typedef Container</legacyBold>
                <legacyBold>container_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the template parameter                         <legacyBold>Container</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// back_insert_iterator_container_type.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for (i = 1 ; i &lt; 4 ; ++i )  
   {
      vec.push_back (  i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The original vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   back_insert_iterator&lt;vector&lt;int&gt; &gt;::container_type vec1 = vec;
   back_inserter ( vec1 ) = 40;

   cout &lt;&lt; "After the insertion, the vector is: ( ";
   for ( vIter = vec1.begin ( ) ; vIter != vec1.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The original vector vec is: ( 1 2 3 ).
After the insertion, the vector is: ( 1 2 3 40 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="back_insert_iterator__operator_star">
        <!--63ab6117-8945-4c5d-8e6a-65b471e64a05-->
        <title>back_insert_iterator::operator*</title>
        <content>
            <para>Dereferencing operator used to implement the output iterator expression *                <legacyItalic>i</legacyItalic> =                 <legacyItalic>x</legacyItalic>.</para>
            <legacySyntax>back_insert_iterator&lt;Container&gt;&amp; operator*( );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the element inserted at the back of the container.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Used to implement the output iterator expression                         <legacyBold>*Iter</legacyBold> =                         <legacyBold>value</legacyBold>. If                         <legacyBold>Iter</legacyBold> is an iterator that addresses an element in a sequence, then                         <legacyBold>*Iter </legacyBold>=                         <legacyBold>value</legacyBold> replaces that element with value and does not change the total number of elements in the sequence.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// back_insert_iterator_back_insert.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for (i = 1 ; i &lt; 4 ; ++i )  
   {
      vec.push_back ( i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   back_insert_iterator&lt;vector&lt;int&gt; &gt; backiter ( vec );
   *backiter = 10;
   backiter++;      // Increment to the next element
   *backiter = 20;
   backiter++;

   cout &lt;&lt; "After the insertions, the vector vec becomes: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The vector vec is: ( 1 2 3 ).
After the insertions, the vector vec becomes: ( 1 2 3 10 20 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="back_insert_iterator__operator_add_add">
        <!--a89795aa-c712-4c8a-9a75-2e03e65f0b23-->
        <title>back_insert_iterator::operator++</title>
        <content>
            <para>Increments the                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> to the next location into which a value may be stored.</para>
            <legacySyntax>back_insert_iterator&lt;Container&gt;&amp; operator++( );
back_insert_iterator&lt;Container&gt; operator++( int );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> addressing the next location into which a value may be stored.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Both preincrementation and postincrementation operators return the same result.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// back_insert_iterator_op_incre.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for (i = 1 ; i &lt; 3 ; ++i )  
   {
      vec.push_back ( 10 * i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   back_insert_iterator&lt;vector&lt;int&gt; &gt; backiter ( vec );
   *backiter = 30;
   backiter++;      // Increment to the next element
   *backiter = 40;
   backiter++;

   cout &lt;&lt; "After the insertions, the vector vec becomes: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The vector vec is: ( 10 20 ).
After the insertions, the vector vec becomes: ( 10 20 30 40 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="back_insert_iterator__operator_eq">
        <!--f0fa0a30-6b55-4c65-a9a8-240aec2ca0a6-->
        <title>back_insert_iterator::operator=</title>
        <content>
            <para>Appends or pushes a value onto the back end of a container.</para>
            <legacySyntax>back_insert_iterator&lt;Container&gt;&amp; operator=(
   typename Container::const_reference                 <parameterReference>_Val</parameterReference>
);
 back_insert_iterator&lt;Container&gt;&amp; operator=(
   typename Container::value_type&amp;&amp;                 <parameterReference>_Val</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be inserted into the container.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the last element inserted at the back of the container.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first member operator evaluates                         <codeInline>Container.push_back(_Val)</codeInline>, </para>
                    <para>then returns                         <codeInline>*this</codeInline>. The second member operator evaluates </para>
                    <para>
                        <codeInline>container-&gt;push_back((typename Container::value_type&amp;&amp;)val)</codeInline>, </para>
                    <para>then returns                         <codeInline>*this</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// back_insert_iterator_op_assign.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for (i = 1 ; i &lt; 4 ; ++i )  
   {
      vec.push_back ( i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   back_insert_iterator&lt;vector&lt;int&gt; &gt; backiter ( vec );
   *backiter = 10;
   backiter++;      // Increment to the next element
   *backiter = 20;
   backiter++;

   cout &lt;&lt; "After the insertions, the vector vec becomes: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="back_insert_iterator__reference">
        <!--899f61d0-3922-4a22-a338-9400174a8342-->
        <title>back_insert_iterator::reference</title>
        <content>
            <para>A type that provides a reference for the                 <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>typedef typename Container::reference reference;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type describes a reference to an element of the sequence controlled by the associated container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// back_insert_iterator_reference.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for (i = 1 ; i &lt; 4 ; ++i )  
   {
      vec.push_back ( i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   back_insert_iterator&lt;vector&lt;int&gt; &gt;::reference 
        RefLast = *(vec.end ( ) - 1 );
   cout &lt;&lt; "The last element in the vector vec is: " 
        &lt;&lt; RefLast &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The vector vec is: ( 1 2 3 ).
The last element in the vector vec is: 3.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics>
        <link xlink:href="c61a3962-f3ed-411a-b5a3-e8b3c2b500bd">&lt;iterator&gt;</link>
        <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
        <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>
