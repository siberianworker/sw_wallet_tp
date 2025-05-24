class SW_Wallet_ColorBase: TraderPlus_Wallet
{
	scope=0;
	model="SW\sw_wallet_tp\wallet.p3d";
	rotationFlags = 1;
	hiddenSelections[] = {"camo"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=90;
				healthLevels[] = 
				{
					{1.01,{"SW\sw_wallet_tp\Data\wallet.rvmat"}},						
					{0.70999998,{"SW\sw_wallet_tp\Data\wallet.rvmat"}},						
					{0.50999999,{"SW\sw_wallet_tp\Data\wallet_damage.rvmat"}},
					{0.31,{"SW\sw_wallet_tp\Data\wallet_damage.rvmat"}},
					{0.0099999998,{"SW\sw_wallet_tp\Data\wallet_destruct.rvmat"}}
				};
			};
		};
	};
};
class SW_Wallet_Blue: SW_Wallet_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[] = {"SW\sw_wallet_tp\Data\wallet_2_co.paa"};
};
class SW_Wallet_Brown: SW_Wallet_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[] = {"SW\sw_wallet_tp\Data\wallet_co.paa"};
};