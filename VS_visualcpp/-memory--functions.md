---
title: "&lt;memory&gt; functions"
ms.custom: na
ms.date: 10/07/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3e1898c2-44b7-4626-87ce-84962e4c6f1a
caps.latest.revision: 6
---
# &lt;memory&gt; functions
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para/>
    </introduction>
    <section>
        <content>
            <table>
                <tbody>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#addressof">addressof</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#align">align</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#allocate_shared">allocate_shared</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#const_pointer_cast">const_pointer_cast</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#declare_no_pointers">declare_no_pointers</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#declare_reachable">declare_reachable</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#default_delete">default_delete</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#dynamic_pointer_cast">dynamic_pointer_cast</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#get_deleter_function">get_deleter Function</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#get_pointer_safety">get_pointer_safety</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#get_temporary_buffer">get_temporary_buffer</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#make_shared">make_shared</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#make_unique">make_unique</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#owner_less">owner_less</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#return_temporary_buffer">return_temporary_buffer</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#static_pointer_cast">static_pointer_cast</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#swap">swap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#undeclare_no_pointers">undeclare_no_pointers</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#undeclare_reachable">undeclare_reachable</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#uninitialized_copy">uninitialized_copy</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#uninitialized_copy_n">uninitialized_copy_n</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#uninitialized_fill">uninitialized_fill</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#uninitialized_fill_n">uninitialized_fill_n</link>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <section address="addressof">
        <!--6243ddc8-486a-4961-8b0c-33e9dc2e0648-->
        <title>addressof</title>
        <content>
            <para>Gets the true address of an object.</para>
            <legacySyntax language="vb">template&lt;class T&gt; T* addressof(
    T&amp; <parameterReference>Val</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The object or function for which to obtain the true address.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The actual address of the object or function referenced by <parameterReference>Val</parameterReference>, even if an overloaded <unmanagedCodeEntityReference>operator&amp;()</unmanagedCodeEntityReference> exists.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para/>
                </content>
            </section>
        </sections>
    </section>
    <section address="align">
        <!--302b5954-9ed5-4b7a-888a-eb04f69414ba-->
        <title>align</title>
        <content>
            <para>Fits storage of the given size—aligned by the given alignment specification—into the first possible address of the given storage.</para>
            <legacySyntax language="cpp">void* align(
    size_t <parameterReference>Alignment</parameterReference>, // input
    size_t <parameterReference>Size</parameterReference>,      // input
    void*&amp; <parameterReference>Ptr</parameterReference>        // input/output
    size_t&amp; <parameterReference>Space</parameterReference>     // input/output
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Alignment</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The alignment bound to attempt.</para>
                        </definition>
                        <definedTerm> <parameterReference>Size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size in bytes for the aligned storage.</para>
                        </definition>
                        <definedTerm> <parameterReference>Ptr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The starting address of the available contiguous storage pool to use. This parameter is also an output parameter, and will contain the new starting address if the alignment is successful.</para>
                            <para>If <unmanagedCodeEntityReference>align()</unmanagedCodeEntityReference> is unsuccessful, this parameter is not modified.</para>
                        </definition>
                        <definedTerm> <parameterReference>Space</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The total space available to <unmanagedCodeEntityReference>align()</unmanagedCodeEntityReference> to use in creating the aligned storage. This parameter is also an output parameter, and contains the adjusted space left in the storage buffer after the aligned storage and any associated overhead is subtracted. </para>
                            <para>If <unmanagedCodeEntityReference>align()</unmanagedCodeEntityReference> is unsuccessful, this parameter is not modified.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A null pointer if the requested aligned buffer would not fit into the available space; otherwise, the new value of <parameterReference>Ptr</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The modified <parameterReference>Ptr</parameterReference> and <parameterReference>Space</parameterReference> parameters enable you to call <unmanagedCodeEntityReference>align()</unmanagedCodeEntityReference> repeatedly on the same buffer, possibly with different values for <parameterReference>Alignment</parameterReference> and <parameterReference>Size</parameterReference>. The following code snippet shows one use of <unmanagedCodeEntityReference>align()</unmanagedCodeEntityReference>.</para>
                    <code language="cpp">
#include &lt;type_traits&gt; // std::alignment_of()
#include &lt;memory&gt;
//...
char buffer[256]; // for simplicity
size_t alignment = std::alignment_of&lt;int&gt;::value;
void * ptr = buffer;
std::size_t space = sizeof(buffer); // Be sure this results in the true size of your buffer

while (alignment, sizeof(MyObj), ptr, space)) {
    // You now have storage the size of MyObj, starting at ptr, aligned on 
    // int boundary. Use it here if you like, or save off the starting address
    // contained in ptr for later use.
    // ...
    // Last, move starting pointer and decrease available space before
    // the while loop restarts.
    ptr = reinterpret_cast&lt;char*&gt;(ptr) + sizeof(MyObj);
    space -= sizeof(MyObj);
}
// At this point, align() has returned a null pointer, signaling it is not
// possible to allow more aligned storage in this buffer. </code>
                </content>
            </section>
        </sections>
    </section>
    <section address="allocate_shared">
        <!--bb6b9dcd-25c4-4d35-91c7-86c69c1a66fc-->
        <title>allocate_shared</title>
        <content>
            <para>Creates a <unmanagedCodeEntityReference> shared_ptr</unmanagedCodeEntityReference> to objects that are allocated and constructed for a given type by using a specified allocator. Returns the <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference>.</para>
            <legacySyntax>template&lt;class Type, class Allocator, class... Types&gt;
    shared_ptr&lt;Type&gt; allocate_shared(
        Allocator <parameterReference>Alloc</parameterReference>, 
        Types&amp;&amp;... <parameterReference>Args</parameterReference>
    );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Alloc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The allocator used to create objects.</para>
                        </definition>
                        <definedTerm> <parameterReference>Args</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero or more arguments that become the objects.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function creates the object <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference> <codeInline>&lt;Type&gt;</codeInline>, a pointer to <codeInline>Type(</codeInline> <parameterReference>Args</parameterReference> <codeInline>...)</codeInline> as allocated and constructed by <parameterReference>Alloc</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="const_pointer_cast">
        <!--53d61b0a-d7eb-4f6e-bf32-7749da6b88cf-->
        <title>const_pointer_cast</title>
        <content>
            <para>Const cast to shared_ptr.</para>
            <legacySyntax>template &lt;class Ty, class Other&gt;
    shared_ptr&lt;Ty&gt; const_pointer_cast(const shared_ptr&lt;Other&gt;&amp; sp);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ty</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the returned shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the argument shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The argument shared pointer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns an empty shared_ptr object if <codeInline>const_cast&lt;Ty*&gt;(sp.get())</codeInline> returns a null pointer; otherwise it returns a <link xlink:href="1469fc51-c658-43f1-886c-f4530dd84860">shared_ptr</link> <codeInline>&lt;Ty&gt;</codeInline> object that owns the resource that is owned by <codeInline>sp</codeInline>. The expression <codeInline>const_cast&lt;Ty*&gt;(sp.get())</codeInline> must be valid.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para> </para>
                        <!--EndSnipComment-->
                    <code>// std_tr1__memory__const_pointer_cast.cpp 
// compile with: /EHsc 
#include &lt;memory&gt; 
#include &lt;iostream&gt; 
 
int main() 
    { 
    std::shared_ptr&lt;int&gt; sp0(new int); 
    std::shared_ptr&lt;const int&gt; sp1 = 
        std::const_pointer_cast&lt;const int&gt;(sp0); 
 
    *sp0 = 3; 
    std::cout &lt;&lt; "sp1 == " &lt;&lt; *sp1 &lt;&lt; std::endl; 
 
    return (0); 
    } 
 </code>
                    <!--SnipComment-->
                            <computerOutput>sp1 == 3</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="declare_no_pointers">
        <!--46338586-4a35-422e-a77c-9bba0004f3cd-->
        <title>declare_no_pointers</title>
        <content>
            <para>Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size contains no traceable pointers.</para>
            <legacySyntax>void declare_no_pointers(
    char * <parameterReference>_Ptr</parameterReference>, 
    size_t <parameterReference>_Size</parameterReference>
);</legacySyntax>
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
                                    <para> <parameterReference>_Ptr</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Address of first character that no longer contains traceable pointers.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Size</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Size of block that starts at <parameterReference>_Ptr</parameterReference> that contains no traceable pointers.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function informs any <unmanagedCodeEntityReference>garbage collector</unmanagedCodeEntityReference> that the range of addresses <codeInline>[</codeInline> <parameterReference>_Ptr</parameterReference> <codeInline>, </codeInline> <parameterReference>_Ptr</parameterReference> <codeInline> + </codeInline> <parameterReference>_Size</parameterReference> <codeInline>)</codeInline> no longer contain traceable pointers. (Any pointers to allocated storage must not be dereferenced unless made <unmanagedCodeEntityReference>reachable</unmanagedCodeEntityReference>.)</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="declare_reachable">
        <!--9a02670f-f8ca-4581-8f8b-f0510830d5a5-->
        <title>declare_reachable</title>
        <content>
            <para>Informs garbage collection that the indicated address is to allocated storage and is reachable.</para>
            <legacySyntax>void declare_reachable(
    void * <parameterReference>_Ptr</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Ptr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a reachable, allocated, valid storage area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>_Ptr</parameterReference> is not null, the function informs any garbage collector that <parameterReference>_Ptr</parameterReference> is hereafter reachable (points to valid allocated storage).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="default_delete">
        <!--a9ccba42-1d0c-4f2d-b055-e7d506190e9b-->
        <title>default_delete</title>
        <content>
            <para>Deletes objects allocated with <unmanagedCodeEntityReference>operator new</unmanagedCodeEntityReference>. Suitable for use with <unmanagedCodeEntityReference>unique_ptr</unmanagedCodeEntityReference>.</para>
            <legacySyntax>template&lt;class T&gt;    struct default_delete {        constexpr default_delete() noexcept = default;         template&lt;class Other,                     class = typename enable_if&lt;is_convertible&lt; Other*, T*&gt;::value, void&gt;::type&gt;&gt;
            default_delete(                const default_delete&lt;Other&gt;&amp;            ) noexcept;         void operator()(T* <parameterReference>Ptr</parameterReference>) const noexcept;     };

template&lt;class T&gt;    struct default_delete&lt;T[]&gt;    {        constexpr default_delete() noexcept = default;    template&lt;class Other,     class = typename enable_if&lt;is_convertible&lt;Other(*)[], T(*)[]&gt;::value, void&gt;::type&gt;        default_delete(const default_delete&lt;Other[]&gt;&amp;) noexcept    template&lt;class Other,      class = typename enable_if&lt;is_convertible&lt;Other(*)[], T(*)[]&gt;::value, void&gt;::type&gt;        void operator()(Other*) const noexcept;    };</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ptr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the object to delete.</para>
                        </definition>
                        <definedTerm>Other</definedTerm>
                        <definition>
                            <para>The type of elements in the array to be deleted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template class describes a <unmanagedCodeEntityReference>deleter</unmanagedCodeEntityReference> that deletes scalar objects allocated with <unmanagedCodeEntityReference>operator new</unmanagedCodeEntityReference>, suitable for use with template class <unmanagedCodeEntityReference>unique_ptr</unmanagedCodeEntityReference>. It also has the explicit specialization <unmanagedCodeEntityReference>default_delete&lt;Type[]&gt;</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="dynamic_pointer_cast">
        <!--dc6c9dff-0fb9-4e42-a63d-d221e5f1a33e-->
        <title>dynamic_pointer_cast</title>
        <content>
            <para>Dynamic cast to shared_ptr.</para>
            <legacySyntax>template &lt;class Ty, class Other&gt;
    shared_ptr&lt;Ty&gt; dynamic_pointer_cast(const shared_ptr&lt;Other&gt;&amp; sp);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ty</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the returned shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the argument shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>sp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The argument shared pointer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns an empty shared_ptr object if <codeInline>dynamic_cast&lt;Ty*&gt;(sp.get())</codeInline> returns a null pointer; otherwise it returns a <link xlink:href="1469fc51-c658-43f1-886c-f4530dd84860">shared_ptr</link> <codeInline>&lt;Ty&gt;</codeInline> object that owns the resource that is owned by <codeInline>sp</codeInline>. The expression <codeInline>dynamic_cast&lt;Ty*&gt;(sp.get())</codeInline> must be valid.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para> </para>
                        <!--EndSnipComment-->
                    <code>// std_tr1__memory__dynamic_pointer_cast.cpp 
// compile with: /EHsc 
#include &lt;memory&gt; 
#include &lt;iostream&gt; 
 
struct base 
    { 
    virtual ~base() 
        { 
        } 
 
    int val; 
    }; 
 
struct derived 
    : public base 
    { 
    }; 
 
int main() 
    { 
    std::shared_ptr&lt;base&gt; sp0(new derived); 
    std::shared_ptr&lt;derived&gt; sp1 = 
        std::dynamic_pointer_cast&lt;derived&gt;(sp0); 
 
    sp0-&gt;val = 3; 
    std::cout &lt;&lt; "sp1-&gt;val == " &lt;&lt; sp1-&gt;val &lt;&lt; std::endl; 
 
    return (0); 
    } 
 </code>
                    <!--SnipComment-->
                            <computerOutput>sp1-&gt;val == 3</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="get_deleter_function">
        <!--98adaa00-79a0-477a-801e-acef04a96c3e-->
        <title>get_deleter Function</title>
        <content>
            <para>Get deleter from shared_ptr.</para>
            <legacySyntax>template&lt;class D, class Ty&gt;
    D *get_deleter(const shared_ptr&lt;Ty&gt;&amp; sp);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>D</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type of the deleter.</para>
                        </definition>
                        <definedTerm> <parameterReference>Ty</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The shared pointer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns a pointer to the deleter of type <codeInline>D</codeInline> that belongs to the <link xlink:href="1469fc51-c658-43f1-886c-f4530dd84860">shared_ptr</link> object <codeInline>sp</codeInline>. If <codeInline>sp</codeInline> has no deleter or if its deleter is not of type <codeInline>D</codeInline> the function returns 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para> </para>
                        <!--EndSnipComment-->
                    <code>// std_tr1__memory__get_deleter.cpp 
// compile with: /EHsc 
#include &lt;memory&gt; 
#include &lt;iostream&gt; 
 
struct base 
    { 
    int val; 
    }; 
 
struct deleter 
    { 
    void operator()(base *p) 
        { 
        delete p; 
        } 
    }; 
 
int main() 
    { 
    std::shared_ptr&lt;base&gt; sp0(new base); 
 
    sp0-&gt;val = 3; 
    std::cout &lt;&lt; "get_deleter(sp0) != 0 == " &lt;&lt; std::boolalpha 
        &lt;&lt; (std::get_deleter&lt;deleter&gt;(sp0) != 0) &lt;&lt; std::endl; 
 
    std::shared_ptr&lt;base&gt; sp1(new base, deleter()); 
 
    sp0-&gt;val = 3; 
    std::cout &lt;&lt; "get_deleter(sp1) != 0 == " &lt;&lt; std::boolalpha 
        &lt;&lt; (std::get_deleter&lt;deleter&gt;(sp1) != 0) &lt;&lt; std::endl; 
 
    return (0); 
    } 
 </code>
                    <!--SnipComment-->
                            <computerOutput>get_deleter(sp0) != 0 == false
get_deleter(sp1) != 0 == true</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="get_pointer_safety">
        <!--df63fa94-a893-4156-b0d4-0075db05b199-->
        <title>get_pointer_safety</title>
        <content>
            <para>Returns the type of pointer safety assumed by any garbage collector. </para>
            <legacySyntax>pointer_safety get_pointer_safety();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function returns the type of pointer safety assumed by any automatic <unmanagedCodeEntityReference>garbage collector</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="get_temporary_buffer">
        <!--e068ecd1-67b3-4e40-8b44-76ed8ed93c09-->
        <title>get_temporary_buffer</title>
        <content>
            <para>Allocates temporary storage for a sequence of elements that does not exceed a specified number of elements.</para>
            <legacySyntax> <legacyBold>template&lt;class Type&gt;</legacyBold> <legacyBold>   pair&lt;Type *, ptrdiff</legacyBold> <parameterReference>_</parameterReference> <legacyBold>t&gt;</legacyBold> <legacyBold>      get</legacyBold> <parameterReference>_</parameterReference> <legacyBold>temporary</legacyBold> <parameterReference>_</parameterReference> <legacyBold>buffer(</legacyBold> <legacyBold>         ptrdiff</legacyBold> <parameterReference>_</parameterReference> <legacyBold>t </legacyBold> <parameterReference>_Count</parameterReference> <legacyBold>      );</legacyBold>
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
                            <para>The maximum number of elements requested for which memory is to be allocated.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>pair</unmanagedCodeEntityReference> whose first component is a pointer to the memory that was allocated, and whose second component gives the size of the buffer, indicating the largest number of elements that it could store.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function makes a request for memory and it may not succeed. If no buffer is allocated, then the function returns a pair, with the second component equal to zero and the first component equal to the null pointer.</para>
                    <para>This function should only be used for memory that is temporary. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// memory_get_temp_buf.cpp
// compile with: /EHsc
#include &lt;memory&gt;
#include &lt;iostream&gt;

using namespace std;

int main( )
{
   // Create an array of ints
   int intArray [ ] = { 10, 20, 30, 40, 100, 200, 300, 1000, 2000 };
   int count = sizeof ( intArray ) / sizeof ( int );
   cout &lt;&lt; "The number of integers in the array is: " 
      &lt;&lt; count &lt;&lt; "." &lt;&lt; endl;

   pair&lt;int *, ptrdiff_t&gt; resultPair;
   resultPair = get_temporary_buffer&lt;int&gt;( count );

   cout &lt;&lt; "The number of elements that the allocated memory\n"
        &lt;&lt; "could store is given by: resultPair.second = " 
        &lt;&lt; resultPair.second &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The number of integers in the array is: 9.
The number of elements that the allocated memory
could store is given by: resultPair.second = 9.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="make_shared">
        <!--6d6015b9-ad9a-4c06-93ce-b07cf6193d23-->
        <title>make_shared</title>
        <content>
            <para>Creates and returns a <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference> that points to the allocated objects that are constructed from zero or more arguments by using the default allocator. Allocates and constructs both an object of the specified type and a <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference> to manage shared ownership of the object, and returns the <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference>.</para>
            <legacySyntax>template&lt;class Type, class... Types&gt;
    shared_ptr&lt;Type&gt; make_shared(
        Types&amp;&amp;... <parameterReference>_Args</parameterReference>
    );</legacySyntax>
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
                                    <para>Zero or more constructor arguments. The function infers which constructor overload to invoke based on the arguments that are provided.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <unmanagedCodeEntityReference>make_shared</unmanagedCodeEntityReference> as a simple and more efficient way to create an object and a <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference> to manage shared access to the object at the same time. Semantically, these two statements are equivalent:</para>
                    <code language="cpp">   auto sp = std::shared_ptr&lt;Example&gt;(new Example(argument));
   auto msp = std::make_shared&lt;Example&gt;(argument);</code>
                    <para>However, the first statement makes two allocations, and if the allocation of the <unmanagedCodeEntityReference>shared_ptr</unmanagedCodeEntityReference> fails after the allocation of the <parameterReference>Example</parameterReference> object has succeeded, then the unnamed <parameterReference>Example</parameterReference> object is leaked. The statement that uses <unmanagedCodeEntityReference>make_shared</unmanagedCodeEntityReference> is simpler because there's only one function call involved. It's more efficient because the library can make a single allocation for both the object and the smart pointer. This is both faster and leads to less memory fragmentation, and there is no chance of an exception on one allocation but not the other. Performance is improved by better locality for code that references the object and updates the reference counts in the smart pointer.</para>
                    <para>Consider using <legacyLink xlink:href="3e1898c2-44b7-4626-87ce-84962e4c6f1a#make_unique">make_unique</legacyLink> if you do not need shared access to the object. Use <legacyLink xlink:href="3e1898c2-44b7-4626-87ce-84962e4c6f1a#allocate_shared">allocate_shared</legacyLink> if you need to specify a custom allocator for the object. You can't use <unmanagedCodeEntityReference>make_shared</unmanagedCodeEntityReference> if your object requires a custom deleter, because there is no way to pass the deleter as an argument.</para>
                    <para> The following example shows how to create shared pointers to a type by invoking specific constructor overloads. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// stl_make_shared.cpp
// Compile by using: cl /W4 /EHsc stl_make_shared.cpp
#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;memory&gt;
#include &lt;vector&gt;

class Song {
public:
   std::wstring title_;
   std::wstring artist_;

   Song(std::wstring title, std::wstring artist) : title_(title), artist_(artist) {}
   Song(std::wstring title) : title_(title), artist_(L"Unknown") {}
};

void CreateSharedPointers() {
   // Okay, but less efficient to have separate allocations for
   // Song object and shared_ptr control block.  
   auto song = new Song(L"Ode to Joy", L"Beethoven");
   std::shared_ptr&lt;Song&gt; sp0(song);

   // Use make_shared function when possible. Memory for control block
   // and Song object are allocated in the same call:  
   auto sp1 = std::make_shared&lt;Song&gt;(L"Yesterday", L"The Beatles");
   auto sp2 = std::make_shared&lt;Song&gt;(L"Blackbird", L"The Beatles");
   
   // make_shared infers which constructor to use based on the arguments.
   auto sp3 = std::make_shared&lt;Song&gt;(L"Greensleeves");
   
   // The playlist vector makes copies of the shared_ptr pointers.
   std::vector&lt;std::shared_ptr&lt;Song&gt;&gt; playlist;
   playlist.push_back(sp0);
   playlist.push_back(sp1);
   playlist.push_back(sp2);
   playlist.push_back(sp3);
   playlist.push_back(sp1);
   playlist.push_back(sp2);
   for (auto&amp;&amp; sp : playlist) {
      std::wcout &lt;&lt; L"Playing " &lt;&lt; sp-&gt;title_ &lt;&lt; 
         L" by " &lt;&lt; sp-&gt;artist_ &lt;&lt; L", use count: " &lt;&lt; 
         sp.use_count() &lt;&lt; std::endl;
   }
}

int main() {
   CreateSharedPointers();
}</code>
                    <!--SnipComment-->
                            <para>The example produces this output:</para>
                            <computerOutput>Playing Ode to Joy by Beethoven, use count: 2
Playing Yesterday by The Beatles, use count: 3
Playing Blackbird by The Beatles, use count: 3
Playing Greensleeves by Unknown, use count: 2
Playing Yesterday by The Beatles, use count: 3
Playing Blackbird by The Beatles, use count: 3</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="make_unique">
        <!--4b5fa0d6-fd1b-42b3-a35d-d71c3b6529f8-->
        <title>make_unique</title>
        <content>
            <para>Creates and returns a <legacyLink xlink:href="acdf046b-831e-4a4a-83aa-6d4ee467db9a">unique_ptr</legacyLink> to an object of the specified type, which is constructed by using the specified arguments.</para>
            <legacySyntax language="scr">// make_unique&lt;T&gt;template&lt;class T, 
    class... Types&gt;    unique_ptr&lt;T&gt; make_unique(Types&amp;&amp;... Args)
    {
    return (unique_ptr&lt;T&gt;(new T(forward&lt;Types&gt;(Args)...))); 
    }
// make_unique&lt;T[]&gt;
template&lt;class T&gt;    make_unique(size_t Size) 
    { 
    return (unique_ptr&lt;T&gt;(new Elem[Size]())); 
    }

// make_unique&lt;T[N]&gt; disallowed
template&lt;class T, 
    class... Types&gt;
    typename enable_if&lt;extent&lt;T&gt;::value != 0, 
        void&gt;::type make_unique(Types&amp;&amp;...) = delete; 
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>T</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type of the object that the <unmanagedCodeEntityReference>unique_ptr</unmanagedCodeEntityReference> will point to.</para>
                        </definition>
                        <definedTerm> <parameterReference>Types</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The types of the constructor arguments specified by <parameterReference>Args</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>Args</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The arguments to be passed to the constructor of the object of type <parameterReference>T</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>Elem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An array of elements of type <parameterReference>T</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>Size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of elements to allocate space for in the new array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first overload is used for single objects, the second overload is invoked for arrays, and the third overload prevents the prevents you from specifying an array size in the type argument (make_unique&lt;T[N]&gt;); this construction is not supported by the current standard. When you use <unmanagedCodeEntityReference>make_unique</unmanagedCodeEntityReference> to create a <unmanagedCodeEntityReference>unique_ptr</unmanagedCodeEntityReference> to an array, you have to initialize the array elements separately. If you are considering this overload, perhaps a better choice is to use a "std::vector". </para>
                    <para>Because <unmanagedCodeEntityReference>make_unique</unmanagedCodeEntityReference> is carefully implemented for exception safety, we recommend that you use <unmanagedCodeEntityReference>make_unique</unmanagedCodeEntityReference> instead of directly calling <unmanagedCodeEntityReference>unique_ptr</unmanagedCodeEntityReference> constructors.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>The following example shows how to use <languageKeyword>make_unique</languageKeyword>. For more examples, see <link xlink:href="9a373030-e587-452f-b9a5-c5f9d58b7673">How to: Create and Use unique_ptr Instances</link>.</para>
                        <!--EndSnipComment-->
                    <codeReference>stl_smart_pointers#214</codeReference>
                    <!--SnipComment-->
                            <para>When you see error C2280 in connection with a <unmanagedCodeEntityReference>unique_ptr</unmanagedCodeEntityReference>, it is almost certainly because you are attempting to invoke its copy constructor, which is a deleted function.</para>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="owner_less">
        <!--b143c891-707a-4c68-8aaa-bab9dcc65c41-->
        <title>owner_less</title>
        <content>
            <para>Allows ownership-based mixed comparisons of shared and weak pointers. Returns <languageKeyword>true</languageKeyword> if the left parameter is ordered before right parameter by the member function <unmanagedCodeEntityReference>owner_before</unmanagedCodeEntityReference>.</para>
            <legacySyntax>template&lt;class Type&gt;
    struct owner_less; // not defined

template&lt;class Type&gt;
    struct owner_less&lt;shared_ptr&lt;Type&gt; &gt; {
    bool operator()(
        const shared_ptr&lt;Type&gt;&amp; <parameterReference>_Left</parameterReference>,
        const shared_ptr&lt;Type&gt;&amp; <parameterReference>_Right</parameterReference>
                <parameterReference/>);
    bool operator()(
        const shared_ptr&lt;Type&gt;&amp; <parameterReference>_Left</parameterReference>,
        const weak_ptr&lt;Type&gt;&amp; <parameterReference>_Right</parameterReference>
                <parameterReference/>);
    bool operator()(
        const weak_ptr&lt;Type&gt;&amp; <parameterReference>_Left</parameterReference>,
        const shared_ptr&lt;Type&gt;&amp; <parameterReference>_Right</parameterReference>
                <parameterReference/>);
};

template&lt;class Type&gt;
    struct owner_less&lt;weak_ptr&lt;Type&gt; &gt;
    bool operator()(
        const weak_ptr&lt;Type&gt;&amp; <parameterReference>_Left</parameterReference>,
        const weak_ptr&lt;Type&gt;&amp; <parameterReference>_Right</parameterReference>
                <parameterReference/>);
    bool operator()(
        const weak_ptr&lt;Type&gt;&amp; <parameterReference>_Left</parameterReference>,
        const shared_ptr&lt;Ty&gt;&amp; <parameterReference>_Right</parameterReference>
                <parameterReference/>);
    bool operator()(
        const shared_ptr&lt;Type&gt;&amp; <parameterReference>_Left</parameterReference>,
        const weak_ptr&lt;Type&gt;&amp; <parameterReference>_Right</parameterReference>
                <parameterReference/>);
};</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A shared or weak pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A shared or weak pointer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template classes define all their member operators as returning <parameterReference>_Left</parameterReference> <codeInline>.owner_before(</codeInline> <parameterReference>_Right</parameterReference> <codeInline>)</codeInline>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="return_temporary_buffer">
        <!--7597218e-d152-41bb-a915-33e766788973-->
        <title>return_temporary_buffer</title>
        <content>
            <para>Deallocates the temporary memory that was allocated using the <unmanagedCodeEntityReference>get_temporary_buffer</unmanagedCodeEntityReference> template function.</para>
            <legacySyntax> <legacyBold>template&lt;class Type&gt;</legacyBold> <legacyBold>   void return</legacyBold> <parameterReference>_</parameterReference> <legacyBold>temporary</legacyBold> <parameterReference>_</parameterReference> <legacyBold>buffer(</legacyBold> <legacyBold>      Type* </legacyBold> <parameterReference>_Pbuf</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>_Pbuf</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the memory to be deallocated.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function should only be used for memory that is temporary. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// memory_ret_temp_buf.cpp
// compile with: /EHsc
#include &lt;memory&gt;
#include &lt;iostream&gt;

using namespace std;

int main( )
{
   // Create an array of ints
   int intArray [ ] = { 10, 20, 30, 40, 100, 200, 300 };
   int count = sizeof ( intArray ) / sizeof ( int );
   cout &lt;&lt; "The number of integers in the array is: " 
         &lt;&lt; count &lt;&lt; "." &lt;&lt; endl;

   pair&lt;int *, ptrdiff_t&gt; resultPair;
   resultPair = get_temporary_buffer&lt;int&gt;( count );

   cout &lt;&lt; "The number of elements that the allocated memory\n"
         &lt;&lt; " could store is given by: resultPair.second = " 
         &lt;&lt; resultPair.second &lt;&lt; "." &lt;&lt; endl;

   int* tempBuffer = resultPair.first;

   // Deallocates memory allocated with get_temporary_buffer
   return_temporary_buffer ( tempBuffer );
}</code>
                    <!--SnipComment-->
                            <computerOutput>The number of integers in the array is: 7.
The number of elements that the allocated memory
 could store is given by: resultPair.second = 7.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="static_pointer_cast">
        <!--69373bf4-87e5-41ec-902c-81f4886b5736-->
        <title>static_pointer_cast</title>
        <content>
            <para>Static cast to shared_ptr.</para>
            <legacySyntax>template &lt;class Ty, class Other&gt;
    shared_ptr&lt;Ty&gt; static_pointer_cast(const shared_ptr&lt;Other&gt;&amp; sp);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ty</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the returned shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the argument shared pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The argument shared pointer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns an empty shared_ptr object if <codeInline>sp</codeInline> is an empty <codeInline>shared_ptr</codeInline> object; otherwise it returns a <link xlink:href="1469fc51-c658-43f1-886c-f4530dd84860">shared_ptr</link> <codeInline>&lt;Ty&gt;</codeInline> object that owns the resource that is owned by <codeInline>sp</codeInline>. The expression <codeInline>static_cast&lt;Ty*&gt;(sp.get())</codeInline> must be valid.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para> </para>
                        <!--EndSnipComment-->
                    <code>// std_tr1__memory__static_pointer_cast.cpp 
// compile with: /EHsc 
#include &lt;memory&gt; 
#include &lt;iostream&gt; 
 
struct base 
    { 
    int val; 
    }; 
 
struct derived 
    : public base 
    { 
    }; 
 
int main() 
    { 
    std::shared_ptr&lt;base&gt; sp0(new derived); 
    std::shared_ptr&lt;derived&gt; sp1 = 
        std::static_pointer_cast&lt;derived&gt;(sp0); 
 
    sp0-&gt;val = 3; 
    std::cout &lt;&lt; "sp1-&gt;val == " &lt;&lt; sp1-&gt;val &lt;&lt; std::endl; 
 
    return (0); 
    } 
 </code>
                    <!--SnipComment-->
                            <computerOutput>sp1-&gt;val == 3</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="swap">
        <!--fd328269-955b-4d79-8268-9038841e5c76-->
        <title>swap (C++ Standard Library)</title>
        <content>
            <para>Swap two shared_ptr or weak_ptr objects.</para>
            <legacySyntax>template&lt;class Ty, class Other&gt;
    void swap(shared_ptr&lt;Ty&gt;&amp; left, shared_ptr&lt;Other&gt;&amp; right);
template&lt;class Ty, class Other&gt;
    void swap(weak_ptr&lt;Ty&gt;&amp; left, weak_ptr&lt;Other&gt;&amp; right);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ty</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the left shared/weak pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type controlled by the right shared/weak pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The left shared/weak pointer.</para>
                        </definition>
                        <definedTerm> <parameterReference>right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The right shared/weak pointer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template functions call <codeInline>left.swap(right)</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para> </para>
                        <!--EndSnipComment-->
                    <code>// std_tr1__memory__swap.cpp 
// compile with: /EHsc 
#include &lt;memory&gt; 
#include &lt;iostream&gt; 
 
struct deleter 
    { 
    void operator()(int *p) 
        { 
        delete p; 
        } 
    }; 
 
int main() 
    { 
    std::shared_ptr&lt;int&gt; sp1(new int(5)); 
    std::shared_ptr&lt;int&gt; sp2(new int(10)); 
    std::cout &lt;&lt; "*sp1 == " &lt;&lt; *sp1 &lt;&lt; std::endl; 
 
    sp1.swap(sp2); 
    std::cout &lt;&lt; "*sp1 == " &lt;&lt; *sp1 &lt;&lt; std::endl; 
 
    swap(sp1, sp2); 
    std::cout &lt;&lt; "*sp1 == " &lt;&lt; *sp1 &lt;&lt; std::endl; 
    std::cout &lt;&lt; std::endl; 
 
    std::weak_ptr&lt;int&gt; wp1(sp1); 
    std::weak_ptr&lt;int&gt; wp2(sp2); 
    std::cout &lt;&lt; "*wp1 == " &lt;&lt; *wp1.lock() &lt;&lt; std::endl; 
 
    wp1.swap(wp2); 
    std::cout &lt;&lt; "*wp1 == " &lt;&lt; *wp1.lock() &lt;&lt; std::endl; 
 
    swap(wp1, wp2); 
    std::cout &lt;&lt; "*wp1 == " &lt;&lt; *wp1.lock() &lt;&lt; std::endl; 
 
    return (0); 
    } 
 </code>
                    <!--SnipComment-->
                            <computerOutput>*sp1 == 5
*sp1 == 10
*sp1 == 5

*wp1 == 5
*wp1 == 10
*wp1 == 5</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="undeclare_no_pointers">
        <!--b3bb5cf9-52ed-4ad8-8008-f314d064a656-->
        <title>undeclare_no_pointers</title>
        <content>
            <para>Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size may now contain traceable pointers.</para>
            <legacySyntax>void undeclare_no_pointers(
    char * <parameterReference>_Ptr</parameterReference>, 
    size_t <parameterReference>_Size</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function informs any <unmanagedCodeEntityReference>garbage collector</unmanagedCodeEntityReference> that the range of addresses <codeInline>[</codeInline> <parameterReference>_Ptr</parameterReference> <codeInline>, </codeInline> <parameterReference>_Ptr</parameterReference> <codeInline> + </codeInline> <parameterReference>_Size</parameterReference> <codeInline>) </codeInline>may now contain <unmanagedCodeEntityReference>traceable pointers</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="undeclare_reachable">
        <!--67f7845e-48a8-4531-a049-b6a4957bcaec-->
        <title>undeclare_reachable</title>
        <content>
            <para>Informs a <unmanagedCodeEntityReference>garbage_collector</unmanagedCodeEntityReference> that a specified memory location is not reachable.</para>
            <legacySyntax>template&lt;class Type&gt;
    Type *undeclare_reachable(Type * <parameterReference>_Ptr</parameterReference>);</legacySyntax>
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
                                    <para> <parameterReference>_Ptr</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to the memory address to be declared not reachable.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>_Ptr</parameterReference> is not <languageKeyword>null</languageKeyword>, the function informs any <unmanagedCodeEntityReference>garbage collector</unmanagedCodeEntityReference> that <parameterReference>_Ptr</parameterReference> is hereafter not <unmanagedCodeEntityReference>reachable</unmanagedCodeEntityReference>. It returns a <unmanagedCodeEntityReference>safely derived</unmanagedCodeEntityReference> pointer that compares equal to <parameterReference>_Ptr</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="uninitialized_copy">
        <!--23a09cb8-4116-475e-b0bb-5d3e7daca5aa-->
        <title>uninitialized_copy</title>
        <content>
            <para>Copies objects from a specified source range into an uninitialized destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class ForwardIterator&gt;</legacyBold> <legacyBold>   ForwardIterator uninitialized</legacyBold> <parameterReference>_</parameterReference> <legacyBold>copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Dest</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the first element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the last element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the first element in the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the first position beyond the destination range, unless the source range was empty and iterator addresses                         <legacyItalic>_First.</legacyItalic>
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This algorithm allows the decoupling of memory allocation from object construction.</para>
                    <para>The template function effectively executes:</para>
                    <code>while (                         <legacyItalic>_First</legacyItalic>!=                         <legacyItalic>_Last</legacyItalic> )
   new ( ( void * )&amp;*                        <legacyItalic>_Dest</legacyItalic> ++)
      iterator_traits&lt;InputIterator&gt;::value_type ( *                        <legacyItalic>_First</legacyItalic> ++ );
return                         <legacyItalic>_First</legacyItalic>;</code>
                    <para>unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// memory_uninit_copy.cpp
// compile with: /EHsc /W3
#include &lt;memory&gt;
#include &lt;iostream&gt;

using namespace std;

   class Integer 
   {
   public:
      Integer( int x ) : val( x ) {}
      int get( ) { return val; }
   private:
      int val;
   };

int main( )
{
   int Array[] = { 10, 20, 30, 40 };
   const int N = sizeof( Array ) / sizeof( int );

   int i;
   cout &lt;&lt; "The initialized Array contains " &lt;&lt; N &lt;&lt; " elements: ";
      for (i = 0 ; i &lt; N; i++ )
      {
         cout &lt;&lt; " " &lt;&lt; Array [ i ];
      }
   cout &lt;&lt; endl;

   Integer* ArrayPtr = ( Integer* ) malloc( N * sizeof( int ) );
   Integer* LArrayPtr = uninitialized_copy(
      Array, Array + N, ArrayPtr);  // C4996

   cout &lt;&lt; "Address of position after the last element in the array is: " 
        &lt;&lt; &amp;Array[0] + N &lt;&lt; endl;
   cout &lt;&lt; "The iterator returned by uninitialized_copy addresses: " 
        &lt;&lt; ( void* )LArrayPtr &lt;&lt; endl;
   cout &lt;&lt; "The address just beyond the last copied element is: " 
        &lt;&lt; ( void* )( ArrayPtr + N ) &lt;&lt; endl;

   if ( ( &amp;Array[0] + N ) == ( void* )LArrayPtr )
      cout &lt;&lt; "The return value is an iterator "
           &lt;&lt; "pointing just beyond the original array." &lt;&lt; endl;
   else
      cout &lt;&lt; "The return value is an iterator "
           &lt;&lt; "not pointing just beyond the original array." &lt;&lt; endl;

   if ( ( void* )LArrayPtr == ( void* )( ArrayPtr + N ) )
      cout &lt;&lt; "The return value is an iterator "
           &lt;&lt; "pointing just beyond the copied array." &lt;&lt; endl;
   else
      cout &lt;&lt; "The return value is an iterator "
           &lt;&lt; "not pointing just beyond the copied array." &lt;&lt; endl;

   free ( ArrayPtr );

   cout &lt;&lt; "Note that the exact addresses returned will vary\n"
        &lt;&lt; "with the memory allocation in individual computers."
        &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="uninitialized_copy_n">
        <!--3d443d83-9cb7-47a6-a3a5-ec6c373a239e-->
        <title>uninitialized_copy_n</title>
        <content>
            <para>Creates a copy of a specified number of elements from an input iterator. The copies are put in a forward iterator.</para>
            <legacySyntax>template&lt;class InputIterator, class Size, class ForwardIterator&gt;
    ForwardIterator uninitialized_copy_n(
        InputIterator <parameterReference>_First</parameterReference>, 
        Size <parameterReference>_Count</parameterReference>,
        ForwardIterator <parameterReference>_Dest</parameterReference>
    );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that refers to the object to copy.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A signed or unsigned integer type specifying the number of times to copy the object.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that refers to where the new copies go.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator that addresses the first position beyond the destination. If the source range was empty, the iterator addresses <parameterReference>_First</parameterReference>
                        <legacyItalic>.</legacyItalic>
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function effectively executes the following: </para>
                    <para> <codeInline>for (; 0 &lt; count; -- count)</codeInline>
                    </para>
                    <para> <codeInline>    new ((void *)&amp;*</codeInline> <parameterReference>_Dest</parameterReference> <codeInline>++)</codeInline>
                    </para>
                    <para> <codeInline>        iterator_traits&lt;InputIterator&gt;::value_type(*</codeInline> <parameterReference>_First</parameterReference> <codeInline>++);</codeInline>
                    </para>
                    <para> <codeInline>return dest;</codeInline>
                    </para>
                    <para>unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="uninitialized_fill">
        <!--6eadc810-1513-440a-9993-09d997215489-->
        <title>uninitialized_fill</title>
        <content>
            <para>Copies objects of a specified value into an uninitialized destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Type&gt;</legacyBold> <legacyBold>   void uninitialized</legacyBold> <parameterReference>_</parameterReference> <legacyBold>fill(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the first element in the destination range that is to be initiated.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the last element in the destination range that is to be initiated.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be used to initialize the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This algorithm allows the decoupling of memory allocation from object construction.</para>
                    <para>The template function effectively executes:</para>
                    <code>while (                         <legacyItalic>_First</legacyItalic>!=                         <legacyItalic>_Last</legacyItalic> )
   new ( (void *)&amp;*                        <legacyItalic>_First</legacyItalic> ++)
      iterator_traits&lt;ForwardIterator&gt;::value_type ( _                        <legacyItalic>Val</legacyItalic> );</code>
                    <para>unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// memory_uninit_fill.cpp
// compile with: /EHsc
#include &lt;memory&gt;
#include &lt;iostream&gt;

using namespace std;

   class Integer {         // No default constructor
   public:
      Integer( int x ) : val( x ) {}
      int get( ) { return val; }
   private:
      int val;
   };

int main( )
{
   const int N = 10;
   Integer val ( 25 );
   Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );
   uninitialized_fill( Array, Array + N, val );
   int i;
   cout &lt;&lt; "The initialized Array contains: ";
      for ( i = 0 ; i &lt; N; i++ )
      {
         cout &lt;&lt; Array [ i ].get( ) &lt;&lt; " ";
      }
   cout &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The initialized Array contains: 25 25 25 25 25 25 25 25 25 25 </computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="uninitialized_fill_n">
        <!--4b14460b-fd5e-4fbc-a606-a447a74a65ef-->
        <title>uninitialized_fill_n</title>
        <content>
            <para>Copies objects of a specified value into specified number of elements into an uninitialized destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class FwdIt, class Size, class Type&gt;</legacyBold> <legacyBold>   void uninitialized</legacyBold> <parameterReference>_</parameterReference> <legacyBold>fill</legacyBold> <parameterReference>_</parameterReference> <legacyBold>n(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      Size </legacyBold> <parameterReference>_Count</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the first element in the destination range to be initiated.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of elements to be initialized.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be used to initialize the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This algorithm allows the decoupling of memory allocation from object construction.</para>
                    <para>The template function effectively executes:</para>
                    <code>while ( 0 &lt; count-- )
   new ( ( void * )&amp;*                        <legacyItalic>_First</legacyItalic> ++ )
      iterator_traits&lt;ForwardIterator&gt;::value_type(                         <legacyItalic>_Val</legacyItalic> );</code>
                    <para>unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// memory_uninit_fill_n.cpp
// compile with: /EHsc /W3
#include &lt;memory&gt;
#include &lt;iostream&gt;

using namespace std;

class Integer {   // No default constructor
public:
   Integer( int x ) : val( x ) {}
   int get( ) { return val; }
private:
   int val;
};

int main() {
   const int N = 10;
   Integer val ( 60 );
   Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );
   uninitialized_fill_n( Array, N, val );  // C4996
   int i;
   cout &lt;&lt; "The uninitialized Array contains: ";
   for ( i = 0 ; i &lt; N; i++ )
      cout &lt;&lt; Array [ i ].get( ) &lt;&lt;  " ";
}</code>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="ef8e38da-7c9d-4037-9ad1-20c99febf5dc">&amp;lt;memory&amp;gt;</link>
    </relatedTopics>
</developerConceptualDocument>



