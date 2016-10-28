MIDL_INTERFACE("3FBED04F-EFA7-4D92-B04D-59BD8B1B055E")
IPrimeNumberEvent : public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE Invoke( 
        int primeNumber) = 0;

};