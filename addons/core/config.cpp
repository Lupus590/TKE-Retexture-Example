#include "script_version.hpp"

class CfgPatches
{
	class TKERE_Core
	{
		name = "TKE Retexure Example - Core";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"CBA_Main",
		};
		VERSION_CONFIG;
	};
};

class CfgSettings
{
	class CBA
	{
		class Versioning // https://github.com/CBATeam/CBA_A3/wiki/Versioning-System
		{
			class TKERE_Core
			{
				main_addon = "TKERE_Core";
			};
		};
	};
};
