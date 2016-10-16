typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy<VARIANT>,
   std::vector<CComVariant> > VarVarEnum;

class ATL_NO_VTABLE CVariantCollection :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CVariantCollection, &CLSID_VariantCollection>,
   public IDispatchImpl<IVariantCollection, &IID_IVariantCollection, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   std::vector<CComVariant> m_vec;

   STDMETHOD(get__NewEnum)(IUnknown** ppUnk)
   {
      return CreateSTLEnumerator<VarVarEnum>(ppUnk, this, m_vec);
   }

   // Remainder of class declaration omitted.