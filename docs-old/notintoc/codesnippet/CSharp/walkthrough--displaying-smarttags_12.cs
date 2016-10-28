[Export(typeof(IViewTaggerProvider))]
[ContentType("text")]
[Order(Before = "default")]
[TagType(typeof(SmartTag))]
internal class TestSmartTaggerProvider : IViewTaggerProvider