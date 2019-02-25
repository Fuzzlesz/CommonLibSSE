#pragma once

#include "RE/BaseFormComponent.h"  // BaseFormComponent
#include "RE/BGSAttackDataMap.h"  // BGSAttackDataMap


namespace RE
{
	class BGSAttackDataForm : public BaseFormComponent
	{
	public:
		virtual ~BGSAttackDataForm();										// 00

		// override (BaseFormComponent)
		virtual void	Init() override;									// 01 - { return; }
		virtual void	ReleaseRefs() override;								// 02
		virtual void	CopyFromBase(BaseFormComponent* a_rhs) override;	// 03


		// members
		BGSAttackDataMapPtr attackDataMap;	// 08
	};
	STATIC_ASSERT(sizeof(BGSAttackDataForm) == 0x10);
}