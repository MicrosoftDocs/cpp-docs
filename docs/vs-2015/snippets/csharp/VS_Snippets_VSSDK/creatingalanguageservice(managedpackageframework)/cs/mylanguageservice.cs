//<Snippet1>
using Microsoft.VisualStudio;
using Microsoft.VisualStudio.Package;
using Microsoft.VisualStudio.TextManager.Interop;
using Microsoft.VisualStudio.OLE.Interop;
//</Snippet1>

namespace Microsoft.MyLanguagePackage
{
   //<Snippet2>
    class MyLanguageService : LanguageService
   //</Snippet2>
    {
        public override string GetFormatFilterList()
        {
            throw new System.NotImplementedException();
        }

        public override LanguagePreferences GetLanguagePreferences()
        {
            throw new System.NotImplementedException();
        }

        public override IScanner GetScanner(IVsTextLines buffer)
        {
            throw new System.NotImplementedException();
        }

        public override string Name
        {
            get { throw new System.NotImplementedException(); }
        }

        public override AuthoringScope ParseSource(ParseRequest req)
        {
            throw new System.NotImplementedException();
        }
    }
}
