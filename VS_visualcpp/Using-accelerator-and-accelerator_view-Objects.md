---
title: "Using accelerator and accelerator_view Objects"
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
ms.assetid: 18f0dc66-8236-4420-9f46-1a14f2c3fba1
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
# Using accelerator and accelerator_view Objects
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>You can use the accelerator and <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> classes to specify the device or emulator to run your C++ AMP code on. A system might have several devices or emulators that differ by amount of memory, shared memory support, debugging support, or double-precision support. C++ Accelerated Massive Parallelism (C++ AMP) provides APIs that you can use to examine the available accelerators, set one as the default, specify multiple accelerator_views for multiple calls to parallel_for_each, and perform special debugging tasks.</para>
  </introduction>
  <section>
    <title>Using the Default Accelerator</title>
    <content>
      <para>The C++ AMP runtime picks a default accelerator, unless you write code to pick a specific one. The runtime chooses the default accelerator as follows:</para>
      <list class="ordered">
        <listItem>
          <para>If the app is running in debug mode, an accelerator that supports debugging.</para>
        </listItem>
        <listItem>
          <para>Otherwise, the accelerator that's specified by the CPPAMP_DEFAULT_ACCELERATOR environment variable, if it's set.</para>
        </listItem>
        <listItem>
          <para>Otherwise, a non-emulated device.</para>
        </listItem>
        <listItem>
          <para>Otherwise, the device that has the greatest amount of available memory.</para>
        </listItem>
        <listItem>
          <para>Otherwise, a device that's not attached to the display.</para>
        </listItem>
      </list>
      <para>Additionally, the runtime specifies an <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> of <unmanagedCodeEntityReference>access_type_auto</unmanagedCodeEntityReference> for the default accelerator. This means that the default accelerator uses shared memory if it’s supported and if its performance characteristics (bandwidth and latency) are known to be the same as dedicated (non-shared) memory.</para>
      <para>You can determine the properties of the default accelerator by constructing the default accelerator and examining its properties. The following code example prints the path, amount of accelerator memory, shared memory support, double-precision support, and limited double-precision support of the default accelerator.</para>
      <code language="cpp">
void default_properties() {
    accelerator default_acc;
    std::wcout &lt;&lt; default_acc.device_path &lt;&lt; "\n";
    std::wcout &lt;&lt; default_acc.dedicated_memory &lt;&lt; "\n";
    std::wcout &lt;&lt; (accs[i].supports_cpu_shared_memory ? 
        "CPU shared memory: true" : "CPU shared memory: false") &lt;&lt; "\n";
    std::wcout &lt;&lt; (accs[i].supports_double_precision ? 
        "double precision: true" : "double precision: false") &lt;&lt; "\n";
    std::wcout &lt;&lt; (accs[i].supports_limited_double_precision ? 
        "limited double precision: true" : "limited double precision: false") &lt;&lt; "\n";
}
</code>
    </content>
    <sections>
      <section>
        <title>CPPAMP_DEFAULT_ACCELERATOR Environment Variable</title>
        <content>
          <para>You can set the CPPAMP_DEFAULT_ACCELERATOR environment variable to specify the <unmanagedCodeEntityReference>accelerator::device_path</unmanagedCodeEntityReference> of the default accelerator. The path is hardware-dependent. The following code uses the <unmanagedCodeEntityReference>accelerator::get_all</unmanagedCodeEntityReference> function to retrieve a list of the available accelerators and then displays the path and characteristics of each accelerator.</para>
          <code language="cpp">
void list_all_accelerators()
{
    std::vector&lt;accelerator&gt; accs = accelerator::get_all();
    for (int i = 0; i &lt; accs.size(); i++) {
        std::wcout &lt;&lt; accs[i].device_path &lt;&lt; "\n";
        std::wcout &lt;&lt; accs[i].dedicated_memory &lt;&lt; "\n";
        std::wcout &lt;&lt; (accs[i].supports_cpu_shared_memory ? 
            "CPU shared memory: true" : "CPU shared memory: false") &lt;&lt; "\n";
        std::wcout &lt;&lt; (accs[i].supports_double_precision ? 
            "double precision: true" : "double precision: false") &lt;&lt; "\n";
        std::wcout &lt;&lt; (accs[i].supports_limited_double_precision ? 
            "limited double precision: true" : "limited double precision: false") &lt;&lt; "\n";
    }
}
</code>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Selecting an Accelerator</title>
    <content>
      <para>To select an accelerator, use the <unmanagedCodeEntityReference>accelerator::get_all</unmanagedCodeEntityReference> method to retrieve a list of the available accelerators and then select one based on its properties. This example shows how to pick the accelerator that has the most memory:</para>
      <code language="cpp">
void pick_with_most_memory()
{
    std::vector&lt;accelerator&gt; accs = accelerator::get_all();
    accelerator acc_chosen = accs[0];
    for (int i = 0; i &lt; accs.size(); i++) {
        if (accs[i].dedicated_memory &gt; acc_chosen.dedicated_memory) {
            acc_chosen = accs[i];
        }
    }

    std::wcout &lt;&lt; "The accelerator with the most memory is "  
        &lt;&lt; acc_chosen.device_path &lt;&lt; "\n"
        &lt;&lt; acc_chosen.dedicated_memory &lt;&lt; ".\n";
}
</code>
      <alert class="note">
        <para>One of the accelerators that are returned by <unmanagedCodeEntityReference>accelerator::get_all</unmanagedCodeEntityReference> is the CPU accelerator. You cannot execute code on the CPU accelerator. To filter out the CPU accelerator, compare the value of the <legacyLink xlink:href="02b5a5c9-7fbb-4fa9-a936-a03123d86f36">device_path</legacyLink> property of the accelerator that's returned by <unmanagedCodeEntityReference>accelerator::get_all</unmanagedCodeEntityReference> with the value of the <legacyLink xlink:href="c123e464-ffd8-4311-93c2-15f4b3b4fb9f">accelerator::cpu_accelerator</legacyLink>. For more information, see the "Special Accelerators" section in this article.</para>
      </alert>
    </content>
  </section>
  <section>
    <title>Shared Memory</title>
    <content>
      <para>Shared memory is memory that can be accessed by both the CPU and the accelerator. The use of shared memory eliminates or significantly reduces the overhead of copying data between the CPU and the accelerator. Although the memory is shared, it cannot be accessed concurrently by both the CPU and the accelerator, and doing so causes undefined behavior. The accelerator property <legacyLink xlink:href="ce1961f7-7a5c-4f62-ac92-4b890f961340">supports_cpu_shared_memory</legacyLink> returns <languageKeyword>true</languageKeyword> if the accelerator supports shared memory, and the <legacyLink xlink:href="02c9d160-610f-4d6b-bd8a-9d94df60897f">default_cpu_access_type</legacyLink> property gets the default <legacyLink xlink:href="a1b2d084-38dd-4fb6-b268-48e3ab15d634">access_type</legacyLink> for memory allocated on the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>—for example, <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>s associated with the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> objects accessed on the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
      <para>The C++ AMP runtime automatically chooses the best default <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference> for each <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>, but the performance characteristics (bandwidth and latency) of shared memory can be worse than those of dedicated (non-shared) accelerator memory when reading from the CPU, writing from the CPU, or both. If shared memory performs as well as dedicated memory for reading and writing from the CPU, the runtime defaults to <unmanagedCodeEntityReference>access_type_read_write</unmanagedCodeEntityReference>; otherwise, the runtime chooses a more conservative default <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference>, and allows the app to override it if the memory access patterns of its computation kernels benefit from a different <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference>.</para>
      <para>The following code example shows how to determine whether the default accelerator <?Comment MO: Is this correct? The original is a bit ambiguous as to the referent for the&quot;it&quot; at the end of the sentence.[mithom] If it’s still confusing, we can say “the default accelerator” instead, but ‘it’ here always refers to the default accelerator. In that sense it seems clear to me, but it may not be obvious to others. 2013-09-03T16:49:00Z  Id='0?><?Comment MO: It's clear enough as is. Thx 2013-09-13T10:16:00Z  Id='1?>supports shared memory, and then overrides its default access type and creates an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> from it.<?CommentEnd Id='0'
    ?><?CommentEnd Id='1'
    ?></para>
      <code language="cpp">#include &lt;amp.h&gt;
#include &lt;iostream&gt;

using namespace Concurrency;

int main()
{
  accelerator acc = accelerator(accelerator::default_accelerator);

  // Early out if the default accelerator doesn’t support shared memory.
  if(!acc.supports_cpu_shared_memory)
  {
    std::cout &lt;&lt; "The default accelerator does not support shared memory" &lt;&lt; std::endl;
    return 1;
  }

  // Override the default CPU access type.
  acc.set_default_cpu_access_type(access_type_read_write);

  // Create an accelerator_view from the default accelerator. The
  // accelerator_view reflects the default_cpu_access_type of the
  // accelerator it’s associated with.
  accelerator_view acc_v = acc.default_view;
}
</code>
      <?Comment MT: Per Tech Review. 2013-08-29T19:52:00Z  Id='3?>
      <para>An <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> always reflects the <unmanagedCodeEntityReference>default_cpu_access_type</unmanagedCodeEntityReference> of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> it’s associated with, and it provides no interface to override or change its <unmanagedCodeEntityReference>access_type</unmanagedCodeEntityReference>.<?CommentEnd Id='3'
    ?></para>
    </content>
  </section>
  <section>
    <title>Changing the Default Accelerator</title>
    <content>
      <para>You can change the default accelerator by calling the <unmanagedCodeEntityReference>accelerator::set_default</unmanagedCodeEntityReference> method. You can change the default accelerator only once per app execution and you must change it before any code is executed on the GPU. Any subsequent function calls to change the accelerator return <languageKeyword>false</languageKeyword>. If you want to use a different accelerator in a call to <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference>, read the "Using Multiple Accelerators" section in this article. The following code example sets the default accelerator to one that is not emulated, is not connected to a display, and supports double-precision.</para>
      <code language="cpp">
<?Comment RR: TECH REVIEW:I got this code from the blog and a similar version appears inDaniel’sMSDN article. Does Microsoft own this code or do I need to write something completely different? 2013-08-29T19:52:00Z  Id='4?>bool pick_accelerator()<?CommentEnd Id='4'
    ?>
{
    std::vector&lt;accelerator&gt; accs = accelerator::get_all();
    accelerator chosen_one;

    auto result = 
        std::find_if(accs.begin(), accs.end(), [] (const accelerator&amp; acc)
    {
        return !acc.is_emulated &amp;&amp; 
            acc.supports_double_precision &amp;&amp; 
            !acc.has_display;
    });

    if (result != accs.end())
        chosen_one = *(result);

    std::wcout &lt;&lt; chosen_one.description &lt;&lt; std::endl;

    bool success = accelerator::set_default(chosen_one.device_path);
    return success;
}
</code>
    </content>
  </section>
  <section>
    <title>Using Multiple Accelerators</title>
    <content>
      <para>There are two ways to use multiple accelerators in your app: </para>
      <list class="bullet">
        <listItem>
          <para>You can pass <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> objects to the calls to the <legacyLink xlink:href="449013a2-5f16-4280-ac1a-0d850f7d5160">parallel_for_each</legacyLink> method.</para>
        </listItem>
        <listItem>
          <para>You can construct an <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object using a specific <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object. The C+AMP runtime will pick up the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object from the captured <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object in the lambda expression.</para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>Special Accelerators</title>
    <content>
      <para>The device paths of three special accelerators are available as properties of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> class:</para>
      <list class="bullet">
        <listItem>
          <para>
            <link xlink:href="a514b1a7-3b3f-4011-be6c-f7b0d9a42663">accelerator::direct3d_ref Data Member</link>: This single-threaded accelerator uses software on the CPU to emulate a generic graphics card. It's used by default for debugging, but it's not useful in production because it's slower than the hardware accelerators. Additionally, it's available only in the DirectX SDK and the Windows SDK, and it's unlikely to be installed on your customers' computers. For more information, see <link xlink:href="c7e77a5a-cb57-4b11-9187-ecc89acc8775">Debugging GPU Code</link>.</para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="132715aa-3bc7-4c81-b944-c441b515c881">accelerator::direct3d_warp Data Member</link>: This accelerator provides a fallback solution for executing C++ AMP code on multi-core CPUs that use Streaming SIMD Extensions (SSE).</para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="c123e464-ffd8-4311-93c2-15f4b3b4fb9f">accelerator::cpu_accelerator Data Member</link>: You can use this accelerator for setting up staging arrays. It cannot execute C++ AMP code. For more information, see the <externalLink><linkText>Staging Arrays in C++ AMP</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=248485</linkUri></externalLink> post on the Parallel Programming in Native Code blog.</para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>Interoperability</title>
    <content>
      <para>The C++ AMP runtime supports interoperability between the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> class and the Direct3D <externalLink><linkText>ID3D11Device interface</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=248488</linkUri></externalLink>. The <legacyLink xlink:href="2ab7f14a-db10-4ff2-815d-eb43824fb790">create_accelerator_view</legacyLink> method takes an <unmanagedCodeEntityReference>IUnknown</unmanagedCodeEntityReference> interface and returns an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object. The <legacyLink xlink:href="8194125e-8396-4d62-aa8a-65831dea8439">get_device</legacyLink> method takes an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object and returns an <unmanagedCodeEntityReference>IUknown</unmanagedCodeEntityReference> interface.</para>
    </content>
  </section>
  <relatedTopics>
    <link xlink:href="e27824cb-3167-409b-8c3f-a0e476d8f349">C++ Accelerated Massive Parallelism (C++ AMP)</link>
    <link xlink:href="c7e77a5a-cb57-4b11-9187-ecc89acc8775">Debugging GPU Code</link>
    
    <link xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view Class</link>
  </relatedTopics>
</developerConceptualDocument>