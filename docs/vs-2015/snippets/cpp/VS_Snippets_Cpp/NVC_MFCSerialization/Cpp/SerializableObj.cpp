// SerializableObj.cpp : implementation file
//

#include "stdafx.h"
#include "MFCSerialization.h"
#include "SerializableObj.h"


// CSerializableObj

IMPLEMENT_SERIAL( CSerializableObj, CObject, 1 )

CSerializableObj::CSerializableObj()
{
}

CSerializableObj::~CSerializableObj()
{
}


// CSerializableObj member functions
// <Snippet9>
void CSerializableObj::Serialize( CArchive& archive )
{
    // call base class function first
    // base class is CObject in this case
    CObject::Serialize( archive );

    // now do the stuff for our specific class
    if( archive.IsStoring() )
   {
      // TODO:  add storing code here
   }
    else
   {
      // TODO:  add storing code here
   }
}
// </Snippet9>