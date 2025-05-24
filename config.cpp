class CfgPatches
{
	class sw_wallet_tp
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","money"};
	};
};

class CfgMods
{
	class sw_wallet_tp
	{
		dir = "SW\sw_wallet_tp";
		name = "sw_mutants";
		type = "mod";
        author = "SiberianWorker";
	    authorID = "76561198202090403";
        dependencies[] = {"World"};
		class defs
		{
            class worldScriptModule
			{
				value = "";
				files[] = {"SW\sw_wallet_tp/scripts/4_World"};
			};
			class imageSets
			{
				files[]= {"SW\sw_wallet_tp/GUI/ImageSets/wallet.imageset"};
			};
        };
	};
};

#include "CfgVehicles.hpp"
#include "CfgSlots.hpp"