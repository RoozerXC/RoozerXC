#include "LuxHandObject_Ranged.h"

#include "LuxMap.h"
#include "LuxPlayer.h"
#include "LuxPlayerHands.h"
#include "LuxMapHelper.h"
#include "LuxHelpFuncs.h"

//////////////////////////////////////////////////////////////////////////
// CONSTRUCTORS
//////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------

cLuxHandObject_Ranged::cLuxHandObject_Ranged(const tString& asName, cLuxPlayerHands *apHands) : iLuxHandObject(asName, apHands)
{
}

cLuxHandObject_Ranged::~cLuxHandObject_Ranged()
{
}

//-----------------------------------------------------------------------

//////////////////////////////////////////////////////////////////////////
// PUBLIC METHODS
//////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::LoadImplementedVars(cXmlElement *apVarsElem)
{
	msHandsAnim_Fire = apVarsElem->GetAttributeString("HandsAnim_Fire", "");

	msDrawSound = apVarsElem->GetAttributeString("DrawSound", "");
	msFireSound = apVarsElem->GetAttributeString("FireSound", "");
	msHolsterSound = apVarsElem->GetAttributeString("HolsterSound", "");
	
	mfRecoil = apVarsElem->GetAttributeFloat("Recoil", 0);
	mfAttackMinDamage = apVarsElem->GetAttributeFloat("AttackMinDamage", 0);
	mfAttackMaxDamage = apVarsElem->GetAttributeFloat("AttackMaxDamage", 0);
	
	mlAttackStrength = apVarsElem->GetAttributeInt("AttackStrength", 0);
}

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::ImplementedCreateEntity(cLuxMap *apMap)
{
}

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::ImplementedDestroyEntity(cLuxMap *apMap)
{
}

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::ImplementedReset()
{
}

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::Update(float afTimeStep)
{
}

//-----------------------------------------------------------------------

bool cLuxHandObject_Ranged::DoAction(eLuxPlayerAction aAction, bool abPressed)
{
	return false;
}

//-----------------------------------------------------------------------

bool cLuxHandObject_Ranged::AnimationIsOver()
{
	return true;
}

//-----------------------------------------------------------------------

//////////////////////////////////////////////////////////////////////////
// PRIVATE METHODS
//////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::UpdateFire(float afTimeStep)
{
}

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::UpdateCheckDamageEvent(float afTimeStep)
{
}

//-----------------------------------------------------------------------

void cLuxHandObject_Ranged::Fire()
{
}

//-----------------------------------------------------------------------