modded class ModItemRegisterCallbacks
{
      override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
      {
            super.RegisterOneHanded( pType, pBehavior );  

            pType.AddItemInHandsProfileIK("SW_Wallet_ColorBase","dz/anims/workspaces/player/player_main/props/player_main_1h_GPSReciever.asi",pBehavior,"dz/anims/anm/player/ik/gear/GPSReciever.anm");
      }
}