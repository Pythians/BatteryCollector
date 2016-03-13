// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryPickup.h"


// Set default value
ABatteryPickup::ABatteryPickup( )
{
	GetMesh( )->SetSimulatePhysics( true );
}
