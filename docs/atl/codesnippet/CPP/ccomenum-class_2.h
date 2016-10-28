typedef CComEnum<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy<VARIANT> > VarArrEnum;

class ATL_NO_VTABLE CVariantArrayCollection :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CVariantArrayCollection, &CLSID_VariantArrayCollection>,
   public IDispatchImpl<IVariantArrayCollection, &IID_IVariantArrayCollection, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
VARIANT m_arr[3];
public:
    STDMETHOD(get__NewEnum)(IUnknown** ppUnk)
    {
        return CreateEnumerator<VarArrEnum>(ppUnk, &m_arr[0], &m_arr[3], this, 
           AtlFlagNoCopy);
    }

    // Remainder of class declaration omitted.