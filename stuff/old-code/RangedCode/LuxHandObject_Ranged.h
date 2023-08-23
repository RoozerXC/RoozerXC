#ifndef LUX_HAND_OBJECT_RANGED_H
#define LUX_HAND_OBJECT_RANGED_H

//----------------------------------------------

#include "LuxHandObject.h"

//----------------------------------------------

class cLuxHandObject_Ranged : public iLuxHandObject
{
public:
	cLuxHandObject_Ranged(const tString& asName, cLuxPlayerHands *apHands);
	~cLuxHandObject_Ranged();
	
	void LoadImplementedVars(cXmlElement *apVarsElem);
	
	void ImplementedCreateEntity(cLuxMap *apMap);
	void ImplementedDestroyEntity(cLuxMap *apMap);
	
	void ImplementedReset();
	
	void Update(float afTimeStep);
	
	bool DoAction(eLuxPlayerAction aAction, bool abPressed);
	bool AnimationIsOver();
private:
	void UpdateFire(float afTimeStep);
	void UpdateCheckDamageEvent(float afTimeStep);
	
	void Fire();
	
	tString msHandsAnim_Fire;

	tString msDrawSound;
	tString msFireSound;
	tString msHolsterSound;
	
	float mfRecoil;
	float mfAttackMinDamage;
	float mfAttackMaxDamage;
	
	int mlAttackStrength;
};

//----------------------------------------------

#endif // LUX_HAND_OBJECT_RANGED_H