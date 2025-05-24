class CfgVehicles
{
    class Man;
    class Inventory_Base;
	class TraderPlus_Wallet: Inventory_Base
	{
        inventorySlot = "Wallet";
        itemsCargoSize[] = {2,1};
        attachments[] = 
        {
            "money_1", 
            "money_2", 
            "money_3",
            "money_4",
            "money_5",
            "money_6",
            "money_7",
            "money_8"
        };
    };
    class TraderPlusMoney_Base: Inventory_Base
	{
        inventorySlot[] = 
        {
			"money_1", 
            "money_2", 
            "money_3",
            "money_4",
            "money_5",
            "money_6",
            "money_7",
            "money_8"
		};
    };

    #include "NewWallet.hpp"
	
    class SurvivorBase: Man
	{
		attachments[] += {"Wallet"};
		class InventoryEquipment
		{
			playerSlots[] += {"Slot_Wallet"};
		};
	};
};