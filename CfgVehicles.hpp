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
    class Sak_MutantCase: Inventory_Base
	{
		itemSize[] = {3,2};
		attachments[] = 
        {
            "mutantitems",
            "mutantitems2",
            "mutantitems3",
            "mutantitems4",
            "mutantitems5",
            "mutantitems6",
            "mutantitems7",
            "mutantitems8",
            "mutantitems9",
            "mutantitems10"
        };
	};
//    class RifleCore;
//    class Rifle_Base: RifleCore
//	{
//        inventorySlot[] += {"weapons_case"};
//    };
	class MGT_MilitaryCase1000_Green;
	class SW_case_free: MGT_MilitaryCase1000_Green
	{
		scope = 2;
        inventorySlot = "Case_anomaly";
		displayName = "Аномальный кейс";
		descriptionShort = "Кейс в котором сохраняются все ваши вещи, после 'тяжелого ранения'.";
		itemsCargoSize[] = {2,2};
	};
	class SW_case_donat_v1: MGT_MilitaryCase1000_Green
	{
		scope = 2;
        inventorySlot = "Case_anomaly";
		displayName = "Аномальный кейс";
		descriptionShort = "Кейс в котором сохраняются все ваши вещи, после 'тяжелого ранения'.";
		itemsCargoSize[] = {5,4};
		attachments[] = {"shoulder"};
	};
    class SurvivorBase: Man
	{
		attachments[] += {"Wallet","Case_anomaly"};
		class InventoryEquipment
		{
			playerSlots[] += {"Slot_Wallet","Slot_case"};
		};
	};
};