---
title: "vector&lt;bool&gt; Class"
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
ms.assetid: 8028c8ed-ac9c-4f06-aba1-5de45c00aafb
caps.latest.revision: 24
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
# vector&lt;bool&gt; Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> class is a partial specialization of <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</legacyLink> for elements of type <unmanagedCodeEntityReference>bool</unmanagedCodeEntityReference>. It has an allocator for the underlying type that's used by the specialization, which provides space optimization by storing one <unmanagedCodeEntityReference>bool</unmanagedCodeEntityReference> value per bit.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax> <legacyBold>template&lt;class Allocator = allocator&lt;bool&gt;&gt; class vector&lt; bool, Allocator &gt;</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>This class template specialization behaves like <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</legacyLink>, except for the differences explained in this article. </para>
            <para>Operations that deal with the <unmanagedCodeEntityReference>bool</unmanagedCodeEntityReference> type correspond to values in the container storage. <unmanagedCodeEntityReference>allocator_traits::construct</unmanagedCodeEntityReference> is not used to construct these values.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title/>
        <content>
            <para/>
        </content>
        <sections>
            <section>
                <title>Typedefs</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___const_pointer">const_pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A typedef to a <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference> that can serve as a constant pointer to a Boolean element of the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___const_reference">const_reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A typedef for <unmanagedCodeEntityReference>bool</unmanagedCodeEntityReference>. After initialization, it does not observe updates to the original value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___pointer">pointer</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A typedef to an <unmanagedCodeEntityReference>iterator</unmanagedCodeEntityReference> that can serve as a pointer to a Boolean element of the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>.</para>
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
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___flip">flip</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reverses all bits in the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___swap">swap</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Exchanges the elements of two <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>s.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___operator_at">operator[]</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a simulated reference to the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> element at a specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>at</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Functions the same as the unspecialized <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__at">vector::at</legacyLink> function, except that it uses the proxy class <legacyLink xlink:href="#vector_lt_bool_gt___reference_class">vector&lt;bool&gt;::reference</legacyLink>. Also see <legacyLink xlink:href="#vector_lt_bool_gt___operator_at">operator[]</legacyLink>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Functions the same as the unspecialized <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__front">vector::front</legacyLink> function, except that it uses the proxy class <legacyLink xlink:href="#vector_lt_bool_gt___reference_class">vector&lt;bool&gt;::reference</legacyLink>. Also see <legacyLink xlink:href="#vector_lt_bool_gt___operator_at">operator[]</legacyLink>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>back</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Functions the same as the unspecialized <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__back">vector::back</legacyLink> function, except that it uses the proxy class <legacyLink xlink:href="#vector_lt_bool_gt___reference_class">vector&lt;bool&gt;::reference</legacyLink>. Also see <legacyLink xlink:href="#vector_lt_bool_gt___operator_at">operator[]</legacyLink>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Proxy Class</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#vector_lt_bool_gt___reference_class">vector&lt;bool&gt; reference Class</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A class that acts as a proxy to simulate <unmanagedCodeEntityReference>bool&amp;</unmanagedCodeEntityReference> behavior, and whose objects can provide references to elements (single bits) within a <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> object.</para>
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
            <para> <legacyBold>Header</legacyBold>: &lt;vector&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="vector_lt_bool_gt___const_pointer">
        <!--16a7c1b0-3b29-4500-90ef-5430fa399cf6-->
        <title>vector&lt;bool&gt;::const_pointer</title>
        <content>
            <para>A type that describes an object that can serve as a constant pointer to a Boolean element of the sequence contained by the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>typedef const_iterator const_pointer;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="vector_lt_bool_gt___const_reference">
        <!--28939e9b-607b-4ab4-92b5-255b3947d43e-->
        <title>vector&lt;bool&gt;::const_reference</title>
        <content>
            <para>A type that describes an object that can serve as a constant reference to a Boolean element of the sequence contained by the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>typedef bool const_reference;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information and code examples, see <link xlink:href="#vector_lt_bool_gt___reference_operator_eq">vector&lt;bool&gt;::reference::operator=</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector_lt_bool_gt___flip">
        <!--37c0413c-8053-42ee-b642-432e3f1eb5e7-->
        <title>vector&lt;bool&gt;::flip</title>
        <content>
            <para>Reverses all bits in a <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>.</para>
            <legacySyntax> <legacyBold>void flip();</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// vector_bool_flip.cpp
// compile with: /EHsc /W4
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    cout &lt;&lt; boolalpha; // format output for subsequent code

    vector&lt;bool&gt; vb = { true, false, false, true, true };
    cout &lt;&lt; "The vector is:" &lt;&lt; endl &lt;&lt; "    ";
    for (const auto&amp; b : vb) {
        cout &lt;&lt; b &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    vb.flip();

    cout &lt;&lt; "The flipped vector is:" &lt;&lt; endl &lt;&lt; "    ";
    for (const auto&amp; b : vb) {
        cout &lt;&lt; b &lt;&lt; " ";
    }
    cout &lt;&lt; endl;
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector_lt_bool_gt___operator_at">
        <!--97738633-690d-4069-b2d9-8c54104fbfdd-->
        <title>vector&lt;bool&gt;::operator[]</title>
        <content>
            <para>Returns a simulated reference to the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> element at a specified position.</para>
            <legacySyntax>vector&lt;bool&gt;::reference operator[](size_type <parameterReference>Pos</parameterReference>);
vector&amp;&lt;bool&amp;&gt;::const_reference operator[](size_type <parameterReference>Pos</parameterReference>) const;</legacySyntax>
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
                                    <para>The position of the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> element.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para/>
                    <para>A <legacyLink xlink:href="#vector_lt_bool_gt___reference_class">vector&lt;bool&gt;::reference</legacyLink> or <legacyLink xlink:href="#vector_lt_bool_gt___const_reference">vector&lt;bool&gt;::const_reference</legacyLink> object that contains the value of the indexed element.</para>
                    <para>If the position specified is greater than or equal to the size of the container, the result is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If you compile with <unmanagedCodeEntityReference>_ITERATOR_DEBUG_LEVEL</unmanagedCodeEntityReference> set, a run-time error occurs if you attempt to access an element outside the bounds of the vector.  For more information, see <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>This code example shows the correct use of <unmanagedCodeEntityReference>vector&lt;bool&gt;::operator[]</unmanagedCodeEntityReference> and two common coding mistakes, which are commented out. These mistakes cause errors because the address of the <unmanagedCodeEntityReference>vector&lt;bool&gt;::reference</unmanagedCodeEntityReference> object that <unmanagedCodeEntityReference>vector&lt;bool&gt;::operator[]</unmanagedCodeEntityReference> returns cannot be taken.</para>
                        <!--EndSnipComment-->
                    <code language="cpp">
// cl.exe /EHsc /nologo /W4 /MTd 
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    cout &lt;&lt; boolalpha;
    vector&lt;bool&gt; vb;

    vb.push_back(true);
    vb.push_back(false);

    //    bool* pb = &amp;vb[1]; // conversion error -                         <codeFeaturedElement>do not use</codeFeaturedElement>
    //    bool&amp; refb = vb[1];   // conversion error -                         <codeFeaturedElement>do not use</codeFeaturedElement>
    bool hold = vb[1];
    cout &lt;&lt; "The second element of vb is " &lt;&lt; vb[1] &lt;&lt; endl;
    cout &lt;&lt; "The held value from the second element of vb is " &lt;&lt; hold &lt;&lt; endl;

    // Note this doesn't modify hold.
    vb[1] = true;
    cout &lt;&lt; "The second element of vb is " &lt;&lt; vb[1] &lt;&lt; endl;
    cout &lt;&lt; "The held value from the second element of vb is " &lt;&lt; hold &lt;&lt; endl;
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="vector_lt_bool_gt___pointer">
        <!--e807615c-4a94-422d-ac53-6fd97179a89c-->
        <title>vector&lt;bool&gt;::pointer</title>
        <content>
            <para>A type that describes an object that can serve as a pointer to a Boolean element of the sequence contained by the <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>typedef iterator pointer;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="vector_lt_bool_gt___reference_class">
        <!--f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334-->
        <title>vector&lt;bool&gt;::reference Class</title>
        <content>
            <para>The <unmanagedCodeEntityReference>vector&lt;bool&gt;::reference</unmanagedCodeEntityReference> class is a proxy class provided by the <legacyLink xlink:href="8028c8ed-ac9c-4f06-aba1-5de45c00aafb">vector&lt;bool&gt; Class</legacyLink> to simulate <unmanagedCodeEntityReference>bool&amp;</unmanagedCodeEntityReference>.</para>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A simulated reference is required because C++ does not natively allow direct references to bits. <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> uses only one bit per element, which can be referenced by using this proxy class. However, the reference simulation is not complete because certain assignments are not valid. For example, because the address of the <unmanagedCodeEntityReference>vector&lt;bool&gt;::reference</unmanagedCodeEntityReference> object cannot be taken, the following code that uses <legacyLink xlink:href="#vector_lt_bool_gt___operator_at">vector&lt;bool&gt;::operator[]</legacyLink> is not correct:</para>
                    <code language="cpp">    vector&lt;bool&gt; vb;
...
    bool* pb = &amp;vb[1]; // conversion error -                         <codeFeaturedElement>do not use</codeFeaturedElement>
    bool&amp; refb = vb[1];   // conversion error -                         <codeFeaturedElement>do not use</codeFeaturedElement>
                    </code>
                </content>
            </section>
			   
	   <section address="vector_lt_bool_gt___reference_flip">
        <!--ef940365-cbe4-4a87-a3e2-1f3cfa357e29-->
        <title>vector&lt;bool&gt;::reference::flip</title>
        <content>
            <para>Inverts the Boolean value of a referenced <legacyLink xlink:href="8028c8ed-ac9c-4f06-aba1-5de45c00aafb">vector&lt;bool&gt;</legacyLink> element.</para>
            <legacySyntax>void flip();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>   </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                   <code language="cpp">// vector_bool_ref_flip.cpp
// compile with: /EHsc /W4
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    cout &lt;&lt; boolalpha;

    vector&lt;bool&gt; vb = { true, false, false, true, true };

    cout &lt;&lt; "The vector is: " &lt;&lt; endl &lt;&lt; "    ";
    for (const auto&amp; b : vb) {
        cout &lt;&lt; b &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    vector&lt;bool&gt;::reference vbref = vb.front();
    vbref.flip();

    cout &lt;&lt; "The vector with first element flipped is: " &lt;&lt; endl &lt;&lt; "    ";
    for (const auto&amp; b : vb) {
        cout &lt;&lt; b &lt;&lt; " ";
    }
    cout &lt;&lt; endl;
}
/* Output:
The vector is:
    true false false true true
The vector with first element flipped is:
    false false false true true
	*/
</code>
                </content>
            </section>
        </sections>
    </section>
	   <section address="vector_lt_bool_gt___reference_operator_bool">
        <!--b0e57869-18cc-4296-9061-da502f30120d-->
        <title>vector&lt;bool&gt;::reference::operator bool</title>
        <content>
             <para>Provides an implicit conversion from <unmanagedCodeEntityReference>vector&lt;bool&gt;::reference</unmanagedCodeEntityReference> to <unmanagedCodeEntityReference>bool</unmanagedCodeEntityReference>.</para>
            <legacySyntax>operator bool( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The Boolean value of the element of the vector&lt;bool&gt; object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                   <para>The <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference> object cannot be modified by this operator.</para>
                </content>
            </section>
        </sections>
    </section>
	<section address="vector_lt_bool_gt___reference_operator_eq">
        <!--eed20d81-36b9-40b2-a3b6-340ed0bb4f34-->
        <title>vector&lt;bool&gt;::reference::operator=</title>
        <content>
             <para>Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.</para>
            <legacySyntax>reference&amp; operator=(
   const reference&amp; <parameterReference>Right</parameterReference>
);
reference&amp; operator=(
   bool <parameterReference>Val</parameterReference>
);</legacySyntax>

        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                  
      <definitionTable>
        <definedTerm>
          <parameterReference>Right</parameterReference>
        </definedTerm>
        <definition>
          <para>The element reference whose value is to be assigned to the bit. </para>
        </definition>
        <definedTerm>
          <parameterReference>Val</parameterReference>
        </definedTerm>
        <definition>
          <para>The Boolean value to be assigned to the bit.</para>
        </definition>
      </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                   
    <code language="cpp">// vector_bool_ref_op_assign.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

using namespace std;

template &lt;typename C&gt; void print(const string&amp; s, const C&amp; c) {
    cout &lt;&lt; s;

    for (const auto&amp; e : c) {
        cout &lt;&lt; e &lt;&lt; " ";
    }

    cout &lt;&lt; endl;
}

int main()
{
    cout &lt;&lt; boolalpha;

    vector&lt;bool&gt; vb = { true, false, false, true, true };

    print("The vector is: ", vb);

    // Invoke vector&lt;bool&gt;::reference::operator=()
    vector&lt;bool&gt;::reference refelem1 = vb[0];
    vector&lt;bool&gt;::reference refelem2 = vb[1];
    vector&lt;bool&gt;::reference refelem3 = vb[2];

    bool b1 = refelem1;
    bool b2 = refelem2;
    bool b3 = refelem3;
    cout &lt;&lt; "The original value of the 1st element stored in a bool: " &lt;&lt; b1 &lt;&lt; endl;
    cout &lt;&lt; "The original value of the 2nd element stored in a bool: " &lt;&lt; b2 &lt;&lt; endl;
    cout &lt;&lt; "The original value of the 3rd element stored in a bool: " &lt;&lt; b3 &lt;&lt; endl;
    cout &lt;&lt; endl;

    refelem2 = refelem1;

    print("The vector after assigning refelem1 to refelem2 is now: ", vb);

    refelem3 = true;

    print("The vector after assigning false to refelem1 is now: ", vb);

    // The initial values are still stored in the bool variables and remained unchanged
    cout &lt;&lt; "The original value of the 1st element still stored in a bool: " &lt;&lt; b1 &lt;&lt; endl;
    cout &lt;&lt; "The original value of the 2nd element still stored in a bool: " &lt;&lt; b2 &lt;&lt; endl;
    cout &lt;&lt; "The original value of the 3rd element still stored in a bool: " &lt;&lt; b3 &lt;&lt; endl;
    cout &lt;&lt; endl;
}
/* Output:
The vector is: true false false true true
The original value of the 1st element stored in a bool: true
The original value of the 2nd element stored in a bool: false
The original value of the 3rd element stored in a bool: false

The vector after assigning refelem1 to refelem2 is now: true true false true true
The vector after assigning false to refelem1 is now: true true true true true
The original value of the 1st element still stored in a bool: true
The original value of the 2nd element still stored in a bool: false
The original value of the 3rd element still stored in a bool: false
*/
</code>
               </content>
            </section>
        </sections>
    </section>
        </sections>
    </section>
    <section address="vector_lt_bool_gt___swap">
        <!--5a2aa03c-63da-4327-9799-cb872cacad94-->
        <title>vector&lt;bool&gt;::swap</title>
        <content>
            <para>Static member function that exchanges two elements of Boolean vectors ( <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>) by using the proxy class <legacyLink xlink:href="#vector_lt_bool_gt___reference_class">vector&lt;bool&gt;::reference</legacyLink>.</para>
            <legacySyntax>
static void swap(
    reference <parameterReference>Left</parameterReference>,
    reference <parameterReference>Right</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The element to be exchanged with the <parameterReference>Right</parameterReference> element.</para>
                        </definition>
                        <definedTerm> <parameterReference>Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The element to be exchanged with the <parameterReference>Left</parameterReference> element.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This overload supports the special proxy requirements of <unmanagedCodeEntityReference>vector&lt;bool&gt;</unmanagedCodeEntityReference>. <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__swap">vector::swap</legacyLink> has the same functionality as the single-argument overload of <unmanagedCodeEntityReference>vector&lt;bool&gt;::swap()</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



