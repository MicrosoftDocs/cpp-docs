
#pragma once

// {F94D5C87-123B-447a-AA56-8A5A8351FF6B}
DEFINE_GUID(IID_ISampleSink, 
0xf94d5c87, 0x123b, 0x447a, 0xaa, 0x56, 0x8a, 0x5a, 0x83, 0x51, 0xff, 0x6b);

DECLARE_INTERFACE_(ISampleSink, IUnknown)
{
   STDMETHOD(SinkFunc)();
};

// CMyClass command target

// <Snippet1>
class CMyClass : public CCmdTarget
{
protected:
// <Snippet7>
   // Connection point for ISample interface
    BEGIN_CONNECTION_PART(CMyClass, SampleConnPt)
// <Snippet10>
        CONNECTION_IID(IID_ISampleSink)
// </Snippet10>
    END_CONNECTION_PART(SampleConnPt)

    DECLARE_CONNECTION_MAP()
// </Snippet7>
// </Snippet1>
   DECLARE_INTERFACE_MAP()

private:
   DECLARE_DYNAMIC(CMyClass)

public:
   CMyClass();
   virtual ~CMyClass();

   void CallSinkFunc();

   void DummyFunc();

protected:
   DECLARE_MESSAGE_MAP()
};

// <Snippet11>
class CMySink : public CCmdTarget
{
public:
   CMySink();
   ~CMySink() {};

protected:
   DECLARE_INTERFACE_MAP()

   // The following block declares an inner class called 'XSinky'
   BEGIN_INTERFACE_PART(Sinky, ISampleSink)
      STDMETHOD(SinkFunc)();
   END_INTERFACE_PART(Sinky)
};
// </Snippet11>