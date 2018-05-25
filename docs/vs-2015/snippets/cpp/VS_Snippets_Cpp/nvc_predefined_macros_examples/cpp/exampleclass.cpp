#include "exampleClass.h"
#include <stdio.h>

// <Snippet2>
// initialize object with a read-only unique ID
exampleClass::exampleClass(int nID)
{
	m_nID = nID;
}

int exampleClass::GetID()
{
	return m_nID;
}
// </Snippet2>

exampleClass::~exampleClass(void)
{
}