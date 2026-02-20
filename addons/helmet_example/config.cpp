class CfgPatches
{
	class TKERE_Helmet_Example
	{
		name = "TKE Retexure Example - Helmet Example";
		author = "Lupus590";
		units[] = {}; // backpacks and parts of uniforms (anything in CfgVehicles)
		weapons[] = // guns, helmets, vests, nearly anything else (anything in CfgWeapons)
		{
			"TKERE_MercHelmFCF",
			"TKERE_MercHelmClosedFCF",
		};
		requiredAddons[] =
		{
			"TKERE_Core",
			"TKE_General_Gear",
		};
	};
};

class CfgWeapons
{
	class TKE_MercHelmFCF;
	class TKERE_MercHelmFCF: TKE_MercHelmFCF
	{
		author="Rogue771 & Lupus590";
		scope=2; // I don't really need this line as I inherit this value and then set it to be the same
		displayName="[TKERE] ETH-50";
		picture="\z\TKERE\addons\helmet_example\logo.paa";
		hiddenSelectionsTextures[]=
		{
			"\z\TKERE\addons\helmet_example\TKE_MercHelmBFCF_co.paa",
		};
	};

	class TKE_MercHelmClosedFCF;
	class TKERE_MercHelmClosedFCF: TKE_MercHelmClosedFCF
	{
		author="Rogue771 & Lupus590";
		displayName="[TKERE] ETH-50 (Closed)";
		picture="\z\TKERE\addons\helmet_example\logo.paa";
		hiddenSelectionsTextures[]=
		{
			"\z\TKERE\addons\helmet_example\TKE_MercHelmBFCF_co.paa",
			"\TKE_Kuiper_Engagements\TKE_General_Gear\data\TKE_MercHelmAddons_ca.paa",
			"\TKE_Kuiper_Engagements\TKE_General_Gear\data\TKE_MercHelmAddonsFCF_co.paa",
		};
	};

};
