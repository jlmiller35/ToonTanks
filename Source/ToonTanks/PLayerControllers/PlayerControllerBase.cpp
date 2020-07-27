<<<<<<< HEAD
// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if (SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
        APlayerControllerBase::bShowMouseCursor = true;
    }
    else
    {
        GetPawn()->DisableInput(this);
        APlayerControllerBase::bShowMouseCursor = false;
    }

}
=======
// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if (SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
        APlayerControllerBase::bShowMouseCursor = true;
    }
    else
    {
        GetPawn()->DisableInput(this);
        APlayerControllerBase::bShowMouseCursor = false;
    }

}
>>>>>>> Unreal Course ToonTanks
