class CfgPatches
{
	class TKERE_Uniform_Example
	{
		name = "TKE Retexure Example - Uniform Example";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TKERE_Core",
			"TKE_General_Gear",
			"TKERE_Helmet_Example",
		};
	};
};

class CfgVehicles
{
	class TKE_CombatUniRolledV1FCF_inf_B;
	class TKERE_CombatUniRolledV1FCF_inf_B: TKE_CombatUniRolledV1FCF_inf_B
	{
		scope=1;
		author="Rogue771 & Lupus590";
		hiddenSelectionsTextures[]=
		{
			"\TKE_Kuiper_Engagements\TKE_Uniform_Revamp\data\TKE_CombatUniPantsFCF_co.paa",
			"\TKE_Kuiper_Engagements\TKE_Uniform_Revamp\data\TKE_CombatUniTopFCF_co.paa",
			"\TKE_Kuiper_Engagements\TKE_Uniform_Revamp\data\TKE_CombatUniExtrasFCF_co.paa"
		};
		displayName="[TKERE] UCCU-50 (Rolled V1)";
		backpack="";
		uniformClass="TKERE_CombatUniRolledV1FCF_U_B";
	};
};

class CfgWeapons
{
	class TKE_CombatUniRolledV1_U_OP;
	class TKE_CombatUniRolledV1FCF_U_B: TKE_CombatUniRolledV1_U_OP
	{
		class ItemInfo;
	};
	class TKERE_CombatUniRolledV1FCF_U_B: TKE_CombatUniRolledV1FCF_U_B
	{
		author="Rogue771";
		displayName="[TKERE] UCCU-50 (Rolled V1)";
		picture="\TKE_Kuiper_Engagements\TKE_Uniforms\ui\FCFLogoUI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="TKERE_CombatUniRolledV1FCF_inf_B";
			containerClass="Supply90";
			mass=80;
		};
	};
};
