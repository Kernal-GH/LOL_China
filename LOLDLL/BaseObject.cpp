#include "stdafx.h"
#include "BaseObject.h"

CBaseObject::CBaseObject(_In_ DWORD dwNodeBase_) : dwNodeBase(dwNodeBase_)
{

}

CBaseObject::~CBaseObject()
{
}

DWORD CBaseObject::GetNodeBase() CONST
{
	return dwNodeBase;
}

cwstring& CBaseObject::GetName() CONST
{
	return wsName;
}
